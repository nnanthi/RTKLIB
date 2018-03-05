/********************************************************************************
** Form generated from reading UI file 'plotopt.ui'
**
** Created by: Qt User Interface Compiler version 5.9.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_PLOTOPT_H
#define UI_PLOTOPT_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QDoubleSpinBox>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpinBox>
#include <QtWidgets/QToolButton>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_PlotOptDialog
{
public:
    QVBoxLayout *verticalLayout;
    QWidget *Panel2;
    QGridLayout *gridLayout_2;
    QGroupBox *GroupBox1;
    QGridLayout *gridLayout;
    QCheckBox *NavSys1;
    QCheckBox *NavSys2;
    QCheckBox *NavSys3;
    QCheckBox *NavSys4;
    QCheckBox *NavSys5;
    QCheckBox *NavSys6;
    QCheckBox *NavSys7;
    QWidget *widget_2;
    QGridLayout *gridLayout_3;
    QToolButton *MColor1;
    QToolButton *MColor4;
    QLabel *Label14;
    QToolButton *MColor5;
    QToolButton *MColor6;
    QToolButton *MColor3;
    QToolButton *MColor2;
    QLabel *Label32;
    QToolButton *MColor7;
    QToolButton *MColor8;
    QToolButton *MColor9;
    QToolButton *MColor10;
    QToolButton *MColor11;
    QToolButton *MColor12;
    QLabel *Label8;
    QLabel *Label19;
    QLabel *Label36;
    QComboBox *AutoScale;
    QLabel *Label10;
    QLabel *Label25;
    QComboBox *ShowScale;
    QComboBox *YRange;
    QLabel *Label24;
    QLabel *Color1;
    QLabel *LabelExSats;
    QComboBox *RcvPos;
    QPushButton *BtnTLESatFile;
    QLabel *Label1;
    QPushButton *BtnColor2;
    QLabel *FontLabel;
    QComboBox *ShowGLabel;
    QComboBox *ShowLabel;
    QLabel *Label27;
    QComboBox *TimeLabel;
    QLabel *Label6;
    QComboBox *ShowEph;
    QComboBox *ElMaskP;
    QLabel *Label33;
    QLabel *LabelFont;
    QLabel *Label23;
    QLabel *Label7;
    QLabel *Label34;
    QComboBox *ElMask;
    QPushButton *BtnTLEFile;
    QLineEdit *RnxOpts;
    QLabel *Label5;
    QComboBox *MarkSize;
    QPushButton *BtnFont;
    QComboBox *ShowArrow;
    QLabel *Label11;
    QLabel *Label12;
    QComboBox *AnimCycle;
    QPushButton *BtnColor1;
    QLabel *Label15;
    QComboBox *LatLonFmt;
    QLabel *LabelRefPos;
    QLabel *Color3;
    QLabel *Label37;
    QComboBox *ShowHalfC;
    QComboBox *PlotStyle;
    QLineEdit *TLESatFile;
    QLabel *Label26;
    QLabel *Label13;
    QLabel *Label4;
    QLabel *Label17;
    QComboBox *MaxMP;
    QLabel *Label30;
    QLabel *Label29;
    QLabel *Label2;
    QComboBox *ShowSlip;
    QComboBox *ShowErr;
    QLabel *Label18;
    QLabel *Label21;
    QLineEdit *ExSats;
    QLabel *Label28;
    QLabel *Color2;
    QPushButton *BtnColor3;
    QLabel *Label22;
    QPushButton *BtnTLESatView;
    QPushButton *BtnTLEView;
    QLineEdit *QcCmd;
    QComboBox *ShowStats;
    QLabel *Label20;
    QPushButton *BtnColor4;
    QLabel *Label35;
    QLabel *Label9;
    QComboBox *ShowCompass;
    QComboBox *MaxDop;
    QSpinBox *RefCycle;
    QDoubleSpinBox *RefPos1;
    QDoubleSpinBox *RefPos2;
    QLineEdit *TLEFile;
    QDoubleSpinBox *RefPos3;
    QLabel *Color4;
    QComboBox *HideLowSat;
    QLabel *Label31;
    QLabel *Label16;
    QPushButton *BtnRefPos;
    QSpinBox *BuffSize;
    QComboBox *Origin;
    QLabel *Label3;
    QSpinBox *EditTimeSync;
    QCheckBox *ChkTimeSync;
    QWidget *widget;
    QHBoxLayout *horizontalLayout_2;
    QLabel *Msg;
    QPushButton *BtnOK;
    QPushButton *BtnCancel;

    void setupUi(QWidget *PlotOptDialog)
    {
        if (PlotOptDialog->objectName().isEmpty())
            PlotOptDialog->setObjectName(QStringLiteral("PlotOptDialog"));
        PlotOptDialog->resize(1015, 660);
        verticalLayout = new QVBoxLayout(PlotOptDialog);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        Panel2 = new QWidget(PlotOptDialog);
        Panel2->setObjectName(QStringLiteral("Panel2"));
        Panel2->setEnabled(true);
        Panel2->setLayoutDirection(Qt::LeftToRight);
        gridLayout_2 = new QGridLayout(Panel2);
        gridLayout_2->setObjectName(QStringLiteral("gridLayout_2"));
        GroupBox1 = new QGroupBox(Panel2);
        GroupBox1->setObjectName(QStringLiteral("GroupBox1"));
        gridLayout = new QGridLayout(GroupBox1);
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        NavSys1 = new QCheckBox(GroupBox1);
        NavSys1->setObjectName(QStringLiteral("NavSys1"));
        NavSys1->setChecked(true);

        gridLayout->addWidget(NavSys1, 0, 0, 1, 1);

        NavSys2 = new QCheckBox(GroupBox1);
        NavSys2->setObjectName(QStringLiteral("NavSys2"));
        NavSys2->setChecked(false);

        gridLayout->addWidget(NavSys2, 0, 1, 1, 1);

        NavSys3 = new QCheckBox(GroupBox1);
        NavSys3->setObjectName(QStringLiteral("NavSys3"));
        NavSys3->setChecked(false);

        gridLayout->addWidget(NavSys3, 0, 2, 1, 1);

        NavSys4 = new QCheckBox(GroupBox1);
        NavSys4->setObjectName(QStringLiteral("NavSys4"));
        NavSys4->setChecked(false);

        gridLayout->addWidget(NavSys4, 1, 0, 1, 1);

        NavSys5 = new QCheckBox(GroupBox1);
        NavSys5->setObjectName(QStringLiteral("NavSys5"));
        NavSys5->setChecked(false);

        gridLayout->addWidget(NavSys5, 1, 1, 1, 1);

        NavSys6 = new QCheckBox(GroupBox1);
        NavSys6->setObjectName(QStringLiteral("NavSys6"));
        NavSys6->setChecked(false);

        gridLayout->addWidget(NavSys6, 1, 2, 1, 1);

        NavSys7 = new QCheckBox(GroupBox1);
        NavSys7->setObjectName(QStringLiteral("NavSys7"));

        gridLayout->addWidget(NavSys7, 1, 3, 1, 1);


        gridLayout_2->addWidget(GroupBox1, 16, 0, 3, 4);

        widget_2 = new QWidget(Panel2);
        widget_2->setObjectName(QStringLiteral("widget_2"));
        gridLayout_3 = new QGridLayout(widget_2);
        gridLayout_3->setObjectName(QStringLiteral("gridLayout_3"));
        gridLayout_3->setContentsMargins(0, 0, 0, 0);
        MColor1 = new QToolButton(widget_2);
        MColor1->setObjectName(QStringLiteral("MColor1"));
        MColor1->setEnabled(true);
        QSizePolicy sizePolicy(QSizePolicy::Fixed, QSizePolicy::Fixed);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(MColor1->sizePolicy().hasHeightForWidth());
        MColor1->setSizePolicy(sizePolicy);
        MColor1->setLayoutDirection(Qt::LeftToRight);

        gridLayout_3->addWidget(MColor1, 0, 1, 1, 1);

        MColor4 = new QToolButton(widget_2);
        MColor4->setObjectName(QStringLiteral("MColor4"));
        MColor4->setEnabled(true);
        MColor4->setLayoutDirection(Qt::LeftToRight);

        gridLayout_3->addWidget(MColor4, 0, 4, 1, 1);

        Label14 = new QLabel(widget_2);
        Label14->setObjectName(QStringLiteral("Label14"));
        Label14->setEnabled(true);

        gridLayout_3->addWidget(Label14, 0, 0, 1, 1);

        MColor5 = new QToolButton(widget_2);
        MColor5->setObjectName(QStringLiteral("MColor5"));
        MColor5->setEnabled(true);
        MColor5->setLayoutDirection(Qt::LeftToRight);

        gridLayout_3->addWidget(MColor5, 0, 5, 1, 1);

        MColor6 = new QToolButton(widget_2);
        MColor6->setObjectName(QStringLiteral("MColor6"));
        MColor6->setEnabled(true);
        MColor6->setLayoutDirection(Qt::LeftToRight);

        gridLayout_3->addWidget(MColor6, 0, 6, 1, 1);

        MColor3 = new QToolButton(widget_2);
        MColor3->setObjectName(QStringLiteral("MColor3"));
        MColor3->setEnabled(true);
        MColor3->setLayoutDirection(Qt::LeftToRight);

        gridLayout_3->addWidget(MColor3, 0, 3, 1, 1);

        MColor2 = new QToolButton(widget_2);
        MColor2->setObjectName(QStringLiteral("MColor2"));
        MColor2->setEnabled(true);
        MColor2->setLayoutDirection(Qt::LeftToRight);

        gridLayout_3->addWidget(MColor2, 0, 2, 1, 1);

        Label32 = new QLabel(widget_2);
        Label32->setObjectName(QStringLiteral("Label32"));
        Label32->setEnabled(true);

        gridLayout_3->addWidget(Label32, 1, 0, 1, 1);

        MColor7 = new QToolButton(widget_2);
        MColor7->setObjectName(QStringLiteral("MColor7"));
        MColor7->setEnabled(true);
        sizePolicy.setHeightForWidth(MColor7->sizePolicy().hasHeightForWidth());
        MColor7->setSizePolicy(sizePolicy);
        MColor7->setLayoutDirection(Qt::LeftToRight);

        gridLayout_3->addWidget(MColor7, 1, 1, 1, 1);

        MColor8 = new QToolButton(widget_2);
        MColor8->setObjectName(QStringLiteral("MColor8"));
        MColor8->setEnabled(true);
        MColor8->setLayoutDirection(Qt::LeftToRight);

        gridLayout_3->addWidget(MColor8, 1, 2, 1, 1);

        MColor9 = new QToolButton(widget_2);
        MColor9->setObjectName(QStringLiteral("MColor9"));
        MColor9->setEnabled(true);
        MColor9->setLayoutDirection(Qt::LeftToRight);

        gridLayout_3->addWidget(MColor9, 1, 3, 1, 1);

        MColor10 = new QToolButton(widget_2);
        MColor10->setObjectName(QStringLiteral("MColor10"));
        MColor10->setEnabled(true);
        MColor10->setLayoutDirection(Qt::LeftToRight);

        gridLayout_3->addWidget(MColor10, 1, 4, 1, 1);

        MColor11 = new QToolButton(widget_2);
        MColor11->setObjectName(QStringLiteral("MColor11"));
        MColor11->setEnabled(true);
        MColor11->setLayoutDirection(Qt::LeftToRight);

        gridLayout_3->addWidget(MColor11, 1, 5, 1, 1);

        MColor12 = new QToolButton(widget_2);
        MColor12->setObjectName(QStringLiteral("MColor12"));
        MColor12->setEnabled(true);
        MColor12->setLayoutDirection(Qt::LeftToRight);

        gridLayout_3->addWidget(MColor12, 1, 6, 1, 1);


        gridLayout_2->addWidget(widget_2, 1, 10, 2, 6);

        Label8 = new QLabel(Panel2);
        Label8->setObjectName(QStringLiteral("Label8"));
        Label8->setEnabled(true);

        gridLayout_2->addWidget(Label8, 8, 4, 1, 3);

        Label19 = new QLabel(Panel2);
        Label19->setObjectName(QStringLiteral("Label19"));
        Label19->setEnabled(true);

        gridLayout_2->addWidget(Label19, 1, 4, 1, 3);

        Label36 = new QLabel(Panel2);
        Label36->setObjectName(QStringLiteral("Label36"));
        Label36->setEnabled(true);

        gridLayout_2->addWidget(Label36, 20, 1, 1, 1);

        AutoScale = new QComboBox(Panel2);
        AutoScale->setObjectName(QStringLiteral("AutoScale"));
        AutoScale->setEnabled(true);

        gridLayout_2->addWidget(AutoScale, 7, 7, 1, 3);

        Label10 = new QLabel(Panel2);
        Label10->setObjectName(QStringLiteral("Label10"));
        Label10->setEnabled(true);

        gridLayout_2->addWidget(Label10, 8, 10, 1, 1);

        Label25 = new QLabel(Panel2);
        Label25->setObjectName(QStringLiteral("Label25"));
        Label25->setEnabled(true);

        gridLayout_2->addWidget(Label25, 10, 1, 1, 2);

        ShowScale = new QComboBox(Panel2);
        ShowScale->setObjectName(QStringLiteral("ShowScale"));
        ShowScale->setEnabled(true);

        gridLayout_2->addWidget(ShowScale, 6, 7, 1, 3);

        YRange = new QComboBox(Panel2);
        YRange->setObjectName(QStringLiteral("YRange"));
        YRange->setEnabled(true);

        gridLayout_2->addWidget(YRange, 8, 7, 1, 3);

        Label24 = new QLabel(Panel2);
        Label24->setObjectName(QStringLiteral("Label24"));
        Label24->setEnabled(true);

        gridLayout_2->addWidget(Label24, 6, 1, 1, 1);

        Color1 = new QLabel(Panel2);
        Color1->setObjectName(QStringLiteral("Color1"));
        Color1->setEnabled(true);
        Color1->setLayoutDirection(Qt::LeftToRight);
        Color1->setFrameShape(QFrame::Box);
        Color1->setFrameShadow(QFrame::Sunken);
        Color1->setAlignment(Qt::AlignCenter);

        gridLayout_2->addWidget(Color1, 6, 12, 1, 2);

        LabelExSats = new QLabel(Panel2);
        LabelExSats->setObjectName(QStringLiteral("LabelExSats"));
        LabelExSats->setEnabled(true);

        gridLayout_2->addWidget(LabelExSats, 19, 1, 1, 1);

        RcvPos = new QComboBox(Panel2);
        RcvPos->setObjectName(QStringLiteral("RcvPos"));
        RcvPos->setEnabled(true);

        gridLayout_2->addWidget(RcvPos, 15, 3, 1, 1);

        BtnTLESatFile = new QPushButton(Panel2);
        BtnTLESatFile->setObjectName(QStringLiteral("BtnTLESatFile"));
        BtnTLESatFile->setEnabled(true);
        QPalette palette;
        QBrush brush(QColor(0, 0, 0, 255));
        brush.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Active, QPalette::WindowText, brush);
        palette.setBrush(QPalette::Inactive, QPalette::WindowText, brush);
        palette.setBrush(QPalette::Disabled, QPalette::WindowText, brush);
        BtnTLESatFile->setPalette(palette);
        BtnTLESatFile->setFlat(false);

        gridLayout_2->addWidget(BtnTLESatFile, 19, 15, 1, 1);

        Label1 = new QLabel(Panel2);
        Label1->setObjectName(QStringLiteral("Label1"));
        Label1->setEnabled(true);

        gridLayout_2->addWidget(Label1, 6, 10, 1, 2);

        BtnColor2 = new QPushButton(Panel2);
        BtnColor2->setObjectName(QStringLiteral("BtnColor2"));
        BtnColor2->setEnabled(true);
        QPalette palette1;
        palette1.setBrush(QPalette::Active, QPalette::WindowText, brush);
        palette1.setBrush(QPalette::Inactive, QPalette::WindowText, brush);
        palette1.setBrush(QPalette::Disabled, QPalette::WindowText, brush);
        BtnColor2->setPalette(palette1);
        BtnColor2->setFlat(false);

        gridLayout_2->addWidget(BtnColor2, 5, 15, 1, 1);

        FontLabel = new QLabel(Panel2);
        FontLabel->setObjectName(QStringLiteral("FontLabel"));
        FontLabel->setEnabled(true);

        gridLayout_2->addWidget(FontLabel, 10, 12, 1, 3);

        ShowGLabel = new QComboBox(Panel2);
        ShowGLabel->setObjectName(QStringLiteral("ShowGLabel"));
        ShowGLabel->setEnabled(true);

        gridLayout_2->addWidget(ShowGLabel, 4, 7, 1, 3);

        ShowLabel = new QComboBox(Panel2);
        ShowLabel->setObjectName(QStringLiteral("ShowLabel"));
        ShowLabel->setEnabled(true);

        gridLayout_2->addWidget(ShowLabel, 3, 7, 1, 3);

        Label27 = new QLabel(Panel2);
        Label27->setObjectName(QStringLiteral("Label27"));
        Label27->setEnabled(true);

        gridLayout_2->addWidget(Label27, 14, 10, 1, 2);

        TimeLabel = new QComboBox(Panel2);
        TimeLabel->setObjectName(QStringLiteral("TimeLabel"));
        TimeLabel->setEnabled(true);

        gridLayout_2->addWidget(TimeLabel, 1, 3, 1, 1);

        Label6 = new QLabel(Panel2);
        Label6->setObjectName(QStringLiteral("Label6"));
        Label6->setEnabled(true);

        gridLayout_2->addWidget(Label6, 4, 10, 1, 1);

        ShowEph = new QComboBox(Panel2);
        ShowEph->setObjectName(QStringLiteral("ShowEph"));
        ShowEph->setEnabled(true);

        gridLayout_2->addWidget(ShowEph, 6, 3, 1, 1);

        ElMaskP = new QComboBox(Panel2);
        ElMaskP->setObjectName(QStringLiteral("ElMaskP"));
        ElMaskP->setEnabled(true);

        gridLayout_2->addWidget(ElMaskP, 8, 3, 1, 1);

        Label33 = new QLabel(Panel2);
        Label33->setObjectName(QStringLiteral("Label33"));
        Label33->setEnabled(true);

        gridLayout_2->addWidget(Label33, 17, 4, 1, 1);

        LabelFont = new QLabel(Panel2);
        LabelFont->setObjectName(QStringLiteral("LabelFont"));
        LabelFont->setEnabled(true);

        gridLayout_2->addWidget(LabelFont, 10, 10, 1, 1);

        Label23 = new QLabel(Panel2);
        Label23->setObjectName(QStringLiteral("Label23"));
        Label23->setEnabled(true);

        gridLayout_2->addWidget(Label23, 5, 4, 1, 2);

        Label7 = new QLabel(Panel2);
        Label7->setObjectName(QStringLiteral("Label7"));
        Label7->setEnabled(true);

        gridLayout_2->addWidget(Label7, 3, 10, 1, 1);

        Label34 = new QLabel(Panel2);
        Label34->setObjectName(QStringLiteral("Label34"));
        Label34->setEnabled(true);

        gridLayout_2->addWidget(Label34, 18, 4, 1, 1);

        ElMask = new QComboBox(Panel2);
        ElMask->setObjectName(QStringLiteral("ElMask"));
        ElMask->setEnabled(true);

        gridLayout_2->addWidget(ElMask, 7, 3, 1, 1);

        BtnTLEFile = new QPushButton(Panel2);
        BtnTLEFile->setObjectName(QStringLiteral("BtnTLEFile"));
        BtnTLEFile->setEnabled(true);
        QPalette palette2;
        palette2.setBrush(QPalette::Active, QPalette::WindowText, brush);
        palette2.setBrush(QPalette::Inactive, QPalette::WindowText, brush);
        palette2.setBrush(QPalette::Disabled, QPalette::WindowText, brush);
        BtnTLEFile->setPalette(palette2);
        BtnTLEFile->setFlat(false);

        gridLayout_2->addWidget(BtnTLEFile, 18, 15, 1, 1);

        RnxOpts = new QLineEdit(Panel2);
        RnxOpts->setObjectName(QStringLiteral("RnxOpts"));
        RnxOpts->setEnabled(true);

        gridLayout_2->addWidget(RnxOpts, 17, 6, 1, 11);

        Label5 = new QLabel(Panel2);
        Label5->setObjectName(QStringLiteral("Label5"));
        Label5->setEnabled(true);

        gridLayout_2->addWidget(Label5, 5, 10, 1, 1);

        MarkSize = new QComboBox(Panel2);
        MarkSize->setObjectName(QStringLiteral("MarkSize"));
        MarkSize->setEnabled(true);

        gridLayout_2->addWidget(MarkSize, 8, 12, 1, 4);

        BtnFont = new QPushButton(Panel2);
        BtnFont->setObjectName(QStringLiteral("BtnFont"));
        BtnFont->setEnabled(true);
        QPalette palette3;
        palette3.setBrush(QPalette::Active, QPalette::WindowText, brush);
        palette3.setBrush(QPalette::Inactive, QPalette::WindowText, brush);
        palette3.setBrush(QPalette::Disabled, QPalette::WindowText, brush);
        BtnFont->setPalette(palette3);
        BtnFont->setFlat(false);

        gridLayout_2->addWidget(BtnFont, 10, 15, 1, 1);

        ShowArrow = new QComboBox(Panel2);
        ShowArrow->setObjectName(QStringLiteral("ShowArrow"));
        ShowArrow->setEnabled(true);

        gridLayout_2->addWidget(ShowArrow, 2, 7, 1, 3);

        Label11 = new QLabel(Panel2);
        Label11->setObjectName(QStringLiteral("Label11"));
        Label11->setEnabled(true);

        gridLayout_2->addWidget(Label11, 12, 10, 1, 1);

        Label12 = new QLabel(Panel2);
        Label12->setObjectName(QStringLiteral("Label12"));
        Label12->setEnabled(true);

        gridLayout_2->addWidget(Label12, 1, 1, 1, 1);

        AnimCycle = new QComboBox(Panel2);
        AnimCycle->setObjectName(QStringLiteral("AnimCycle"));
        AnimCycle->setEnabled(true);

        gridLayout_2->addWidget(AnimCycle, 12, 12, 1, 4);

        BtnColor1 = new QPushButton(Panel2);
        BtnColor1->setObjectName(QStringLiteral("BtnColor1"));
        BtnColor1->setEnabled(true);
        QPalette palette4;
        palette4.setBrush(QPalette::Active, QPalette::WindowText, brush);
        palette4.setBrush(QPalette::Inactive, QPalette::WindowText, brush);
        palette4.setBrush(QPalette::Disabled, QPalette::WindowText, brush);
        BtnColor1->setPalette(palette4);
        BtnColor1->setFlat(false);

        gridLayout_2->addWidget(BtnColor1, 6, 15, 1, 1);

        Label15 = new QLabel(Panel2);
        Label15->setObjectName(QStringLiteral("Label15"));
        Label15->setEnabled(true);

        gridLayout_2->addWidget(Label15, 2, 1, 1, 1);

        LatLonFmt = new QComboBox(Panel2);
        LatLonFmt->setObjectName(QStringLiteral("LatLonFmt"));
        LatLonFmt->setEnabled(true);

        gridLayout_2->addWidget(LatLonFmt, 2, 3, 1, 1);

        LabelRefPos = new QLabel(Panel2);
        LabelRefPos->setObjectName(QStringLiteral("LabelRefPos"));
        LabelRefPos->setEnabled(true);

        gridLayout_2->addWidget(LabelRefPos, 15, 4, 1, 2);

        Color3 = new QLabel(Panel2);
        Color3->setObjectName(QStringLiteral("Color3"));
        Color3->setEnabled(true);
        Color3->setLayoutDirection(Qt::LeftToRight);
        Color3->setFrameShape(QFrame::Box);
        Color3->setFrameShadow(QFrame::Sunken);
        Color3->setAlignment(Qt::AlignCenter);

        gridLayout_2->addWidget(Color3, 4, 12, 1, 2);

        Label37 = new QLabel(Panel2);
        Label37->setObjectName(QStringLiteral("Label37"));
        Label37->setEnabled(true);

        gridLayout_2->addWidget(Label37, 14, 1, 1, 1);

        ShowHalfC = new QComboBox(Panel2);
        ShowHalfC->setObjectName(QStringLiteral("ShowHalfC"));
        ShowHalfC->setEnabled(true);

        gridLayout_2->addWidget(ShowHalfC, 5, 3, 1, 1);

        PlotStyle = new QComboBox(Panel2);
        PlotStyle->setObjectName(QStringLiteral("PlotStyle"));
        PlotStyle->setEnabled(true);

        gridLayout_2->addWidget(PlotStyle, 7, 12, 1, 4);

        TLESatFile = new QLineEdit(Panel2);
        TLESatFile->setObjectName(QStringLiteral("TLESatFile"));
        TLESatFile->setEnabled(true);

        gridLayout_2->addWidget(TLESatFile, 19, 6, 1, 8);

        Label26 = new QLabel(Panel2);
        Label26->setObjectName(QStringLiteral("Label26"));
        Label26->setEnabled(true);

        gridLayout_2->addWidget(Label26, 8, 1, 1, 2);

        Label13 = new QLabel(Panel2);
        Label13->setObjectName(QStringLiteral("Label13"));
        Label13->setEnabled(true);

        gridLayout_2->addWidget(Label13, 7, 4, 1, 1);

        Label4 = new QLabel(Panel2);
        Label4->setObjectName(QStringLiteral("Label4"));
        Label4->setEnabled(true);

        gridLayout_2->addWidget(Label4, 2, 4, 1, 3);

        Label17 = new QLabel(Panel2);
        Label17->setObjectName(QStringLiteral("Label17"));
        Label17->setEnabled(true);

        gridLayout_2->addWidget(Label17, 4, 1, 1, 1);

        MaxMP = new QComboBox(Panel2);
        MaxMP->setObjectName(QStringLiteral("MaxMP"));
        MaxMP->setEnabled(true);

        gridLayout_2->addWidget(MaxMP, 14, 3, 1, 1);

        Label30 = new QLabel(Panel2);
        Label30->setObjectName(QStringLiteral("Label30"));
        Label30->setEnabled(true);

        gridLayout_2->addWidget(Label30, 16, 4, 1, 1);

        Label29 = new QLabel(Panel2);
        Label29->setObjectName(QStringLiteral("Label29"));
        Label29->setEnabled(true);

        gridLayout_2->addWidget(Label29, 10, 4, 1, 3);

        Label2 = new QLabel(Panel2);
        Label2->setObjectName(QStringLiteral("Label2"));
        Label2->setEnabled(true);

        gridLayout_2->addWidget(Label2, 7, 10, 1, 1);

        ShowSlip = new QComboBox(Panel2);
        ShowSlip->setObjectName(QStringLiteral("ShowSlip"));
        ShowSlip->setEnabled(true);

        gridLayout_2->addWidget(ShowSlip, 4, 3, 1, 1);

        ShowErr = new QComboBox(Panel2);
        ShowErr->setObjectName(QStringLiteral("ShowErr"));
        ShowErr->setEnabled(true);

        gridLayout_2->addWidget(ShowErr, 1, 7, 1, 3);

        Label18 = new QLabel(Panel2);
        Label18->setObjectName(QStringLiteral("Label18"));
        Label18->setEnabled(true);

        gridLayout_2->addWidget(Label18, 7, 1, 1, 2);

        Label21 = new QLabel(Panel2);
        Label21->setObjectName(QStringLiteral("Label21"));
        Label21->setEnabled(true);

        gridLayout_2->addWidget(Label21, 4, 4, 1, 3);

        ExSats = new QLineEdit(Panel2);
        ExSats->setObjectName(QStringLiteral("ExSats"));
        ExSats->setEnabled(true);

        gridLayout_2->addWidget(ExSats, 19, 3, 1, 1);

        Label28 = new QLabel(Panel2);
        Label28->setObjectName(QStringLiteral("Label28"));
        Label28->setEnabled(true);

        gridLayout_2->addWidget(Label28, 12, 1, 1, 1);

        Color2 = new QLabel(Panel2);
        Color2->setObjectName(QStringLiteral("Color2"));
        Color2->setEnabled(true);
        Color2->setLayoutDirection(Qt::LeftToRight);
        Color2->setFrameShape(QFrame::Box);
        Color2->setFrameShadow(QFrame::Sunken);
        Color2->setAlignment(Qt::AlignCenter);

        gridLayout_2->addWidget(Color2, 5, 12, 1, 2);

        BtnColor3 = new QPushButton(Panel2);
        BtnColor3->setObjectName(QStringLiteral("BtnColor3"));
        BtnColor3->setEnabled(true);
        QPalette palette5;
        palette5.setBrush(QPalette::Active, QPalette::WindowText, brush);
        palette5.setBrush(QPalette::Inactive, QPalette::WindowText, brush);
        palette5.setBrush(QPalette::Disabled, QPalette::WindowText, brush);
        BtnColor3->setPalette(palette5);
        BtnColor3->setFlat(false);

        gridLayout_2->addWidget(BtnColor3, 4, 15, 1, 1);

        Label22 = new QLabel(Panel2);
        Label22->setObjectName(QStringLiteral("Label22"));
        Label22->setEnabled(true);

        gridLayout_2->addWidget(Label22, 6, 4, 1, 1);

        BtnTLESatView = new QPushButton(Panel2);
        BtnTLESatView->setObjectName(QStringLiteral("BtnTLESatView"));
        BtnTLESatView->setEnabled(true);
        sizePolicy.setHeightForWidth(BtnTLESatView->sizePolicy().hasHeightForWidth());
        BtnTLESatView->setSizePolicy(sizePolicy);
        QIcon icon;
        icon.addFile(QStringLiteral(":/buttons/doc.bmp"), QSize(), QIcon::Normal, QIcon::Off);
        BtnTLESatView->setIcon(icon);
        BtnTLESatView->setFlat(true);

        gridLayout_2->addWidget(BtnTLESatView, 19, 14, 1, 1);

        BtnTLEView = new QPushButton(Panel2);
        BtnTLEView->setObjectName(QStringLiteral("BtnTLEView"));
        BtnTLEView->setEnabled(true);
        sizePolicy.setHeightForWidth(BtnTLEView->sizePolicy().hasHeightForWidth());
        BtnTLEView->setSizePolicy(sizePolicy);
        BtnTLEView->setIcon(icon);
        BtnTLEView->setFlat(true);

        gridLayout_2->addWidget(BtnTLEView, 18, 14, 1, 1);

        QcCmd = new QLineEdit(Panel2);
        QcCmd->setObjectName(QStringLiteral("QcCmd"));
        QcCmd->setEnabled(true);

        gridLayout_2->addWidget(QcCmd, 16, 6, 1, 11);

        ShowStats = new QComboBox(Panel2);
        ShowStats->setObjectName(QStringLiteral("ShowStats"));
        ShowStats->setEnabled(true);

        gridLayout_2->addWidget(ShowStats, 3, 3, 1, 1);

        Label20 = new QLabel(Panel2);
        Label20->setObjectName(QStringLiteral("Label20"));
        Label20->setEnabled(true);

        gridLayout_2->addWidget(Label20, 3, 4, 1, 2);

        BtnColor4 = new QPushButton(Panel2);
        BtnColor4->setObjectName(QStringLiteral("BtnColor4"));
        BtnColor4->setEnabled(true);
        QPalette palette6;
        palette6.setBrush(QPalette::Active, QPalette::WindowText, brush);
        palette6.setBrush(QPalette::Inactive, QPalette::WindowText, brush);
        palette6.setBrush(QPalette::Disabled, QPalette::WindowText, brush);
        BtnColor4->setPalette(palette6);
        BtnColor4->setFlat(false);

        gridLayout_2->addWidget(BtnColor4, 3, 15, 1, 1);

        Label35 = new QLabel(Panel2);
        Label35->setObjectName(QStringLiteral("Label35"));
        Label35->setEnabled(true);

        gridLayout_2->addWidget(Label35, 19, 4, 1, 1);

        Label9 = new QLabel(Panel2);
        Label9->setObjectName(QStringLiteral("Label9"));
        Label9->setEnabled(true);

        gridLayout_2->addWidget(Label9, 3, 1, 1, 1);

        ShowCompass = new QComboBox(Panel2);
        ShowCompass->setObjectName(QStringLiteral("ShowCompass"));
        ShowCompass->setEnabled(true);

        gridLayout_2->addWidget(ShowCompass, 5, 7, 1, 3);

        MaxDop = new QComboBox(Panel2);
        MaxDop->setObjectName(QStringLiteral("MaxDop"));
        MaxDop->setEnabled(true);

        gridLayout_2->addWidget(MaxDop, 12, 3, 1, 1);

        RefCycle = new QSpinBox(Panel2);
        RefCycle->setObjectName(QStringLiteral("RefCycle"));
        RefCycle->setMaximum(100000);
        RefCycle->setValue(100);

        gridLayout_2->addWidget(RefCycle, 14, 12, 1, 4);

        RefPos1 = new QDoubleSpinBox(Panel2);
        RefPos1->setObjectName(QStringLiteral("RefPos1"));
        RefPos1->setDecimals(9);
        RefPos1->setMinimum(-90);
        RefPos1->setMaximum(90);

        gridLayout_2->addWidget(RefPos1, 15, 6, 1, 2);

        RefPos2 = new QDoubleSpinBox(Panel2);
        RefPos2->setObjectName(QStringLiteral("RefPos2"));
        RefPos2->setDecimals(9);
        RefPos2->setMinimum(-180);
        RefPos2->setMaximum(180);

        gridLayout_2->addWidget(RefPos2, 15, 8, 1, 3);

        TLEFile = new QLineEdit(Panel2);
        TLEFile->setObjectName(QStringLiteral("TLEFile"));
        TLEFile->setEnabled(true);

        gridLayout_2->addWidget(TLEFile, 18, 6, 1, 8);

        RefPos3 = new QDoubleSpinBox(Panel2);
        RefPos3->setObjectName(QStringLiteral("RefPos3"));
        RefPos3->setDecimals(4);
        RefPos3->setMinimum(-1000);
        RefPos3->setMaximum(10000);

        gridLayout_2->addWidget(RefPos3, 15, 11, 1, 4);

        Color4 = new QLabel(Panel2);
        Color4->setObjectName(QStringLiteral("Color4"));
        Color4->setEnabled(true);
        Color4->setLayoutDirection(Qt::LeftToRight);
        Color4->setFrameShape(QFrame::Box);
        Color4->setFrameShadow(QFrame::Sunken);
        Color4->setAlignment(Qt::AlignCenter);

        gridLayout_2->addWidget(Color4, 3, 12, 1, 2);

        HideLowSat = new QComboBox(Panel2);
        HideLowSat->setObjectName(QStringLiteral("HideLowSat"));
        HideLowSat->setEnabled(true);

        gridLayout_2->addWidget(HideLowSat, 10, 3, 1, 1);

        Label31 = new QLabel(Panel2);
        Label31->setObjectName(QStringLiteral("Label31"));
        Label31->setEnabled(true);

        gridLayout_2->addWidget(Label31, 15, 1, 1, 2);

        Label16 = new QLabel(Panel2);
        Label16->setObjectName(QStringLiteral("Label16"));
        Label16->setEnabled(true);

        gridLayout_2->addWidget(Label16, 5, 1, 1, 1);

        BtnRefPos = new QPushButton(Panel2);
        BtnRefPos->setObjectName(QStringLiteral("BtnRefPos"));
        BtnRefPos->setEnabled(true);
        QPalette palette7;
        palette7.setBrush(QPalette::Active, QPalette::WindowText, brush);
        palette7.setBrush(QPalette::Inactive, QPalette::WindowText, brush);
        palette7.setBrush(QPalette::Disabled, QPalette::WindowText, brush);
        BtnRefPos->setPalette(palette7);
        BtnRefPos->setFlat(false);

        gridLayout_2->addWidget(BtnRefPos, 15, 15, 1, 1);

        BuffSize = new QSpinBox(Panel2);
        BuffSize->setObjectName(QStringLiteral("BuffSize"));
        BuffSize->setMaximum(1000000);
        BuffSize->setValue(10800);

        gridLayout_2->addWidget(BuffSize, 10, 7, 1, 1);

        Origin = new QComboBox(Panel2);
        Origin->setObjectName(QStringLiteral("Origin"));
        Origin->setEnabled(true);

        gridLayout_2->addWidget(Origin, 14, 7, 1, 1);

        Label3 = new QLabel(Panel2);
        Label3->setObjectName(QStringLiteral("Label3"));
        Label3->setEnabled(true);

        gridLayout_2->addWidget(Label3, 14, 4, 1, 1);

        EditTimeSync = new QSpinBox(Panel2);
        EditTimeSync->setObjectName(QStringLiteral("EditTimeSync"));

        gridLayout_2->addWidget(EditTimeSync, 12, 7, 1, 1);

        ChkTimeSync = new QCheckBox(Panel2);
        ChkTimeSync->setObjectName(QStringLiteral("ChkTimeSync"));

        gridLayout_2->addWidget(ChkTimeSync, 12, 4, 1, 1);


        verticalLayout->addWidget(Panel2);

        widget = new QWidget(PlotOptDialog);
        widget->setObjectName(QStringLiteral("widget"));
        horizontalLayout_2 = new QHBoxLayout(widget);
        horizontalLayout_2->setSpacing(0);
        horizontalLayout_2->setObjectName(QStringLiteral("horizontalLayout_2"));
        horizontalLayout_2->setContentsMargins(0, 0, 0, 0);
        Msg = new QLabel(widget);
        Msg->setObjectName(QStringLiteral("Msg"));
        Msg->setEnabled(true);
        QSizePolicy sizePolicy1(QSizePolicy::MinimumExpanding, QSizePolicy::Preferred);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(Msg->sizePolicy().hasHeightForWidth());
        Msg->setSizePolicy(sizePolicy1);

        horizontalLayout_2->addWidget(Msg);

        BtnOK = new QPushButton(widget);
        BtnOK->setObjectName(QStringLiteral("BtnOK"));
        BtnOK->setEnabled(true);
        sizePolicy.setHeightForWidth(BtnOK->sizePolicy().hasHeightForWidth());
        BtnOK->setSizePolicy(sizePolicy);
        BtnOK->setAutoDefault(true);

        horizontalLayout_2->addWidget(BtnOK);

        BtnCancel = new QPushButton(widget);
        BtnCancel->setObjectName(QStringLiteral("BtnCancel"));
        BtnCancel->setEnabled(true);
        sizePolicy.setHeightForWidth(BtnCancel->sizePolicy().hasHeightForWidth());
        BtnCancel->setSizePolicy(sizePolicy);

        horizontalLayout_2->addWidget(BtnCancel);


        verticalLayout->addWidget(widget);

        QWidget::setTabOrder(BtnOK, BtnCancel);
        QWidget::setTabOrder(BtnCancel, TimeLabel);
        QWidget::setTabOrder(TimeLabel, LatLonFmt);
        QWidget::setTabOrder(LatLonFmt, ShowStats);
        QWidget::setTabOrder(ShowStats, ShowSlip);
        QWidget::setTabOrder(ShowSlip, ShowHalfC);
        QWidget::setTabOrder(ShowHalfC, ShowEph);
        QWidget::setTabOrder(ShowEph, ElMask);
        QWidget::setTabOrder(ElMask, ElMaskP);
        QWidget::setTabOrder(ElMaskP, HideLowSat);
        QWidget::setTabOrder(HideLowSat, MaxDop);
        QWidget::setTabOrder(MaxDop, MaxMP);
        QWidget::setTabOrder(MaxMP, RcvPos);
        QWidget::setTabOrder(RcvPos, NavSys1);
        QWidget::setTabOrder(NavSys1, NavSys2);
        QWidget::setTabOrder(NavSys2, NavSys3);
        QWidget::setTabOrder(NavSys3, NavSys4);
        QWidget::setTabOrder(NavSys4, NavSys5);
        QWidget::setTabOrder(NavSys5, NavSys6);
        QWidget::setTabOrder(NavSys6, NavSys7);
        QWidget::setTabOrder(NavSys7, ExSats);
        QWidget::setTabOrder(ExSats, ShowErr);
        QWidget::setTabOrder(ShowErr, ShowArrow);
        QWidget::setTabOrder(ShowArrow, ShowLabel);
        QWidget::setTabOrder(ShowLabel, ShowGLabel);
        QWidget::setTabOrder(ShowGLabel, ShowCompass);
        QWidget::setTabOrder(ShowCompass, ShowScale);
        QWidget::setTabOrder(ShowScale, AutoScale);
        QWidget::setTabOrder(AutoScale, YRange);
        QWidget::setTabOrder(YRange, BuffSize);
        QWidget::setTabOrder(BuffSize, MColor1);
        QWidget::setTabOrder(MColor1, MColor2);
        QWidget::setTabOrder(MColor2, MColor3);
        QWidget::setTabOrder(MColor3, MColor4);
        QWidget::setTabOrder(MColor4, MColor5);
        QWidget::setTabOrder(MColor5, MColor6);
        QWidget::setTabOrder(MColor6, MColor7);
        QWidget::setTabOrder(MColor7, MColor8);
        QWidget::setTabOrder(MColor8, MColor9);
        QWidget::setTabOrder(MColor9, MColor10);
        QWidget::setTabOrder(MColor10, MColor11);
        QWidget::setTabOrder(MColor11, MColor12);
        QWidget::setTabOrder(MColor12, BtnColor4);
        QWidget::setTabOrder(BtnColor4, BtnColor3);
        QWidget::setTabOrder(BtnColor3, BtnColor2);
        QWidget::setTabOrder(BtnColor2, BtnColor1);
        QWidget::setTabOrder(BtnColor1, PlotStyle);
        QWidget::setTabOrder(PlotStyle, MarkSize);
        QWidget::setTabOrder(MarkSize, BtnFont);
        QWidget::setTabOrder(BtnFont, AnimCycle);
        QWidget::setTabOrder(AnimCycle, RefCycle);
        QWidget::setTabOrder(RefCycle, RefPos1);
        QWidget::setTabOrder(RefPos1, RefPos2);
        QWidget::setTabOrder(RefPos2, RefPos3);
        QWidget::setTabOrder(RefPos3, BtnRefPos);
        QWidget::setTabOrder(BtnRefPos, QcCmd);
        QWidget::setTabOrder(QcCmd, RnxOpts);
        QWidget::setTabOrder(RnxOpts, TLEFile);
        QWidget::setTabOrder(TLEFile, BtnTLEView);
        QWidget::setTabOrder(BtnTLEView, BtnTLEFile);
        QWidget::setTabOrder(BtnTLEFile, TLESatFile);
        QWidget::setTabOrder(TLESatFile, BtnTLESatView);
        QWidget::setTabOrder(BtnTLESatView, BtnTLESatFile);

        retranslateUi(PlotOptDialog);

        BtnOK->setDefault(true);


        QMetaObject::connectSlotsByName(PlotOptDialog);
    } // setupUi

    void retranslateUi(QWidget *PlotOptDialog)
    {
        PlotOptDialog->setWindowTitle(QApplication::translate("PlotOptDialog", "Options", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        PlotOptDialog->setToolTip(QString());
#endif // QT_NO_TOOLTIP
#ifndef QT_NO_TOOLTIP
        Panel2->setToolTip(QString());
#endif // QT_NO_TOOLTIP
        Panel2->setProperty("text", QVariant(QString()));
#ifndef QT_NO_TOOLTIP
        GroupBox1->setToolTip(QString());
#endif // QT_NO_TOOLTIP
        GroupBox1->setTitle(QApplication::translate("PlotOptDialog", "Satellite System", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        NavSys1->setToolTip(QString());
#endif // QT_NO_TOOLTIP
        NavSys1->setText(QApplication::translate("PlotOptDialog", "GPS", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        NavSys2->setToolTip(QString());
#endif // QT_NO_TOOLTIP
        NavSys2->setText(QApplication::translate("PlotOptDialog", "GLO", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        NavSys3->setToolTip(QString());
#endif // QT_NO_TOOLTIP
        NavSys3->setText(QApplication::translate("PlotOptDialog", "GAL", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        NavSys4->setToolTip(QString());
#endif // QT_NO_TOOLTIP
        NavSys4->setText(QApplication::translate("PlotOptDialog", "QZS", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        NavSys5->setToolTip(QString());
#endif // QT_NO_TOOLTIP
        NavSys5->setText(QApplication::translate("PlotOptDialog", "SBS", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        NavSys6->setToolTip(QString());
#endif // QT_NO_TOOLTIP
        NavSys6->setText(QApplication::translate("PlotOptDialog", "BDS", Q_NULLPTR));
        NavSys7->setText(QApplication::translate("PlotOptDialog", "IRN", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        MColor1->setToolTip(QString());
#endif // QT_NO_TOOLTIP
#ifndef QT_NO_TOOLTIP
        MColor4->setToolTip(QString());
#endif // QT_NO_TOOLTIP
        MColor4->setText(QString());
#ifndef QT_NO_TOOLTIP
        Label14->setToolTip(QString());
#endif // QT_NO_TOOLTIP
        Label14->setText(QApplication::translate("PlotOptDialog", "Mark Color 1 (1-6)", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        MColor5->setToolTip(QString());
#endif // QT_NO_TOOLTIP
        MColor5->setText(QString());
#ifndef QT_NO_TOOLTIP
        MColor6->setToolTip(QString());
#endif // QT_NO_TOOLTIP
        MColor6->setText(QString());
#ifndef QT_NO_TOOLTIP
        MColor3->setToolTip(QString());
#endif // QT_NO_TOOLTIP
        MColor3->setText(QString());
#ifndef QT_NO_TOOLTIP
        MColor2->setToolTip(QString());
#endif // QT_NO_TOOLTIP
        MColor2->setText(QString());
#ifndef QT_NO_TOOLTIP
        Label32->setToolTip(QString());
#endif // QT_NO_TOOLTIP
        Label32->setText(QApplication::translate("PlotOptDialog", "Mark Color 2 (1-6)", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        MColor7->setToolTip(QString());
#endif // QT_NO_TOOLTIP
#ifndef QT_NO_TOOLTIP
        MColor8->setToolTip(QString());
#endif // QT_NO_TOOLTIP
        MColor8->setText(QString());
#ifndef QT_NO_TOOLTIP
        MColor9->setToolTip(QString());
#endif // QT_NO_TOOLTIP
        MColor9->setText(QString());
#ifndef QT_NO_TOOLTIP
        MColor10->setToolTip(QString());
#endif // QT_NO_TOOLTIP
        MColor10->setText(QString());
#ifndef QT_NO_TOOLTIP
        MColor11->setToolTip(QString());
#endif // QT_NO_TOOLTIP
        MColor11->setText(QString());
#ifndef QT_NO_TOOLTIP
        MColor12->setToolTip(QString());
#endif // QT_NO_TOOLTIP
        MColor12->setText(QString());
#ifndef QT_NO_TOOLTIP
        Label8->setToolTip(QString());
#endif // QT_NO_TOOLTIP
        Label8->setText(QApplication::translate("PlotOptDialog", "Y-Range (+/-)", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        Label19->setToolTip(QString());
#endif // QT_NO_TOOLTIP
        Label19->setText(QApplication::translate("PlotOptDialog", "Error Bar/Circle", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        Label36->setToolTip(QString());
#endif // QT_NO_TOOLTIP
        Label36->setText(QApplication::translate("PlotOptDialog", "(+Sn: Included)", Q_NULLPTR));
        AutoScale->clear();
        AutoScale->insertItems(0, QStringList()
         << QApplication::translate("PlotOptDialog", "OFF", Q_NULLPTR)
         << QApplication::translate("PlotOptDialog", "ON", Q_NULLPTR)
        );
#ifndef QT_NO_TOOLTIP
        AutoScale->setToolTip(QString());
#endif // QT_NO_TOOLTIP
#ifndef QT_NO_TOOLTIP
        Label10->setToolTip(QString());
#endif // QT_NO_TOOLTIP
        Label10->setText(QApplication::translate("PlotOptDialog", "Mark Size", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        Label25->setToolTip(QString());
#endif // QT_NO_TOOLTIP
        Label25->setText(QApplication::translate("PlotOptDialog", "Hide Low Satellite", Q_NULLPTR));
        ShowScale->clear();
        ShowScale->insertItems(0, QStringList()
         << QApplication::translate("PlotOptDialog", "OFF", Q_NULLPTR)
         << QApplication::translate("PlotOptDialog", "ON", Q_NULLPTR)
        );
#ifndef QT_NO_TOOLTIP
        ShowScale->setToolTip(QString());
#endif // QT_NO_TOOLTIP
        YRange->clear();
        YRange->insertItems(0, QStringList()
         << QApplication::translate("PlotOptDialog", "0.05", Q_NULLPTR)
         << QApplication::translate("PlotOptDialog", "0.1", Q_NULLPTR)
         << QApplication::translate("PlotOptDialog", "0.2", Q_NULLPTR)
         << QApplication::translate("PlotOptDialog", "0.5", Q_NULLPTR)
         << QApplication::translate("PlotOptDialog", "1", Q_NULLPTR)
         << QApplication::translate("PlotOptDialog", "2", Q_NULLPTR)
         << QApplication::translate("PlotOptDialog", "5", Q_NULLPTR)
         << QApplication::translate("PlotOptDialog", "10", Q_NULLPTR)
         << QApplication::translate("PlotOptDialog", "20", Q_NULLPTR)
         << QApplication::translate("PlotOptDialog", "50", Q_NULLPTR)
         << QApplication::translate("PlotOptDialog", "100", Q_NULLPTR)
         << QApplication::translate("PlotOptDialog", "500", Q_NULLPTR)
         << QApplication::translate("PlotOptDialog", "1000", Q_NULLPTR)
         << QApplication::translate("PlotOptDialog", "5000", Q_NULLPTR)
         << QApplication::translate("PlotOptDialog", "10000", Q_NULLPTR)
        );
#ifndef QT_NO_TOOLTIP
        YRange->setToolTip(QString());
#endif // QT_NO_TOOLTIP
#ifndef QT_NO_TOOLTIP
        Label24->setToolTip(QString());
#endif // QT_NO_TOOLTIP
        Label24->setText(QApplication::translate("PlotOptDialog", "Ephemeris", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        Color1->setToolTip(QString());
#endif // QT_NO_TOOLTIP
        Color1->setText(QString());
#ifndef QT_NO_TOOLTIP
        LabelExSats->setToolTip(QString());
#endif // QT_NO_TOOLTIP
        LabelExSats->setText(QApplication::translate("PlotOptDialog", "Excluded Sats", Q_NULLPTR));
        RcvPos->clear();
        RcvPos->insertItems(0, QStringList()
         << QApplication::translate("PlotOptDialog", "Single Solution", Q_NULLPTR)
         << QApplication::translate("PlotOptDialog", "Lat/Lon/Hgt", Q_NULLPTR)
         << QApplication::translate("PlotOptDialog", "RINEX Header", Q_NULLPTR)
        );
#ifndef QT_NO_TOOLTIP
        RcvPos->setToolTip(QString());
#endif // QT_NO_TOOLTIP
#ifndef QT_NO_TOOLTIP
        BtnTLESatFile->setToolTip(QString());
#endif // QT_NO_TOOLTIP
        BtnTLESatFile->setText(QApplication::translate("PlotOptDialog", "...", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        Label1->setToolTip(QString());
#endif // QT_NO_TOOLTIP
        Label1->setText(QApplication::translate("PlotOptDialog", "Background Color", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        BtnColor2->setToolTip(QString());
#endif // QT_NO_TOOLTIP
        BtnColor2->setText(QApplication::translate("PlotOptDialog", "...", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        FontLabel->setToolTip(QString());
#endif // QT_NO_TOOLTIP
        FontLabel->setText(QApplication::translate("PlotOptDialog", "Font Name", Q_NULLPTR));
        ShowGLabel->clear();
        ShowGLabel->insertItems(0, QStringList()
         << QApplication::translate("PlotOptDialog", "OFF", Q_NULLPTR)
         << QApplication::translate("PlotOptDialog", "Grid", Q_NULLPTR)
         << QApplication::translate("PlotOptDialog", "Grid/Label", Q_NULLPTR)
         << QApplication::translate("PlotOptDialog", "Circles", Q_NULLPTR)
         << QApplication::translate("PlotOptDialog", "Circles/Label", Q_NULLPTR)
        );
#ifndef QT_NO_TOOLTIP
        ShowGLabel->setToolTip(QString());
#endif // QT_NO_TOOLTIP
        ShowLabel->clear();
        ShowLabel->insertItems(0, QStringList()
         << QApplication::translate("PlotOptDialog", "OFF", Q_NULLPTR)
         << QApplication::translate("PlotOptDialog", "ON", Q_NULLPTR)
        );
#ifndef QT_NO_TOOLTIP
        ShowLabel->setToolTip(QString());
#endif // QT_NO_TOOLTIP
#ifndef QT_NO_TOOLTIP
        Label27->setToolTip(QString());
#endif // QT_NO_TOOLTIP
        Label27->setText(QApplication::translate("PlotOptDialog", "Update Cycle", Q_NULLPTR));
        TimeLabel->clear();
        TimeLabel->insertItems(0, QStringList()
         << QApplication::translate("PlotOptDialog", "www/ssss", Q_NULLPTR)
         << QApplication::translate("PlotOptDialog", "h:m:s GPST", Q_NULLPTR)
         << QApplication::translate("PlotOptDialog", "h:m:s UTC", Q_NULLPTR)
         << QApplication::translate("PlotOptDialog", "h:m:s LT", Q_NULLPTR)
        );
#ifndef QT_NO_TOOLTIP
        TimeLabel->setToolTip(QString());
#endif // QT_NO_TOOLTIP
#ifndef QT_NO_TOOLTIP
        Label6->setToolTip(QString());
#endif // QT_NO_TOOLTIP
        Label6->setText(QApplication::translate("PlotOptDialog", "Text Color", Q_NULLPTR));
        ShowEph->clear();
        ShowEph->insertItems(0, QStringList()
         << QApplication::translate("PlotOptDialog", "OFF", Q_NULLPTR)
         << QApplication::translate("PlotOptDialog", "ON", Q_NULLPTR)
        );
#ifndef QT_NO_TOOLTIP
        ShowEph->setToolTip(QString());
#endif // QT_NO_TOOLTIP
        ElMaskP->clear();
        ElMaskP->insertItems(0, QStringList()
         << QApplication::translate("PlotOptDialog", "OFF", Q_NULLPTR)
         << QApplication::translate("PlotOptDialog", "ON", Q_NULLPTR)
        );
#ifndef QT_NO_TOOLTIP
        ElMaskP->setToolTip(QString());
#endif // QT_NO_TOOLTIP
#ifndef QT_NO_TOOLTIP
        Label33->setToolTip(QString());
#endif // QT_NO_TOOLTIP
        Label33->setText(QApplication::translate("PlotOptDialog", "RINEX Opt", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        LabelFont->setToolTip(QString());
#endif // QT_NO_TOOLTIP
        LabelFont->setText(QApplication::translate("PlotOptDialog", "Font", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        Label23->setToolTip(QString());
#endif // QT_NO_TOOLTIP
        Label23->setText(QApplication::translate("PlotOptDialog", "Compass", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        Label7->setToolTip(QString());
#endif // QT_NO_TOOLTIP
        Label7->setText(QApplication::translate("PlotOptDialog", "Line Color", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        Label34->setToolTip(QString());
#endif // QT_NO_TOOLTIP
        Label34->setText(QApplication::translate("PlotOptDialog", "TLE Data", Q_NULLPTR));
        ElMask->clear();
        ElMask->insertItems(0, QStringList()
         << QApplication::translate("PlotOptDialog", "0", Q_NULLPTR)
         << QApplication::translate("PlotOptDialog", "5", Q_NULLPTR)
         << QApplication::translate("PlotOptDialog", "10", Q_NULLPTR)
         << QApplication::translate("PlotOptDialog", "15", Q_NULLPTR)
         << QApplication::translate("PlotOptDialog", "20", Q_NULLPTR)
         << QApplication::translate("PlotOptDialog", "25", Q_NULLPTR)
         << QApplication::translate("PlotOptDialog", "30", Q_NULLPTR)
         << QApplication::translate("PlotOptDialog", "35", Q_NULLPTR)
         << QApplication::translate("PlotOptDialog", "40", Q_NULLPTR)
         << QApplication::translate("PlotOptDialog", "45", Q_NULLPTR)
        );
#ifndef QT_NO_TOOLTIP
        ElMask->setToolTip(QString());
#endif // QT_NO_TOOLTIP
#ifndef QT_NO_TOOLTIP
        BtnTLEFile->setToolTip(QString());
#endif // QT_NO_TOOLTIP
        BtnTLEFile->setText(QApplication::translate("PlotOptDialog", "...", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        RnxOpts->setToolTip(QString());
#endif // QT_NO_TOOLTIP
        RnxOpts->setText(QString());
#ifndef QT_NO_TOOLTIP
        Label5->setToolTip(QString());
#endif // QT_NO_TOOLTIP
        Label5->setText(QApplication::translate("PlotOptDialog", "Grid Color", Q_NULLPTR));
        MarkSize->clear();
        MarkSize->insertItems(0, QStringList()
         << QApplication::translate("PlotOptDialog", "1", Q_NULLPTR)
         << QApplication::translate("PlotOptDialog", "2", Q_NULLPTR)
         << QApplication::translate("PlotOptDialog", "3", Q_NULLPTR)
         << QApplication::translate("PlotOptDialog", "4", Q_NULLPTR)
         << QApplication::translate("PlotOptDialog", "5", Q_NULLPTR)
         << QApplication::translate("PlotOptDialog", "10", Q_NULLPTR)
         << QApplication::translate("PlotOptDialog", "15", Q_NULLPTR)
         << QApplication::translate("PlotOptDialog", "20", Q_NULLPTR)
        );
#ifndef QT_NO_TOOLTIP
        MarkSize->setToolTip(QString());
#endif // QT_NO_TOOLTIP
#ifndef QT_NO_TOOLTIP
        BtnFont->setToolTip(QString());
#endif // QT_NO_TOOLTIP
        BtnFont->setText(QApplication::translate("PlotOptDialog", "...", Q_NULLPTR));
        ShowArrow->clear();
        ShowArrow->insertItems(0, QStringList()
         << QApplication::translate("PlotOptDialog", "OFF", Q_NULLPTR)
         << QApplication::translate("PlotOptDialog", "ON", Q_NULLPTR)
        );
#ifndef QT_NO_TOOLTIP
        ShowArrow->setToolTip(QString());
#endif // QT_NO_TOOLTIP
#ifndef QT_NO_TOOLTIP
        Label11->setToolTip(QString());
#endif // QT_NO_TOOLTIP
        Label11->setText(QApplication::translate("PlotOptDialog", "Animation Interval", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        Label12->setToolTip(QString());
#endif // QT_NO_TOOLTIP
        Label12->setText(QApplication::translate("PlotOptDialog", "Time Format", Q_NULLPTR));
        AnimCycle->clear();
        AnimCycle->insertItems(0, QStringList()
         << QApplication::translate("PlotOptDialog", "1", Q_NULLPTR)
         << QApplication::translate("PlotOptDialog", "2", Q_NULLPTR)
         << QApplication::translate("PlotOptDialog", "5", Q_NULLPTR)
         << QApplication::translate("PlotOptDialog", "10", Q_NULLPTR)
         << QApplication::translate("PlotOptDialog", "20", Q_NULLPTR)
         << QApplication::translate("PlotOptDialog", "50", Q_NULLPTR)
         << QApplication::translate("PlotOptDialog", "100", Q_NULLPTR)
        );
#ifndef QT_NO_TOOLTIP
        AnimCycle->setToolTip(QString());
#endif // QT_NO_TOOLTIP
#ifndef QT_NO_TOOLTIP
        BtnColor1->setToolTip(QString());
#endif // QT_NO_TOOLTIP
        BtnColor1->setText(QApplication::translate("PlotOptDialog", "...", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        Label15->setToolTip(QString());
#endif // QT_NO_TOOLTIP
        Label15->setText(QApplication::translate("PlotOptDialog", "Lat/Lon Format", Q_NULLPTR));
        LatLonFmt->clear();
        LatLonFmt->insertItems(0, QStringList()
         << QApplication::translate("PlotOptDialog", "ddd.ddddd", Q_NULLPTR)
         << QApplication::translate("PlotOptDialog", "ddd mm ss.ss", Q_NULLPTR)
        );
#ifndef QT_NO_TOOLTIP
        LatLonFmt->setToolTip(QString());
#endif // QT_NO_TOOLTIP
#ifndef QT_NO_TOOLTIP
        LabelRefPos->setToolTip(QString());
#endif // QT_NO_TOOLTIP
        LabelRefPos->setText(QApplication::translate("PlotOptDialog", "Lat/Lon/Hgt", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        Color3->setToolTip(QString());
#endif // QT_NO_TOOLTIP
        Color3->setText(QString());
#ifndef QT_NO_TOOLTIP
        Label37->setToolTip(QString());
#endif // QT_NO_TOOLTIP
        Label37->setText(QApplication::translate("PlotOptDialog", "Max Multipath", Q_NULLPTR));
        ShowHalfC->clear();
        ShowHalfC->insertItems(0, QStringList()
         << QApplication::translate("PlotOptDialog", "OFF", Q_NULLPTR)
         << QApplication::translate("PlotOptDialog", "ON", Q_NULLPTR)
        );
#ifndef QT_NO_TOOLTIP
        ShowHalfC->setToolTip(QString());
#endif // QT_NO_TOOLTIP
        PlotStyle->clear();
        PlotStyle->insertItems(0, QStringList()
         << QApplication::translate("PlotOptDialog", "Mark/Line", Q_NULLPTR)
         << QApplication::translate("PlotOptDialog", "Mark", Q_NULLPTR)
         << QApplication::translate("PlotOptDialog", "Line", Q_NULLPTR)
         << QApplication::translate("PlotOptDialog", "None", Q_NULLPTR)
        );
#ifndef QT_NO_TOOLTIP
        PlotStyle->setToolTip(QString());
#endif // QT_NO_TOOLTIP
#ifndef QT_NO_TOOLTIP
        TLESatFile->setToolTip(QString());
#endif // QT_NO_TOOLTIP
        TLESatFile->setText(QString());
#ifndef QT_NO_TOOLTIP
        Label26->setToolTip(QString());
#endif // QT_NO_TOOLTIP
        Label26->setText(QApplication::translate("PlotOptDialog", "Elev Mask Pattern", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        Label13->setToolTip(QString());
#endif // QT_NO_TOOLTIP
        Label13->setText(QApplication::translate("PlotOptDialog", "Auto Fit", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        Label4->setToolTip(QString());
#endif // QT_NO_TOOLTIP
        Label4->setText(QApplication::translate("PlotOptDialog", "Direction Arrow", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        Label17->setToolTip(QString());
#endif // QT_NO_TOOLTIP
        Label17->setText(QApplication::translate("PlotOptDialog", "Cycle-Slip", Q_NULLPTR));
        MaxMP->clear();
        MaxMP->insertItems(0, QStringList()
         << QApplication::translate("PlotOptDialog", "1", Q_NULLPTR)
         << QApplication::translate("PlotOptDialog", "2", Q_NULLPTR)
         << QApplication::translate("PlotOptDialog", "3", Q_NULLPTR)
         << QApplication::translate("PlotOptDialog", "5", Q_NULLPTR)
         << QApplication::translate("PlotOptDialog", "10", Q_NULLPTR)
         << QApplication::translate("PlotOptDialog", "20", Q_NULLPTR)
         << QApplication::translate("PlotOptDialog", "30", Q_NULLPTR)
        );
#ifndef QT_NO_TOOLTIP
        MaxMP->setToolTip(QString());
#endif // QT_NO_TOOLTIP
#ifndef QT_NO_TOOLTIP
        Label30->setToolTip(QString());
#endif // QT_NO_TOOLTIP
        Label30->setText(QApplication::translate("PlotOptDialog", "QC Cmd", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        Label29->setToolTip(QString());
#endif // QT_NO_TOOLTIP
        Label29->setText(QApplication::translate("PlotOptDialog", "RT Buffer Size", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        Label2->setToolTip(QString());
#endif // QT_NO_TOOLTIP
        Label2->setText(QApplication::translate("PlotOptDialog", "Plot Style", Q_NULLPTR));
        ShowSlip->clear();
        ShowSlip->insertItems(0, QStringList()
         << QApplication::translate("PlotOptDialog", "OFF", Q_NULLPTR)
         << QApplication::translate("PlotOptDialog", "LG Jump", Q_NULLPTR)
         << QApplication::translate("PlotOptDialog", "LLI Flag", Q_NULLPTR)
        );
#ifndef QT_NO_TOOLTIP
        ShowSlip->setToolTip(QString());
#endif // QT_NO_TOOLTIP
        ShowErr->clear();
        ShowErr->insertItems(0, QStringList()
         << QApplication::translate("PlotOptDialog", "OFF", Q_NULLPTR)
         << QApplication::translate("PlotOptDialog", "Bar/Circle", Q_NULLPTR)
         << QApplication::translate("PlotOptDialog", "Dots", Q_NULLPTR)
        );
#ifndef QT_NO_TOOLTIP
        ShowErr->setToolTip(QString());
#endif // QT_NO_TOOLTIP
#ifndef QT_NO_TOOLTIP
        Label18->setToolTip(QString());
#endif // QT_NO_TOOLTIP
        Label18->setText(QApplication::translate("PlotOptDialog", "Elevation Mask (\302\260)", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        Label21->setToolTip(QString());
#endif // QT_NO_TOOLTIP
        Label21->setText(QApplication::translate("PlotOptDialog", "Grid/Grid Label", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        ExSats->setToolTip(QString());
#endif // QT_NO_TOOLTIP
        ExSats->setText(QString());
#ifndef QT_NO_TOOLTIP
        Label28->setToolTip(QString());
#endif // QT_NO_TOOLTIP
        Label28->setText(QApplication::translate("PlotOptDialog", "Max NSAT/DOP", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        Color2->setToolTip(QString());
#endif // QT_NO_TOOLTIP
        Color2->setText(QString());
#ifndef QT_NO_TOOLTIP
        BtnColor3->setToolTip(QString());
#endif // QT_NO_TOOLTIP
        BtnColor3->setText(QApplication::translate("PlotOptDialog", "...", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        Label22->setToolTip(QString());
#endif // QT_NO_TOOLTIP
        Label22->setText(QApplication::translate("PlotOptDialog", "Scale", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        BtnTLESatView->setToolTip(QString());
#endif // QT_NO_TOOLTIP
        BtnTLESatView->setText(QString());
#ifndef QT_NO_TOOLTIP
        BtnTLEView->setToolTip(QString());
#endif // QT_NO_TOOLTIP
        BtnTLEView->setText(QString());
#ifndef QT_NO_TOOLTIP
        QcCmd->setToolTip(QString());
#endif // QT_NO_TOOLTIP
        QcCmd->setText(QApplication::translate("PlotOptDialog", "teqc", Q_NULLPTR));
        ShowStats->clear();
        ShowStats->insertItems(0, QStringList()
         << QApplication::translate("PlotOptDialog", "OFF", Q_NULLPTR)
         << QApplication::translate("PlotOptDialog", "ON", Q_NULLPTR)
        );
#ifndef QT_NO_TOOLTIP
        ShowStats->setToolTip(QString());
#endif // QT_NO_TOOLTIP
#ifndef QT_NO_TOOLTIP
        Label20->setToolTip(QString());
#endif // QT_NO_TOOLTIP
        Label20->setText(QApplication::translate("PlotOptDialog", "Graph Label", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        BtnColor4->setToolTip(QString());
#endif // QT_NO_TOOLTIP
        BtnColor4->setText(QApplication::translate("PlotOptDialog", "...", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        Label35->setToolTip(QString());
#endif // QT_NO_TOOLTIP
        Label35->setText(QApplication::translate("PlotOptDialog", "TLE Sat No", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        Label9->setToolTip(QString());
#endif // QT_NO_TOOLTIP
        Label9->setText(QApplication::translate("PlotOptDialog", "Show Statistics", Q_NULLPTR));
        ShowCompass->clear();
        ShowCompass->insertItems(0, QStringList()
         << QApplication::translate("PlotOptDialog", "OFF", Q_NULLPTR)
         << QApplication::translate("PlotOptDialog", "ON", Q_NULLPTR)
        );
#ifndef QT_NO_TOOLTIP
        ShowCompass->setToolTip(QString());
#endif // QT_NO_TOOLTIP
        MaxDop->clear();
        MaxDop->insertItems(0, QStringList()
         << QApplication::translate("PlotOptDialog", "10", Q_NULLPTR)
         << QApplication::translate("PlotOptDialog", "30", Q_NULLPTR)
         << QApplication::translate("PlotOptDialog", "50", Q_NULLPTR)
         << QApplication::translate("PlotOptDialog", "100", Q_NULLPTR)
         << QApplication::translate("PlotOptDialog", "200", Q_NULLPTR)
         << QApplication::translate("PlotOptDialog", "500", Q_NULLPTR)
        );
#ifndef QT_NO_TOOLTIP
        MaxDop->setToolTip(QString());
#endif // QT_NO_TOOLTIP
        RefCycle->setSuffix(QApplication::translate("PlotOptDialog", " ms", Q_NULLPTR));
        RefPos1->setSuffix(QApplication::translate("PlotOptDialog", "\302\260", Q_NULLPTR));
        RefPos2->setSuffix(QApplication::translate("PlotOptDialog", "\302\260", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        TLEFile->setToolTip(QString());
#endif // QT_NO_TOOLTIP
        TLEFile->setText(QString());
        RefPos3->setSuffix(QApplication::translate("PlotOptDialog", " m", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        Color4->setToolTip(QString());
#endif // QT_NO_TOOLTIP
        Color4->setText(QString());
        HideLowSat->clear();
        HideLowSat->insertItems(0, QStringList()
         << QApplication::translate("PlotOptDialog", "OFF", Q_NULLPTR)
         << QApplication::translate("PlotOptDialog", "ON", Q_NULLPTR)
        );
#ifndef QT_NO_TOOLTIP
        HideLowSat->setToolTip(QString());
#endif // QT_NO_TOOLTIP
#ifndef QT_NO_TOOLTIP
        Label31->setToolTip(QString());
#endif // QT_NO_TOOLTIP
        Label31->setText(QApplication::translate("PlotOptDialog", "Receiver Position", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        Label16->setToolTip(QString());
#endif // QT_NO_TOOLTIP
        Label16->setText(QApplication::translate("PlotOptDialog", "Parity Unknown", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        BtnRefPos->setToolTip(QString());
#endif // QT_NO_TOOLTIP
        BtnRefPos->setText(QApplication::translate("PlotOptDialog", "...", Q_NULLPTR));
        Origin->clear();
        Origin->insertItems(0, QStringList()
         << QApplication::translate("PlotOptDialog", "Start Pos", Q_NULLPTR)
         << QApplication::translate("PlotOptDialog", "End Pos", Q_NULLPTR)
         << QApplication::translate("PlotOptDialog", "Average Pos", Q_NULLPTR)
         << QApplication::translate("PlotOptDialog", "Linear Fit Pos", Q_NULLPTR)
         << QApplication::translate("PlotOptDialog", "Base Station", Q_NULLPTR)
         << QApplication::translate("PlotOptDialog", "Lat/Lon/Hgt", Q_NULLPTR)
         << QApplication::translate("PlotOptDialog", "Auto Input", Q_NULLPTR)
         << QApplication::translate("PlotOptDialog", "Image Center", Q_NULLPTR)
         << QApplication::translate("PlotOptDialog", "Map Center", Q_NULLPTR)
         << QApplication::translate("PlotOptDialog", "Waypnt1", Q_NULLPTR)
         << QApplication::translate("PlotOptDialog", "Waypnt2", Q_NULLPTR)
         << QApplication::translate("PlotOptDialog", "Waypnt3", Q_NULLPTR)
         << QApplication::translate("PlotOptDialog", "Waypnt4", Q_NULLPTR)
         << QApplication::translate("PlotOptDialog", "Waypnt5", Q_NULLPTR)
         << QApplication::translate("PlotOptDialog", "Waypnt6", Q_NULLPTR)
         << QApplication::translate("PlotOptDialog", "Waypnt7", Q_NULLPTR)
         << QApplication::translate("PlotOptDialog", "Waypnt8", Q_NULLPTR)
         << QApplication::translate("PlotOptDialog", "Waypnt9", Q_NULLPTR)
         << QApplication::translate("PlotOptDialog", "Waypnt10", Q_NULLPTR)
        );
#ifndef QT_NO_TOOLTIP
        Origin->setToolTip(QString());
#endif // QT_NO_TOOLTIP
#ifndef QT_NO_TOOLTIP
        Label3->setToolTip(QString());
#endif // QT_NO_TOOLTIP
        Label3->setText(QApplication::translate("PlotOptDialog", "Coordinate Origin", Q_NULLPTR));
        ChkTimeSync->setText(QApplication::translate("PlotOptDialog", "Time Sync Port", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        Msg->setToolTip(QString());
#endif // QT_NO_TOOLTIP
        Msg->setText(QString());
#ifndef QT_NO_TOOLTIP
        BtnOK->setToolTip(QString());
#endif // QT_NO_TOOLTIP
        BtnOK->setText(QApplication::translate("PlotOptDialog", "&OK", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        BtnCancel->setToolTip(QString());
#endif // QT_NO_TOOLTIP
        BtnCancel->setText(QApplication::translate("PlotOptDialog", "&Cancel", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class PlotOptDialog: public Ui_PlotOptDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_PLOTOPT_H
