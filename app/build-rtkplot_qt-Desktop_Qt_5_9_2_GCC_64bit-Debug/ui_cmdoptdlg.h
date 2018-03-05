/********************************************************************************
** Form generated from reading UI file 'cmdoptdlg.ui'
**
** Created by: Qt User Interface Compiler version 5.9.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_CMDOPTDLG_H
#define UI_CMDOPTDLG_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QPlainTextEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_CmdOptDialog
{
public:
    QVBoxLayout *verticalLayout;
    QCheckBox *ChkOpenCmd;
    QPlainTextEdit *OpenCmd;
    QCheckBox *ChkCloseCmd;
    QPlainTextEdit *CloseCmd;
    QCheckBox *ChkPeriodicCmd;
    QPlainTextEdit *PeriodicCmd;
    QWidget *widget;
    QHBoxLayout *horizontalLayout;
    QPushButton *BtnLoad;
    QPushButton *BtnSave;
    QPushButton *BtnOk;
    QPushButton *BtnCancel;

    void setupUi(QWidget *CmdOptDialog)
    {
        if (CmdOptDialog->objectName().isEmpty())
            CmdOptDialog->setObjectName(QStringLiteral("CmdOptDialog"));
        CmdOptDialog->resize(385, 361);
        verticalLayout = new QVBoxLayout(CmdOptDialog);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        ChkOpenCmd = new QCheckBox(CmdOptDialog);
        ChkOpenCmd->setObjectName(QStringLiteral("ChkOpenCmd"));
        ChkOpenCmd->setChecked(false);

        verticalLayout->addWidget(ChkOpenCmd);

        OpenCmd = new QPlainTextEdit(CmdOptDialog);
        OpenCmd->setObjectName(QStringLiteral("OpenCmd"));
        OpenCmd->setEnabled(true);

        verticalLayout->addWidget(OpenCmd);

        ChkCloseCmd = new QCheckBox(CmdOptDialog);
        ChkCloseCmd->setObjectName(QStringLiteral("ChkCloseCmd"));

        verticalLayout->addWidget(ChkCloseCmd);

        CloseCmd = new QPlainTextEdit(CmdOptDialog);
        CloseCmd->setObjectName(QStringLiteral("CloseCmd"));
        CloseCmd->setEnabled(true);

        verticalLayout->addWidget(CloseCmd);

        ChkPeriodicCmd = new QCheckBox(CmdOptDialog);
        ChkPeriodicCmd->setObjectName(QStringLiteral("ChkPeriodicCmd"));

        verticalLayout->addWidget(ChkPeriodicCmd);

        PeriodicCmd = new QPlainTextEdit(CmdOptDialog);
        PeriodicCmd->setObjectName(QStringLiteral("PeriodicCmd"));

        verticalLayout->addWidget(PeriodicCmd);

        widget = new QWidget(CmdOptDialog);
        widget->setObjectName(QStringLiteral("widget"));
        horizontalLayout = new QHBoxLayout(widget);
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        horizontalLayout->setContentsMargins(0, 0, 0, 0);
        BtnLoad = new QPushButton(widget);
        BtnLoad->setObjectName(QStringLiteral("BtnLoad"));
        BtnLoad->setEnabled(true);

        horizontalLayout->addWidget(BtnLoad);

        BtnSave = new QPushButton(widget);
        BtnSave->setObjectName(QStringLiteral("BtnSave"));
        BtnSave->setEnabled(true);

        horizontalLayout->addWidget(BtnSave);

        BtnOk = new QPushButton(widget);
        BtnOk->setObjectName(QStringLiteral("BtnOk"));
        BtnOk->setEnabled(true);
        BtnOk->setAutoDefault(true);

        horizontalLayout->addWidget(BtnOk);

        BtnCancel = new QPushButton(widget);
        BtnCancel->setObjectName(QStringLiteral("BtnCancel"));
        BtnCancel->setEnabled(true);

        horizontalLayout->addWidget(BtnCancel);


        verticalLayout->addWidget(widget);


        retranslateUi(CmdOptDialog);

        BtnOk->setDefault(true);


        QMetaObject::connectSlotsByName(CmdOptDialog);
    } // setupUi

    void retranslateUi(QWidget *CmdOptDialog)
    {
        CmdOptDialog->setWindowTitle(QApplication::translate("CmdOptDialog", "Serial/TCP Commands", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        CmdOptDialog->setToolTip(QString());
#endif // QT_NO_TOOLTIP
#ifndef QT_NO_TOOLTIP
        ChkOpenCmd->setToolTip(QString());
#endif // QT_NO_TOOLTIP
        ChkOpenCmd->setText(QApplication::translate("CmdOptDialog", "Commands at startup", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        OpenCmd->setToolTip(QString());
#endif // QT_NO_TOOLTIP
        OpenCmd->setPlainText(QString());
#ifndef QT_NO_TOOLTIP
        ChkCloseCmd->setToolTip(QString());
#endif // QT_NO_TOOLTIP
        ChkCloseCmd->setText(QApplication::translate("CmdOptDialog", "Commands at shutdown", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        CloseCmd->setToolTip(QString());
#endif // QT_NO_TOOLTIP
        CloseCmd->setPlainText(QString());
        ChkPeriodicCmd->setText(QApplication::translate("CmdOptDialog", "Periodic Commands : <command> # cycle (ms)", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        BtnLoad->setToolTip(QString());
#endif // QT_NO_TOOLTIP
        BtnLoad->setText(QApplication::translate("CmdOptDialog", "&Load...", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        BtnSave->setToolTip(QString());
#endif // QT_NO_TOOLTIP
        BtnSave->setText(QApplication::translate("CmdOptDialog", "&Save...", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        BtnOk->setToolTip(QString());
#endif // QT_NO_TOOLTIP
        BtnOk->setText(QApplication::translate("CmdOptDialog", "&OK", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        BtnCancel->setToolTip(QString());
#endif // QT_NO_TOOLTIP
        BtnCancel->setText(QApplication::translate("CmdOptDialog", "&Cancel", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class CmdOptDialog: public Ui_CmdOptDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_CMDOPTDLG_H
