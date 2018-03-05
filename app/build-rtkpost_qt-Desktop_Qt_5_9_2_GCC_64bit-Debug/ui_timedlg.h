/********************************************************************************
** Form generated from reading UI file 'timedlg.ui'
**
** Created by: Qt User Interface Compiler version 5.9.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_TIMEDLG_H
#define UI_TIMEDLG_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_TimeDialog
{
public:
    QVBoxLayout *verticalLayout;
    QLabel *Message;
    QPushButton *BtnOk;

    void setupUi(QWidget *TimeDialog)
    {
        if (TimeDialog->objectName().isEmpty())
            TimeDialog->setObjectName(QStringLiteral("TimeDialog"));
        TimeDialog->resize(170, 143);
        verticalLayout = new QVBoxLayout(TimeDialog);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        Message = new QLabel(TimeDialog);
        Message->setObjectName(QStringLiteral("Message"));
        Message->setEnabled(true);

        verticalLayout->addWidget(Message);

        BtnOk = new QPushButton(TimeDialog);
        BtnOk->setObjectName(QStringLiteral("BtnOk"));
        BtnOk->setEnabled(true);
        BtnOk->setAutoDefault(true);

        verticalLayout->addWidget(BtnOk);


        retranslateUi(TimeDialog);

        BtnOk->setDefault(true);


        QMetaObject::connectSlotsByName(TimeDialog);
    } // setupUi

    void retranslateUi(QWidget *TimeDialog)
    {
        TimeDialog->setWindowTitle(QApplication::translate("TimeDialog", "Time", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        TimeDialog->setToolTip(QString());
#endif // QT_NO_TOOLTIP
#ifndef QT_NO_TOOLTIP
        Message->setToolTip(QString());
#endif // QT_NO_TOOLTIP
        Message->setText(QApplication::translate("TimeDialog", "message", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        BtnOk->setToolTip(QString());
#endif // QT_NO_TOOLTIP
        BtnOk->setText(QApplication::translate("TimeDialog", "OK", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class TimeDialog: public Ui_TimeDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_TIMEDLG_H
