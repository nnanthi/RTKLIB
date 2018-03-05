/********************************************************************************
** Form generated from reading UI file 'refdlg.ui'
**
** Created by: Qt User Interface Compiler version 5.9.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_REFDLG_H
#define UI_REFDLG_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QTableWidget>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_RefDialog
{
public:
    QVBoxLayout *verticalLayout;
    QTableWidget *StaList;
    QWidget *widget;
    QHBoxLayout *horizontalLayout;
    QPushButton *BtnLoad;
    QLineEdit *FindStr;
    QPushButton *BtnFind;
    QPushButton *BtnOK;
    QPushButton *BtnCancel;

    void setupUi(QWidget *RefDialog)
    {
        if (RefDialog->objectName().isEmpty())
            RefDialog->setObjectName(QStringLiteral("RefDialog"));
        RefDialog->resize(542, 445);
        verticalLayout = new QVBoxLayout(RefDialog);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        StaList = new QTableWidget(RefDialog);
        if (StaList->columnCount() < 2)
            StaList->setColumnCount(2);
        StaList->setObjectName(QStringLiteral("StaList"));
        StaList->setColumnCount(2);
        StaList->horizontalHeader()->setStretchLastSection(true);
        StaList->verticalHeader()->setVisible(false);

        verticalLayout->addWidget(StaList);

        widget = new QWidget(RefDialog);
        widget->setObjectName(QStringLiteral("widget"));
        QSizePolicy sizePolicy(QSizePolicy::Preferred, QSizePolicy::Maximum);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(widget->sizePolicy().hasHeightForWidth());
        widget->setSizePolicy(sizePolicy);
        horizontalLayout = new QHBoxLayout(widget);
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        horizontalLayout->setContentsMargins(0, 0, 0, 0);
        BtnLoad = new QPushButton(widget);
        BtnLoad->setObjectName(QStringLiteral("BtnLoad"));
        BtnLoad->setEnabled(true);
        QSizePolicy sizePolicy1(QSizePolicy::Fixed, QSizePolicy::Fixed);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(BtnLoad->sizePolicy().hasHeightForWidth());
        BtnLoad->setSizePolicy(sizePolicy1);

        horizontalLayout->addWidget(BtnLoad);

        FindStr = new QLineEdit(widget);
        FindStr->setObjectName(QStringLiteral("FindStr"));
        FindStr->setEnabled(true);

        horizontalLayout->addWidget(FindStr);

        BtnFind = new QPushButton(widget);
        BtnFind->setObjectName(QStringLiteral("BtnFind"));
        BtnFind->setEnabled(true);
        sizePolicy1.setHeightForWidth(BtnFind->sizePolicy().hasHeightForWidth());
        BtnFind->setSizePolicy(sizePolicy1);

        horizontalLayout->addWidget(BtnFind);

        BtnOK = new QPushButton(widget);
        BtnOK->setObjectName(QStringLiteral("BtnOK"));
        BtnOK->setEnabled(true);
        sizePolicy1.setHeightForWidth(BtnOK->sizePolicy().hasHeightForWidth());
        BtnOK->setSizePolicy(sizePolicy1);
        BtnOK->setAutoDefault(true);

        horizontalLayout->addWidget(BtnOK);

        BtnCancel = new QPushButton(widget);
        BtnCancel->setObjectName(QStringLiteral("BtnCancel"));
        BtnCancel->setEnabled(true);
        sizePolicy1.setHeightForWidth(BtnCancel->sizePolicy().hasHeightForWidth());
        BtnCancel->setSizePolicy(sizePolicy1);

        horizontalLayout->addWidget(BtnCancel);


        verticalLayout->addWidget(widget);


        retranslateUi(RefDialog);

        BtnOK->setDefault(true);


        QMetaObject::connectSlotsByName(RefDialog);
    } // setupUi

    void retranslateUi(QWidget *RefDialog)
    {
        RefDialog->setWindowTitle(QApplication::translate("RefDialog", "Stations", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        RefDialog->setToolTip(QString());
#endif // QT_NO_TOOLTIP
#ifndef QT_NO_TOOLTIP
        BtnLoad->setToolTip(QString());
#endif // QT_NO_TOOLTIP
        BtnLoad->setText(QApplication::translate("RefDialog", "&Load", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        FindStr->setToolTip(QString());
#endif // QT_NO_TOOLTIP
        FindStr->setText(QString());
#ifndef QT_NO_TOOLTIP
        BtnFind->setToolTip(QString());
#endif // QT_NO_TOOLTIP
        BtnFind->setText(QApplication::translate("RefDialog", "Find", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        BtnOK->setToolTip(QString());
#endif // QT_NO_TOOLTIP
        BtnOK->setText(QApplication::translate("RefDialog", "&OK", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        BtnCancel->setToolTip(QString());
#endif // QT_NO_TOOLTIP
        BtnCancel->setText(QApplication::translate("RefDialog", "&Cancel", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class RefDialog: public Ui_RefDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_REFDLG_H
