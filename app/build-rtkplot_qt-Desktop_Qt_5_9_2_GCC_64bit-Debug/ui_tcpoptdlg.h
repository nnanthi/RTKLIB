/********************************************************************************
** Form generated from reading UI file 'tcpoptdlg.ui'
**
** Created by: Qt User Interface Compiler version 5.9.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_TCPOPTDLG_H
#define UI_TCPOPTDLG_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpinBox>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_TcpOptDialog
{
public:
    QGridLayout *gridLayout;
    QLabel *LabelUser;
    QComboBox *MntPnt;
    QLabel *LabelMntPnt;
    QLabel *LabelStr;
    QLineEdit *User;
    QComboBox *Addr;
    QLabel *LabelAddr;
    QWidget *widget;
    QHBoxLayout *horizontalLayout;
    QPushButton *BtnNtrip;
    QPushButton *BtnOk;
    QPushButton *BtnCancel;
    QLabel *LabelPasswd;
    QLabel *LabelPort;
    QLineEdit *Passwd;
    QLineEdit *Str;
    QSpinBox *Port;

    void setupUi(QWidget *TcpOptDialog)
    {
        if (TcpOptDialog->objectName().isEmpty())
            TcpOptDialog->setObjectName(QStringLiteral("TcpOptDialog"));
        TcpOptDialog->resize(518, 330);
        gridLayout = new QGridLayout(TcpOptDialog);
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        LabelUser = new QLabel(TcpOptDialog);
        LabelUser->setObjectName(QStringLiteral("LabelUser"));
        LabelUser->setEnabled(true);

        gridLayout->addWidget(LabelUser, 4, 3, 1, 1);

        MntPnt = new QComboBox(TcpOptDialog);
        MntPnt->setObjectName(QStringLiteral("MntPnt"));
        MntPnt->setEnabled(true);
        MntPnt->setEditable(true);

        gridLayout->addWidget(MntPnt, 5, 1, 1, 1);

        LabelMntPnt = new QLabel(TcpOptDialog);
        LabelMntPnt->setObjectName(QStringLiteral("LabelMntPnt"));
        LabelMntPnt->setEnabled(true);
        QSizePolicy sizePolicy(QSizePolicy::Preferred, QSizePolicy::Fixed);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(LabelMntPnt->sizePolicy().hasHeightForWidth());
        LabelMntPnt->setSizePolicy(sizePolicy);

        gridLayout->addWidget(LabelMntPnt, 4, 1, 1, 1);

        LabelStr = new QLabel(TcpOptDialog);
        LabelStr->setObjectName(QStringLiteral("LabelStr"));
        LabelStr->setEnabled(true);

        gridLayout->addWidget(LabelStr, 7, 1, 1, 1);

        User = new QLineEdit(TcpOptDialog);
        User->setObjectName(QStringLiteral("User"));
        User->setEnabled(true);

        gridLayout->addWidget(User, 5, 3, 1, 1);

        Addr = new QComboBox(TcpOptDialog);
        Addr->setObjectName(QStringLiteral("Addr"));
        Addr->setEnabled(true);
        Addr->setEditable(true);

        gridLayout->addWidget(Addr, 2, 1, 1, 3);

        LabelAddr = new QLabel(TcpOptDialog);
        LabelAddr->setObjectName(QStringLiteral("LabelAddr"));
        LabelAddr->setEnabled(true);
        sizePolicy.setHeightForWidth(LabelAddr->sizePolicy().hasHeightForWidth());
        LabelAddr->setSizePolicy(sizePolicy);

        gridLayout->addWidget(LabelAddr, 0, 1, 1, 3);

        widget = new QWidget(TcpOptDialog);
        widget->setObjectName(QStringLiteral("widget"));
        sizePolicy.setHeightForWidth(widget->sizePolicy().hasHeightForWidth());
        widget->setSizePolicy(sizePolicy);
        horizontalLayout = new QHBoxLayout(widget);
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        horizontalLayout->setContentsMargins(0, 0, 0, 0);
        BtnNtrip = new QPushButton(widget);
        BtnNtrip->setObjectName(QStringLiteral("BtnNtrip"));
        BtnNtrip->setEnabled(true);

        horizontalLayout->addWidget(BtnNtrip);

        BtnOk = new QPushButton(widget);
        BtnOk->setObjectName(QStringLiteral("BtnOk"));
        BtnOk->setEnabled(true);
        BtnOk->setAutoDefault(true);

        horizontalLayout->addWidget(BtnOk);

        BtnCancel = new QPushButton(widget);
        BtnCancel->setObjectName(QStringLiteral("BtnCancel"));
        BtnCancel->setEnabled(true);

        horizontalLayout->addWidget(BtnCancel);


        gridLayout->addWidget(widget, 8, 1, 1, 4);

        LabelPasswd = new QLabel(TcpOptDialog);
        LabelPasswd->setObjectName(QStringLiteral("LabelPasswd"));
        LabelPasswd->setEnabled(true);
        sizePolicy.setHeightForWidth(LabelPasswd->sizePolicy().hasHeightForWidth());
        LabelPasswd->setSizePolicy(sizePolicy);

        gridLayout->addWidget(LabelPasswd, 4, 4, 1, 1);

        LabelPort = new QLabel(TcpOptDialog);
        LabelPort->setObjectName(QStringLiteral("LabelPort"));
        LabelPort->setEnabled(true);
        sizePolicy.setHeightForWidth(LabelPort->sizePolicy().hasHeightForWidth());
        LabelPort->setSizePolicy(sizePolicy);

        gridLayout->addWidget(LabelPort, 0, 4, 1, 1);

        Passwd = new QLineEdit(TcpOptDialog);
        Passwd->setObjectName(QStringLiteral("Passwd"));
        Passwd->setEnabled(true);
        Passwd->setEchoMode(QLineEdit::Password);

        gridLayout->addWidget(Passwd, 5, 4, 1, 1);

        Str = new QLineEdit(TcpOptDialog);
        Str->setObjectName(QStringLiteral("Str"));
        Str->setEnabled(true);

        gridLayout->addWidget(Str, 7, 3, 1, 2);

        Port = new QSpinBox(TcpOptDialog);
        Port->setObjectName(QStringLiteral("Port"));
        Port->setMaximum(65535);

        gridLayout->addWidget(Port, 2, 4, 1, 1);

        QWidget::setTabOrder(Addr, Port);
        QWidget::setTabOrder(Port, MntPnt);
        QWidget::setTabOrder(MntPnt, User);
        QWidget::setTabOrder(User, Passwd);
        QWidget::setTabOrder(Passwd, Str);
        QWidget::setTabOrder(Str, BtnNtrip);
        QWidget::setTabOrder(BtnNtrip, BtnOk);
        QWidget::setTabOrder(BtnOk, BtnCancel);

        retranslateUi(TcpOptDialog);

        BtnOk->setDefault(true);


        QMetaObject::connectSlotsByName(TcpOptDialog);
    } // setupUi

    void retranslateUi(QWidget *TcpOptDialog)
    {
        TcpOptDialog->setWindowTitle(QApplication::translate("TcpOptDialog", "TCP Options", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        TcpOptDialog->setToolTip(QString());
#endif // QT_NO_TOOLTIP
#ifndef QT_NO_TOOLTIP
        LabelUser->setToolTip(QString());
#endif // QT_NO_TOOLTIP
        LabelUser->setText(QApplication::translate("TcpOptDialog", "User-ID", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        MntPnt->setToolTip(QString());
#endif // QT_NO_TOOLTIP
#ifndef QT_NO_TOOLTIP
        LabelMntPnt->setToolTip(QString());
#endif // QT_NO_TOOLTIP
        LabelMntPnt->setText(QApplication::translate("TcpOptDialog", "Mountpoint", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        LabelStr->setToolTip(QString());
#endif // QT_NO_TOOLTIP
        LabelStr->setText(QApplication::translate("TcpOptDialog", "String", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        User->setToolTip(QString());
#endif // QT_NO_TOOLTIP
        User->setText(QString());
#ifndef QT_NO_TOOLTIP
        Addr->setToolTip(QString());
#endif // QT_NO_TOOLTIP
#ifndef QT_NO_TOOLTIP
        LabelAddr->setToolTip(QString());
#endif // QT_NO_TOOLTIP
        LabelAddr->setText(QApplication::translate("TcpOptDialog", "TCP Server Address", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        BtnNtrip->setToolTip(QString());
#endif // QT_NO_TOOLTIP
        BtnNtrip->setText(QApplication::translate("TcpOptDialog", "&Ntrip...", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        BtnOk->setToolTip(QString());
#endif // QT_NO_TOOLTIP
        BtnOk->setText(QApplication::translate("TcpOptDialog", "&OK", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        BtnCancel->setToolTip(QString());
#endif // QT_NO_TOOLTIP
        BtnCancel->setText(QApplication::translate("TcpOptDialog", "&Cancel", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        LabelPasswd->setToolTip(QString());
#endif // QT_NO_TOOLTIP
        LabelPasswd->setText(QApplication::translate("TcpOptDialog", "Password", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        LabelPort->setToolTip(QString());
#endif // QT_NO_TOOLTIP
        LabelPort->setText(QApplication::translate("TcpOptDialog", "Port", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        Passwd->setToolTip(QString());
#endif // QT_NO_TOOLTIP
        Passwd->setText(QString());
#ifndef QT_NO_TOOLTIP
        Str->setToolTip(QString());
#endif // QT_NO_TOOLTIP
        Str->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class TcpOptDialog: public Ui_TcpOptDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_TCPOPTDLG_H
