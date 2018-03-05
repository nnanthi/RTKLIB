/********************************************************************************
** Form generated from reading UI file 'rcvoptdlg.ui'
**
** Created by: Qt User Interface Compiler version 5.9.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_RCVOPTDLG_H
#define UI_RCVOPTDLG_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_RcvOptDialog
{
public:
    QVBoxLayout *verticalLayout;
    QLineEdit *OptionE;
    QWidget *widget;
    QHBoxLayout *horizontalLayout;
    QSpacerItem *horizontalSpacer;
    QPushButton *BtnOk;
    QPushButton *BtnCancel;

    void setupUi(QWidget *RcvOptDialog)
    {
        if (RcvOptDialog->objectName().isEmpty())
            RcvOptDialog->setObjectName(QStringLiteral("RcvOptDialog"));
        RcvOptDialog->resize(220, 78);
        verticalLayout = new QVBoxLayout(RcvOptDialog);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        OptionE = new QLineEdit(RcvOptDialog);
        OptionE->setObjectName(QStringLiteral("OptionE"));
        OptionE->setEnabled(true);

        verticalLayout->addWidget(OptionE);

        widget = new QWidget(RcvOptDialog);
        widget->setObjectName(QStringLiteral("widget"));
        horizontalLayout = new QHBoxLayout(widget);
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        horizontalLayout->setContentsMargins(0, 0, 0, 0);
        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer);

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


        retranslateUi(RcvOptDialog);

        BtnOk->setDefault(true);


        QMetaObject::connectSlotsByName(RcvOptDialog);
    } // setupUi

    void retranslateUi(QWidget *RcvOptDialog)
    {
        RcvOptDialog->setWindowTitle(QApplication::translate("RcvOptDialog", "Receiver Option", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        RcvOptDialog->setToolTip(QString());
#endif // QT_NO_TOOLTIP
#ifndef QT_NO_TOOLTIP
        OptionE->setToolTip(QString());
#endif // QT_NO_TOOLTIP
        OptionE->setText(QString());
#ifndef QT_NO_TOOLTIP
        BtnOk->setToolTip(QString());
#endif // QT_NO_TOOLTIP
        BtnOk->setText(QApplication::translate("RcvOptDialog", "&OK", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        BtnCancel->setToolTip(QString());
#endif // QT_NO_TOOLTIP
        BtnCancel->setText(QApplication::translate("RcvOptDialog", "&Cancel", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class RcvOptDialog: public Ui_RcvOptDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_RCVOPTDLG_H
