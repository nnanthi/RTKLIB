#include <sstream>
#include <string.h>
#include <stdio.h>
#include <stdlib.h>
using namespace std;

#include <QVBoxLayout>
#include <QPushButton>
#include <QLabel>
#include <QComboBox>
#include <QFileDialog>
#include <QFile>
#include <QFileSystemModel>
#include <QCompleter>
#include <QSignalMapper>
#include <QProcess>
#include "viewer.h"
#include "netobs.h"
#include "ui_netobs.h"
#include "rtklib.h"
#include "postmain.h"

extern MainForm *mainForm;
QComboBox *qcbInputFile[MNNET];
QString *mfiles;
//int cnnetobs = 0;
NetObsDialog::NetObsDialog(QWidget *parent, int nnetobs, QString *files) :
    QDialog(parent),
    ui(new Ui::NetObsDialog)
{
    int i;
    ui->setupUi(this);
    //cnnetobs = nnetobs;
    mfiles = files;
    //setWindowFlags(Qt::Window | Qt::WindowMinimizeButtonHint | Qt::WindowCloseButtonHint);
    ui->scrollArea->setWidgetResizable(true);
    QSignalMapper *sigMap = new QSignalMapper( this );
    QVBoxLayout *vboxlayout = new QVBoxLayout(this);
    vboxlayout->setSpacing(2);
    vboxlayout->setMargin(2);

    QCompleter *fileCompleter = new QCompleter(this);
    QFileSystemModel *fileModel = new QFileSystemModel(fileCompleter);
    fileModel->setRootPath("");
    fileCompleter->setModel(fileModel);

    for(i=0;i<nnetobs;i++){
        QHBoxLayout *row1 = new QHBoxLayout();
        row1->setSpacing(2);
        row1->setMargin(2);
        QLabel *ql = new QLabel(this);
        ql->setText(QString("RINEX OBS: Network Station %1").arg(i+1));
        row1->addWidget(ql,1);
        QPushButton *buttoni = new QPushButton(this);
        buttoni->setIcon(QIcon(":/buttons/chart.bmp"));
        buttoni->setMinimumHeight(20);
        buttoni->setMinimumWidth(16);
        buttoni->setSizePolicy(QSizePolicy::Fixed,QSizePolicy::Fixed);
        connect(buttoni,SIGNAL(clicked(bool)),sigMap,SLOT(map()));
        sigMap->setMapping(buttoni, 3*i+1);
        row1->addWidget(buttoni,1);
        buttoni = new QPushButton(this);
        buttoni->setIcon(QIcon(":/buttons/doc.bmp"));
        buttoni->setMinimumHeight(20);
        buttoni->setMinimumWidth(80);
        buttoni->setSizePolicy(QSizePolicy::Fixed,QSizePolicy::Fixed);
        connect(buttoni,SIGNAL(clicked(bool)),sigMap,SLOT(map()));
        sigMap->setMapping(buttoni, 3*i+2);
        row1->addWidget(buttoni,1);
        vboxlayout->addLayout(row1, 1);
        QHBoxLayout *row2 = new QHBoxLayout();
        row2->setSpacing(2);
        row2->setMargin(2);
        qcbInputFile[i] = new QComboBox(this);
        qcbInputFile[i]->setEditable(true);
        qcbInputFile[i]->setCompleter(fileCompleter);
        qcbInputFile[i]->setMinimumHeight(20);
        qcbInputFile[i]->setMinimumWidth(540);
        qcbInputFile[i]->setSizePolicy(QSizePolicy::Fixed,QSizePolicy::Fixed);
        row2->addWidget(qcbInputFile[i],1);
        buttoni = new QPushButton(QString("..."), this);
        buttoni->setMinimumHeight(16);
        buttoni->setMinimumWidth(64);
        buttoni->setSizePolicy(QSizePolicy::Fixed,QSizePolicy::Fixed);
        connect(buttoni,SIGNAL(clicked(bool)),sigMap,SLOT(map()));
        sigMap->setMapping(buttoni, 3*i);
        row2->addWidget(buttoni,1);
        vboxlayout->addLayout(row2, 1);
    }
    ui->scrollArea->widget()->setLayout(vboxlayout);
    connect(sigMap,SIGNAL(mapped(int)),this,SLOT(BtnInputFileClick(int)));

    GetOpt(nnetobs);
}
// callback on button-inputfile -------------------------------------------
void NetObsDialog::BtnInputFileClick(int i)
{
    int j = i/3;
    QString qcbInputFilej_Text;
    QString cmd1="rtkplot_qt",cmd2="../../bin/rtkplot_qt",opts="";
    switch(i%3){
        case 0:
            qcbInputFile[j]->setCurrentText(QDir::toNativeSeparators(QFileDialog::getOpenFileName(this,tr("RINEX OBS File for Network Station"),qcbInputFile[j]->currentText(),tr("All (*.*);;RINEX OBS (*.obs *.*O *.*D)"))));
            mainForm->NetFiles[j].prepend(qcbInputFile[j]->currentText());
            break;
        case 1:
            if (qcbInputFile[j]->currentText() == "") return;

            qcbInputFilej_Text = qcbInputFile[j]->currentText();
            opts=" -r \""+qcbInputFilej_Text+"\" \""+mfiles[2]+"\" \""+mfiles[3]+"\" \""+
                mfiles[4]+"\" \""+mfiles[5]+"\"";

            if (!ExecCmd(cmd1+opts,1)&&!ExecCmd(cmd2+opts,1)) {
                ShowMsg("error : rtkplot_qt execution");
            }
            break;
        case 2:
            if (qcbInputFile[j]->currentText() == "") return;
            QString qcbInputFilej_Text = qcbInputFile[j]->currentText();
            TextViewer *viewer = new TextViewer(this);
            viewer->show();
            viewer->Read(qcbInputFilej_Text);
            break;

    }
}
void NetObsDialog::GetOpt(int cnnetobs)
{
    int i,j,n;
    if(mainForm->NetFiles.size()<cnnetobs)
        mainForm->NetFiles.resize(cnnetobs);
    for(i=0;i<cnnetobs;i++){
        n=mainForm->NetFiles[i].size();
        for(j=0;j<n;j++)
            qcbInputFile[i]->addItem(mainForm->NetFiles[i].value(j));
    }

}

NetObsDialog::~NetObsDialog()
{
    delete ui;
}
// execute command ----------------------------------------------------------
int NetObsDialog::ExecCmd(const QString &cmd, int show)
{
    Q_UNUSED(show);
    return QProcess::startDetached(cmd);  /* FIXME: show option not yet supported */
}
// show message in message area ---------------------------------------------
void NetObsDialog::ShowMsg(const QString &msg)
{
    //Message->setText(msg);
}
