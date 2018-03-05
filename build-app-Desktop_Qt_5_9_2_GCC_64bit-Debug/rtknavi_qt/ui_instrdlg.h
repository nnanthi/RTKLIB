/********************************************************************************
** Form generated from reading UI file 'instrdlg.ui'
**
** Created by: Qt User Interface Compiler version 5.9.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_INSTRDLG_H
#define UI_INSTRDLG_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QDoubleSpinBox>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpinBox>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_InputStrDialog
{
public:
    QGridLayout *gridLayout;
    QLabel *Label7;
    QDoubleSpinBox *NmeaPos1;
    QLineEdit *FilePath3;
    QLineEdit *FilePath1;
    QPushButton *BtnFile1;
    QPushButton *BtnRcvOpt3;
    QComboBox *NmeaReqL;
    QPushButton *BtnRcvOpt1;
    QComboBox *Format3;
    QDoubleSpinBox *NmeaPos2;
    QComboBox *Format2;
    QDoubleSpinBox *NmeaPos3;
    QComboBox *Format1;
    QComboBox *Stream1;
    QComboBox *Stream2;
    QPushButton *BtnStr2;
    QPushButton *BtnPos;
    QCheckBox *StreamC1;
    QPushButton *BtnCancel;
    QLabel *LabelF2;
    QPushButton *BtnRcvOpt2;
    QPushButton *BtnCmd2;
    QComboBox *TimeSpeedL;
    QLabel *LabelF3;
    QLabel *LabelNmea;
    QPushButton *BtnOk;
    QPushButton *BtnFile2;
    QLineEdit *FilePath2;
    QLabel *Label10;
    QCheckBox *StreamC3;
    QLineEdit *TimeStartE;
    QLabel *Label11;
    QLabel *Label1;
    QLabel *LabelF1;
    QPushButton *BtnFile3;
    QCheckBox *TimeTagC;
    QLabel *Label5;
    QLabel *Label6;
    QPushButton *BtnStr1;
    QPushButton *BtnCmd1;
    QPushButton *BtnStr3;
    QPushButton *BtnCmd3;
    QCheckBox *StreamC2;
    QComboBox *Stream3;
    QLabel *LabelResetCmd;
    QSpinBox *EditMaxBL;
    QLabel *LabelMaxBL;
    QLineEdit *EditResetCmd;
    QCheckBox *Chk64Bit;

    void setupUi(QWidget *InputStrDialog)
    {
        if (InputStrDialog->objectName().isEmpty())
            InputStrDialog->setObjectName(QStringLiteral("InputStrDialog"));
        InputStrDialog->resize(770, 385);
        gridLayout = new QGridLayout(InputStrDialog);
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        Label7 = new QLabel(InputStrDialog);
        Label7->setObjectName(QStringLiteral("Label7"));
        Label7->setEnabled(true);
        QSizePolicy sizePolicy(QSizePolicy::Preferred, QSizePolicy::Fixed);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(Label7->sizePolicy().hasHeightForWidth());
        Label7->setSizePolicy(sizePolicy);

        gridLayout->addWidget(Label7, 0, 10, 1, 1);

        NmeaPos1 = new QDoubleSpinBox(InputStrDialog);
        NmeaPos1->setObjectName(QStringLiteral("NmeaPos1"));
        NmeaPos1->setDecimals(9);
        NmeaPos1->setMinimum(-180);
        NmeaPos1->setMaximum(180);

        gridLayout->addWidget(NmeaPos1, 6, 4, 1, 4);

        FilePath3 = new QLineEdit(InputStrDialog);
        FilePath3->setObjectName(QStringLiteral("FilePath3"));
        FilePath3->setEnabled(true);

        gridLayout->addWidget(FilePath3, 11, 0, 1, 12);

        FilePath1 = new QLineEdit(InputStrDialog);
        FilePath1->setObjectName(QStringLiteral("FilePath1"));
        FilePath1->setEnabled(true);

        gridLayout->addWidget(FilePath1, 9, 0, 1, 12);

        BtnFile1 = new QPushButton(InputStrDialog);
        BtnFile1->setObjectName(QStringLiteral("BtnFile1"));
        BtnFile1->setEnabled(true);

        gridLayout->addWidget(BtnFile1, 9, 13, 1, 1);

        BtnRcvOpt3 = new QPushButton(InputStrDialog);
        BtnRcvOpt3->setObjectName(QStringLiteral("BtnRcvOpt3"));
        BtnRcvOpt3->setEnabled(true);

        gridLayout->addWidget(BtnRcvOpt3, 3, 13, 1, 1);

        NmeaReqL = new QComboBox(InputStrDialog);
        NmeaReqL->setObjectName(QStringLiteral("NmeaReqL"));
        NmeaReqL->setEnabled(true);

        gridLayout->addWidget(NmeaReqL, 6, 0, 1, 4);

        BtnRcvOpt1 = new QPushButton(InputStrDialog);
        BtnRcvOpt1->setObjectName(QStringLiteral("BtnRcvOpt1"));
        BtnRcvOpt1->setEnabled(true);

        gridLayout->addWidget(BtnRcvOpt1, 1, 13, 1, 1);

        Format3 = new QComboBox(InputStrDialog);
        Format3->setObjectName(QStringLiteral("Format3"));
        Format3->setEnabled(true);

        gridLayout->addWidget(Format3, 3, 10, 1, 1);

        NmeaPos2 = new QDoubleSpinBox(InputStrDialog);
        NmeaPos2->setObjectName(QStringLiteral("NmeaPos2"));
        NmeaPos2->setDecimals(9);
        NmeaPos2->setMinimum(-180);
        NmeaPos2->setMaximum(180);

        gridLayout->addWidget(NmeaPos2, 6, 8, 1, 2);

        Format2 = new QComboBox(InputStrDialog);
        Format2->setObjectName(QStringLiteral("Format2"));
        Format2->setEnabled(true);

        gridLayout->addWidget(Format2, 2, 10, 1, 1);

        NmeaPos3 = new QDoubleSpinBox(InputStrDialog);
        NmeaPos3->setObjectName(QStringLiteral("NmeaPos3"));
        NmeaPos3->setDecimals(3);
        NmeaPos3->setMaximum(8000);

        gridLayout->addWidget(NmeaPos3, 6, 10, 1, 1);

        Format1 = new QComboBox(InputStrDialog);
        Format1->setObjectName(QStringLiteral("Format1"));
        Format1->setEnabled(true);

        gridLayout->addWidget(Format1, 1, 10, 1, 1);

        Stream1 = new QComboBox(InputStrDialog);
        Stream1->setObjectName(QStringLiteral("Stream1"));
        Stream1->setEnabled(true);

        gridLayout->addWidget(Stream1, 1, 4, 1, 3);

        Stream2 = new QComboBox(InputStrDialog);
        Stream2->setObjectName(QStringLiteral("Stream2"));
        Stream2->setEnabled(true);

        gridLayout->addWidget(Stream2, 2, 4, 1, 3);

        BtnStr2 = new QPushButton(InputStrDialog);
        BtnStr2->setObjectName(QStringLiteral("BtnStr2"));
        BtnStr2->setEnabled(true);

        gridLayout->addWidget(BtnStr2, 2, 7, 1, 1);

        BtnPos = new QPushButton(InputStrDialog);
        BtnPos->setObjectName(QStringLiteral("BtnPos"));
        BtnPos->setEnabled(true);

        gridLayout->addWidget(BtnPos, 6, 13, 1, 1);

        StreamC1 = new QCheckBox(InputStrDialog);
        StreamC1->setObjectName(QStringLiteral("StreamC1"));

        gridLayout->addWidget(StreamC1, 1, 0, 1, 4);

        BtnCancel = new QPushButton(InputStrDialog);
        BtnCancel->setObjectName(QStringLiteral("BtnCancel"));
        BtnCancel->setEnabled(true);

        gridLayout->addWidget(BtnCancel, 13, 11, 1, 3);

        LabelF2 = new QLabel(InputStrDialog);
        LabelF2->setObjectName(QStringLiteral("LabelF2"));

        gridLayout->addWidget(LabelF2, 13, 4, 1, 1);

        BtnRcvOpt2 = new QPushButton(InputStrDialog);
        BtnRcvOpt2->setObjectName(QStringLiteral("BtnRcvOpt2"));
        BtnRcvOpt2->setEnabled(true);

        gridLayout->addWidget(BtnRcvOpt2, 2, 13, 1, 1);

        BtnCmd2 = new QPushButton(InputStrDialog);
        BtnCmd2->setObjectName(QStringLiteral("BtnCmd2"));
        BtnCmd2->setEnabled(true);

        gridLayout->addWidget(BtnCmd2, 2, 8, 1, 2);

        TimeSpeedL = new QComboBox(InputStrDialog);
        TimeSpeedL->setObjectName(QStringLiteral("TimeSpeedL"));
        TimeSpeedL->setEnabled(true);

        gridLayout->addWidget(TimeSpeedL, 13, 1, 1, 1);

        LabelF3 = new QLabel(InputStrDialog);
        LabelF3->setObjectName(QStringLiteral("LabelF3"));
        LabelF3->setEnabled(true);

        gridLayout->addWidget(LabelF3, 13, 2, 1, 1);

        LabelNmea = new QLabel(InputStrDialog);
        LabelNmea->setObjectName(QStringLiteral("LabelNmea"));
        LabelNmea->setEnabled(true);
        sizePolicy.setHeightForWidth(LabelNmea->sizePolicy().hasHeightForWidth());
        LabelNmea->setSizePolicy(sizePolicy);

        gridLayout->addWidget(LabelNmea, 4, 0, 1, 6);

        BtnOk = new QPushButton(InputStrDialog);
        BtnOk->setObjectName(QStringLiteral("BtnOk"));
        BtnOk->setEnabled(true);
        BtnOk->setAutoDefault(true);

        gridLayout->addWidget(BtnOk, 13, 6, 1, 5);

        BtnFile2 = new QPushButton(InputStrDialog);
        BtnFile2->setObjectName(QStringLiteral("BtnFile2"));
        BtnFile2->setEnabled(true);

        gridLayout->addWidget(BtnFile2, 10, 13, 1, 1);

        FilePath2 = new QLineEdit(InputStrDialog);
        FilePath2->setObjectName(QStringLiteral("FilePath2"));
        FilePath2->setEnabled(true);

        gridLayout->addWidget(FilePath2, 10, 0, 1, 12);

        Label10 = new QLabel(InputStrDialog);
        Label10->setObjectName(QStringLiteral("Label10"));
        Label10->setEnabled(true);
        sizePolicy.setHeightForWidth(Label10->sizePolicy().hasHeightForWidth());
        Label10->setSizePolicy(sizePolicy);

        gridLayout->addWidget(Label10, 0, 0, 1, 2);

        StreamC3 = new QCheckBox(InputStrDialog);
        StreamC3->setObjectName(QStringLiteral("StreamC3"));

        gridLayout->addWidget(StreamC3, 3, 0, 1, 4);

        TimeStartE = new QLineEdit(InputStrDialog);
        TimeStartE->setObjectName(QStringLiteral("TimeStartE"));

        gridLayout->addWidget(TimeStartE, 13, 3, 1, 1);

        Label11 = new QLabel(InputStrDialog);
        Label11->setObjectName(QStringLiteral("Label11"));
        Label11->setEnabled(true);
        sizePolicy.setHeightForWidth(Label11->sizePolicy().hasHeightForWidth());
        Label11->setSizePolicy(sizePolicy);

        gridLayout->addWidget(Label11, 0, 8, 1, 2);

        Label1 = new QLabel(InputStrDialog);
        Label1->setObjectName(QStringLiteral("Label1"));
        Label1->setEnabled(true);
        sizePolicy.setHeightForWidth(Label1->sizePolicy().hasHeightForWidth());
        Label1->setSizePolicy(sizePolicy);

        gridLayout->addWidget(Label1, 0, 13, 1, 1);

        LabelF1 = new QLabel(InputStrDialog);
        LabelF1->setObjectName(QStringLiteral("LabelF1"));
        LabelF1->setEnabled(true);
        sizePolicy.setHeightForWidth(LabelF1->sizePolicy().hasHeightForWidth());
        LabelF1->setSizePolicy(sizePolicy);

        gridLayout->addWidget(LabelF1, 8, 0, 1, 2);

        BtnFile3 = new QPushButton(InputStrDialog);
        BtnFile3->setObjectName(QStringLiteral("BtnFile3"));
        BtnFile3->setEnabled(true);

        gridLayout->addWidget(BtnFile3, 11, 13, 1, 1);

        TimeTagC = new QCheckBox(InputStrDialog);
        TimeTagC->setObjectName(QStringLiteral("TimeTagC"));

        gridLayout->addWidget(TimeTagC, 13, 0, 1, 1);

        Label5 = new QLabel(InputStrDialog);
        Label5->setObjectName(QStringLiteral("Label5"));
        Label5->setEnabled(true);
        sizePolicy.setHeightForWidth(Label5->sizePolicy().hasHeightForWidth());
        Label5->setSizePolicy(sizePolicy);

        gridLayout->addWidget(Label5, 0, 4, 1, 1);

        Label6 = new QLabel(InputStrDialog);
        Label6->setObjectName(QStringLiteral("Label6"));
        Label6->setEnabled(true);
        sizePolicy.setHeightForWidth(Label6->sizePolicy().hasHeightForWidth());
        Label6->setSizePolicy(sizePolicy);

        gridLayout->addWidget(Label6, 0, 7, 1, 1);

        BtnStr1 = new QPushButton(InputStrDialog);
        BtnStr1->setObjectName(QStringLiteral("BtnStr1"));
        BtnStr1->setEnabled(true);

        gridLayout->addWidget(BtnStr1, 1, 7, 1, 1);

        BtnCmd1 = new QPushButton(InputStrDialog);
        BtnCmd1->setObjectName(QStringLiteral("BtnCmd1"));
        BtnCmd1->setEnabled(true);

        gridLayout->addWidget(BtnCmd1, 1, 8, 1, 2);

        BtnStr3 = new QPushButton(InputStrDialog);
        BtnStr3->setObjectName(QStringLiteral("BtnStr3"));
        BtnStr3->setEnabled(true);

        gridLayout->addWidget(BtnStr3, 3, 7, 1, 1);

        BtnCmd3 = new QPushButton(InputStrDialog);
        BtnCmd3->setObjectName(QStringLiteral("BtnCmd3"));
        BtnCmd3->setEnabled(true);

        gridLayout->addWidget(BtnCmd3, 3, 8, 1, 2);

        StreamC2 = new QCheckBox(InputStrDialog);
        StreamC2->setObjectName(QStringLiteral("StreamC2"));

        gridLayout->addWidget(StreamC2, 2, 0, 1, 4);

        Stream3 = new QComboBox(InputStrDialog);
        Stream3->setObjectName(QStringLiteral("Stream3"));
        Stream3->setEnabled(true);

        gridLayout->addWidget(Stream3, 3, 4, 1, 3);

        LabelResetCmd = new QLabel(InputStrDialog);
        LabelResetCmd->setObjectName(QStringLiteral("LabelResetCmd"));

        gridLayout->addWidget(LabelResetCmd, 7, 0, 1, 1);

        EditMaxBL = new QSpinBox(InputStrDialog);
        EditMaxBL->setObjectName(QStringLiteral("EditMaxBL"));
        EditMaxBL->setMaximum(999);
        EditMaxBL->setValue(10);

        gridLayout->addWidget(EditMaxBL, 7, 13, 1, 1);

        LabelMaxBL = new QLabel(InputStrDialog);
        LabelMaxBL->setObjectName(QStringLiteral("LabelMaxBL"));

        gridLayout->addWidget(LabelMaxBL, 7, 10, 1, 1);

        EditResetCmd = new QLineEdit(InputStrDialog);
        EditResetCmd->setObjectName(QStringLiteral("EditResetCmd"));

        gridLayout->addWidget(EditResetCmd, 7, 1, 1, 9);

        Chk64Bit = new QCheckBox(InputStrDialog);
        Chk64Bit->setObjectName(QStringLiteral("Chk64Bit"));

        gridLayout->addWidget(Chk64Bit, 13, 5, 1, 1);

        QWidget::setTabOrder(StreamC1, Stream1);
        QWidget::setTabOrder(Stream1, BtnStr1);
        QWidget::setTabOrder(BtnStr1, BtnCmd1);
        QWidget::setTabOrder(BtnCmd1, Format1);
        QWidget::setTabOrder(Format1, BtnRcvOpt1);
        QWidget::setTabOrder(BtnRcvOpt1, StreamC2);
        QWidget::setTabOrder(StreamC2, Stream2);
        QWidget::setTabOrder(Stream2, BtnStr2);
        QWidget::setTabOrder(BtnStr2, BtnCmd2);
        QWidget::setTabOrder(BtnCmd2, Format2);
        QWidget::setTabOrder(Format2, BtnRcvOpt2);
        QWidget::setTabOrder(BtnRcvOpt2, StreamC3);
        QWidget::setTabOrder(StreamC3, Stream3);
        QWidget::setTabOrder(Stream3, BtnStr3);
        QWidget::setTabOrder(BtnStr3, BtnCmd3);
        QWidget::setTabOrder(BtnCmd3, Format3);
        QWidget::setTabOrder(Format3, BtnRcvOpt3);
        QWidget::setTabOrder(BtnRcvOpt3, NmeaReqL);
        QWidget::setTabOrder(NmeaReqL, NmeaPos1);
        QWidget::setTabOrder(NmeaPos1, NmeaPos2);
        QWidget::setTabOrder(NmeaPos2, NmeaPos3);
        QWidget::setTabOrder(NmeaPos3, BtnPos);
        QWidget::setTabOrder(BtnPos, FilePath1);
        QWidget::setTabOrder(FilePath1, BtnFile1);
        QWidget::setTabOrder(BtnFile1, FilePath2);
        QWidget::setTabOrder(FilePath2, BtnFile2);
        QWidget::setTabOrder(BtnFile2, FilePath3);
        QWidget::setTabOrder(FilePath3, BtnFile3);
        QWidget::setTabOrder(BtnFile3, TimeTagC);
        QWidget::setTabOrder(TimeTagC, TimeSpeedL);
        QWidget::setTabOrder(TimeSpeedL, TimeStartE);
        QWidget::setTabOrder(TimeStartE, BtnOk);
        QWidget::setTabOrder(BtnOk, BtnCancel);

        retranslateUi(InputStrDialog);

        BtnOk->setDefault(true);


        QMetaObject::connectSlotsByName(InputStrDialog);
    } // setupUi

    void retranslateUi(QWidget *InputStrDialog)
    {
        InputStrDialog->setWindowTitle(QApplication::translate("InputStrDialog", "Input Streams", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        InputStrDialog->setToolTip(QString());
#endif // QT_NO_TOOLTIP
#ifndef QT_NO_TOOLTIP
        Label7->setToolTip(QString());
#endif // QT_NO_TOOLTIP
        Label7->setText(QApplication::translate("InputStrDialog", "Format", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        FilePath3->setToolTip(QString());
#endif // QT_NO_TOOLTIP
        FilePath3->setText(QString());
#ifndef QT_NO_TOOLTIP
        FilePath1->setToolTip(QString());
#endif // QT_NO_TOOLTIP
        FilePath1->setText(QString());
#ifndef QT_NO_TOOLTIP
        BtnFile1->setToolTip(QString());
#endif // QT_NO_TOOLTIP
        BtnFile1->setText(QApplication::translate("InputStrDialog", "...", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        BtnRcvOpt3->setToolTip(QString());
#endif // QT_NO_TOOLTIP
        BtnRcvOpt3->setText(QApplication::translate("InputStrDialog", "...", Q_NULLPTR));
        NmeaReqL->clear();
        NmeaReqL->insertItems(0, QStringList()
         << QApplication::translate("InputStrDialog", "OFF", Q_NULLPTR)
         << QApplication::translate("InputStrDialog", "Latitude/Longitude", Q_NULLPTR)
         << QApplication::translate("InputStrDialog", "Single Solution", Q_NULLPTR)
        );
#ifndef QT_NO_TOOLTIP
        NmeaReqL->setToolTip(QString());
#endif // QT_NO_TOOLTIP
#ifndef QT_NO_TOOLTIP
        BtnRcvOpt1->setToolTip(QString());
#endif // QT_NO_TOOLTIP
        BtnRcvOpt1->setText(QApplication::translate("InputStrDialog", "...", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        Format3->setToolTip(QString());
#endif // QT_NO_TOOLTIP
#ifndef QT_NO_TOOLTIP
        Format2->setToolTip(QString());
#endif // QT_NO_TOOLTIP
#ifndef QT_NO_TOOLTIP
        Format1->setToolTip(QString());
#endif // QT_NO_TOOLTIP
        Stream1->clear();
        Stream1->insertItems(0, QStringList()
         << QApplication::translate("InputStrDialog", "Serial", Q_NULLPTR)
         << QApplication::translate("InputStrDialog", "TCP Client", Q_NULLPTR)
         << QApplication::translate("InputStrDialog", "TCP Server", Q_NULLPTR)
         << QApplication::translate("InputStrDialog", "NTRIP Client", Q_NULLPTR)
         << QApplication::translate("InputStrDialog", "File", Q_NULLPTR)
        );
#ifndef QT_NO_TOOLTIP
        Stream1->setToolTip(QString());
#endif // QT_NO_TOOLTIP
        Stream2->clear();
        Stream2->insertItems(0, QStringList()
         << QApplication::translate("InputStrDialog", "Serial", Q_NULLPTR)
         << QApplication::translate("InputStrDialog", "TCP Client", Q_NULLPTR)
         << QApplication::translate("InputStrDialog", "TCP Server", Q_NULLPTR)
         << QApplication::translate("InputStrDialog", "NTRIP Client", Q_NULLPTR)
         << QApplication::translate("InputStrDialog", "File", Q_NULLPTR)
        );
#ifndef QT_NO_TOOLTIP
        Stream2->setToolTip(QString());
#endif // QT_NO_TOOLTIP
#ifndef QT_NO_TOOLTIP
        BtnStr2->setToolTip(QString());
#endif // QT_NO_TOOLTIP
        BtnStr2->setText(QApplication::translate("InputStrDialog", "...", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        BtnPos->setToolTip(QString());
#endif // QT_NO_TOOLTIP
        BtnPos->setText(QApplication::translate("InputStrDialog", "...", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        StreamC1->setToolTip(QString());
#endif // QT_NO_TOOLTIP
        StreamC1->setText(QApplication::translate("InputStrDialog", "(1) Rover", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        BtnCancel->setToolTip(QString());
#endif // QT_NO_TOOLTIP
        BtnCancel->setText(QApplication::translate("InputStrDialog", "&Cancel", Q_NULLPTR));
        LabelF2->setText(QApplication::translate("InputStrDialog", "s", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        BtnRcvOpt2->setToolTip(QString());
#endif // QT_NO_TOOLTIP
        BtnRcvOpt2->setText(QApplication::translate("InputStrDialog", "...", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        BtnCmd2->setToolTip(QString());
#endif // QT_NO_TOOLTIP
        BtnCmd2->setText(QApplication::translate("InputStrDialog", "...", Q_NULLPTR));
        TimeSpeedL->clear();
        TimeSpeedL->insertItems(0, QStringList()
         << QString()
         << QApplication::translate("InputStrDialog", "x0.1", Q_NULLPTR)
         << QApplication::translate("InputStrDialog", "x0.2", Q_NULLPTR)
         << QApplication::translate("InputStrDialog", "x0.5", Q_NULLPTR)
         << QApplication::translate("InputStrDialog", "x1", Q_NULLPTR)
         << QApplication::translate("InputStrDialog", "x2", Q_NULLPTR)
         << QApplication::translate("InputStrDialog", "x5", Q_NULLPTR)
         << QApplication::translate("InputStrDialog", "x10", Q_NULLPTR)
        );
#ifndef QT_NO_TOOLTIP
        TimeSpeedL->setToolTip(QString());
#endif // QT_NO_TOOLTIP
#ifndef QT_NO_TOOLTIP
        LabelF3->setToolTip(QString());
#endif // QT_NO_TOOLTIP
        LabelF3->setText(QApplication::translate("InputStrDialog", "+", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        LabelNmea->setToolTip(QString());
#endif // QT_NO_TOOLTIP
        LabelNmea->setText(QApplication::translate("InputStrDialog", "Transmit NMEA GPGGA to Base Station", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        BtnOk->setToolTip(QString());
#endif // QT_NO_TOOLTIP
        BtnOk->setText(QApplication::translate("InputStrDialog", "&OK", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        BtnFile2->setToolTip(QString());
#endif // QT_NO_TOOLTIP
        BtnFile2->setText(QApplication::translate("InputStrDialog", "...", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        FilePath2->setToolTip(QString());
#endif // QT_NO_TOOLTIP
        FilePath2->setText(QString());
#ifndef QT_NO_TOOLTIP
        Label10->setToolTip(QString());
#endif // QT_NO_TOOLTIP
        Label10->setText(QApplication::translate("InputStrDialog", "Input Stream", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        StreamC3->setToolTip(QString());
#endif // QT_NO_TOOLTIP
        StreamC3->setText(QApplication::translate("InputStrDialog", "(3) Correction", Q_NULLPTR));
        TimeStartE->setText(QApplication::translate("InputStrDialog", "0", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        Label11->setToolTip(QString());
#endif // QT_NO_TOOLTIP
        Label11->setText(QApplication::translate("InputStrDialog", "Cmd", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        Label1->setToolTip(QString());
#endif // QT_NO_TOOLTIP
        Label1->setText(QApplication::translate("InputStrDialog", "Opt", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        LabelF1->setToolTip(QString());
#endif // QT_NO_TOOLTIP
        LabelF1->setText(QApplication::translate("InputStrDialog", "Input File Paths", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        BtnFile3->setToolTip(QString());
#endif // QT_NO_TOOLTIP
        BtnFile3->setText(QApplication::translate("InputStrDialog", "...", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        TimeTagC->setToolTip(QString());
#endif // QT_NO_TOOLTIP
        TimeTagC->setText(QApplication::translate("InputStrDialog", "Time", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        Label5->setToolTip(QString());
#endif // QT_NO_TOOLTIP
        Label5->setText(QApplication::translate("InputStrDialog", "Type", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        Label6->setToolTip(QString());
#endif // QT_NO_TOOLTIP
        Label6->setText(QApplication::translate("InputStrDialog", "Opt", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        BtnStr1->setToolTip(QString());
#endif // QT_NO_TOOLTIP
        BtnStr1->setText(QApplication::translate("InputStrDialog", "...", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        BtnCmd1->setToolTip(QString());
#endif // QT_NO_TOOLTIP
        BtnCmd1->setText(QApplication::translate("InputStrDialog", "...", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        BtnStr3->setToolTip(QString());
#endif // QT_NO_TOOLTIP
        BtnStr3->setText(QApplication::translate("InputStrDialog", "...", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        BtnCmd3->setToolTip(QString());
#endif // QT_NO_TOOLTIP
        BtnCmd3->setText(QApplication::translate("InputStrDialog", "...", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        StreamC2->setToolTip(QString());
#endif // QT_NO_TOOLTIP
        StreamC2->setText(QApplication::translate("InputStrDialog", "(2) Base Station", Q_NULLPTR));
        Stream3->clear();
        Stream3->insertItems(0, QStringList()
         << QApplication::translate("InputStrDialog", "Serial", Q_NULLPTR)
         << QApplication::translate("InputStrDialog", "TCP Client", Q_NULLPTR)
         << QApplication::translate("InputStrDialog", "TCP Server", Q_NULLPTR)
         << QApplication::translate("InputStrDialog", "NTRIP Client", Q_NULLPTR)
         << QApplication::translate("InputStrDialog", "File", Q_NULLPTR)
         << QApplication::translate("InputStrDialog", "FTP", Q_NULLPTR)
         << QApplication::translate("InputStrDialog", "HTTP", Q_NULLPTR)
        );
#ifndef QT_NO_TOOLTIP
        Stream3->setToolTip(QString());
#endif // QT_NO_TOOLTIP
        LabelResetCmd->setText(QApplication::translate("InputStrDialog", "Reset Cmd", Q_NULLPTR));
        EditMaxBL->setSuffix(QApplication::translate("InputStrDialog", " km", Q_NULLPTR));
        LabelMaxBL->setText(QApplication::translate("InputStrDialog", "MaxBaseline", Q_NULLPTR));
        Chk64Bit->setText(QApplication::translate("InputStrDialog", "64bit", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class InputStrDialog: public Ui_InputStrDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_INSTRDLG_H
