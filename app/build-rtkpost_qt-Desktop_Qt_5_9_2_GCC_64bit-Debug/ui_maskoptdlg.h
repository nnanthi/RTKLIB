/********************************************************************************
** Form generated from reading UI file 'maskoptdlg.ui'
**
** Created by: Qt User Interface Compiler version 5.9.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MASKOPTDLG_H
#define UI_MASKOPTDLG_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QDoubleSpinBox>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MaskOptDialog
{
public:
    QGridLayout *gridLayout;
    QLabel *Label1;
    QLabel *Label11;
    QLabel *Label10;
    QDoubleSpinBox *Mask_2_4;
    QLabel *Label14;
    QDoubleSpinBox *Mask_2_2;
    QDoubleSpinBox *Mask_2_3;
    QLabel *Label7;
    QLabel *Label5;
    QPushButton *BtnCancel;
    QPushButton *BtnOk;
    QDoubleSpinBox *Mask_2_5;
    QDoubleSpinBox *Mask_2_7;
    QDoubleSpinBox *Mask_2_6;
    QDoubleSpinBox *Mask_3_1;
    QDoubleSpinBox *Mask_3_6;
    QDoubleSpinBox *Mask_3_5;
    QDoubleSpinBox *Mask_3_3;
    QLabel *Label13;
    QDoubleSpinBox *Mask_1_9;
    QLabel *Label8;
    QDoubleSpinBox *Mask_1_3;
    QDoubleSpinBox *Mask_1_1;
    QDoubleSpinBox *Mask_1_8;
    QDoubleSpinBox *Mask_1_7;
    QDoubleSpinBox *Mask_1_5;
    QDoubleSpinBox *Mask_2_9;
    QDoubleSpinBox *Mask_2_8;
    QDoubleSpinBox *Mask_3_2;
    QDoubleSpinBox *Mask_3_4;
    QDoubleSpinBox *Mask_1_2;
    QLabel *Label12;
    QDoubleSpinBox *Mask_1_6;
    QDoubleSpinBox *Mask_1_4;
    QLabel *Label9;
    QLabel *Label4;
    QLabel *Label2;
    QDoubleSpinBox *Mask_2_1;
    QDoubleSpinBox *Mask_3_8;
    QDoubleSpinBox *Mask_3_9;
    QDoubleSpinBox *Mask_3_7;
    QWidget *widget;
    QHBoxLayout *horizontalLayout;
    QCheckBox *MaskEna1;
    QCheckBox *MaskEna2;
    QLabel *Label3;
    QLabel *Label6;

    void setupUi(QWidget *MaskOptDialog)
    {
        if (MaskOptDialog->objectName().isEmpty())
            MaskOptDialog->setObjectName(QStringLiteral("MaskOptDialog"));
        MaskOptDialog->resize(1017, 242);
        gridLayout = new QGridLayout(MaskOptDialog);
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        Label1 = new QLabel(MaskOptDialog);
        Label1->setObjectName(QStringLiteral("Label1"));
        Label1->setEnabled(true);
        QSizePolicy sizePolicy(QSizePolicy::Maximum, QSizePolicy::Preferred);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(Label1->sizePolicy().hasHeightForWidth());
        Label1->setSizePolicy(sizePolicy);

        gridLayout->addWidget(Label1, 3, 0, 1, 1);

        Label11 = new QLabel(MaskOptDialog);
        Label11->setObjectName(QStringLiteral("Label11"));
        Label11->setEnabled(true);
        QSizePolicy sizePolicy1(QSizePolicy::Preferred, QSizePolicy::Fixed);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(Label11->sizePolicy().hasHeightForWidth());
        Label11->setSizePolicy(sizePolicy1);

        gridLayout->addWidget(Label11, 2, 8, 1, 1);

        Label10 = new QLabel(MaskOptDialog);
        Label10->setObjectName(QStringLiteral("Label10"));
        Label10->setEnabled(true);
        sizePolicy1.setHeightForWidth(Label10->sizePolicy().hasHeightForWidth());
        Label10->setSizePolicy(sizePolicy1);

        gridLayout->addWidget(Label10, 2, 7, 1, 1);

        Mask_2_4 = new QDoubleSpinBox(MaskOptDialog);
        Mask_2_4->setObjectName(QStringLiteral("Mask_2_4"));
        Mask_2_4->setEnabled(true);
        Mask_2_4->setMaximum(90);

        gridLayout->addWidget(Mask_2_4, 4, 4, 1, 1);

        Label14 = new QLabel(MaskOptDialog);
        Label14->setObjectName(QStringLiteral("Label14"));
        Label14->setEnabled(true);
        sizePolicy.setHeightForWidth(Label14->sizePolicy().hasHeightForWidth());
        Label14->setSizePolicy(sizePolicy);

        gridLayout->addWidget(Label14, 5, 0, 1, 1);

        Mask_2_2 = new QDoubleSpinBox(MaskOptDialog);
        Mask_2_2->setObjectName(QStringLiteral("Mask_2_2"));
        Mask_2_2->setEnabled(true);
        Mask_2_2->setMaximum(90);

        gridLayout->addWidget(Mask_2_2, 4, 2, 1, 1);

        Mask_2_3 = new QDoubleSpinBox(MaskOptDialog);
        Mask_2_3->setObjectName(QStringLiteral("Mask_2_3"));
        Mask_2_3->setEnabled(true);
        Mask_2_3->setMaximum(90);

        gridLayout->addWidget(Mask_2_3, 4, 3, 1, 1);

        Label7 = new QLabel(MaskOptDialog);
        Label7->setObjectName(QStringLiteral("Label7"));
        Label7->setEnabled(true);
        sizePolicy1.setHeightForWidth(Label7->sizePolicy().hasHeightForWidth());
        Label7->setSizePolicy(sizePolicy1);

        gridLayout->addWidget(Label7, 2, 4, 1, 1);

        Label5 = new QLabel(MaskOptDialog);
        Label5->setObjectName(QStringLiteral("Label5"));
        Label5->setEnabled(true);
        sizePolicy1.setHeightForWidth(Label5->sizePolicy().hasHeightForWidth());
        Label5->setSizePolicy(sizePolicy1);

        gridLayout->addWidget(Label5, 2, 3, 1, 1);

        BtnCancel = new QPushButton(MaskOptDialog);
        BtnCancel->setObjectName(QStringLiteral("BtnCancel"));
        BtnCancel->setEnabled(true);

        gridLayout->addWidget(BtnCancel, 6, 8, 1, 2);

        BtnOk = new QPushButton(MaskOptDialog);
        BtnOk->setObjectName(QStringLiteral("BtnOk"));
        BtnOk->setEnabled(true);
        BtnOk->setAutoDefault(true);

        gridLayout->addWidget(BtnOk, 6, 6, 1, 2);

        Mask_2_5 = new QDoubleSpinBox(MaskOptDialog);
        Mask_2_5->setObjectName(QStringLiteral("Mask_2_5"));
        Mask_2_5->setEnabled(true);
        Mask_2_5->setMaximum(90);

        gridLayout->addWidget(Mask_2_5, 4, 5, 1, 1);

        Mask_2_7 = new QDoubleSpinBox(MaskOptDialog);
        Mask_2_7->setObjectName(QStringLiteral("Mask_2_7"));
        Mask_2_7->setEnabled(true);
        Mask_2_7->setMaximum(90);

        gridLayout->addWidget(Mask_2_7, 4, 7, 1, 1);

        Mask_2_6 = new QDoubleSpinBox(MaskOptDialog);
        Mask_2_6->setObjectName(QStringLiteral("Mask_2_6"));
        Mask_2_6->setEnabled(true);
        Mask_2_6->setMaximum(90);

        gridLayout->addWidget(Mask_2_6, 4, 6, 1, 1);

        Mask_3_1 = new QDoubleSpinBox(MaskOptDialog);
        Mask_3_1->setObjectName(QStringLiteral("Mask_3_1"));
        Mask_3_1->setEnabled(true);
        Mask_3_1->setMaximum(90);

        gridLayout->addWidget(Mask_3_1, 5, 1, 1, 1);

        Mask_3_6 = new QDoubleSpinBox(MaskOptDialog);
        Mask_3_6->setObjectName(QStringLiteral("Mask_3_6"));
        Mask_3_6->setEnabled(true);
        Mask_3_6->setMaximum(90);

        gridLayout->addWidget(Mask_3_6, 5, 6, 1, 1);

        Mask_3_5 = new QDoubleSpinBox(MaskOptDialog);
        Mask_3_5->setObjectName(QStringLiteral("Mask_3_5"));
        Mask_3_5->setEnabled(true);
        Mask_3_5->setMaximum(90);

        gridLayout->addWidget(Mask_3_5, 5, 5, 1, 1);

        Mask_3_3 = new QDoubleSpinBox(MaskOptDialog);
        Mask_3_3->setObjectName(QStringLiteral("Mask_3_3"));
        Mask_3_3->setEnabled(true);
        Mask_3_3->setMaximum(90);

        gridLayout->addWidget(Mask_3_3, 5, 3, 1, 1);

        Label13 = new QLabel(MaskOptDialog);
        Label13->setObjectName(QStringLiteral("Label13"));
        Label13->setEnabled(true);
        sizePolicy.setHeightForWidth(Label13->sizePolicy().hasHeightForWidth());
        Label13->setSizePolicy(sizePolicy);

        gridLayout->addWidget(Label13, 4, 0, 1, 1);

        Mask_1_9 = new QDoubleSpinBox(MaskOptDialog);
        Mask_1_9->setObjectName(QStringLiteral("Mask_1_9"));
        Mask_1_9->setEnabled(true);
        Mask_1_9->setMaximum(90);

        gridLayout->addWidget(Mask_1_9, 3, 9, 1, 1);

        Label8 = new QLabel(MaskOptDialog);
        Label8->setObjectName(QStringLiteral("Label8"));
        Label8->setEnabled(true);
        sizePolicy1.setHeightForWidth(Label8->sizePolicy().hasHeightForWidth());
        Label8->setSizePolicy(sizePolicy1);

        gridLayout->addWidget(Label8, 2, 5, 1, 1);

        Mask_1_3 = new QDoubleSpinBox(MaskOptDialog);
        Mask_1_3->setObjectName(QStringLiteral("Mask_1_3"));
        Mask_1_3->setEnabled(true);
        Mask_1_3->setMaximum(90);

        gridLayout->addWidget(Mask_1_3, 3, 3, 1, 1);

        Mask_1_1 = new QDoubleSpinBox(MaskOptDialog);
        Mask_1_1->setObjectName(QStringLiteral("Mask_1_1"));
        Mask_1_1->setEnabled(true);
        Mask_1_1->setMaximum(90);

        gridLayout->addWidget(Mask_1_1, 3, 1, 1, 1);

        Mask_1_8 = new QDoubleSpinBox(MaskOptDialog);
        Mask_1_8->setObjectName(QStringLiteral("Mask_1_8"));
        Mask_1_8->setEnabled(true);
        Mask_1_8->setMaximum(90);

        gridLayout->addWidget(Mask_1_8, 3, 8, 1, 1);

        Mask_1_7 = new QDoubleSpinBox(MaskOptDialog);
        Mask_1_7->setObjectName(QStringLiteral("Mask_1_7"));
        Mask_1_7->setEnabled(true);
        Mask_1_7->setMaximum(90);

        gridLayout->addWidget(Mask_1_7, 3, 7, 1, 1);

        Mask_1_5 = new QDoubleSpinBox(MaskOptDialog);
        Mask_1_5->setObjectName(QStringLiteral("Mask_1_5"));
        Mask_1_5->setEnabled(true);
        Mask_1_5->setMaximum(90);

        gridLayout->addWidget(Mask_1_5, 3, 5, 1, 1);

        Mask_2_9 = new QDoubleSpinBox(MaskOptDialog);
        Mask_2_9->setObjectName(QStringLiteral("Mask_2_9"));
        Mask_2_9->setEnabled(true);
        Mask_2_9->setMaximum(90);

        gridLayout->addWidget(Mask_2_9, 4, 9, 1, 1);

        Mask_2_8 = new QDoubleSpinBox(MaskOptDialog);
        Mask_2_8->setObjectName(QStringLiteral("Mask_2_8"));
        Mask_2_8->setEnabled(true);
        Mask_2_8->setMaximum(90);

        gridLayout->addWidget(Mask_2_8, 4, 8, 1, 1);

        Mask_3_2 = new QDoubleSpinBox(MaskOptDialog);
        Mask_3_2->setObjectName(QStringLiteral("Mask_3_2"));
        Mask_3_2->setEnabled(true);
        Mask_3_2->setMaximum(90);

        gridLayout->addWidget(Mask_3_2, 5, 2, 1, 1);

        Mask_3_4 = new QDoubleSpinBox(MaskOptDialog);
        Mask_3_4->setObjectName(QStringLiteral("Mask_3_4"));
        Mask_3_4->setEnabled(true);
        Mask_3_4->setMaximum(90);

        gridLayout->addWidget(Mask_3_4, 5, 4, 1, 1);

        Mask_1_2 = new QDoubleSpinBox(MaskOptDialog);
        Mask_1_2->setObjectName(QStringLiteral("Mask_1_2"));
        Mask_1_2->setEnabled(true);
        Mask_1_2->setMaximum(90);

        gridLayout->addWidget(Mask_1_2, 3, 2, 1, 1);

        Label12 = new QLabel(MaskOptDialog);
        Label12->setObjectName(QStringLiteral("Label12"));
        Label12->setEnabled(true);
        sizePolicy1.setHeightForWidth(Label12->sizePolicy().hasHeightForWidth());
        Label12->setSizePolicy(sizePolicy1);

        gridLayout->addWidget(Label12, 2, 9, 1, 1);

        Mask_1_6 = new QDoubleSpinBox(MaskOptDialog);
        Mask_1_6->setObjectName(QStringLiteral("Mask_1_6"));
        Mask_1_6->setEnabled(true);
        Mask_1_6->setMaximum(90);

        gridLayout->addWidget(Mask_1_6, 3, 6, 1, 1);

        Mask_1_4 = new QDoubleSpinBox(MaskOptDialog);
        Mask_1_4->setObjectName(QStringLiteral("Mask_1_4"));
        Mask_1_4->setEnabled(true);
        Mask_1_4->setMaximum(90);

        gridLayout->addWidget(Mask_1_4, 3, 4, 1, 1);

        Label9 = new QLabel(MaskOptDialog);
        Label9->setObjectName(QStringLiteral("Label9"));
        Label9->setEnabled(true);
        sizePolicy1.setHeightForWidth(Label9->sizePolicy().hasHeightForWidth());
        Label9->setSizePolicy(sizePolicy1);

        gridLayout->addWidget(Label9, 2, 6, 1, 1);

        Label4 = new QLabel(MaskOptDialog);
        Label4->setObjectName(QStringLiteral("Label4"));
        Label4->setEnabled(true);
        sizePolicy1.setHeightForWidth(Label4->sizePolicy().hasHeightForWidth());
        Label4->setSizePolicy(sizePolicy1);

        gridLayout->addWidget(Label4, 2, 2, 1, 1);

        Label2 = new QLabel(MaskOptDialog);
        Label2->setObjectName(QStringLiteral("Label2"));
        Label2->setEnabled(true);
        sizePolicy1.setHeightForWidth(Label2->sizePolicy().hasHeightForWidth());
        Label2->setSizePolicy(sizePolicy1);

        gridLayout->addWidget(Label2, 2, 1, 1, 1);

        Mask_2_1 = new QDoubleSpinBox(MaskOptDialog);
        Mask_2_1->setObjectName(QStringLiteral("Mask_2_1"));
        Mask_2_1->setEnabled(true);
        Mask_2_1->setMaximum(90);

        gridLayout->addWidget(Mask_2_1, 4, 1, 1, 1);

        Mask_3_8 = new QDoubleSpinBox(MaskOptDialog);
        Mask_3_8->setObjectName(QStringLiteral("Mask_3_8"));
        Mask_3_8->setEnabled(true);
        Mask_3_8->setMaximum(90);

        gridLayout->addWidget(Mask_3_8, 5, 8, 1, 1);

        Mask_3_9 = new QDoubleSpinBox(MaskOptDialog);
        Mask_3_9->setObjectName(QStringLiteral("Mask_3_9"));
        Mask_3_9->setEnabled(true);
        Mask_3_9->setMaximum(90);

        gridLayout->addWidget(Mask_3_9, 5, 9, 1, 1);

        Mask_3_7 = new QDoubleSpinBox(MaskOptDialog);
        Mask_3_7->setObjectName(QStringLiteral("Mask_3_7"));
        Mask_3_7->setEnabled(true);
        Mask_3_7->setMaximum(90);

        gridLayout->addWidget(Mask_3_7, 5, 7, 1, 1);

        widget = new QWidget(MaskOptDialog);
        widget->setObjectName(QStringLiteral("widget"));
        sizePolicy1.setHeightForWidth(widget->sizePolicy().hasHeightForWidth());
        widget->setSizePolicy(sizePolicy1);
        horizontalLayout = new QHBoxLayout(widget);
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        horizontalLayout->setContentsMargins(0, 0, 0, 0);
        MaskEna1 = new QCheckBox(widget);
        MaskEna1->setObjectName(QStringLiteral("MaskEna1"));
        MaskEna1->setChecked(false);

        horizontalLayout->addWidget(MaskEna1);

        MaskEna2 = new QCheckBox(widget);
        MaskEna2->setObjectName(QStringLiteral("MaskEna2"));
        MaskEna2->setChecked(false);

        horizontalLayout->addWidget(MaskEna2);

        Label3 = new QLabel(widget);
        Label3->setObjectName(QStringLiteral("Label3"));
        Label3->setEnabled(true);

        horizontalLayout->addWidget(Label3);

        Label6 = new QLabel(widget);
        Label6->setObjectName(QStringLiteral("Label6"));
        Label6->setEnabled(true);

        horizontalLayout->addWidget(Label6);


        gridLayout->addWidget(widget, 0, 0, 1, 10);

        QWidget::setTabOrder(MaskEna1, MaskEna2);
        QWidget::setTabOrder(MaskEna2, Mask_1_1);
        QWidget::setTabOrder(Mask_1_1, Mask_1_2);
        QWidget::setTabOrder(Mask_1_2, Mask_1_3);
        QWidget::setTabOrder(Mask_1_3, Mask_1_4);
        QWidget::setTabOrder(Mask_1_4, Mask_1_5);
        QWidget::setTabOrder(Mask_1_5, Mask_1_6);
        QWidget::setTabOrder(Mask_1_6, Mask_1_7);
        QWidget::setTabOrder(Mask_1_7, Mask_1_8);
        QWidget::setTabOrder(Mask_1_8, Mask_1_9);
        QWidget::setTabOrder(Mask_1_9, Mask_2_1);
        QWidget::setTabOrder(Mask_2_1, Mask_2_2);
        QWidget::setTabOrder(Mask_2_2, Mask_2_3);
        QWidget::setTabOrder(Mask_2_3, Mask_2_4);
        QWidget::setTabOrder(Mask_2_4, Mask_2_5);
        QWidget::setTabOrder(Mask_2_5, Mask_2_6);
        QWidget::setTabOrder(Mask_2_6, Mask_2_7);
        QWidget::setTabOrder(Mask_2_7, Mask_2_8);
        QWidget::setTabOrder(Mask_2_8, Mask_2_9);
        QWidget::setTabOrder(Mask_2_9, Mask_3_1);
        QWidget::setTabOrder(Mask_3_1, Mask_3_2);
        QWidget::setTabOrder(Mask_3_2, Mask_3_3);
        QWidget::setTabOrder(Mask_3_3, Mask_3_4);
        QWidget::setTabOrder(Mask_3_4, Mask_3_5);
        QWidget::setTabOrder(Mask_3_5, Mask_3_6);
        QWidget::setTabOrder(Mask_3_6, Mask_3_7);
        QWidget::setTabOrder(Mask_3_7, Mask_3_8);
        QWidget::setTabOrder(Mask_3_8, Mask_3_9);
        QWidget::setTabOrder(Mask_3_9, BtnOk);
        QWidget::setTabOrder(BtnOk, BtnCancel);

        retranslateUi(MaskOptDialog);

        BtnOk->setDefault(true);


        QMetaObject::connectSlotsByName(MaskOptDialog);
    } // setupUi

    void retranslateUi(QWidget *MaskOptDialog)
    {
        MaskOptDialog->setWindowTitle(QApplication::translate("MaskOptDialog", "SNR Mask", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        MaskOptDialog->setToolTip(QString());
#endif // QT_NO_TOOLTIP
#ifndef QT_NO_TOOLTIP
        Label1->setToolTip(QString());
#endif // QT_NO_TOOLTIP
        Label1->setText(QApplication::translate("MaskOptDialog", "L1", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        Label11->setToolTip(QString());
#endif // QT_NO_TOOLTIP
        Label11->setText(QApplication::translate("MaskOptDialog", "75", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        Label10->setToolTip(QString());
#endif // QT_NO_TOOLTIP
        Label10->setText(QApplication::translate("MaskOptDialog", "65", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        Mask_2_4->setToolTip(QString());
#endif // QT_NO_TOOLTIP
        Mask_2_4->setProperty("text", QVariant(QApplication::translate("MaskOptDialog", "0,00", Q_NULLPTR)));
#ifndef QT_NO_TOOLTIP
        Label14->setToolTip(QString());
#endif // QT_NO_TOOLTIP
        Label14->setText(QApplication::translate("MaskOptDialog", "L5", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        Mask_2_2->setToolTip(QString());
#endif // QT_NO_TOOLTIP
        Mask_2_2->setProperty("text", QVariant(QApplication::translate("MaskOptDialog", "0,00", Q_NULLPTR)));
#ifndef QT_NO_TOOLTIP
        Mask_2_3->setToolTip(QString());
#endif // QT_NO_TOOLTIP
        Mask_2_3->setProperty("text", QVariant(QApplication::translate("MaskOptDialog", "0,00", Q_NULLPTR)));
#ifndef QT_NO_TOOLTIP
        Label7->setToolTip(QString());
#endif // QT_NO_TOOLTIP
        Label7->setText(QApplication::translate("MaskOptDialog", "35", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        Label5->setToolTip(QString());
#endif // QT_NO_TOOLTIP
        Label5->setText(QApplication::translate("MaskOptDialog", "25", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        BtnCancel->setToolTip(QString());
#endif // QT_NO_TOOLTIP
        BtnCancel->setText(QApplication::translate("MaskOptDialog", "&Cancel", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        BtnOk->setToolTip(QString());
#endif // QT_NO_TOOLTIP
        BtnOk->setText(QApplication::translate("MaskOptDialog", "&OK", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        Mask_2_5->setToolTip(QString());
#endif // QT_NO_TOOLTIP
        Mask_2_5->setProperty("text", QVariant(QApplication::translate("MaskOptDialog", "0,00", Q_NULLPTR)));
#ifndef QT_NO_TOOLTIP
        Mask_2_7->setToolTip(QString());
#endif // QT_NO_TOOLTIP
        Mask_2_7->setProperty("text", QVariant(QApplication::translate("MaskOptDialog", "0,00", Q_NULLPTR)));
#ifndef QT_NO_TOOLTIP
        Mask_2_6->setToolTip(QString());
#endif // QT_NO_TOOLTIP
        Mask_2_6->setProperty("text", QVariant(QApplication::translate("MaskOptDialog", "0,00", Q_NULLPTR)));
#ifndef QT_NO_TOOLTIP
        Mask_3_1->setToolTip(QString());
#endif // QT_NO_TOOLTIP
        Mask_3_1->setProperty("text", QVariant(QApplication::translate("MaskOptDialog", "0,00", Q_NULLPTR)));
#ifndef QT_NO_TOOLTIP
        Mask_3_6->setToolTip(QString());
#endif // QT_NO_TOOLTIP
        Mask_3_6->setProperty("text", QVariant(QApplication::translate("MaskOptDialog", "0,00", Q_NULLPTR)));
#ifndef QT_NO_TOOLTIP
        Mask_3_5->setToolTip(QString());
#endif // QT_NO_TOOLTIP
        Mask_3_5->setProperty("text", QVariant(QApplication::translate("MaskOptDialog", "0,00", Q_NULLPTR)));
#ifndef QT_NO_TOOLTIP
        Mask_3_3->setToolTip(QString());
#endif // QT_NO_TOOLTIP
        Mask_3_3->setProperty("text", QVariant(QApplication::translate("MaskOptDialog", "0,00", Q_NULLPTR)));
#ifndef QT_NO_TOOLTIP
        Label13->setToolTip(QString());
#endif // QT_NO_TOOLTIP
        Label13->setText(QApplication::translate("MaskOptDialog", "L2", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        Mask_1_9->setToolTip(QString());
#endif // QT_NO_TOOLTIP
        Mask_1_9->setProperty("text", QVariant(QApplication::translate("MaskOptDialog", "0,00", Q_NULLPTR)));
#ifndef QT_NO_TOOLTIP
        Label8->setToolTip(QString());
#endif // QT_NO_TOOLTIP
        Label8->setText(QApplication::translate("MaskOptDialog", "45", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        Mask_1_3->setToolTip(QString());
#endif // QT_NO_TOOLTIP
        Mask_1_3->setProperty("text", QVariant(QApplication::translate("MaskOptDialog", "0,00", Q_NULLPTR)));
#ifndef QT_NO_TOOLTIP
        Mask_1_1->setToolTip(QString());
#endif // QT_NO_TOOLTIP
        Mask_1_1->setProperty("text", QVariant(QApplication::translate("MaskOptDialog", "0,00", Q_NULLPTR)));
#ifndef QT_NO_TOOLTIP
        Mask_1_8->setToolTip(QString());
#endif // QT_NO_TOOLTIP
        Mask_1_8->setProperty("text", QVariant(QApplication::translate("MaskOptDialog", "0,00", Q_NULLPTR)));
#ifndef QT_NO_TOOLTIP
        Mask_1_7->setToolTip(QString());
#endif // QT_NO_TOOLTIP
        Mask_1_7->setProperty("text", QVariant(QApplication::translate("MaskOptDialog", "0,00", Q_NULLPTR)));
#ifndef QT_NO_TOOLTIP
        Mask_1_5->setToolTip(QString());
#endif // QT_NO_TOOLTIP
        Mask_1_5->setProperty("text", QVariant(QApplication::translate("MaskOptDialog", "0,00", Q_NULLPTR)));
#ifndef QT_NO_TOOLTIP
        Mask_2_9->setToolTip(QString());
#endif // QT_NO_TOOLTIP
        Mask_2_9->setProperty("text", QVariant(QApplication::translate("MaskOptDialog", "0,00", Q_NULLPTR)));
#ifndef QT_NO_TOOLTIP
        Mask_2_8->setToolTip(QString());
#endif // QT_NO_TOOLTIP
        Mask_2_8->setProperty("text", QVariant(QApplication::translate("MaskOptDialog", "0,00", Q_NULLPTR)));
#ifndef QT_NO_TOOLTIP
        Mask_3_2->setToolTip(QString());
#endif // QT_NO_TOOLTIP
        Mask_3_2->setProperty("text", QVariant(QApplication::translate("MaskOptDialog", "0,00", Q_NULLPTR)));
#ifndef QT_NO_TOOLTIP
        Mask_3_4->setToolTip(QString());
#endif // QT_NO_TOOLTIP
        Mask_3_4->setProperty("text", QVariant(QApplication::translate("MaskOptDialog", "0,00", Q_NULLPTR)));
#ifndef QT_NO_TOOLTIP
        Mask_1_2->setToolTip(QString());
#endif // QT_NO_TOOLTIP
        Mask_1_2->setProperty("text", QVariant(QApplication::translate("MaskOptDialog", "0,00", Q_NULLPTR)));
#ifndef QT_NO_TOOLTIP
        Label12->setToolTip(QString());
#endif // QT_NO_TOOLTIP
        Label12->setText(QApplication::translate("MaskOptDialog", ">85", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        Mask_1_6->setToolTip(QString());
#endif // QT_NO_TOOLTIP
        Mask_1_6->setProperty("text", QVariant(QApplication::translate("MaskOptDialog", "0,00", Q_NULLPTR)));
#ifndef QT_NO_TOOLTIP
        Mask_1_4->setToolTip(QString());
#endif // QT_NO_TOOLTIP
        Mask_1_4->setProperty("text", QVariant(QApplication::translate("MaskOptDialog", "0,00", Q_NULLPTR)));
#ifndef QT_NO_TOOLTIP
        Label9->setToolTip(QString());
#endif // QT_NO_TOOLTIP
        Label9->setText(QApplication::translate("MaskOptDialog", "55", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        Label4->setToolTip(QString());
#endif // QT_NO_TOOLTIP
        Label4->setText(QApplication::translate("MaskOptDialog", "15", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        Label2->setToolTip(QString());
#endif // QT_NO_TOOLTIP
        Label2->setText(QApplication::translate("MaskOptDialog", "<5", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        Mask_2_1->setToolTip(QString());
#endif // QT_NO_TOOLTIP
        Mask_2_1->setProperty("text", QVariant(QApplication::translate("MaskOptDialog", "0,00", Q_NULLPTR)));
#ifndef QT_NO_TOOLTIP
        Mask_3_8->setToolTip(QString());
#endif // QT_NO_TOOLTIP
        Mask_3_8->setProperty("text", QVariant(QApplication::translate("MaskOptDialog", "0,00", Q_NULLPTR)));
#ifndef QT_NO_TOOLTIP
        Mask_3_9->setToolTip(QString());
#endif // QT_NO_TOOLTIP
        Mask_3_9->setProperty("text", QVariant(QApplication::translate("MaskOptDialog", "0,00", Q_NULLPTR)));
#ifndef QT_NO_TOOLTIP
        Mask_3_7->setToolTip(QString());
#endif // QT_NO_TOOLTIP
        Mask_3_7->setProperty("text", QVariant(QApplication::translate("MaskOptDialog", "0,00", Q_NULLPTR)));
#ifndef QT_NO_TOOLTIP
        MaskEna1->setToolTip(QString());
#endif // QT_NO_TOOLTIP
        MaskEna1->setText(QApplication::translate("MaskOptDialog", "Rover", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        MaskEna2->setToolTip(QString());
#endif // QT_NO_TOOLTIP
        MaskEna2->setText(QApplication::translate("MaskOptDialog", "Base Station", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        Label3->setToolTip(QString());
#endif // QT_NO_TOOLTIP
        Label3->setText(QApplication::translate("MaskOptDialog", "Elevation (deg)", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        Label6->setToolTip(QString());
#endif // QT_NO_TOOLTIP
        Label6->setText(QApplication::translate("MaskOptDialog", "(dBHz)", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class MaskOptDialog: public Ui_MaskOptDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MASKOPTDLG_H
