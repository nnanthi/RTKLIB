/********************************************************************************
** Form generated from reading UI file 'postmain.ui'
**
** Created by: Qt User Interface Compiler version 5.9.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_POSTMAIN_H
#define UI_POSTMAIN_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QDateTimeEdit>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QProgressBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainForm
{
public:
    QVBoxLayout *verticalLayout_2;
    QWidget *Panel1;
    QVBoxLayout *verticalLayout;
    QWidget *Panel3;
    QGridLayout *gridLayout;
    QCheckBox *TimeStart;
    QPushButton *BtnTime1;
    QCheckBox *TimeEnd;
    QPushButton *BtnTime2;
    QCheckBox *TimeIntF;
    QCheckBox *TimeUnitF;
    QDateTimeEdit *dateTime1;
    QComboBox *TimeInt;
    QLabel *LabelTimeInt;
    QLabel *LabelTimeUnit;
    QLineEdit *TimeUnit;
    QDateTimeEdit *dateTime2;
    QWidget *Panel4;
    QGridLayout *gridLayout_2;
    QPushButton *BtnInputView6;
    QComboBox *InputFile3;
    QPushButton *BtnInputFile3;
    QComboBox *InputFile4;
    QPushButton *BtnInputFile4;
    QComboBox *InputFile5;
    QPushButton *BtnInputFile5;
    QComboBox *InputFile6;
    QLineEdit *NNetSta;
    QPushButton *BtnInputFile6;
    QPushButton *BtnNetObs;
    QPushButton *BtnInputView2;
    QComboBox *InputFile1;
    QLabel *LabelInputFile1;
    QPushButton *BtnKeyword;
    QPushButton *BtnInputFile1;
    QLabel *LabelInputFile3;
    QPushButton *BtnInputPlot2;
    QPushButton *BtnInputPlot1;
    QComboBox *InputFile2;
    QPushButton *BtnInputFile2;
    QLabel *LabelInputFile2;
    QPushButton *BtnInputView3;
    QPushButton *BtnInputView4;
    QPushButton *BtnInputView5;
    QPushButton *BtnInputView1;
    QWidget *Panel5;
    QGridLayout *gridLayout_3;
    QLabel *Label1;
    QCheckBox *OutDirEna;
    QLabel *LabelOutDir;
    QLineEdit *OutDir;
    QPushButton *BtnOutDir;
    QComboBox *OutputFile;
    QPushButton *BtnOutputFile;
    QWidget *widget;
    QHBoxLayout *horizontalLayout_2;
    QPushButton *BtnOutputView2;
    QPushButton *BtnOutputView1;
    QLabel *Message;
    QPushButton *BtnAbout;
    QProgressBar *Progress;
    QWidget *Panel2;
    QHBoxLayout *horizontalLayout;
    QPushButton *BtnPlot;
    QPushButton *BtnView;
    QPushButton *BtnToKML;
    QPushButton *BtnOption;
    QPushButton *BtnExec;
    QPushButton *BtnAbort;
    QPushButton *BtnExit;

    void setupUi(QWidget *MainForm)
    {
        if (MainForm->objectName().isEmpty())
            MainForm->setObjectName(QStringLiteral("MainForm"));
        MainForm->resize(697, 551);
        verticalLayout_2 = new QVBoxLayout(MainForm);
        verticalLayout_2->setObjectName(QStringLiteral("verticalLayout_2"));
        Panel1 = new QWidget(MainForm);
        Panel1->setObjectName(QStringLiteral("Panel1"));
        Panel1->setEnabled(true);
        Panel1->setLayoutDirection(Qt::LeftToRight);
        verticalLayout = new QVBoxLayout(Panel1);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        Panel3 = new QWidget(Panel1);
        Panel3->setObjectName(QStringLiteral("Panel3"));
        Panel3->setEnabled(true);
        Panel3->setLayoutDirection(Qt::LeftToRight);
        gridLayout = new QGridLayout(Panel3);
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        gridLayout->setContentsMargins(0, 0, 0, 0);
        TimeStart = new QCheckBox(Panel3);
        TimeStart->setObjectName(QStringLiteral("TimeStart"));
        TimeStart->setChecked(false);

        gridLayout->addWidget(TimeStart, 0, 0, 1, 2);

        BtnTime1 = new QPushButton(Panel3);
        BtnTime1->setObjectName(QStringLiteral("BtnTime1"));
        BtnTime1->setEnabled(true);
        BtnTime1->setFlat(true);

        gridLayout->addWidget(BtnTime1, 0, 2, 1, 1);

        TimeEnd = new QCheckBox(Panel3);
        TimeEnd->setObjectName(QStringLiteral("TimeEnd"));
        TimeEnd->setChecked(false);

        gridLayout->addWidget(TimeEnd, 0, 3, 1, 2);

        BtnTime2 = new QPushButton(Panel3);
        BtnTime2->setObjectName(QStringLiteral("BtnTime2"));
        BtnTime2->setEnabled(true);
        BtnTime2->setFlat(true);

        gridLayout->addWidget(BtnTime2, 0, 5, 1, 1);

        TimeIntF = new QCheckBox(Panel3);
        TimeIntF->setObjectName(QStringLiteral("TimeIntF"));
        TimeIntF->setChecked(false);

        gridLayout->addWidget(TimeIntF, 0, 6, 1, 2);

        TimeUnitF = new QCheckBox(Panel3);
        TimeUnitF->setObjectName(QStringLiteral("TimeUnitF"));
        TimeUnitF->setChecked(false);

        gridLayout->addWidget(TimeUnitF, 0, 8, 1, 1);

        dateTime1 = new QDateTimeEdit(Panel3);
        dateTime1->setObjectName(QStringLiteral("dateTime1"));
        dateTime1->setCalendarPopup(true);

        gridLayout->addWidget(dateTime1, 1, 0, 1, 3);

        TimeInt = new QComboBox(Panel3);
        TimeInt->setObjectName(QStringLiteral("TimeInt"));
        TimeInt->setEnabled(true);
        TimeInt->setEditable(true);

        gridLayout->addWidget(TimeInt, 1, 6, 1, 1);

        LabelTimeInt = new QLabel(Panel3);
        LabelTimeInt->setObjectName(QStringLiteral("LabelTimeInt"));
        LabelTimeInt->setEnabled(true);

        gridLayout->addWidget(LabelTimeInt, 1, 7, 1, 1);

        LabelTimeUnit = new QLabel(Panel3);
        LabelTimeUnit->setObjectName(QStringLiteral("LabelTimeUnit"));
        LabelTimeUnit->setEnabled(true);

        gridLayout->addWidget(LabelTimeUnit, 1, 9, 1, 1);

        TimeUnit = new QLineEdit(Panel3);
        TimeUnit->setObjectName(QStringLiteral("TimeUnit"));
        TimeUnit->setEnabled(true);

        gridLayout->addWidget(TimeUnit, 1, 8, 1, 1);

        dateTime2 = new QDateTimeEdit(Panel3);
        dateTime2->setObjectName(QStringLiteral("dateTime2"));
        dateTime2->setCalendarPopup(true);

        gridLayout->addWidget(dateTime2, 1, 3, 1, 3);


        verticalLayout->addWidget(Panel3);

        Panel4 = new QWidget(Panel1);
        Panel4->setObjectName(QStringLiteral("Panel4"));
        Panel4->setEnabled(true);
        Panel4->setLayoutDirection(Qt::LeftToRight);
        gridLayout_2 = new QGridLayout(Panel4);
        gridLayout_2->setObjectName(QStringLiteral("gridLayout_2"));
        gridLayout_2->setVerticalSpacing(0);
        gridLayout_2->setContentsMargins(0, 0, 0, 0);
        BtnInputView6 = new QPushButton(Panel4);
        BtnInputView6->setObjectName(QStringLiteral("BtnInputView6"));
        BtnInputView6->setEnabled(true);
        QIcon icon;
        icon.addFile(QStringLiteral(":/buttons/doc.bmp"), QSize(), QIcon::Normal, QIcon::Off);
        BtnInputView6->setIcon(icon);
        BtnInputView6->setFlat(true);

        gridLayout_2->addWidget(BtnInputView6, 4, 5, 1, 1);

        InputFile3 = new QComboBox(Panel4);
        InputFile3->setObjectName(QStringLiteral("InputFile3"));
        InputFile3->setEnabled(true);
        InputFile3->setEditable(true);

        gridLayout_2->addWidget(InputFile3, 5, 0, 1, 5);

        BtnInputFile3 = new QPushButton(Panel4);
        BtnInputFile3->setObjectName(QStringLiteral("BtnInputFile3"));
        BtnInputFile3->setEnabled(true);
        QPalette palette;
        QBrush brush(QColor(0, 0, 0, 255));
        brush.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Active, QPalette::WindowText, brush);
        palette.setBrush(QPalette::Inactive, QPalette::WindowText, brush);
        palette.setBrush(QPalette::Disabled, QPalette::WindowText, brush);
        BtnInputFile3->setPalette(palette);
        BtnInputFile3->setFlat(false);

        gridLayout_2->addWidget(BtnInputFile3, 5, 5, 1, 1);

        InputFile4 = new QComboBox(Panel4);
        InputFile4->setObjectName(QStringLiteral("InputFile4"));
        InputFile4->setEnabled(true);
        InputFile4->setEditable(true);

        gridLayout_2->addWidget(InputFile4, 6, 0, 1, 5);

        BtnInputFile4 = new QPushButton(Panel4);
        BtnInputFile4->setObjectName(QStringLiteral("BtnInputFile4"));
        BtnInputFile4->setEnabled(true);
        QPalette palette1;
        palette1.setBrush(QPalette::Active, QPalette::WindowText, brush);
        palette1.setBrush(QPalette::Inactive, QPalette::WindowText, brush);
        palette1.setBrush(QPalette::Disabled, QPalette::WindowText, brush);
        BtnInputFile4->setPalette(palette1);
        BtnInputFile4->setFlat(false);

        gridLayout_2->addWidget(BtnInputFile4, 6, 5, 1, 1);

        InputFile5 = new QComboBox(Panel4);
        InputFile5->setObjectName(QStringLiteral("InputFile5"));
        InputFile5->setEnabled(true);
        InputFile5->setEditable(true);

        gridLayout_2->addWidget(InputFile5, 7, 0, 1, 5);

        BtnInputFile5 = new QPushButton(Panel4);
        BtnInputFile5->setObjectName(QStringLiteral("BtnInputFile5"));
        BtnInputFile5->setEnabled(true);
        QPalette palette2;
        palette2.setBrush(QPalette::Active, QPalette::WindowText, brush);
        palette2.setBrush(QPalette::Inactive, QPalette::WindowText, brush);
        palette2.setBrush(QPalette::Disabled, QPalette::WindowText, brush);
        BtnInputFile5->setPalette(palette2);
        BtnInputFile5->setFlat(false);

        gridLayout_2->addWidget(BtnInputFile5, 7, 5, 1, 1);

        InputFile6 = new QComboBox(Panel4);
        InputFile6->setObjectName(QStringLiteral("InputFile6"));
        InputFile6->setEnabled(true);
        InputFile6->setEditable(true);

        gridLayout_2->addWidget(InputFile6, 8, 0, 1, 5);

        NNetSta = new QLineEdit(Panel4);
        NNetSta->setObjectName(QStringLiteral("NNetSta"));
        QSizePolicy sizePolicy(QSizePolicy::Fixed, QSizePolicy::Fixed);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(NNetSta->sizePolicy().hasHeightForWidth());
        NNetSta->setSizePolicy(sizePolicy);

        gridLayout_2->addWidget(NNetSta, 2, 1, 1, 1);

        BtnInputFile6 = new QPushButton(Panel4);
        BtnInputFile6->setObjectName(QStringLiteral("BtnInputFile6"));
        BtnInputFile6->setEnabled(true);
        QPalette palette3;
        palette3.setBrush(QPalette::Active, QPalette::WindowText, brush);
        palette3.setBrush(QPalette::Inactive, QPalette::WindowText, brush);
        palette3.setBrush(QPalette::Disabled, QPalette::WindowText, brush);
        BtnInputFile6->setPalette(palette3);
        BtnInputFile6->setFlat(false);

        gridLayout_2->addWidget(BtnInputFile6, 8, 5, 1, 1);

        BtnNetObs = new QPushButton(Panel4);
        BtnNetObs->setObjectName(QStringLiteral("BtnNetObs"));
        sizePolicy.setHeightForWidth(BtnNetObs->sizePolicy().hasHeightForWidth());
        BtnNetObs->setSizePolicy(sizePolicy);

        gridLayout_2->addWidget(BtnNetObs, 2, 2, 1, 1);

        BtnInputView2 = new QPushButton(Panel4);
        BtnInputView2->setObjectName(QStringLiteral("BtnInputView2"));
        BtnInputView2->setEnabled(true);
        BtnInputView2->setIcon(icon);
        BtnInputView2->setFlat(true);

        gridLayout_2->addWidget(BtnInputView2, 2, 5, 1, 1);

        InputFile1 = new QComboBox(Panel4);
        InputFile1->setObjectName(QStringLiteral("InputFile1"));
        InputFile1->setEnabled(true);
        InputFile1->setEditable(true);

        gridLayout_2->addWidget(InputFile1, 1, 0, 1, 5);

        LabelInputFile1 = new QLabel(Panel4);
        LabelInputFile1->setObjectName(QStringLiteral("LabelInputFile1"));
        LabelInputFile1->setEnabled(true);
        QSizePolicy sizePolicy1(QSizePolicy::Preferred, QSizePolicy::Fixed);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(LabelInputFile1->sizePolicy().hasHeightForWidth());
        LabelInputFile1->setSizePolicy(sizePolicy1);

        gridLayout_2->addWidget(LabelInputFile1, 0, 0, 1, 1);

        BtnKeyword = new QPushButton(Panel4);
        BtnKeyword->setObjectName(QStringLiteral("BtnKeyword"));
        BtnKeyword->setEnabled(true);
        BtnKeyword->setFlat(true);

        gridLayout_2->addWidget(BtnKeyword, 0, 1, 1, 1);

        BtnInputFile1 = new QPushButton(Panel4);
        BtnInputFile1->setObjectName(QStringLiteral("BtnInputFile1"));
        BtnInputFile1->setEnabled(true);
        QPalette palette4;
        palette4.setBrush(QPalette::Active, QPalette::WindowText, brush);
        palette4.setBrush(QPalette::Inactive, QPalette::WindowText, brush);
        palette4.setBrush(QPalette::Disabled, QPalette::WindowText, brush);
        BtnInputFile1->setPalette(palette4);
        BtnInputFile1->setFlat(false);

        gridLayout_2->addWidget(BtnInputFile1, 1, 5, 1, 1);

        LabelInputFile3 = new QLabel(Panel4);
        LabelInputFile3->setObjectName(QStringLiteral("LabelInputFile3"));
        LabelInputFile3->setEnabled(true);
        QSizePolicy sizePolicy2(QSizePolicy::Fixed, QSizePolicy::Preferred);
        sizePolicy2.setHorizontalStretch(0);
        sizePolicy2.setVerticalStretch(0);
        sizePolicy2.setHeightForWidth(LabelInputFile3->sizePolicy().hasHeightForWidth());
        LabelInputFile3->setSizePolicy(sizePolicy2);

        gridLayout_2->addWidget(LabelInputFile3, 2, 0, 1, 1);

        BtnInputPlot2 = new QPushButton(Panel4);
        BtnInputPlot2->setObjectName(QStringLiteral("BtnInputPlot2"));
        BtnInputPlot2->setEnabled(true);
        QIcon icon1;
        icon1.addFile(QStringLiteral(":/buttons/chart.bmp"), QSize(), QIcon::Normal, QIcon::Off);
        BtnInputPlot2->setIcon(icon1);
        BtnInputPlot2->setFlat(true);

        gridLayout_2->addWidget(BtnInputPlot2, 2, 4, 1, 1);

        BtnInputPlot1 = new QPushButton(Panel4);
        BtnInputPlot1->setObjectName(QStringLiteral("BtnInputPlot1"));
        BtnInputPlot1->setEnabled(true);
        BtnInputPlot1->setIcon(icon1);
        BtnInputPlot1->setFlat(true);

        gridLayout_2->addWidget(BtnInputPlot1, 0, 4, 1, 1);

        InputFile2 = new QComboBox(Panel4);
        InputFile2->setObjectName(QStringLiteral("InputFile2"));
        InputFile2->setEnabled(true);
        InputFile2->setEditable(true);

        gridLayout_2->addWidget(InputFile2, 3, 0, 1, 5);

        BtnInputFile2 = new QPushButton(Panel4);
        BtnInputFile2->setObjectName(QStringLiteral("BtnInputFile2"));
        BtnInputFile2->setEnabled(true);
        QPalette palette5;
        palette5.setBrush(QPalette::Active, QPalette::WindowText, brush);
        palette5.setBrush(QPalette::Inactive, QPalette::WindowText, brush);
        palette5.setBrush(QPalette::Disabled, QPalette::WindowText, brush);
        BtnInputFile2->setPalette(palette5);
        BtnInputFile2->setFlat(false);

        gridLayout_2->addWidget(BtnInputFile2, 3, 5, 1, 1);

        LabelInputFile2 = new QLabel(Panel4);
        LabelInputFile2->setObjectName(QStringLiteral("LabelInputFile2"));
        LabelInputFile2->setEnabled(true);

        gridLayout_2->addWidget(LabelInputFile2, 4, 0, 1, 2);

        BtnInputView3 = new QPushButton(Panel4);
        BtnInputView3->setObjectName(QStringLiteral("BtnInputView3"));
        BtnInputView3->setEnabled(true);
        BtnInputView3->setIcon(icon);
        BtnInputView3->setFlat(true);

        gridLayout_2->addWidget(BtnInputView3, 4, 2, 1, 1);

        BtnInputView4 = new QPushButton(Panel4);
        BtnInputView4->setObjectName(QStringLiteral("BtnInputView4"));
        BtnInputView4->setEnabled(true);
        BtnInputView4->setIcon(icon);
        BtnInputView4->setFlat(true);

        gridLayout_2->addWidget(BtnInputView4, 4, 3, 1, 1);

        BtnInputView5 = new QPushButton(Panel4);
        BtnInputView5->setObjectName(QStringLiteral("BtnInputView5"));
        BtnInputView5->setEnabled(true);
        BtnInputView5->setIcon(icon);
        BtnInputView5->setFlat(true);

        gridLayout_2->addWidget(BtnInputView5, 4, 4, 1, 1);

        BtnInputView1 = new QPushButton(Panel4);
        BtnInputView1->setObjectName(QStringLiteral("BtnInputView1"));
        BtnInputView1->setEnabled(true);
        BtnInputView1->setIcon(icon);
        BtnInputView1->setFlat(true);

        gridLayout_2->addWidget(BtnInputView1, 0, 5, 1, 1);

        LabelInputFile1->raise();
        BtnInputView2->raise();
        InputFile1->raise();
        BtnKeyword->raise();
        BtnInputPlot1->raise();
        BtnInputView1->raise();
        BtnInputFile1->raise();
        LabelInputFile3->raise();
        BtnInputPlot2->raise();
        InputFile2->raise();
        BtnInputFile2->raise();
        LabelInputFile2->raise();
        BtnInputView3->raise();
        BtnInputView4->raise();
        BtnInputView5->raise();
        BtnInputView6->raise();
        InputFile3->raise();
        BtnInputFile3->raise();
        InputFile4->raise();
        BtnInputFile4->raise();
        InputFile5->raise();
        BtnInputFile5->raise();
        InputFile6->raise();
        BtnInputFile6->raise();
        BtnNetObs->raise();
        NNetSta->raise();

        verticalLayout->addWidget(Panel4);

        Panel5 = new QWidget(Panel1);
        Panel5->setObjectName(QStringLiteral("Panel5"));
        Panel5->setEnabled(true);
        Panel5->setLayoutDirection(Qt::LeftToRight);
        gridLayout_3 = new QGridLayout(Panel5);
        gridLayout_3->setObjectName(QStringLiteral("gridLayout_3"));
        gridLayout_3->setContentsMargins(0, 0, 0, 0);
        Label1 = new QLabel(Panel5);
        Label1->setObjectName(QStringLiteral("Label1"));
        Label1->setEnabled(true);

        gridLayout_3->addWidget(Label1, 0, 0, 1, 1);

        OutDirEna = new QCheckBox(Panel5);
        OutDirEna->setObjectName(QStringLiteral("OutDirEna"));
        OutDirEna->setChecked(false);

        gridLayout_3->addWidget(OutDirEna, 0, 1, 1, 1);

        LabelOutDir = new QLabel(Panel5);
        LabelOutDir->setObjectName(QStringLiteral("LabelOutDir"));
        LabelOutDir->setEnabled(true);

        gridLayout_3->addWidget(LabelOutDir, 0, 2, 1, 1);

        OutDir = new QLineEdit(Panel5);
        OutDir->setObjectName(QStringLiteral("OutDir"));
        OutDir->setEnabled(false);

        gridLayout_3->addWidget(OutDir, 0, 3, 1, 1);

        BtnOutDir = new QPushButton(Panel5);
        BtnOutDir->setObjectName(QStringLiteral("BtnOutDir"));
        BtnOutDir->setEnabled(false);
        QPalette palette6;
        palette6.setBrush(QPalette::Active, QPalette::WindowText, brush);
        palette6.setBrush(QPalette::Inactive, QPalette::WindowText, brush);
        palette6.setBrush(QPalette::Disabled, QPalette::WindowText, brush);
        BtnOutDir->setPalette(palette6);
        BtnOutDir->setFlat(false);

        gridLayout_3->addWidget(BtnOutDir, 0, 4, 1, 1);

        OutputFile = new QComboBox(Panel5);
        OutputFile->setObjectName(QStringLiteral("OutputFile"));
        OutputFile->setEnabled(true);
        OutputFile->setEditable(true);

        gridLayout_3->addWidget(OutputFile, 1, 0, 1, 4);

        BtnOutputFile = new QPushButton(Panel5);
        BtnOutputFile->setObjectName(QStringLiteral("BtnOutputFile"));
        BtnOutputFile->setEnabled(true);
        QPalette palette7;
        palette7.setBrush(QPalette::Active, QPalette::WindowText, brush);
        palette7.setBrush(QPalette::Inactive, QPalette::WindowText, brush);
        palette7.setBrush(QPalette::Disabled, QPalette::WindowText, brush);
        BtnOutputFile->setPalette(palette7);
        BtnOutputFile->setFlat(false);

        gridLayout_3->addWidget(BtnOutputFile, 1, 4, 1, 1);


        verticalLayout->addWidget(Panel5);

        widget = new QWidget(Panel1);
        widget->setObjectName(QStringLiteral("widget"));
        sizePolicy1.setHeightForWidth(widget->sizePolicy().hasHeightForWidth());
        widget->setSizePolicy(sizePolicy1);
        horizontalLayout_2 = new QHBoxLayout(widget);
        horizontalLayout_2->setObjectName(QStringLiteral("horizontalLayout_2"));
        horizontalLayout_2->setContentsMargins(0, 0, 0, 0);
        BtnOutputView2 = new QPushButton(widget);
        BtnOutputView2->setObjectName(QStringLiteral("BtnOutputView2"));
        BtnOutputView2->setEnabled(true);
        sizePolicy.setHeightForWidth(BtnOutputView2->sizePolicy().hasHeightForWidth());
        BtnOutputView2->setSizePolicy(sizePolicy);
        BtnOutputView2->setIcon(icon);
        BtnOutputView2->setFlat(true);

        horizontalLayout_2->addWidget(BtnOutputView2);

        BtnOutputView1 = new QPushButton(widget);
        BtnOutputView1->setObjectName(QStringLiteral("BtnOutputView1"));
        BtnOutputView1->setEnabled(true);
        sizePolicy.setHeightForWidth(BtnOutputView1->sizePolicy().hasHeightForWidth());
        BtnOutputView1->setSizePolicy(sizePolicy);
        QIcon icon2;
        icon2.addFile(QStringLiteral(":/buttons/sqr.bmp"), QSize(), QIcon::Normal, QIcon::Off);
        BtnOutputView1->setIcon(icon2);
        BtnOutputView1->setFlat(true);

        horizontalLayout_2->addWidget(BtnOutputView1);

        Message = new QLabel(widget);
        Message->setObjectName(QStringLiteral("Message"));
        Message->setEnabled(true);
        QPalette palette8;
        QBrush brush1(QColor(128, 128, 128, 255));
        brush1.setStyle(Qt::SolidPattern);
        palette8.setBrush(QPalette::Active, QPalette::WindowText, brush1);
        palette8.setBrush(QPalette::Inactive, QPalette::WindowText, brush1);
        palette8.setBrush(QPalette::Disabled, QPalette::WindowText, brush1);
        Message->setPalette(palette8);
        Message->setAlignment(Qt::AlignCenter);

        horizontalLayout_2->addWidget(Message);

        BtnAbout = new QPushButton(widget);
        BtnAbout->setObjectName(QStringLiteral("BtnAbout"));
        BtnAbout->setEnabled(true);
        sizePolicy.setHeightForWidth(BtnAbout->sizePolicy().hasHeightForWidth());
        BtnAbout->setSizePolicy(sizePolicy);
        QPalette palette9;
        palette9.setBrush(QPalette::Active, QPalette::WindowText, brush1);
        palette9.setBrush(QPalette::Inactive, QPalette::WindowText, brush1);
        palette9.setBrush(QPalette::Disabled, QPalette::WindowText, brush1);
        BtnAbout->setPalette(palette9);
        BtnAbout->setFlat(true);

        horizontalLayout_2->addWidget(BtnAbout);


        verticalLayout->addWidget(widget);

        Progress = new QProgressBar(Panel1);
        Progress->setObjectName(QStringLiteral("Progress"));
        Progress->setEnabled(true);
        Progress->setMinimum(0);
        Progress->setMaximum(100);
        Progress->setValue(0);
        Progress->setOrientation(Qt::Horizontal);

        verticalLayout->addWidget(Progress);


        verticalLayout_2->addWidget(Panel1);

        Panel2 = new QWidget(MainForm);
        Panel2->setObjectName(QStringLiteral("Panel2"));
        Panel2->setEnabled(true);
        sizePolicy1.setHeightForWidth(Panel2->sizePolicy().hasHeightForWidth());
        Panel2->setSizePolicy(sizePolicy1);
        Panel2->setLayoutDirection(Qt::LeftToRight);
        horizontalLayout = new QHBoxLayout(Panel2);
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        horizontalLayout->setContentsMargins(0, 0, 0, -1);
        BtnPlot = new QPushButton(Panel2);
        BtnPlot->setObjectName(QStringLiteral("BtnPlot"));
        BtnPlot->setEnabled(true);
        BtnPlot->setIcon(icon1);
        BtnPlot->setFlat(false);

        horizontalLayout->addWidget(BtnPlot);

        BtnView = new QPushButton(Panel2);
        BtnView->setObjectName(QStringLiteral("BtnView"));
        BtnView->setEnabled(true);
        BtnView->setIcon(icon);
        BtnView->setFlat(false);

        horizontalLayout->addWidget(BtnView);

        BtnToKML = new QPushButton(Panel2);
        BtnToKML->setObjectName(QStringLiteral("BtnToKML"));
        BtnToKML->setEnabled(true);
        BtnToKML->setFlat(false);

        horizontalLayout->addWidget(BtnToKML);

        BtnOption = new QPushButton(Panel2);
        BtnOption->setObjectName(QStringLiteral("BtnOption"));
        BtnOption->setEnabled(true);
        QIcon icon3;
        icon3.addFile(QStringLiteral(":/buttons/toolbmp"), QSize(), QIcon::Normal, QIcon::Off);
        BtnOption->setIcon(icon3);
        BtnOption->setFlat(false);

        horizontalLayout->addWidget(BtnOption);

        BtnExec = new QPushButton(Panel2);
        BtnExec->setObjectName(QStringLiteral("BtnExec"));
        BtnExec->setEnabled(true);
        QIcon icon4;
        icon4.addFile(QStringLiteral(":/buttons/start.bmp"), QSize(), QIcon::Normal, QIcon::Off);
        BtnExec->setIcon(icon4);
        BtnExec->setFlat(false);

        horizontalLayout->addWidget(BtnExec);

        BtnAbort = new QPushButton(Panel2);
        BtnAbort->setObjectName(QStringLiteral("BtnAbort"));
        QIcon icon5;
        icon5.addFile(QStringLiteral(":/buttons/stop2.bmp"), QSize(), QIcon::Normal, QIcon::Off);
        BtnAbort->setIcon(icon5);

        horizontalLayout->addWidget(BtnAbort);

        BtnExit = new QPushButton(Panel2);
        BtnExit->setObjectName(QStringLiteral("BtnExit"));
        BtnExit->setEnabled(true);
        BtnExit->setFlat(false);

        horizontalLayout->addWidget(BtnExit);


        verticalLayout_2->addWidget(Panel2);

        QWidget::setTabOrder(BtnExec, BtnAbort);
        QWidget::setTabOrder(BtnAbort, BtnExit);
        QWidget::setTabOrder(BtnExit, TimeStart);
        QWidget::setTabOrder(TimeStart, BtnTime1);
        QWidget::setTabOrder(BtnTime1, TimeEnd);
        QWidget::setTabOrder(TimeEnd, BtnTime2);
        QWidget::setTabOrder(BtnTime2, TimeIntF);
        QWidget::setTabOrder(TimeIntF, TimeUnitF);
        QWidget::setTabOrder(TimeUnitF, dateTime1);
        QWidget::setTabOrder(dateTime1, dateTime2);
        QWidget::setTabOrder(dateTime2, TimeInt);
        QWidget::setTabOrder(TimeInt, TimeUnit);
        QWidget::setTabOrder(TimeUnit, BtnKeyword);
        QWidget::setTabOrder(BtnKeyword, BtnInputPlot1);
        QWidget::setTabOrder(BtnInputPlot1, BtnInputView1);
        QWidget::setTabOrder(BtnInputView1, InputFile1);
        QWidget::setTabOrder(InputFile1, BtnInputFile1);
        QWidget::setTabOrder(BtnInputFile1, BtnInputPlot2);
        QWidget::setTabOrder(BtnInputPlot2, BtnInputView2);
        QWidget::setTabOrder(BtnInputView2, InputFile2);
        QWidget::setTabOrder(InputFile2, BtnInputFile2);
        QWidget::setTabOrder(BtnInputFile2, BtnInputView3);
        QWidget::setTabOrder(BtnInputView3, BtnInputView4);
        QWidget::setTabOrder(BtnInputView4, BtnInputView5);
        QWidget::setTabOrder(BtnInputView5, BtnInputView6);
        QWidget::setTabOrder(BtnInputView6, InputFile3);
        QWidget::setTabOrder(InputFile3, BtnInputFile3);
        QWidget::setTabOrder(BtnInputFile3, InputFile4);
        QWidget::setTabOrder(InputFile4, BtnInputFile4);
        QWidget::setTabOrder(BtnInputFile4, InputFile5);
        QWidget::setTabOrder(InputFile5, BtnInputFile5);
        QWidget::setTabOrder(BtnInputFile5, InputFile6);
        QWidget::setTabOrder(InputFile6, BtnInputFile6);
        QWidget::setTabOrder(BtnInputFile6, OutDirEna);
        QWidget::setTabOrder(OutDirEna, OutDir);
        QWidget::setTabOrder(OutDir, BtnOutDir);
        QWidget::setTabOrder(BtnOutDir, OutputFile);
        QWidget::setTabOrder(OutputFile, BtnOutputFile);
        QWidget::setTabOrder(BtnOutputFile, BtnOutputView2);
        QWidget::setTabOrder(BtnOutputView2, BtnOutputView1);
        QWidget::setTabOrder(BtnOutputView1, BtnAbout);
        QWidget::setTabOrder(BtnAbout, BtnPlot);
        QWidget::setTabOrder(BtnPlot, BtnView);
        QWidget::setTabOrder(BtnView, BtnToKML);
        QWidget::setTabOrder(BtnToKML, BtnOption);

        retranslateUi(MainForm);

        QMetaObject::connectSlotsByName(MainForm);
    } // setupUi

    void retranslateUi(QWidget *MainForm)
    {
        MainForm->setWindowTitle(QApplication::translate("MainForm", "RTKPOST", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        MainForm->setToolTip(QString());
#endif // QT_NO_TOOLTIP
#ifndef QT_NO_TOOLTIP
        Panel1->setToolTip(QString());
#endif // QT_NO_TOOLTIP
        Panel1->setProperty("text", QVariant(QString()));
#ifndef QT_NO_TOOLTIP
        Panel3->setToolTip(QString());
#endif // QT_NO_TOOLTIP
        Panel3->setProperty("text", QVariant(QString()));
#ifndef QT_NO_TOOLTIP
        TimeStart->setToolTip(QString());
#endif // QT_NO_TOOLTIP
        TimeStart->setText(QApplication::translate("MainForm", "Time Start (GPST)", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        BtnTime1->setToolTip(QString());
#endif // QT_NO_TOOLTIP
        BtnTime1->setText(QApplication::translate("MainForm", "?", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        TimeEnd->setToolTip(QString());
#endif // QT_NO_TOOLTIP
        TimeEnd->setText(QApplication::translate("MainForm", "Time End (GPST)", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        BtnTime2->setToolTip(QString());
#endif // QT_NO_TOOLTIP
        BtnTime2->setText(QApplication::translate("MainForm", "?", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        TimeIntF->setToolTip(QString());
#endif // QT_NO_TOOLTIP
        TimeIntF->setText(QApplication::translate("MainForm", "Interval", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        TimeUnitF->setToolTip(QString());
#endif // QT_NO_TOOLTIP
        TimeUnitF->setText(QApplication::translate("MainForm", "Unit", Q_NULLPTR));
        TimeInt->clear();
        TimeInt->insertItems(0, QStringList()
         << QApplication::translate("MainForm", "0", Q_NULLPTR)
         << QApplication::translate("MainForm", "0.05", Q_NULLPTR)
         << QApplication::translate("MainForm", "0.1", Q_NULLPTR)
         << QApplication::translate("MainForm", "0.2", Q_NULLPTR)
         << QApplication::translate("MainForm", "0.25", Q_NULLPTR)
         << QApplication::translate("MainForm", "0.5", Q_NULLPTR)
         << QApplication::translate("MainForm", "1", Q_NULLPTR)
         << QApplication::translate("MainForm", "2", Q_NULLPTR)
         << QApplication::translate("MainForm", "5", Q_NULLPTR)
         << QApplication::translate("MainForm", "10", Q_NULLPTR)
         << QApplication::translate("MainForm", "15", Q_NULLPTR)
         << QApplication::translate("MainForm", "30", Q_NULLPTR)
         << QApplication::translate("MainForm", "60", Q_NULLPTR)
        );
#ifndef QT_NO_TOOLTIP
        TimeInt->setToolTip(QString());
#endif // QT_NO_TOOLTIP
#ifndef QT_NO_TOOLTIP
        LabelTimeInt->setToolTip(QString());
#endif // QT_NO_TOOLTIP
        LabelTimeInt->setText(QApplication::translate("MainForm", "s", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        LabelTimeUnit->setToolTip(QString());
#endif // QT_NO_TOOLTIP
        LabelTimeUnit->setText(QApplication::translate("MainForm", "H", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        TimeUnit->setToolTip(QString());
#endif // QT_NO_TOOLTIP
        TimeUnit->setText(QApplication::translate("MainForm", "24", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        Panel4->setToolTip(QString());
#endif // QT_NO_TOOLTIP
        Panel4->setProperty("text", QVariant(QString()));
#ifndef QT_NO_TOOLTIP
        BtnInputView6->setToolTip(QString());
#endif // QT_NO_TOOLTIP
        BtnInputView6->setText(QString());
#ifndef QT_NO_TOOLTIP
        InputFile3->setToolTip(QString());
#endif // QT_NO_TOOLTIP
#ifndef QT_NO_TOOLTIP
        BtnInputFile3->setToolTip(QString());
#endif // QT_NO_TOOLTIP
        BtnInputFile3->setText(QApplication::translate("MainForm", "...", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        InputFile4->setToolTip(QString());
#endif // QT_NO_TOOLTIP
#ifndef QT_NO_TOOLTIP
        BtnInputFile4->setToolTip(QString());
#endif // QT_NO_TOOLTIP
        BtnInputFile4->setText(QApplication::translate("MainForm", "...", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        InputFile5->setToolTip(QString());
#endif // QT_NO_TOOLTIP
#ifndef QT_NO_TOOLTIP
        BtnInputFile5->setToolTip(QString());
#endif // QT_NO_TOOLTIP
        BtnInputFile5->setText(QApplication::translate("MainForm", "...", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        InputFile6->setToolTip(QString());
#endif // QT_NO_TOOLTIP
#ifndef QT_NO_TOOLTIP
        BtnInputFile6->setToolTip(QString());
#endif // QT_NO_TOOLTIP
        BtnInputFile6->setText(QApplication::translate("MainForm", "...", Q_NULLPTR));
        BtnNetObs->setText(QApplication::translate("MainForm", "RINEX OBS: Network...", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        BtnInputView2->setToolTip(QString());
#endif // QT_NO_TOOLTIP
        BtnInputView2->setText(QString());
#ifndef QT_NO_TOOLTIP
        InputFile1->setToolTip(QString());
#endif // QT_NO_TOOLTIP
#ifndef QT_NO_TOOLTIP
        LabelInputFile1->setToolTip(QString());
#endif // QT_NO_TOOLTIP
        LabelInputFile1->setText(QApplication::translate("MainForm", "RINEX OBS", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        BtnKeyword->setToolTip(QString());
#endif // QT_NO_TOOLTIP
        BtnKeyword->setText(QApplication::translate("MainForm", "?", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        BtnInputFile1->setToolTip(QString());
#endif // QT_NO_TOOLTIP
        BtnInputFile1->setText(QApplication::translate("MainForm", "...", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        LabelInputFile3->setToolTip(QString());
#endif // QT_NO_TOOLTIP
        LabelInputFile3->setText(QApplication::translate("MainForm", "RINEX OBS: Base Station", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        BtnInputPlot2->setToolTip(QString());
#endif // QT_NO_TOOLTIP
        BtnInputPlot2->setText(QString());
#ifndef QT_NO_TOOLTIP
        BtnInputPlot1->setToolTip(QString());
#endif // QT_NO_TOOLTIP
        BtnInputPlot1->setText(QString());
#ifndef QT_NO_TOOLTIP
        InputFile2->setToolTip(QString());
#endif // QT_NO_TOOLTIP
#ifndef QT_NO_TOOLTIP
        BtnInputFile2->setToolTip(QString());
#endif // QT_NO_TOOLTIP
        BtnInputFile2->setText(QApplication::translate("MainForm", "...", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        LabelInputFile2->setToolTip(QString());
#endif // QT_NO_TOOLTIP
        LabelInputFile2->setText(QApplication::translate("MainForm", "RINEX NAV/CLK, SP3, FCB, IONEX, SBS/EMS  or RTCM", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        BtnInputView3->setToolTip(QString());
#endif // QT_NO_TOOLTIP
        BtnInputView3->setText(QString());
#ifndef QT_NO_TOOLTIP
        BtnInputView4->setToolTip(QString());
#endif // QT_NO_TOOLTIP
        BtnInputView4->setText(QString());
#ifndef QT_NO_TOOLTIP
        BtnInputView5->setToolTip(QString());
#endif // QT_NO_TOOLTIP
        BtnInputView5->setText(QString());
#ifndef QT_NO_TOOLTIP
        BtnInputView1->setToolTip(QString());
#endif // QT_NO_TOOLTIP
        BtnInputView1->setText(QString());
#ifndef QT_NO_TOOLTIP
        Panel5->setToolTip(QString());
#endif // QT_NO_TOOLTIP
        Panel5->setProperty("text", QVariant(QString()));
#ifndef QT_NO_TOOLTIP
        Label1->setToolTip(QString());
#endif // QT_NO_TOOLTIP
        Label1->setText(QApplication::translate("MainForm", "Solution", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        OutDirEna->setToolTip(QString());
#endif // QT_NO_TOOLTIP
        OutDirEna->setText(QString());
#ifndef QT_NO_TOOLTIP
        LabelOutDir->setToolTip(QString());
#endif // QT_NO_TOOLTIP
        LabelOutDir->setText(QApplication::translate("MainForm", "Dir", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        OutDir->setToolTip(QString());
#endif // QT_NO_TOOLTIP
        OutDir->setText(QString());
#ifndef QT_NO_TOOLTIP
        BtnOutDir->setToolTip(QString());
#endif // QT_NO_TOOLTIP
        BtnOutDir->setText(QApplication::translate("MainForm", "...", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        OutputFile->setToolTip(QString());
#endif // QT_NO_TOOLTIP
#ifndef QT_NO_TOOLTIP
        BtnOutputFile->setToolTip(QString());
#endif // QT_NO_TOOLTIP
        BtnOutputFile->setText(QApplication::translate("MainForm", "...", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        BtnOutputView2->setToolTip(QApplication::translate("MainForm", "Show Debug Trace", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
        BtnOutputView2->setText(QString());
#ifndef QT_NO_TOOLTIP
        BtnOutputView1->setToolTip(QApplication::translate("MainForm", "Show Stat File", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
        BtnOutputView1->setText(QString());
#ifndef QT_NO_TOOLTIP
        Message->setToolTip(QString());
#endif // QT_NO_TOOLTIP
        Message->setText(QString());
#ifndef QT_NO_TOOLTIP
        BtnAbout->setToolTip(QString());
#endif // QT_NO_TOOLTIP
        BtnAbout->setText(QApplication::translate("MainForm", "?", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        Progress->setToolTip(QString());
#endif // QT_NO_TOOLTIP
#ifndef QT_NO_TOOLTIP
        Panel2->setToolTip(QString());
#endif // QT_NO_TOOLTIP
        Panel2->setProperty("text", QVariant(QString()));
#ifndef QT_NO_TOOLTIP
        BtnPlot->setToolTip(QString());
#endif // QT_NO_TOOLTIP
        BtnPlot->setText(QApplication::translate("MainForm", "&Plot...", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        BtnView->setToolTip(QString());
#endif // QT_NO_TOOLTIP
        BtnView->setText(QApplication::translate("MainForm", "&View...", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        BtnToKML->setToolTip(QString());
#endif // QT_NO_TOOLTIP
        BtnToKML->setText(QApplication::translate("MainForm", "KML/GPX...", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        BtnOption->setToolTip(QString());
#endif // QT_NO_TOOLTIP
        BtnOption->setText(QApplication::translate("MainForm", "&Options...", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        BtnExec->setToolTip(QString());
#endif // QT_NO_TOOLTIP
        BtnExec->setText(QApplication::translate("MainForm", "E&xecute", Q_NULLPTR));
        BtnAbort->setText(QApplication::translate("MainForm", "Abort", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        BtnExit->setToolTip(QString());
#endif // QT_NO_TOOLTIP
        BtnExit->setText(QApplication::translate("MainForm", "&Exit", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class MainForm: public Ui_MainForm {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_POSTMAIN_H
