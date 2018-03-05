/********************************************************************************
** Form generated from reading UI file 'serioptdlg.ui'
**
** Created by: Qt User Interface Compiler version 5.9.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_SERIOPTDLG_H
#define UI_SERIOPTDLG_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpinBox>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_SerialOptDialog
{
public:
    QGridLayout *gridLayout;
    QComboBox *Port;
    QLabel *Label3;
    QComboBox *BitRate;
    QLabel *Label1;
    QLabel *Label2;
    QComboBox *ByteSize;
    QLabel *Label4;
    QLabel *Label5;
    QLabel *Label8;
    QComboBox *FlowCtr;
    QComboBox *StopBits;
    QComboBox *Parity;
    QWidget *widget;
    QHBoxLayout *horizontalLayout;
    QPushButton *BtnCmd;
    QPushButton *BtnOk;
    QPushButton *BtnCancel;
    QSpinBox *TcpPort;
    QCheckBox *OutTcpPort;

    void setupUi(QWidget *SerialOptDialog)
    {
        if (SerialOptDialog->objectName().isEmpty())
            SerialOptDialog->setObjectName(QStringLiteral("SerialOptDialog"));
        SerialOptDialog->resize(339, 169);
        gridLayout = new QGridLayout(SerialOptDialog);
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        Port = new QComboBox(SerialOptDialog);
        Port->setObjectName(QStringLiteral("Port"));
        Port->setEnabled(true);

        gridLayout->addWidget(Port, 0, 1, 3, 1);

        Label3 = new QLabel(SerialOptDialog);
        Label3->setObjectName(QStringLiteral("Label3"));
        Label3->setEnabled(true);

        gridLayout->addWidget(Label3, 1, 0, 1, 1);

        BitRate = new QComboBox(SerialOptDialog);
        BitRate->setObjectName(QStringLiteral("BitRate"));
        BitRate->setEnabled(true);

        gridLayout->addWidget(BitRate, 3, 1, 3, 1);

        Label1 = new QLabel(SerialOptDialog);
        Label1->setObjectName(QStringLiteral("Label1"));
        Label1->setEnabled(true);

        gridLayout->addWidget(Label1, 4, 0, 1, 1);

        Label2 = new QLabel(SerialOptDialog);
        Label2->setObjectName(QStringLiteral("Label2"));
        Label2->setEnabled(true);

        gridLayout->addWidget(Label2, 6, 0, 1, 1);

        ByteSize = new QComboBox(SerialOptDialog);
        ByteSize->setObjectName(QStringLiteral("ByteSize"));
        ByteSize->setEnabled(true);

        gridLayout->addWidget(ByteSize, 6, 1, 1, 1);

        Label4 = new QLabel(SerialOptDialog);
        Label4->setObjectName(QStringLiteral("Label4"));
        Label4->setEnabled(true);

        gridLayout->addWidget(Label4, 1, 2, 1, 1);

        Label5 = new QLabel(SerialOptDialog);
        Label5->setObjectName(QStringLiteral("Label5"));
        Label5->setEnabled(true);

        gridLayout->addWidget(Label5, 4, 2, 1, 1);

        Label8 = new QLabel(SerialOptDialog);
        Label8->setObjectName(QStringLiteral("Label8"));
        Label8->setEnabled(true);

        gridLayout->addWidget(Label8, 6, 2, 1, 1);

        FlowCtr = new QComboBox(SerialOptDialog);
        FlowCtr->setObjectName(QStringLiteral("FlowCtr"));
        FlowCtr->setEnabled(true);

        gridLayout->addWidget(FlowCtr, 6, 3, 1, 1);

        StopBits = new QComboBox(SerialOptDialog);
        StopBits->setObjectName(QStringLiteral("StopBits"));
        StopBits->setEnabled(true);

        gridLayout->addWidget(StopBits, 4, 3, 1, 1);

        Parity = new QComboBox(SerialOptDialog);
        Parity->setObjectName(QStringLiteral("Parity"));
        Parity->setEnabled(true);

        gridLayout->addWidget(Parity, 1, 3, 1, 1);

        widget = new QWidget(SerialOptDialog);
        widget->setObjectName(QStringLiteral("widget"));
        horizontalLayout = new QHBoxLayout(widget);
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        horizontalLayout->setContentsMargins(0, 0, 0, 0);
        BtnCmd = new QPushButton(widget);
        BtnCmd->setObjectName(QStringLiteral("BtnCmd"));
        BtnCmd->setEnabled(true);

        horizontalLayout->addWidget(BtnCmd);

        BtnOk = new QPushButton(widget);
        BtnOk->setObjectName(QStringLiteral("BtnOk"));
        BtnOk->setEnabled(true);
        BtnOk->setAutoDefault(true);

        horizontalLayout->addWidget(BtnOk);

        BtnCancel = new QPushButton(widget);
        BtnCancel->setObjectName(QStringLiteral("BtnCancel"));
        BtnCancel->setEnabled(true);

        horizontalLayout->addWidget(BtnCancel);


        gridLayout->addWidget(widget, 8, 0, 1, 4);

        TcpPort = new QSpinBox(SerialOptDialog);
        TcpPort->setObjectName(QStringLiteral("TcpPort"));

        gridLayout->addWidget(TcpPort, 7, 3, 1, 1);

        OutTcpPort = new QCheckBox(SerialOptDialog);
        OutTcpPort->setObjectName(QStringLiteral("OutTcpPort"));

        gridLayout->addWidget(OutTcpPort, 7, 0, 1, 3);

        QWidget::setTabOrder(Port, Parity);
        QWidget::setTabOrder(Parity, BitRate);
        QWidget::setTabOrder(BitRate, StopBits);
        QWidget::setTabOrder(StopBits, ByteSize);
        QWidget::setTabOrder(ByteSize, FlowCtr);
        QWidget::setTabOrder(FlowCtr, OutTcpPort);
        QWidget::setTabOrder(OutTcpPort, TcpPort);
        QWidget::setTabOrder(TcpPort, BtnCmd);
        QWidget::setTabOrder(BtnCmd, BtnOk);
        QWidget::setTabOrder(BtnOk, BtnCancel);

        retranslateUi(SerialOptDialog);

        BtnOk->setDefault(true);


        QMetaObject::connectSlotsByName(SerialOptDialog);
    } // setupUi

    void retranslateUi(QWidget *SerialOptDialog)
    {
        SerialOptDialog->setWindowTitle(QApplication::translate("SerialOptDialog", "Serial Options", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        SerialOptDialog->setToolTip(QString());
#endif // QT_NO_TOOLTIP
        Port->clear();
        Port->insertItems(0, QStringList()
         << QApplication::translate("SerialOptDialog", "COM1", Q_NULLPTR)
        );
#ifndef QT_NO_TOOLTIP
        Port->setToolTip(QString());
#endif // QT_NO_TOOLTIP
#ifndef QT_NO_TOOLTIP
        Label3->setToolTip(QString());
#endif // QT_NO_TOOLTIP
        Label3->setText(QApplication::translate("SerialOptDialog", "Port", Q_NULLPTR));
        BitRate->clear();
        BitRate->insertItems(0, QStringList()
         << QApplication::translate("SerialOptDialog", "300", Q_NULLPTR)
         << QApplication::translate("SerialOptDialog", "600", Q_NULLPTR)
         << QApplication::translate("SerialOptDialog", "1200", Q_NULLPTR)
         << QApplication::translate("SerialOptDialog", "2400", Q_NULLPTR)
         << QApplication::translate("SerialOptDialog", "4800", Q_NULLPTR)
         << QApplication::translate("SerialOptDialog", "9600", Q_NULLPTR)
         << QApplication::translate("SerialOptDialog", "19200", Q_NULLPTR)
         << QApplication::translate("SerialOptDialog", "38400", Q_NULLPTR)
         << QApplication::translate("SerialOptDialog", "57600", Q_NULLPTR)
         << QApplication::translate("SerialOptDialog", "115200", Q_NULLPTR)
         << QApplication::translate("SerialOptDialog", "230400", Q_NULLPTR)
        );
#ifndef QT_NO_TOOLTIP
        BitRate->setToolTip(QString());
#endif // QT_NO_TOOLTIP
#ifndef QT_NO_TOOLTIP
        Label1->setToolTip(QString());
#endif // QT_NO_TOOLTIP
        Label1->setText(QApplication::translate("SerialOptDialog", "Bitrate (bps)", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        Label2->setToolTip(QString());
#endif // QT_NO_TOOLTIP
        Label2->setText(QApplication::translate("SerialOptDialog", "Byte Size", Q_NULLPTR));
        ByteSize->clear();
        ByteSize->insertItems(0, QStringList()
         << QApplication::translate("SerialOptDialog", "7 bits", Q_NULLPTR)
         << QApplication::translate("SerialOptDialog", "8 bits", Q_NULLPTR)
        );
#ifndef QT_NO_TOOLTIP
        ByteSize->setToolTip(QString());
#endif // QT_NO_TOOLTIP
#ifndef QT_NO_TOOLTIP
        Label4->setToolTip(QString());
#endif // QT_NO_TOOLTIP
        Label4->setText(QApplication::translate("SerialOptDialog", "Parity", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        Label5->setToolTip(QString());
#endif // QT_NO_TOOLTIP
        Label5->setText(QApplication::translate("SerialOptDialog", "Stop Bits", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        Label8->setToolTip(QString());
#endif // QT_NO_TOOLTIP
        Label8->setText(QApplication::translate("SerialOptDialog", "Flow Control", Q_NULLPTR));
        FlowCtr->clear();
        FlowCtr->insertItems(0, QStringList()
         << QApplication::translate("SerialOptDialog", "None", Q_NULLPTR)
         << QApplication::translate("SerialOptDialog", "RTS/CTS", Q_NULLPTR)
         << QApplication::translate("SerialOptDialog", "XON/XOFF", Q_NULLPTR)
        );
#ifndef QT_NO_TOOLTIP
        FlowCtr->setToolTip(QString());
#endif // QT_NO_TOOLTIP
        StopBits->clear();
        StopBits->insertItems(0, QStringList()
         << QApplication::translate("SerialOptDialog", "1 bit", Q_NULLPTR)
         << QApplication::translate("SerialOptDialog", "2 bits", Q_NULLPTR)
        );
#ifndef QT_NO_TOOLTIP
        StopBits->setToolTip(QString());
#endif // QT_NO_TOOLTIP
        Parity->clear();
        Parity->insertItems(0, QStringList()
         << QApplication::translate("SerialOptDialog", "None", Q_NULLPTR)
         << QApplication::translate("SerialOptDialog", "Even", Q_NULLPTR)
         << QApplication::translate("SerialOptDialog", "Odd", Q_NULLPTR)
        );
#ifndef QT_NO_TOOLTIP
        Parity->setToolTip(QString());
#endif // QT_NO_TOOLTIP
#ifndef QT_NO_TOOLTIP
        BtnCmd->setToolTip(QString());
#endif // QT_NO_TOOLTIP
        BtnCmd->setText(QApplication::translate("SerialOptDialog", "&Commands...", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        BtnOk->setToolTip(QString());
#endif // QT_NO_TOOLTIP
        BtnOk->setText(QApplication::translate("SerialOptDialog", "&OK", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        BtnCancel->setToolTip(QString());
#endif // QT_NO_TOOLTIP
        BtnCancel->setText(QApplication::translate("SerialOptDialog", "&Cancel", Q_NULLPTR));
        OutTcpPort->setText(QApplication::translate("SerialOptDialog", "Output Received Stream to  TCP Port :", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class SerialOptDialog: public Ui_SerialOptDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_SERIOPTDLG_H
