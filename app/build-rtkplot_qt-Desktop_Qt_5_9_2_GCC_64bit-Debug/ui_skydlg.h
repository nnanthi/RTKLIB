/********************************************************************************
** Form generated from reading UI file 'skydlg.ui'
**
** Created by: Qt User Interface Compiler version 5.9.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_SKYDLG_H
#define UI_SKYDLG_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QDoubleSpinBox>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_SkyImgDialog
{
public:
    QVBoxLayout *verticalLayout;
    QWidget *Panel1;
    QHBoxLayout *horizontalLayout;
    QLabel *Label1;
    QDoubleSpinBox *SkySize1;
    QLabel *Label2;
    QDoubleSpinBox *SkySize2;
    QCheckBox *SkyFlip;
    QWidget *Panel2;
    QGridLayout *gridLayout;
    QLabel *Label6;
    QDoubleSpinBox *SkyCent1;
    QDoubleSpinBox *SkyFov1;
    QLabel *Label9;
    QLabel *Label7;
    QWidget *widget_2;
    QGridLayout *gridLayout_2;
    QLabel *Label17;
    QLabel *Label19;
    QLabel *Label16;
    QLabel *Label18;
    QLabel *Label15;
    QLabel *Label14;
    QLabel *Label13;
    QLabel *Label12;
    QLabel *Label11;
    QLabel *Label20;
    QDoubleSpinBox *SkyDest1;
    QDoubleSpinBox *SkyDest2;
    QDoubleSpinBox *SkyDest3;
    QDoubleSpinBox *SkyDest4;
    QDoubleSpinBox *SkyDest5;
    QDoubleSpinBox *SkyDest6;
    QDoubleSpinBox *SkyDest7;
    QDoubleSpinBox *SkyDest8;
    QDoubleSpinBox *SkyDest9;
    QLabel *Label5;
    QDoubleSpinBox *SkyCent2;
    QLabel *Label3;
    QDoubleSpinBox *SkyFov2;
    QLabel *Label4;
    QDoubleSpinBox *SkyScale;
    QDoubleSpinBox *SkyFov3;
    QWidget *widget_3;
    QGridLayout *gridLayout_3;
    QCheckBox *SkyDestCorr;
    QCheckBox *SkyElMask;
    QLabel *Label8;
    QComboBox *SkyRes;
    QCheckBox *SkyBinarize;
    QDoubleSpinBox *SkyBinThres1;
    QDoubleSpinBox *SkyBinThres2;
    QLabel *Label10;
    QWidget *widget;
    QHBoxLayout *horizontalLayout_2;
    QPushButton *BtnSave;
    QPushButton *BtnLoad;
    QPushButton *BtnGenMask;
    QPushButton *BtnUpdate;
    QPushButton *BtnClose;

    void setupUi(QWidget *SkyImgDialog)
    {
        if (SkyImgDialog->objectName().isEmpty())
            SkyImgDialog->setObjectName(QStringLiteral("SkyImgDialog"));
        SkyImgDialog->resize(746, 295);
        verticalLayout = new QVBoxLayout(SkyImgDialog);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        Panel1 = new QWidget(SkyImgDialog);
        Panel1->setObjectName(QStringLiteral("Panel1"));
        Panel1->setEnabled(true);
        QSizePolicy sizePolicy(QSizePolicy::Preferred, QSizePolicy::Fixed);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(Panel1->sizePolicy().hasHeightForWidth());
        Panel1->setSizePolicy(sizePolicy);
        Panel1->setLayoutDirection(Qt::LeftToRight);
        horizontalLayout = new QHBoxLayout(Panel1);
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        horizontalLayout->setContentsMargins(0, 0, 0, 0);
        Label1 = new QLabel(Panel1);
        Label1->setObjectName(QStringLiteral("Label1"));
        Label1->setEnabled(true);
        sizePolicy.setHeightForWidth(Label1->sizePolicy().hasHeightForWidth());
        Label1->setSizePolicy(sizePolicy);

        horizontalLayout->addWidget(Label1);

        SkySize1 = new QDoubleSpinBox(Panel1);
        SkySize1->setObjectName(QStringLiteral("SkySize1"));
        SkySize1->setEnabled(true);

        horizontalLayout->addWidget(SkySize1);

        Label2 = new QLabel(Panel1);
        Label2->setObjectName(QStringLiteral("Label2"));
        Label2->setEnabled(true);

        horizontalLayout->addWidget(Label2);

        SkySize2 = new QDoubleSpinBox(Panel1);
        SkySize2->setObjectName(QStringLiteral("SkySize2"));
        SkySize2->setEnabled(true);

        horizontalLayout->addWidget(SkySize2);

        SkyFlip = new QCheckBox(Panel1);
        SkyFlip->setObjectName(QStringLiteral("SkyFlip"));
        SkyFlip->setChecked(false);

        horizontalLayout->addWidget(SkyFlip);


        verticalLayout->addWidget(Panel1);

        Panel2 = new QWidget(SkyImgDialog);
        Panel2->setObjectName(QStringLiteral("Panel2"));
        Panel2->setEnabled(true);
        Panel2->setLayoutDirection(Qt::LeftToRight);
        gridLayout = new QGridLayout(Panel2);
        gridLayout->setSpacing(0);
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        gridLayout->setContentsMargins(0, 0, 0, 0);
        Label6 = new QLabel(Panel2);
        Label6->setObjectName(QStringLiteral("Label6"));
        Label6->setEnabled(true);

        gridLayout->addWidget(Label6, 2, 0, 1, 1);

        SkyCent1 = new QDoubleSpinBox(Panel2);
        SkyCent1->setObjectName(QStringLiteral("SkyCent1"));
        SkyCent1->setMinimum(-1);
        SkyCent1->setMaximum(1);

        gridLayout->addWidget(SkyCent1, 1, 1, 1, 1);

        SkyFov1 = new QDoubleSpinBox(Panel2);
        SkyFov1->setObjectName(QStringLiteral("SkyFov1"));
        SkyFov1->setEnabled(true);
        SkyFov1->setMinimum(-180);
        SkyFov1->setMaximum(180);

        gridLayout->addWidget(SkyFov1, 2, 1, 1, 1);

        Label9 = new QLabel(Panel2);
        Label9->setObjectName(QStringLiteral("Label9"));
        Label9->setEnabled(true);

        gridLayout->addWidget(Label9, 1, 0, 1, 1);

        Label7 = new QLabel(Panel2);
        Label7->setObjectName(QStringLiteral("Label7"));
        Label7->setEnabled(true);

        gridLayout->addWidget(Label7, 0, 0, 1, 2);

        widget_2 = new QWidget(Panel2);
        widget_2->setObjectName(QStringLiteral("widget_2"));
        gridLayout_2 = new QGridLayout(widget_2);
        gridLayout_2->setObjectName(QStringLiteral("gridLayout_2"));
        gridLayout_2->setContentsMargins(0, 0, 0, 0);
        Label17 = new QLabel(widget_2);
        Label17->setObjectName(QStringLiteral("Label17"));
        Label17->setEnabled(true);

        gridLayout_2->addWidget(Label17, 1, 6, 1, 1);

        Label19 = new QLabel(widget_2);
        Label19->setObjectName(QStringLiteral("Label19"));
        Label19->setEnabled(true);

        gridLayout_2->addWidget(Label19, 1, 9, 1, 1);

        Label16 = new QLabel(widget_2);
        Label16->setObjectName(QStringLiteral("Label16"));
        Label16->setEnabled(true);

        gridLayout_2->addWidget(Label16, 1, 5, 1, 1);

        Label18 = new QLabel(widget_2);
        Label18->setObjectName(QStringLiteral("Label18"));
        Label18->setEnabled(true);

        gridLayout_2->addWidget(Label18, 1, 7, 1, 1);

        Label15 = new QLabel(widget_2);
        Label15->setObjectName(QStringLiteral("Label15"));
        Label15->setEnabled(true);

        gridLayout_2->addWidget(Label15, 1, 4, 1, 1);

        Label14 = new QLabel(widget_2);
        Label14->setObjectName(QStringLiteral("Label14"));
        Label14->setEnabled(true);

        gridLayout_2->addWidget(Label14, 1, 3, 1, 1);

        Label13 = new QLabel(widget_2);
        Label13->setObjectName(QStringLiteral("Label13"));
        Label13->setEnabled(true);

        gridLayout_2->addWidget(Label13, 1, 2, 1, 1);

        Label12 = new QLabel(widget_2);
        Label12->setObjectName(QStringLiteral("Label12"));
        Label12->setEnabled(true);

        gridLayout_2->addWidget(Label12, 1, 1, 1, 1);

        Label11 = new QLabel(widget_2);
        Label11->setObjectName(QStringLiteral("Label11"));
        Label11->setEnabled(true);

        gridLayout_2->addWidget(Label11, 1, 0, 1, 1);

        Label20 = new QLabel(widget_2);
        Label20->setObjectName(QStringLiteral("Label20"));
        Label20->setEnabled(true);

        gridLayout_2->addWidget(Label20, 0, 9, 1, 1);

        SkyDest1 = new QDoubleSpinBox(widget_2);
        SkyDest1->setObjectName(QStringLiteral("SkyDest1"));
        SkyDest1->setDecimals(1);

        gridLayout_2->addWidget(SkyDest1, 3, 0, 1, 1);

        SkyDest2 = new QDoubleSpinBox(widget_2);
        SkyDest2->setObjectName(QStringLiteral("SkyDest2"));
        SkyDest2->setDecimals(1);

        gridLayout_2->addWidget(SkyDest2, 3, 1, 1, 1);

        SkyDest3 = new QDoubleSpinBox(widget_2);
        SkyDest3->setObjectName(QStringLiteral("SkyDest3"));
        SkyDest3->setDecimals(1);

        gridLayout_2->addWidget(SkyDest3, 3, 2, 1, 1);

        SkyDest4 = new QDoubleSpinBox(widget_2);
        SkyDest4->setObjectName(QStringLiteral("SkyDest4"));
        SkyDest4->setDecimals(1);

        gridLayout_2->addWidget(SkyDest4, 3, 3, 1, 1);

        SkyDest5 = new QDoubleSpinBox(widget_2);
        SkyDest5->setObjectName(QStringLiteral("SkyDest5"));
        SkyDest5->setDecimals(1);

        gridLayout_2->addWidget(SkyDest5, 3, 4, 1, 1);

        SkyDest6 = new QDoubleSpinBox(widget_2);
        SkyDest6->setObjectName(QStringLiteral("SkyDest6"));
        SkyDest6->setDecimals(1);

        gridLayout_2->addWidget(SkyDest6, 3, 5, 1, 1);

        SkyDest7 = new QDoubleSpinBox(widget_2);
        SkyDest7->setObjectName(QStringLiteral("SkyDest7"));
        SkyDest7->setDecimals(1);

        gridLayout_2->addWidget(SkyDest7, 3, 6, 1, 1);

        SkyDest8 = new QDoubleSpinBox(widget_2);
        SkyDest8->setObjectName(QStringLiteral("SkyDest8"));
        SkyDest8->setDecimals(1);

        gridLayout_2->addWidget(SkyDest8, 3, 7, 1, 1);

        SkyDest9 = new QDoubleSpinBox(widget_2);
        SkyDest9->setObjectName(QStringLiteral("SkyDest9"));
        SkyDest9->setDecimals(1);

        gridLayout_2->addWidget(SkyDest9, 3, 9, 1, 1);


        gridLayout->addWidget(widget_2, 3, 0, 1, 7);

        Label5 = new QLabel(Panel2);
        Label5->setObjectName(QStringLiteral("Label5"));
        Label5->setEnabled(true);

        gridLayout->addWidget(Label5, 1, 2, 1, 1);

        SkyCent2 = new QDoubleSpinBox(Panel2);
        SkyCent2->setObjectName(QStringLiteral("SkyCent2"));
        SkyCent2->setEnabled(true);
        SkyCent2->setMinimum(-1);
        SkyCent2->setMaximum(1);

        gridLayout->addWidget(SkyCent2, 1, 3, 1, 1);

        Label3 = new QLabel(Panel2);
        Label3->setObjectName(QStringLiteral("Label3"));
        Label3->setEnabled(true);

        gridLayout->addWidget(Label3, 2, 2, 1, 1);

        SkyFov2 = new QDoubleSpinBox(Panel2);
        SkyFov2->setObjectName(QStringLiteral("SkyFov2"));
        SkyFov2->setEnabled(true);
        SkyFov2->setMinimum(-180);
        SkyFov2->setMaximum(180);

        gridLayout->addWidget(SkyFov2, 2, 3, 1, 1);

        Label4 = new QLabel(Panel2);
        Label4->setObjectName(QStringLiteral("Label4"));
        Label4->setEnabled(true);

        gridLayout->addWidget(Label4, 2, 4, 1, 1);

        SkyScale = new QDoubleSpinBox(Panel2);
        SkyScale->setObjectName(QStringLiteral("SkyScale"));
        SkyScale->setEnabled(true);
        SkyScale->setMinimum(-1);
        SkyScale->setMaximum(1);

        gridLayout->addWidget(SkyScale, 1, 5, 1, 1);

        SkyFov3 = new QDoubleSpinBox(Panel2);
        SkyFov3->setObjectName(QStringLiteral("SkyFov3"));
        SkyFov3->setEnabled(true);
        SkyFov3->setMinimum(-180);
        SkyFov3->setMaximum(180);

        gridLayout->addWidget(SkyFov3, 2, 5, 1, 1);

        widget_3 = new QWidget(Panel2);
        widget_3->setObjectName(QStringLiteral("widget_3"));
        gridLayout_3 = new QGridLayout(widget_3);
        gridLayout_3->setObjectName(QStringLiteral("gridLayout_3"));
        gridLayout_3->setContentsMargins(0, 0, 0, 0);
        SkyDestCorr = new QCheckBox(widget_3);
        SkyDestCorr->setObjectName(QStringLiteral("SkyDestCorr"));
        SkyDestCorr->setChecked(true);

        gridLayout_3->addWidget(SkyDestCorr, 0, 0, 1, 1);

        SkyElMask = new QCheckBox(widget_3);
        SkyElMask->setObjectName(QStringLiteral("SkyElMask"));
        SkyElMask->setChecked(true);

        gridLayout_3->addWidget(SkyElMask, 1, 0, 1, 1);

        Label8 = new QLabel(widget_3);
        Label8->setObjectName(QStringLiteral("Label8"));
        Label8->setEnabled(true);

        gridLayout_3->addWidget(Label8, 1, 1, 1, 1);

        SkyRes = new QComboBox(widget_3);
        SkyRes->setObjectName(QStringLiteral("SkyRes"));
        SkyRes->setEnabled(true);

        gridLayout_3->addWidget(SkyRes, 1, 2, 1, 1);

        SkyBinarize = new QCheckBox(widget_3);
        SkyBinarize->setObjectName(QStringLiteral("SkyBinarize"));
        SkyBinarize->setChecked(false);

        gridLayout_3->addWidget(SkyBinarize, 1, 3, 1, 1);

        SkyBinThres1 = new QDoubleSpinBox(widget_3);
        SkyBinThres1->setObjectName(QStringLiteral("SkyBinThres1"));
        SkyBinThres1->setMaximum(1);

        gridLayout_3->addWidget(SkyBinThres1, 1, 4, 1, 1);

        SkyBinThres2 = new QDoubleSpinBox(widget_3);
        SkyBinThres2->setObjectName(QStringLiteral("SkyBinThres2"));
        SkyBinThres2->setMaximum(1);

        gridLayout_3->addWidget(SkyBinThres2, 1, 5, 1, 1);


        gridLayout->addWidget(widget_3, 4, 0, 1, 6);

        Label10 = new QLabel(Panel2);
        Label10->setObjectName(QStringLiteral("Label10"));
        Label10->setEnabled(true);

        gridLayout->addWidget(Label10, 0, 4, 1, 2);


        verticalLayout->addWidget(Panel2);

        widget = new QWidget(SkyImgDialog);
        widget->setObjectName(QStringLiteral("widget"));
        sizePolicy.setHeightForWidth(widget->sizePolicy().hasHeightForWidth());
        widget->setSizePolicy(sizePolicy);
        horizontalLayout_2 = new QHBoxLayout(widget);
        horizontalLayout_2->setObjectName(QStringLiteral("horizontalLayout_2"));
        horizontalLayout_2->setContentsMargins(0, 0, 0, 0);
        BtnSave = new QPushButton(widget);
        BtnSave->setObjectName(QStringLiteral("BtnSave"));
        BtnSave->setEnabled(true);
        BtnSave->setFlat(false);

        horizontalLayout_2->addWidget(BtnSave);

        BtnLoad = new QPushButton(widget);
        BtnLoad->setObjectName(QStringLiteral("BtnLoad"));
        BtnLoad->setEnabled(true);
        BtnLoad->setFlat(false);

        horizontalLayout_2->addWidget(BtnLoad);

        BtnGenMask = new QPushButton(widget);
        BtnGenMask->setObjectName(QStringLiteral("BtnGenMask"));
        BtnGenMask->setEnabled(true);
        BtnGenMask->setFlat(false);

        horizontalLayout_2->addWidget(BtnGenMask);

        BtnUpdate = new QPushButton(widget);
        BtnUpdate->setObjectName(QStringLiteral("BtnUpdate"));
        BtnUpdate->setEnabled(true);
        BtnUpdate->setFlat(false);

        horizontalLayout_2->addWidget(BtnUpdate);

        BtnClose = new QPushButton(widget);
        BtnClose->setObjectName(QStringLiteral("BtnClose"));
        BtnClose->setEnabled(true);
        BtnClose->setFlat(false);

        horizontalLayout_2->addWidget(BtnClose);


        verticalLayout->addWidget(widget);

        QWidget::setTabOrder(SkySize1, SkySize2);
        QWidget::setTabOrder(SkySize2, SkyFlip);
        QWidget::setTabOrder(SkyFlip, SkyCent1);
        QWidget::setTabOrder(SkyCent1, SkyCent2);
        QWidget::setTabOrder(SkyCent2, SkyScale);
        QWidget::setTabOrder(SkyScale, SkyFov1);
        QWidget::setTabOrder(SkyFov1, SkyFov2);
        QWidget::setTabOrder(SkyFov2, SkyFov3);
        QWidget::setTabOrder(SkyFov3, SkyDest1);
        QWidget::setTabOrder(SkyDest1, SkyDest2);
        QWidget::setTabOrder(SkyDest2, SkyDest3);
        QWidget::setTabOrder(SkyDest3, SkyDest4);
        QWidget::setTabOrder(SkyDest4, SkyDest5);
        QWidget::setTabOrder(SkyDest5, SkyDest6);
        QWidget::setTabOrder(SkyDest6, SkyDest7);
        QWidget::setTabOrder(SkyDest7, SkyDest8);
        QWidget::setTabOrder(SkyDest8, SkyDest9);
        QWidget::setTabOrder(SkyDest9, SkyDestCorr);
        QWidget::setTabOrder(SkyDestCorr, SkyElMask);
        QWidget::setTabOrder(SkyElMask, SkyRes);
        QWidget::setTabOrder(SkyRes, SkyBinarize);
        QWidget::setTabOrder(SkyBinarize, SkyBinThres1);
        QWidget::setTabOrder(SkyBinThres1, SkyBinThres2);
        QWidget::setTabOrder(SkyBinThres2, BtnSave);
        QWidget::setTabOrder(BtnSave, BtnLoad);
        QWidget::setTabOrder(BtnLoad, BtnGenMask);
        QWidget::setTabOrder(BtnGenMask, BtnUpdate);
        QWidget::setTabOrder(BtnUpdate, BtnClose);

        retranslateUi(SkyImgDialog);

        QMetaObject::connectSlotsByName(SkyImgDialog);
    } // setupUi

    void retranslateUi(QWidget *SkyImgDialog)
    {
        SkyImgDialog->setWindowTitle(QApplication::translate("SkyImgDialog", "Sky Image", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        SkyImgDialog->setToolTip(QString());
#endif // QT_NO_TOOLTIP
#ifndef QT_NO_TOOLTIP
        Panel1->setToolTip(QString());
#endif // QT_NO_TOOLTIP
#ifndef QT_NO_TOOLTIP
        Label1->setToolTip(QString());
#endif // QT_NO_TOOLTIP
        Label1->setText(QApplication::translate("SkyImgDialog", "Image Size W/ H (pixels)", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        SkySize1->setToolTip(QString());
#endif // QT_NO_TOOLTIP
#ifndef QT_NO_TOOLTIP
        Label2->setToolTip(QString());
#endif // QT_NO_TOOLTIP
        Label2->setText(QApplication::translate("SkyImgDialog", "x", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        SkySize2->setToolTip(QString());
#endif // QT_NO_TOOLTIP
#ifndef QT_NO_TOOLTIP
        SkyFlip->setToolTip(QString());
#endif // QT_NO_TOOLTIP
        SkyFlip->setText(QApplication::translate("SkyImgDialog", "Flip", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        Panel2->setToolTip(QString());
#endif // QT_NO_TOOLTIP
#ifndef QT_NO_TOOLTIP
        Label6->setToolTip(QString());
#endif // QT_NO_TOOLTIP
        Label6->setText(QApplication::translate("SkyImgDialog", "Roll", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        SkyFov1->setToolTip(QString());
#endif // QT_NO_TOOLTIP
#ifndef QT_NO_TOOLTIP
        Label9->setToolTip(QString());
#endif // QT_NO_TOOLTIP
        Label9->setText(QApplication::translate("SkyImgDialog", "X", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        Label7->setToolTip(QString());
#endif // QT_NO_TOOLTIP
        Label7->setText(QApplication::translate("SkyImgDialog", "Plot Center (pixels)", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        Label17->setToolTip(QString());
#endif // QT_NO_TOOLTIP
        Label17->setText(QApplication::translate("SkyImgDialog", "20", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        Label19->setToolTip(QString());
#endif // QT_NO_TOOLTIP
        Label19->setText(QApplication::translate("SkyImgDialog", "0", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        Label16->setToolTip(QString());
#endif // QT_NO_TOOLTIP
        Label16->setText(QApplication::translate("SkyImgDialog", "30", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        Label18->setToolTip(QString());
#endif // QT_NO_TOOLTIP
        Label18->setText(QApplication::translate("SkyImgDialog", "10", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        Label15->setToolTip(QString());
#endif // QT_NO_TOOLTIP
        Label15->setText(QApplication::translate("SkyImgDialog", "40", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        Label14->setToolTip(QString());
#endif // QT_NO_TOOLTIP
        Label14->setText(QApplication::translate("SkyImgDialog", "50", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        Label13->setToolTip(QString());
#endif // QT_NO_TOOLTIP
        Label13->setText(QApplication::translate("SkyImgDialog", "60", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        Label12->setToolTip(QString());
#endif // QT_NO_TOOLTIP
        Label12->setText(QApplication::translate("SkyImgDialog", "70", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        Label11->setToolTip(QString());
#endif // QT_NO_TOOLTIP
        Label11->setText(QApplication::translate("SkyImgDialog", "80", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        Label20->setToolTip(QString());
#endif // QT_NO_TOOLTIP
        Label20->setText(QApplication::translate("SkyImgDialog", "(deg)", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        Label5->setToolTip(QString());
#endif // QT_NO_TOOLTIP
        Label5->setText(QApplication::translate("SkyImgDialog", "Y", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        SkyCent2->setToolTip(QString());
#endif // QT_NO_TOOLTIP
#ifndef QT_NO_TOOLTIP
        Label3->setToolTip(QString());
#endif // QT_NO_TOOLTIP
        Label3->setText(QApplication::translate("SkyImgDialog", "Pitch", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        SkyFov2->setToolTip(QString());
#endif // QT_NO_TOOLTIP
#ifndef QT_NO_TOOLTIP
        Label4->setToolTip(QString());
#endif // QT_NO_TOOLTIP
        Label4->setText(QApplication::translate("SkyImgDialog", "Yaw", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        SkyScale->setToolTip(QString());
#endif // QT_NO_TOOLTIP
#ifndef QT_NO_TOOLTIP
        SkyFov3->setToolTip(QString());
#endif // QT_NO_TOOLTIP
#ifndef QT_NO_TOOLTIP
        SkyDestCorr->setToolTip(QString());
#endif // QT_NO_TOOLTIP
        SkyDestCorr->setText(QApplication::translate("SkyImgDialog", "Pixels from Center - Elevation", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        SkyElMask->setToolTip(QString());
#endif // QT_NO_TOOLTIP
        SkyElMask->setText(QApplication::translate("SkyImgDialog", "Elevation Mask", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        Label8->setToolTip(QString());
#endif // QT_NO_TOOLTIP
        Label8->setText(QApplication::translate("SkyImgDialog", "Resample", Q_NULLPTR));
        SkyRes->clear();
        SkyRes->insertItems(0, QStringList()
         << QApplication::translate("SkyImgDialog", "NN", Q_NULLPTR)
         << QApplication::translate("SkyImgDialog", "BL", Q_NULLPTR)
        );
#ifndef QT_NO_TOOLTIP
        SkyRes->setToolTip(QString());
#endif // QT_NO_TOOLTIP
#ifndef QT_NO_TOOLTIP
        SkyBinarize->setToolTip(QString());
#endif // QT_NO_TOOLTIP
        SkyBinarize->setText(QApplication::translate("SkyImgDialog", "Binarize", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        Label10->setToolTip(QString());
#endif // QT_NO_TOOLTIP
        Label10->setText(QApplication::translate("SkyImgDialog", "Plot Radius (pixels)", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        BtnSave->setToolTip(QString());
#endif // QT_NO_TOOLTIP
        BtnSave->setText(QApplication::translate("SkyImgDialog", "&Save Tag", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        BtnLoad->setToolTip(QString());
#endif // QT_NO_TOOLTIP
        BtnLoad->setText(QApplication::translate("SkyImgDialog", "&Load Tag...", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        BtnGenMask->setToolTip(QString());
#endif // QT_NO_TOOLTIP
        BtnGenMask->setText(QApplication::translate("SkyImgDialog", "&Gen Mask", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        BtnUpdate->setToolTip(QString());
#endif // QT_NO_TOOLTIP
        BtnUpdate->setText(QApplication::translate("SkyImgDialog", "&Update", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        BtnClose->setToolTip(QString());
#endif // QT_NO_TOOLTIP
        BtnClose->setText(QApplication::translate("SkyImgDialog", "&Close", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class SkyImgDialog: public Ui_SkyImgDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_SKYDLG_H
