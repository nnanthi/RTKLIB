/********************************************************************************
** Form generated from reading UI file 'conndlg.ui'
**
** Created by: Qt User Interface Compiler version 5.9.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_CONNDLG_H
#define UI_CONNDLG_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpinBox>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_ConnectDialog
{
public:
    QGridLayout *gridLayout;
    QLabel *Label10;
    QComboBox *SelStream2;
    QComboBox *SelStream1;
    QPushButton *BtnCmd1;
    QPushButton *BtnOpt1;
    QComboBox *SolFormat1;
    QLabel *Label1;
    QLabel *Label2;
    QLabel *Label4;
    QLabel *Label3;
    QLabel *Label9;
    QPushButton *BtnOpt2;
    QPushButton *BtnCmd2;
    QComboBox *SolFormat2;
    QLabel *Label5;
    QLabel *Label6;
    QLabel *Label7;
    QComboBox *TimeFormS;
    QComboBox *DegFormS;
    QLineEdit *FieldSepS;
    QLabel *Label8;
    QPushButton *BtnOk;
    QPushButton *BtnCancel;
    QSpinBox *TimeOutTimeE;
    QSpinBox *ReConnTimeE;

    void setupUi(QWidget *ConnectDialog)
    {
        if (ConnectDialog->objectName().isEmpty())
            ConnectDialog->setObjectName(QStringLiteral("ConnectDialog"));
        ConnectDialog->resize(650, 229);
        gridLayout = new QGridLayout(ConnectDialog);
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        Label10 = new QLabel(ConnectDialog);
        Label10->setObjectName(QStringLiteral("Label10"));
        Label10->setEnabled(true);

        gridLayout->addWidget(Label10, 2, 0, 1, 1);

        SelStream2 = new QComboBox(ConnectDialog);
        SelStream2->setObjectName(QStringLiteral("SelStream2"));
        SelStream2->setEnabled(true);

        gridLayout->addWidget(SelStream2, 2, 1, 1, 2);

        SelStream1 = new QComboBox(ConnectDialog);
        SelStream1->setObjectName(QStringLiteral("SelStream1"));
        SelStream1->setEnabled(true);

        gridLayout->addWidget(SelStream1, 1, 1, 1, 2);

        BtnCmd1 = new QPushButton(ConnectDialog);
        BtnCmd1->setObjectName(QStringLiteral("BtnCmd1"));
        BtnCmd1->setEnabled(true);

        gridLayout->addWidget(BtnCmd1, 1, 4, 1, 1);

        BtnOpt1 = new QPushButton(ConnectDialog);
        BtnOpt1->setObjectName(QStringLiteral("BtnOpt1"));
        BtnOpt1->setEnabled(true);

        gridLayout->addWidget(BtnOpt1, 1, 3, 1, 1);

        SolFormat1 = new QComboBox(ConnectDialog);
        SolFormat1->setObjectName(QStringLiteral("SolFormat1"));
        SolFormat1->setEnabled(true);

        gridLayout->addWidget(SolFormat1, 1, 5, 1, 3);

        Label1 = new QLabel(ConnectDialog);
        Label1->setObjectName(QStringLiteral("Label1"));
        Label1->setEnabled(true);
        QSizePolicy sizePolicy(QSizePolicy::Preferred, QSizePolicy::Fixed);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(Label1->sizePolicy().hasHeightForWidth());
        Label1->setSizePolicy(sizePolicy);

        gridLayout->addWidget(Label1, 0, 1, 1, 1);

        Label2 = new QLabel(ConnectDialog);
        Label2->setObjectName(QStringLiteral("Label2"));
        Label2->setEnabled(true);
        sizePolicy.setHeightForWidth(Label2->sizePolicy().hasHeightForWidth());
        Label2->setSizePolicy(sizePolicy);

        gridLayout->addWidget(Label2, 0, 3, 1, 1);

        Label4 = new QLabel(ConnectDialog);
        Label4->setObjectName(QStringLiteral("Label4"));
        Label4->setEnabled(true);
        sizePolicy.setHeightForWidth(Label4->sizePolicy().hasHeightForWidth());
        Label4->setSizePolicy(sizePolicy);

        gridLayout->addWidget(Label4, 0, 4, 1, 1);

        Label3 = new QLabel(ConnectDialog);
        Label3->setObjectName(QStringLiteral("Label3"));
        Label3->setEnabled(true);
        sizePolicy.setHeightForWidth(Label3->sizePolicy().hasHeightForWidth());
        Label3->setSizePolicy(sizePolicy);

        gridLayout->addWidget(Label3, 0, 5, 1, 3);

        Label9 = new QLabel(ConnectDialog);
        Label9->setObjectName(QStringLiteral("Label9"));
        Label9->setEnabled(true);

        gridLayout->addWidget(Label9, 1, 0, 1, 1);

        BtnOpt2 = new QPushButton(ConnectDialog);
        BtnOpt2->setObjectName(QStringLiteral("BtnOpt2"));
        BtnOpt2->setEnabled(true);

        gridLayout->addWidget(BtnOpt2, 2, 3, 1, 1);

        BtnCmd2 = new QPushButton(ConnectDialog);
        BtnCmd2->setObjectName(QStringLiteral("BtnCmd2"));
        BtnCmd2->setEnabled(true);

        gridLayout->addWidget(BtnCmd2, 2, 4, 1, 1);

        SolFormat2 = new QComboBox(ConnectDialog);
        SolFormat2->setObjectName(QStringLiteral("SolFormat2"));
        SolFormat2->setEnabled(true);

        gridLayout->addWidget(SolFormat2, 2, 5, 1, 3);

        Label5 = new QLabel(ConnectDialog);
        Label5->setObjectName(QStringLiteral("Label5"));
        Label5->setEnabled(true);
        sizePolicy.setHeightForWidth(Label5->sizePolicy().hasHeightForWidth());
        Label5->setSizePolicy(sizePolicy);

        gridLayout->addWidget(Label5, 3, 1, 1, 1);

        Label6 = new QLabel(ConnectDialog);
        Label6->setObjectName(QStringLiteral("Label6"));
        Label6->setEnabled(true);
        sizePolicy.setHeightForWidth(Label6->sizePolicy().hasHeightForWidth());
        Label6->setSizePolicy(sizePolicy);

        gridLayout->addWidget(Label6, 3, 3, 1, 4);

        Label7 = new QLabel(ConnectDialog);
        Label7->setObjectName(QStringLiteral("Label7"));
        Label7->setEnabled(true);
        sizePolicy.setHeightForWidth(Label7->sizePolicy().hasHeightForWidth());
        Label7->setSizePolicy(sizePolicy);

        gridLayout->addWidget(Label7, 3, 7, 1, 1);

        TimeFormS = new QComboBox(ConnectDialog);
        TimeFormS->setObjectName(QStringLiteral("TimeFormS"));
        TimeFormS->setEnabled(true);

        gridLayout->addWidget(TimeFormS, 4, 0, 1, 3);

        DegFormS = new QComboBox(ConnectDialog);
        DegFormS->setObjectName(QStringLiteral("DegFormS"));
        DegFormS->setEnabled(true);

        gridLayout->addWidget(DegFormS, 4, 3, 1, 4);

        FieldSepS = new QLineEdit(ConnectDialog);
        FieldSepS->setObjectName(QStringLiteral("FieldSepS"));
        FieldSepS->setEnabled(true);

        gridLayout->addWidget(FieldSepS, 4, 7, 1, 1);

        Label8 = new QLabel(ConnectDialog);
        Label8->setObjectName(QStringLiteral("Label8"));
        Label8->setEnabled(true);

        gridLayout->addWidget(Label8, 6, 0, 1, 5);

        BtnOk = new QPushButton(ConnectDialog);
        BtnOk->setObjectName(QStringLiteral("BtnOk"));
        BtnOk->setEnabled(true);
        BtnOk->setAutoDefault(true);

        gridLayout->addWidget(BtnOk, 7, 2, 1, 4);

        BtnCancel = new QPushButton(ConnectDialog);
        BtnCancel->setObjectName(QStringLiteral("BtnCancel"));
        BtnCancel->setEnabled(true);

        gridLayout->addWidget(BtnCancel, 7, 6, 1, 2);

        TimeOutTimeE = new QSpinBox(ConnectDialog);
        TimeOutTimeE->setObjectName(QStringLiteral("TimeOutTimeE"));
        TimeOutTimeE->setMaximum(1000000);

        gridLayout->addWidget(TimeOutTimeE, 6, 5, 1, 1);

        ReConnTimeE = new QSpinBox(ConnectDialog);
        ReConnTimeE->setObjectName(QStringLiteral("ReConnTimeE"));
        ReConnTimeE->setMaximum(1000000);
        ReConnTimeE->setValue(10000);

        gridLayout->addWidget(ReConnTimeE, 6, 7, 1, 1);

        QWidget::setTabOrder(BtnOk, BtnCancel);
        QWidget::setTabOrder(BtnCancel, SelStream1);
        QWidget::setTabOrder(SelStream1, BtnOpt1);
        QWidget::setTabOrder(BtnOpt1, BtnCmd1);
        QWidget::setTabOrder(BtnCmd1, SolFormat1);
        QWidget::setTabOrder(SolFormat1, SelStream2);
        QWidget::setTabOrder(SelStream2, BtnOpt2);
        QWidget::setTabOrder(BtnOpt2, BtnCmd2);
        QWidget::setTabOrder(BtnCmd2, SolFormat2);
        QWidget::setTabOrder(SolFormat2, TimeFormS);
        QWidget::setTabOrder(TimeFormS, DegFormS);
        QWidget::setTabOrder(DegFormS, FieldSepS);
        QWidget::setTabOrder(FieldSepS, TimeOutTimeE);
        QWidget::setTabOrder(TimeOutTimeE, ReConnTimeE);

        retranslateUi(ConnectDialog);

        BtnOk->setDefault(true);


        QMetaObject::connectSlotsByName(ConnectDialog);
    } // setupUi

    void retranslateUi(QWidget *ConnectDialog)
    {
        ConnectDialog->setWindowTitle(QApplication::translate("ConnectDialog", "Connection Settings", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        ConnectDialog->setToolTip(QString());
#endif // QT_NO_TOOLTIP
#ifndef QT_NO_TOOLTIP
        Label10->setToolTip(QString());
#endif // QT_NO_TOOLTIP
        Label10->setText(QApplication::translate("ConnectDialog", "(2)", Q_NULLPTR));
        SelStream2->clear();
        SelStream2->insertItems(0, QStringList()
         << QString()
         << QApplication::translate("ConnectDialog", "Serial", Q_NULLPTR)
         << QApplication::translate("ConnectDialog", "TCP Client", Q_NULLPTR)
         << QApplication::translate("ConnectDialog", "TCP Server", Q_NULLPTR)
         << QApplication::translate("ConnectDialog", "NTRIP Client", Q_NULLPTR)
         << QApplication::translate("ConnectDialog", "File", Q_NULLPTR)
        );
#ifndef QT_NO_TOOLTIP
        SelStream2->setToolTip(QString());
#endif // QT_NO_TOOLTIP
        SelStream1->clear();
        SelStream1->insertItems(0, QStringList()
         << QString()
         << QApplication::translate("ConnectDialog", "Serial", Q_NULLPTR)
         << QApplication::translate("ConnectDialog", "TCP Client", Q_NULLPTR)
         << QApplication::translate("ConnectDialog", "TCP Server", Q_NULLPTR)
         << QApplication::translate("ConnectDialog", "NTRIP Client", Q_NULLPTR)
         << QApplication::translate("ConnectDialog", "File", Q_NULLPTR)
        );
#ifndef QT_NO_TOOLTIP
        SelStream1->setToolTip(QString());
#endif // QT_NO_TOOLTIP
#ifndef QT_NO_TOOLTIP
        BtnCmd1->setToolTip(QString());
#endif // QT_NO_TOOLTIP
        BtnCmd1->setText(QApplication::translate("ConnectDialog", "...", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        BtnOpt1->setToolTip(QString());
#endif // QT_NO_TOOLTIP
        BtnOpt1->setText(QApplication::translate("ConnectDialog", "...", Q_NULLPTR));
        SolFormat1->clear();
        SolFormat1->insertItems(0, QStringList()
         << QApplication::translate("ConnectDialog", "Lat/Lon/Height", Q_NULLPTR)
         << QApplication::translate("ConnectDialog", "X/Y/Z-ECEF", Q_NULLPTR)
         << QApplication::translate("ConnectDialog", "E/N/U-Baseline", Q_NULLPTR)
         << QApplication::translate("ConnectDialog", "NMEA0183", Q_NULLPTR)
         << QApplication::translate("ConnectDialog", "Solution Status", Q_NULLPTR)
        );
#ifndef QT_NO_TOOLTIP
        SolFormat1->setToolTip(QString());
#endif // QT_NO_TOOLTIP
#ifndef QT_NO_TOOLTIP
        Label1->setToolTip(QString());
#endif // QT_NO_TOOLTIP
        Label1->setText(QApplication::translate("ConnectDialog", "Stream Type", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        Label2->setToolTip(QString());
#endif // QT_NO_TOOLTIP
        Label2->setText(QApplication::translate("ConnectDialog", "Opt", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        Label4->setToolTip(QString());
#endif // QT_NO_TOOLTIP
        Label4->setText(QApplication::translate("ConnectDialog", "Cmd", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        Label3->setToolTip(QString());
#endif // QT_NO_TOOLTIP
        Label3->setText(QApplication::translate("ConnectDialog", "Solution Format", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        Label9->setToolTip(QString());
#endif // QT_NO_TOOLTIP
        Label9->setText(QApplication::translate("ConnectDialog", "(1)", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        BtnOpt2->setToolTip(QString());
#endif // QT_NO_TOOLTIP
        BtnOpt2->setText(QApplication::translate("ConnectDialog", "...", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        BtnCmd2->setToolTip(QString());
#endif // QT_NO_TOOLTIP
        BtnCmd2->setText(QApplication::translate("ConnectDialog", "...", Q_NULLPTR));
        SolFormat2->clear();
        SolFormat2->insertItems(0, QStringList()
         << QApplication::translate("ConnectDialog", "Lat/Lon/Height", Q_NULLPTR)
         << QApplication::translate("ConnectDialog", "X/Y/Z-ECEF", Q_NULLPTR)
         << QApplication::translate("ConnectDialog", "E/N/U-Baseline", Q_NULLPTR)
         << QApplication::translate("ConnectDialog", "NMEA0183", Q_NULLPTR)
         << QApplication::translate("ConnectDialog", "Solution Status", Q_NULLPTR)
        );
#ifndef QT_NO_TOOLTIP
        SolFormat2->setToolTip(QString());
#endif // QT_NO_TOOLTIP
#ifndef QT_NO_TOOLTIP
        Label5->setToolTip(QString());
#endif // QT_NO_TOOLTIP
        Label5->setText(QApplication::translate("ConnectDialog", "Time Format", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        Label6->setToolTip(QString());
#endif // QT_NO_TOOLTIP
        Label6->setText(QApplication::translate("ConnectDialog", "Lat/Lon Format", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        Label7->setToolTip(QString());
#endif // QT_NO_TOOLTIP
        Label7->setText(QApplication::translate("ConnectDialog", "Field Sep", Q_NULLPTR));
        TimeFormS->clear();
        TimeFormS->insertItems(0, QStringList()
         << QApplication::translate("ConnectDialog", "ww ssss.ss GPST", Q_NULLPTR)
         << QApplication::translate("ConnectDialog", "hh:mm:ss GPST", Q_NULLPTR)
         << QApplication::translate("ConnectDialog", "hh:mm:ss UTC", Q_NULLPTR)
         << QApplication::translate("ConnectDialog", "hh:mm:ss JST", Q_NULLPTR)
        );
#ifndef QT_NO_TOOLTIP
        TimeFormS->setToolTip(QString());
#endif // QT_NO_TOOLTIP
        DegFormS->clear();
        DegFormS->insertItems(0, QStringList()
         << QApplication::translate("ConnectDialog", "ddd.ddddddd", Q_NULLPTR)
         << QApplication::translate("ConnectDialog", "ddd mm ss.sss", Q_NULLPTR)
        );
#ifndef QT_NO_TOOLTIP
        DegFormS->setToolTip(QString());
#endif // QT_NO_TOOLTIP
#ifndef QT_NO_TOOLTIP
        FieldSepS->setToolTip(QString());
#endif // QT_NO_TOOLTIP
        FieldSepS->setText(QString());
#ifndef QT_NO_TOOLTIP
        Label8->setToolTip(QString());
#endif // QT_NO_TOOLTIP
        Label8->setText(QApplication::translate("ConnectDialog", "Timeout/Re-connect Intvl", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        BtnOk->setToolTip(QString());
#endif // QT_NO_TOOLTIP
        BtnOk->setText(QApplication::translate("ConnectDialog", "&OK", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        BtnCancel->setToolTip(QString());
#endif // QT_NO_TOOLTIP
        BtnCancel->setText(QApplication::translate("ConnectDialog", "&Cancel", Q_NULLPTR));
        TimeOutTimeE->setSuffix(QApplication::translate("ConnectDialog", " ms", Q_NULLPTR));
        ReConnTimeE->setSuffix(QApplication::translate("ConnectDialog", " ms", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class ConnectDialog: public Ui_ConnectDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_CONNDLG_H
