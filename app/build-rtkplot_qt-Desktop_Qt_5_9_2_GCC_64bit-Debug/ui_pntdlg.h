/********************************************************************************
** Form generated from reading UI file 'pntdlg.ui'
**
** Created by: Qt User Interface Compiler version 5.9.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_PNTDLG_H
#define UI_PNTDLG_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QFrame>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QTableWidget>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_PntDialog
{
public:
    QVBoxLayout *verticalLayout;
    QWidget *Panel1;
    QHBoxLayout *horizontalLayout;
    QFrame *frame;
    QHBoxLayout *horizontalLayout_3;
    QTableWidget *PntList;
    QWidget *widget;
    QHBoxLayout *horizontalLayout_2;
    QPushButton *BtnAdd;
    QPushButton *BtnDel;
    QPushButton *BtnUpdate;
    QPushButton *BtnClose;

    void setupUi(QWidget *PntDialog)
    {
        if (PntDialog->objectName().isEmpty())
            PntDialog->setObjectName(QStringLiteral("PntDialog"));
        PntDialog->resize(516, 216);
        verticalLayout = new QVBoxLayout(PntDialog);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        Panel1 = new QWidget(PntDialog);
        Panel1->setObjectName(QStringLiteral("Panel1"));
        Panel1->setEnabled(true);
        QSizePolicy sizePolicy(QSizePolicy::Preferred, QSizePolicy::Fixed);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(Panel1->sizePolicy().hasHeightForWidth());
        Panel1->setSizePolicy(sizePolicy);
        Panel1->setLayoutDirection(Qt::LeftToRight);
        horizontalLayout = new QHBoxLayout(Panel1);
        horizontalLayout->setSpacing(0);
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        horizontalLayout->setContentsMargins(0, 0, 0, 0);

        verticalLayout->addWidget(Panel1);

        frame = new QFrame(PntDialog);
        frame->setObjectName(QStringLiteral("frame"));
        frame->setFrameShape(QFrame::StyledPanel);
        horizontalLayout_3 = new QHBoxLayout(frame);
        horizontalLayout_3->setSpacing(0);
        horizontalLayout_3->setObjectName(QStringLiteral("horizontalLayout_3"));
        horizontalLayout_3->setContentsMargins(0, 0, 0, 0);
        PntList = new QTableWidget(frame);
        PntList->setObjectName(QStringLiteral("PntList"));

        horizontalLayout_3->addWidget(PntList);


        verticalLayout->addWidget(frame);

        widget = new QWidget(PntDialog);
        widget->setObjectName(QStringLiteral("widget"));
        sizePolicy.setHeightForWidth(widget->sizePolicy().hasHeightForWidth());
        widget->setSizePolicy(sizePolicy);
        horizontalLayout_2 = new QHBoxLayout(widget);
        horizontalLayout_2->setObjectName(QStringLiteral("horizontalLayout_2"));
        horizontalLayout_2->setContentsMargins(0, 0, 0, 0);
        BtnAdd = new QPushButton(widget);
        BtnAdd->setObjectName(QStringLiteral("BtnAdd"));
        BtnAdd->setEnabled(true);

        horizontalLayout_2->addWidget(BtnAdd);

        BtnDel = new QPushButton(widget);
        BtnDel->setObjectName(QStringLiteral("BtnDel"));
        BtnDel->setEnabled(true);

        horizontalLayout_2->addWidget(BtnDel);

        BtnUpdate = new QPushButton(widget);
        BtnUpdate->setObjectName(QStringLiteral("BtnUpdate"));

        horizontalLayout_2->addWidget(BtnUpdate);

        BtnClose = new QPushButton(widget);
        BtnClose->setObjectName(QStringLiteral("BtnClose"));
        BtnClose->setEnabled(true);
        BtnClose->setAutoDefault(true);

        horizontalLayout_2->addWidget(BtnClose);


        verticalLayout->addWidget(widget);


        retranslateUi(PntDialog);

        BtnClose->setDefault(true);


        QMetaObject::connectSlotsByName(PntDialog);
    } // setupUi

    void retranslateUi(QWidget *PntDialog)
    {
        PntDialog->setWindowTitle(QApplication::translate("PntDialog", "Waypoint", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        PntDialog->setToolTip(QString());
#endif // QT_NO_TOOLTIP
#ifndef QT_NO_TOOLTIP
        Panel1->setToolTip(QString());
#endif // QT_NO_TOOLTIP
        Panel1->setProperty("text", QVariant(QString()));
#ifndef QT_NO_TOOLTIP
        BtnAdd->setToolTip(QString());
#endif // QT_NO_TOOLTIP
        BtnAdd->setText(QApplication::translate("PntDialog", "&Add", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        BtnDel->setToolTip(QString());
#endif // QT_NO_TOOLTIP
        BtnDel->setText(QApplication::translate("PntDialog", "&Delete", Q_NULLPTR));
        BtnUpdate->setText(QApplication::translate("PntDialog", "Update", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        BtnClose->setToolTip(QString());
#endif // QT_NO_TOOLTIP
        BtnClose->setText(QApplication::translate("PntDialog", "&Close", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class PntDialog: public Ui_PntDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_PNTDLG_H
