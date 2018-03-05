/********************************************************************************
** Form generated from reading UI file 'tspandlg.ui'
**
** Created by: Qt User Interface Compiler version 5.9.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_TSPANDLG_H
#define UI_TSPANDLG_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QDateTimeEdit>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_SpanDialog
{
public:
    QGridLayout *gridLayout;
    QCheckBox *TimeStartF;
    QCheckBox *TimeEndF;
    QCheckBox *TimeIntF;
    QPushButton *BtnOk;
    QComboBox *EditTimeInt;
    QPushButton *BtnCancel;
    QDateTimeEdit *dateTime1;
    QDateTimeEdit *dateTime2;

    void setupUi(QWidget *SpanDialog)
    {
        if (SpanDialog->objectName().isEmpty())
            SpanDialog->setObjectName(QStringLiteral("SpanDialog"));
        SpanDialog->resize(405, 154);
        gridLayout = new QGridLayout(SpanDialog);
        gridLayout->setSpacing(0);
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        gridLayout->setContentsMargins(0, 0, 0, 0);
        TimeStartF = new QCheckBox(SpanDialog);
        TimeStartF->setObjectName(QStringLiteral("TimeStartF"));
        TimeStartF->setChecked(false);

        gridLayout->addWidget(TimeStartF, 0, 0, 1, 1);

        TimeEndF = new QCheckBox(SpanDialog);
        TimeEndF->setObjectName(QStringLiteral("TimeEndF"));
        TimeEndF->setChecked(false);

        gridLayout->addWidget(TimeEndF, 2, 0, 1, 1);

        TimeIntF = new QCheckBox(SpanDialog);
        TimeIntF->setObjectName(QStringLiteral("TimeIntF"));
        TimeIntF->setChecked(false);

        gridLayout->addWidget(TimeIntF, 3, 0, 1, 1);

        BtnOk = new QPushButton(SpanDialog);
        BtnOk->setObjectName(QStringLiteral("BtnOk"));
        BtnOk->setEnabled(true);
        BtnOk->setAutoDefault(true);

        gridLayout->addWidget(BtnOk, 4, 1, 1, 1);

        EditTimeInt = new QComboBox(SpanDialog);
        EditTimeInt->setObjectName(QStringLiteral("EditTimeInt"));
        EditTimeInt->setEnabled(true);

        gridLayout->addWidget(EditTimeInt, 3, 1, 1, 1);

        BtnCancel = new QPushButton(SpanDialog);
        BtnCancel->setObjectName(QStringLiteral("BtnCancel"));
        BtnCancel->setEnabled(true);

        gridLayout->addWidget(BtnCancel, 4, 2, 1, 1);

        dateTime1 = new QDateTimeEdit(SpanDialog);
        dateTime1->setObjectName(QStringLiteral("dateTime1"));
        dateTime1->setCalendarPopup(true);
        dateTime1->setTimeSpec(Qt::LocalTime);

        gridLayout->addWidget(dateTime1, 0, 1, 1, 2);

        dateTime2 = new QDateTimeEdit(SpanDialog);
        dateTime2->setObjectName(QStringLiteral("dateTime2"));
        dateTime2->setCalendarPopup(true);
        dateTime2->setTimeSpec(Qt::LocalTime);

        gridLayout->addWidget(dateTime2, 2, 1, 1, 2);


        retranslateUi(SpanDialog);

        BtnOk->setDefault(true);


        QMetaObject::connectSlotsByName(SpanDialog);
    } // setupUi

    void retranslateUi(QWidget *SpanDialog)
    {
        SpanDialog->setWindowTitle(QApplication::translate("SpanDialog", "Time Span/Interval", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        SpanDialog->setToolTip(QString());
#endif // QT_NO_TOOLTIP
#ifndef QT_NO_TOOLTIP
        TimeStartF->setToolTip(QString());
#endif // QT_NO_TOOLTIP
        TimeStartF->setText(QApplication::translate("SpanDialog", "Time Start (GPST)", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        TimeEndF->setToolTip(QString());
#endif // QT_NO_TOOLTIP
        TimeEndF->setText(QApplication::translate("SpanDialog", "Time End (GPST)", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        TimeIntF->setToolTip(QString());
#endif // QT_NO_TOOLTIP
        TimeIntF->setText(QApplication::translate("SpanDialog", "Interval (s)", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        BtnOk->setToolTip(QString());
#endif // QT_NO_TOOLTIP
        BtnOk->setText(QApplication::translate("SpanDialog", "&OK", Q_NULLPTR));
        EditTimeInt->clear();
        EditTimeInt->insertItems(0, QStringList()
         << QApplication::translate("SpanDialog", "0.1", Q_NULLPTR)
         << QApplication::translate("SpanDialog", "0.2", Q_NULLPTR)
         << QApplication::translate("SpanDialog", "0.25", Q_NULLPTR)
         << QApplication::translate("SpanDialog", "0.5", Q_NULLPTR)
         << QApplication::translate("SpanDialog", "1", Q_NULLPTR)
         << QApplication::translate("SpanDialog", "2", Q_NULLPTR)
         << QApplication::translate("SpanDialog", "5", Q_NULLPTR)
         << QApplication::translate("SpanDialog", "10", Q_NULLPTR)
         << QApplication::translate("SpanDialog", "15", Q_NULLPTR)
         << QApplication::translate("SpanDialog", "30", Q_NULLPTR)
         << QApplication::translate("SpanDialog", "60", Q_NULLPTR)
         << QApplication::translate("SpanDialog", "300", Q_NULLPTR)
         << QApplication::translate("SpanDialog", "600", Q_NULLPTR)
         << QApplication::translate("SpanDialog", "1800", Q_NULLPTR)
         << QApplication::translate("SpanDialog", "3600", Q_NULLPTR)
        );
#ifndef QT_NO_TOOLTIP
        EditTimeInt->setToolTip(QString());
#endif // QT_NO_TOOLTIP
#ifndef QT_NO_TOOLTIP
        BtnCancel->setToolTip(QString());
#endif // QT_NO_TOOLTIP
        BtnCancel->setText(QApplication::translate("SpanDialog", "&Cancel", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class SpanDialog: public Ui_SpanDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_TSPANDLG_H
