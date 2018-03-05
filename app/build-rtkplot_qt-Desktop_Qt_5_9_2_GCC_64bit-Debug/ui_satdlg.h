/********************************************************************************
** Form generated from reading UI file 'satdlg.ui'
**
** Created by: Qt User Interface Compiler version 5.9.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_SATDLG_H
#define UI_SATDLG_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_SatDialog
{
public:
    QGridLayout *gridLayout;
    QWidget *Panel2;
    QVBoxLayout *verticalLayout_2;
    QCheckBox *PRN09;
    QCheckBox *PRN10;
    QCheckBox *PRN11;
    QCheckBox *PRN12;
    QCheckBox *PRN13;
    QCheckBox *PRN14;
    QCheckBox *PRN15;
    QCheckBox *PRN16;
    QWidget *Panel3;
    QVBoxLayout *verticalLayout_4;
    QCheckBox *PRN17;
    QCheckBox *PRN18;
    QCheckBox *PRN19;
    QCheckBox *PRN20;
    QCheckBox *PRN21;
    QCheckBox *PRN22;
    QCheckBox *PRN23;
    QCheckBox *PRN24;
    QWidget *Panel5;
    QVBoxLayout *verticalLayout;
    QCheckBox *PRN25;
    QCheckBox *PRN26;
    QCheckBox *PRN27;
    QCheckBox *PRN28;
    QCheckBox *PRN29;
    QCheckBox *PRN30;
    QCheckBox *PRN31;
    QCheckBox *PRN32;
    QWidget *Panel4;
    QVBoxLayout *verticalLayout_5;
    QCheckBox *SBAS;
    QCheckBox *GLO;
    QCheckBox *GAL;
    QCheckBox *PRN33;
    QWidget *Panel1;
    QVBoxLayout *verticalLayout_3;
    QCheckBox *PRN01;
    QCheckBox *PRN02;
    QCheckBox *PRN03;
    QCheckBox *PRN04;
    QCheckBox *PRN05;
    QCheckBox *PRN06;
    QCheckBox *PRN07;
    QCheckBox *PRN08;
    QWidget *widget;
    QHBoxLayout *horizontalLayout;
    QPushButton *BtnChkAll;
    QPushButton *BtnUnchkAll;
    QPushButton *BtnOk;
    QPushButton *BtnCancel;

    void setupUi(QWidget *SatDialog)
    {
        if (SatDialog->objectName().isEmpty())
            SatDialog->setObjectName(QStringLiteral("SatDialog"));
        SatDialog->resize(460, 266);
        gridLayout = new QGridLayout(SatDialog);
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        Panel2 = new QWidget(SatDialog);
        Panel2->setObjectName(QStringLiteral("Panel2"));
        Panel2->setEnabled(true);
        Panel2->setLayoutDirection(Qt::LeftToRight);
        verticalLayout_2 = new QVBoxLayout(Panel2);
        verticalLayout_2->setObjectName(QStringLiteral("verticalLayout_2"));
        PRN09 = new QCheckBox(Panel2);
        PRN09->setObjectName(QStringLiteral("PRN09"));
        PRN09->setChecked(false);

        verticalLayout_2->addWidget(PRN09);

        PRN10 = new QCheckBox(Panel2);
        PRN10->setObjectName(QStringLiteral("PRN10"));
        PRN10->setChecked(false);

        verticalLayout_2->addWidget(PRN10);

        PRN11 = new QCheckBox(Panel2);
        PRN11->setObjectName(QStringLiteral("PRN11"));
        PRN11->setChecked(false);

        verticalLayout_2->addWidget(PRN11);

        PRN12 = new QCheckBox(Panel2);
        PRN12->setObjectName(QStringLiteral("PRN12"));
        PRN12->setChecked(false);

        verticalLayout_2->addWidget(PRN12);

        PRN13 = new QCheckBox(Panel2);
        PRN13->setObjectName(QStringLiteral("PRN13"));
        PRN13->setChecked(false);

        verticalLayout_2->addWidget(PRN13);

        PRN14 = new QCheckBox(Panel2);
        PRN14->setObjectName(QStringLiteral("PRN14"));
        PRN14->setChecked(false);

        verticalLayout_2->addWidget(PRN14);

        PRN15 = new QCheckBox(Panel2);
        PRN15->setObjectName(QStringLiteral("PRN15"));
        PRN15->setChecked(false);

        verticalLayout_2->addWidget(PRN15);

        PRN16 = new QCheckBox(Panel2);
        PRN16->setObjectName(QStringLiteral("PRN16"));
        PRN16->setChecked(false);

        verticalLayout_2->addWidget(PRN16);


        gridLayout->addWidget(Panel2, 0, 2, 1, 1);

        Panel3 = new QWidget(SatDialog);
        Panel3->setObjectName(QStringLiteral("Panel3"));
        Panel3->setEnabled(true);
        Panel3->setLayoutDirection(Qt::LeftToRight);
        verticalLayout_4 = new QVBoxLayout(Panel3);
        verticalLayout_4->setObjectName(QStringLiteral("verticalLayout_4"));
        PRN17 = new QCheckBox(Panel3);
        PRN17->setObjectName(QStringLiteral("PRN17"));
        PRN17->setChecked(false);

        verticalLayout_4->addWidget(PRN17);

        PRN18 = new QCheckBox(Panel3);
        PRN18->setObjectName(QStringLiteral("PRN18"));
        PRN18->setChecked(false);

        verticalLayout_4->addWidget(PRN18);

        PRN19 = new QCheckBox(Panel3);
        PRN19->setObjectName(QStringLiteral("PRN19"));
        PRN19->setChecked(false);

        verticalLayout_4->addWidget(PRN19);

        PRN20 = new QCheckBox(Panel3);
        PRN20->setObjectName(QStringLiteral("PRN20"));
        PRN20->setChecked(false);

        verticalLayout_4->addWidget(PRN20);

        PRN21 = new QCheckBox(Panel3);
        PRN21->setObjectName(QStringLiteral("PRN21"));
        PRN21->setChecked(false);

        verticalLayout_4->addWidget(PRN21);

        PRN22 = new QCheckBox(Panel3);
        PRN22->setObjectName(QStringLiteral("PRN22"));
        PRN22->setChecked(false);

        verticalLayout_4->addWidget(PRN22);

        PRN23 = new QCheckBox(Panel3);
        PRN23->setObjectName(QStringLiteral("PRN23"));
        PRN23->setChecked(false);

        verticalLayout_4->addWidget(PRN23);

        PRN24 = new QCheckBox(Panel3);
        PRN24->setObjectName(QStringLiteral("PRN24"));
        PRN24->setChecked(false);

        verticalLayout_4->addWidget(PRN24);


        gridLayout->addWidget(Panel3, 0, 3, 1, 1);

        Panel5 = new QWidget(SatDialog);
        Panel5->setObjectName(QStringLiteral("Panel5"));
        Panel5->setEnabled(true);
        Panel5->setLayoutDirection(Qt::LeftToRight);
        verticalLayout = new QVBoxLayout(Panel5);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        PRN25 = new QCheckBox(Panel5);
        PRN25->setObjectName(QStringLiteral("PRN25"));
        PRN25->setChecked(false);

        verticalLayout->addWidget(PRN25);

        PRN26 = new QCheckBox(Panel5);
        PRN26->setObjectName(QStringLiteral("PRN26"));
        PRN26->setChecked(false);

        verticalLayout->addWidget(PRN26);

        PRN27 = new QCheckBox(Panel5);
        PRN27->setObjectName(QStringLiteral("PRN27"));
        PRN27->setChecked(false);

        verticalLayout->addWidget(PRN27);

        PRN28 = new QCheckBox(Panel5);
        PRN28->setObjectName(QStringLiteral("PRN28"));
        PRN28->setChecked(false);

        verticalLayout->addWidget(PRN28);

        PRN29 = new QCheckBox(Panel5);
        PRN29->setObjectName(QStringLiteral("PRN29"));
        PRN29->setChecked(false);

        verticalLayout->addWidget(PRN29);

        PRN30 = new QCheckBox(Panel5);
        PRN30->setObjectName(QStringLiteral("PRN30"));
        PRN30->setChecked(false);

        verticalLayout->addWidget(PRN30);

        PRN31 = new QCheckBox(Panel5);
        PRN31->setObjectName(QStringLiteral("PRN31"));
        PRN31->setChecked(false);

        verticalLayout->addWidget(PRN31);

        PRN32 = new QCheckBox(Panel5);
        PRN32->setObjectName(QStringLiteral("PRN32"));
        PRN32->setChecked(false);

        verticalLayout->addWidget(PRN32);


        gridLayout->addWidget(Panel5, 0, 4, 1, 1);

        Panel4 = new QWidget(SatDialog);
        Panel4->setObjectName(QStringLiteral("Panel4"));
        Panel4->setEnabled(true);
        Panel4->setLayoutDirection(Qt::LeftToRight);
        verticalLayout_5 = new QVBoxLayout(Panel4);
        verticalLayout_5->setObjectName(QStringLiteral("verticalLayout_5"));
        SBAS = new QCheckBox(Panel4);
        SBAS->setObjectName(QStringLiteral("SBAS"));
        SBAS->setChecked(false);

        verticalLayout_5->addWidget(SBAS);

        GLO = new QCheckBox(Panel4);
        GLO->setObjectName(QStringLiteral("GLO"));
        GLO->setChecked(false);

        verticalLayout_5->addWidget(GLO);

        GAL = new QCheckBox(Panel4);
        GAL->setObjectName(QStringLiteral("GAL"));
        GAL->setChecked(false);

        verticalLayout_5->addWidget(GAL);

        PRN33 = new QCheckBox(Panel4);
        PRN33->setObjectName(QStringLiteral("PRN33"));
        PRN33->setChecked(false);

        verticalLayout_5->addWidget(PRN33);


        gridLayout->addWidget(Panel4, 0, 5, 1, 1);

        Panel1 = new QWidget(SatDialog);
        Panel1->setObjectName(QStringLiteral("Panel1"));
        Panel1->setEnabled(true);
        Panel1->setLayoutDirection(Qt::LeftToRight);
        verticalLayout_3 = new QVBoxLayout(Panel1);
        verticalLayout_3->setObjectName(QStringLiteral("verticalLayout_3"));
        PRN01 = new QCheckBox(Panel1);
        PRN01->setObjectName(QStringLiteral("PRN01"));
        PRN01->setChecked(false);

        verticalLayout_3->addWidget(PRN01);

        PRN02 = new QCheckBox(Panel1);
        PRN02->setObjectName(QStringLiteral("PRN02"));
        PRN02->setChecked(false);

        verticalLayout_3->addWidget(PRN02);

        PRN03 = new QCheckBox(Panel1);
        PRN03->setObjectName(QStringLiteral("PRN03"));
        PRN03->setChecked(false);

        verticalLayout_3->addWidget(PRN03);

        PRN04 = new QCheckBox(Panel1);
        PRN04->setObjectName(QStringLiteral("PRN04"));
        PRN04->setChecked(false);

        verticalLayout_3->addWidget(PRN04);

        PRN05 = new QCheckBox(Panel1);
        PRN05->setObjectName(QStringLiteral("PRN05"));
        PRN05->setChecked(false);

        verticalLayout_3->addWidget(PRN05);

        PRN06 = new QCheckBox(Panel1);
        PRN06->setObjectName(QStringLiteral("PRN06"));
        PRN06->setChecked(false);

        verticalLayout_3->addWidget(PRN06);

        PRN07 = new QCheckBox(Panel1);
        PRN07->setObjectName(QStringLiteral("PRN07"));
        PRN07->setChecked(false);

        verticalLayout_3->addWidget(PRN07);

        PRN08 = new QCheckBox(Panel1);
        PRN08->setObjectName(QStringLiteral("PRN08"));
        PRN08->setChecked(false);

        verticalLayout_3->addWidget(PRN08);


        gridLayout->addWidget(Panel1, 0, 1, 1, 1);

        widget = new QWidget(SatDialog);
        widget->setObjectName(QStringLiteral("widget"));
        QSizePolicy sizePolicy(QSizePolicy::Preferred, QSizePolicy::Fixed);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(widget->sizePolicy().hasHeightForWidth());
        widget->setSizePolicy(sizePolicy);
        horizontalLayout = new QHBoxLayout(widget);
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        horizontalLayout->setContentsMargins(0, 0, 0, 0);
        BtnChkAll = new QPushButton(widget);
        BtnChkAll->setObjectName(QStringLiteral("BtnChkAll"));
        BtnChkAll->setEnabled(true);

        horizontalLayout->addWidget(BtnChkAll);

        BtnUnchkAll = new QPushButton(widget);
        BtnUnchkAll->setObjectName(QStringLiteral("BtnUnchkAll"));
        BtnUnchkAll->setEnabled(true);

        horizontalLayout->addWidget(BtnUnchkAll);

        BtnOk = new QPushButton(widget);
        BtnOk->setObjectName(QStringLiteral("BtnOk"));
        BtnOk->setEnabled(true);
        BtnOk->setAutoDefault(true);

        horizontalLayout->addWidget(BtnOk);

        BtnCancel = new QPushButton(widget);
        BtnCancel->setObjectName(QStringLiteral("BtnCancel"));
        BtnCancel->setEnabled(true);

        horizontalLayout->addWidget(BtnCancel);


        gridLayout->addWidget(widget, 1, 1, 1, 5);

        QWidget::setTabOrder(PRN01, PRN02);
        QWidget::setTabOrder(PRN02, PRN03);
        QWidget::setTabOrder(PRN03, PRN04);
        QWidget::setTabOrder(PRN04, PRN05);
        QWidget::setTabOrder(PRN05, PRN06);
        QWidget::setTabOrder(PRN06, PRN07);
        QWidget::setTabOrder(PRN07, PRN08);
        QWidget::setTabOrder(PRN08, PRN09);
        QWidget::setTabOrder(PRN09, PRN10);
        QWidget::setTabOrder(PRN10, PRN11);
        QWidget::setTabOrder(PRN11, PRN12);
        QWidget::setTabOrder(PRN12, PRN13);
        QWidget::setTabOrder(PRN13, PRN14);
        QWidget::setTabOrder(PRN14, PRN15);
        QWidget::setTabOrder(PRN15, PRN16);
        QWidget::setTabOrder(PRN16, PRN17);
        QWidget::setTabOrder(PRN17, PRN18);
        QWidget::setTabOrder(PRN18, PRN19);
        QWidget::setTabOrder(PRN19, PRN20);
        QWidget::setTabOrder(PRN20, PRN21);
        QWidget::setTabOrder(PRN21, PRN22);
        QWidget::setTabOrder(PRN22, PRN23);
        QWidget::setTabOrder(PRN23, PRN24);
        QWidget::setTabOrder(PRN24, PRN25);
        QWidget::setTabOrder(PRN25, PRN26);
        QWidget::setTabOrder(PRN26, PRN27);
        QWidget::setTabOrder(PRN27, PRN28);
        QWidget::setTabOrder(PRN28, PRN29);
        QWidget::setTabOrder(PRN29, PRN30);
        QWidget::setTabOrder(PRN30, PRN31);
        QWidget::setTabOrder(PRN31, PRN32);
        QWidget::setTabOrder(PRN32, SBAS);
        QWidget::setTabOrder(SBAS, GLO);
        QWidget::setTabOrder(GLO, GAL);
        QWidget::setTabOrder(GAL, PRN33);
        QWidget::setTabOrder(PRN33, BtnChkAll);
        QWidget::setTabOrder(BtnChkAll, BtnUnchkAll);
        QWidget::setTabOrder(BtnUnchkAll, BtnOk);
        QWidget::setTabOrder(BtnOk, BtnCancel);

        retranslateUi(SatDialog);

        BtnOk->setDefault(true);


        QMetaObject::connectSlotsByName(SatDialog);
    } // setupUi

    void retranslateUi(QWidget *SatDialog)
    {
        SatDialog->setWindowTitle(QApplication::translate("SatDialog", "Satellites", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        SatDialog->setToolTip(QString());
#endif // QT_NO_TOOLTIP
#ifndef QT_NO_TOOLTIP
        Panel2->setToolTip(QString());
#endif // QT_NO_TOOLTIP
        Panel2->setProperty("text", QVariant(QString()));
#ifndef QT_NO_TOOLTIP
        PRN09->setToolTip(QString());
#endif // QT_NO_TOOLTIP
        PRN09->setText(QApplication::translate("SatDialog", "PRN09", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        PRN10->setToolTip(QString());
#endif // QT_NO_TOOLTIP
        PRN10->setText(QApplication::translate("SatDialog", "PRN10", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        PRN11->setToolTip(QString());
#endif // QT_NO_TOOLTIP
        PRN11->setText(QApplication::translate("SatDialog", "PRN11", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        PRN12->setToolTip(QString());
#endif // QT_NO_TOOLTIP
        PRN12->setText(QApplication::translate("SatDialog", "PRN12", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        PRN13->setToolTip(QString());
#endif // QT_NO_TOOLTIP
        PRN13->setText(QApplication::translate("SatDialog", "PRN13", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        PRN14->setToolTip(QString());
#endif // QT_NO_TOOLTIP
        PRN14->setText(QApplication::translate("SatDialog", "PRN14", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        PRN15->setToolTip(QString());
#endif // QT_NO_TOOLTIP
        PRN15->setText(QApplication::translate("SatDialog", "PRN15", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        PRN16->setToolTip(QString());
#endif // QT_NO_TOOLTIP
        PRN16->setText(QApplication::translate("SatDialog", "PRN16", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        Panel3->setToolTip(QString());
#endif // QT_NO_TOOLTIP
        Panel3->setProperty("text", QVariant(QString()));
#ifndef QT_NO_TOOLTIP
        PRN17->setToolTip(QString());
#endif // QT_NO_TOOLTIP
        PRN17->setText(QApplication::translate("SatDialog", "PRN17", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        PRN18->setToolTip(QString());
#endif // QT_NO_TOOLTIP
        PRN18->setText(QApplication::translate("SatDialog", "PRN18", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        PRN19->setToolTip(QString());
#endif // QT_NO_TOOLTIP
        PRN19->setText(QApplication::translate("SatDialog", "PRN19", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        PRN20->setToolTip(QString());
#endif // QT_NO_TOOLTIP
        PRN20->setText(QApplication::translate("SatDialog", "PRN20", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        PRN21->setToolTip(QString());
#endif // QT_NO_TOOLTIP
        PRN21->setText(QApplication::translate("SatDialog", "PRN21", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        PRN22->setToolTip(QString());
#endif // QT_NO_TOOLTIP
        PRN22->setText(QApplication::translate("SatDialog", "PRN22", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        PRN23->setToolTip(QString());
#endif // QT_NO_TOOLTIP
        PRN23->setText(QApplication::translate("SatDialog", "PRN23", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        PRN24->setToolTip(QString());
#endif // QT_NO_TOOLTIP
        PRN24->setText(QApplication::translate("SatDialog", "PRN24", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        Panel5->setToolTip(QString());
#endif // QT_NO_TOOLTIP
        Panel5->setProperty("text", QVariant(QString()));
#ifndef QT_NO_TOOLTIP
        PRN25->setToolTip(QString());
#endif // QT_NO_TOOLTIP
        PRN25->setText(QApplication::translate("SatDialog", "PRN25", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        PRN26->setToolTip(QString());
#endif // QT_NO_TOOLTIP
        PRN26->setText(QApplication::translate("SatDialog", "PRN26", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        PRN27->setToolTip(QString());
#endif // QT_NO_TOOLTIP
        PRN27->setText(QApplication::translate("SatDialog", "PRN27", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        PRN28->setToolTip(QString());
#endif // QT_NO_TOOLTIP
        PRN28->setText(QApplication::translate("SatDialog", "PRN28", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        PRN29->setToolTip(QString());
#endif // QT_NO_TOOLTIP
        PRN29->setText(QApplication::translate("SatDialog", "PRN29", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        PRN30->setToolTip(QString());
#endif // QT_NO_TOOLTIP
        PRN30->setText(QApplication::translate("SatDialog", "PRN30", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        PRN31->setToolTip(QString());
#endif // QT_NO_TOOLTIP
        PRN31->setText(QApplication::translate("SatDialog", "PRN31", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        PRN32->setToolTip(QString());
#endif // QT_NO_TOOLTIP
        PRN32->setText(QApplication::translate("SatDialog", "PRN32", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        Panel4->setToolTip(QString());
#endif // QT_NO_TOOLTIP
        Panel4->setProperty("text", QVariant(QString()));
#ifndef QT_NO_TOOLTIP
        SBAS->setToolTip(QString());
#endif // QT_NO_TOOLTIP
        SBAS->setText(QApplication::translate("SatDialog", "SBAS", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        GLO->setToolTip(QString());
#endif // QT_NO_TOOLTIP
        GLO->setText(QApplication::translate("SatDialog", "GLO", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        GAL->setToolTip(QString());
#endif // QT_NO_TOOLTIP
        GAL->setText(QApplication::translate("SatDialog", "GAL", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        PRN33->setToolTip(QString());
#endif // QT_NO_TOOLTIP
        PRN33->setText(QApplication::translate("SatDialog", "PRN33-", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        Panel1->setToolTip(QString());
#endif // QT_NO_TOOLTIP
        Panel1->setProperty("text", QVariant(QString()));
#ifndef QT_NO_TOOLTIP
        PRN01->setToolTip(QString());
#endif // QT_NO_TOOLTIP
        PRN01->setText(QApplication::translate("SatDialog", "PRN01", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        PRN02->setToolTip(QString());
#endif // QT_NO_TOOLTIP
        PRN02->setText(QApplication::translate("SatDialog", "PRN02", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        PRN03->setToolTip(QString());
#endif // QT_NO_TOOLTIP
        PRN03->setText(QApplication::translate("SatDialog", "PRN03", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        PRN04->setToolTip(QString());
#endif // QT_NO_TOOLTIP
        PRN04->setText(QApplication::translate("SatDialog", "PRN04", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        PRN05->setToolTip(QString());
#endif // QT_NO_TOOLTIP
        PRN05->setText(QApplication::translate("SatDialog", "PRN05", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        PRN06->setToolTip(QString());
#endif // QT_NO_TOOLTIP
        PRN06->setText(QApplication::translate("SatDialog", "PRN06", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        PRN07->setToolTip(QString());
#endif // QT_NO_TOOLTIP
        PRN07->setText(QApplication::translate("SatDialog", "PRN07", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        PRN08->setToolTip(QString());
#endif // QT_NO_TOOLTIP
        PRN08->setText(QApplication::translate("SatDialog", "PRN08", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        BtnChkAll->setToolTip(QString());
#endif // QT_NO_TOOLTIP
        BtnChkAll->setText(QApplication::translate("SatDialog", "&Check All", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        BtnUnchkAll->setToolTip(QString());
#endif // QT_NO_TOOLTIP
        BtnUnchkAll->setText(QApplication::translate("SatDialog", "&Uncheck All", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        BtnOk->setToolTip(QString());
#endif // QT_NO_TOOLTIP
        BtnOk->setText(QApplication::translate("SatDialog", "&OK", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        BtnCancel->setToolTip(QString());
#endif // QT_NO_TOOLTIP
        BtnCancel->setText(QApplication::translate("SatDialog", "&Cancel", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class SatDialog: public Ui_SatDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_SATDLG_H
