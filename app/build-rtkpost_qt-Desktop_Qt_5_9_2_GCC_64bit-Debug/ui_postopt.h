/********************************************************************************
** Form generated from reading UI file 'postopt.ui'
**
** Created by: Qt User Interface Compiler version 5.9.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_POSTOPT_H
#define UI_POSTOPT_H

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
#include <QtWidgets/QPlainTextEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpinBox>
#include <QtWidgets/QTabWidget>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_OptDialog
{
public:
    QGridLayout *gridLayout_10;
    QPushButton *BtnExtOpt;
    QPushButton *BtnOk;
    QPushButton *BtnLoad;
    QPushButton *BtnSave;
    QWidget *widget;
    QHBoxLayout *horizontalLayout;
    QLabel *Label87;
    QLabel *Label5;
    QLabel *Label82;
    QLabel *Label83;
    QLabel *Label86;
    QPushButton *BtnCancel;
    QTabWidget *Misc;
    QWidget *TabSheet1;
    QGridLayout *gridLayout;
    QComboBox *PosMode;
    QLabel *LabelPosMode;
    QLabel *Label8;
    QComboBox *Solution;
    QComboBox *ElMask;
    QWidget *widget_2;
    QHBoxLayout *horizontalLayout_2;
    QCheckBox *PosOpt1;
    QCheckBox *PosOpt2;
    QCheckBox *PosOpt3;
    QCheckBox *PosOpt4;
    QCheckBox *PosOpt5;
    QCheckBox *PosOpt6;
    QLabel *LabelFreq;
    QComboBox *Freq;
    QLabel *LabelElMask;
    QComboBox *TideCorr;
    QComboBox *DynamicModel;
    QLabel *Label3;
    QComboBox *IonoOpt;
    QPushButton *BtnMask;
    QLabel *Label9;
    QComboBox *TropOpt;
    QLabel *Label32;
    QComboBox *SatEphem;
    QLabel *Label35;
    QLineEdit *ExSats;
    QWidget *widget_3;
    QHBoxLayout *horizontalLayout_3;
    QCheckBox *NavSys1;
    QCheckBox *NavSys2;
    QCheckBox *NavSys3;
    QCheckBox *NavSys4;
    QCheckBox *NavSys5;
    QCheckBox *NavSys6;
    QCheckBox *NavSys7;
    QWidget *TabSheet2;
    QGridLayout *gridLayout_2;
    QDoubleSpinBox *ElMaskHold;
    QSpinBox *OutCntResetAmb;
    QDoubleSpinBox *SlipThres;
    QDoubleSpinBox *MaxAgeDiff;
    QSpinBox *ARIter;
    QDoubleSpinBox *RejectGdop;
    QDoubleSpinBox *RejectThres;
    QSpinBox *NumIter;
    QDoubleSpinBox *ValidThresAR;
    QDoubleSpinBox *ElMaskAR;
    QSpinBox *LockCntFixAmb;
    QDoubleSpinBox *ThresAR2;
    QDoubleSpinBox *ThresAR3;
    QCheckBox *BaselineConst;
    QSpinBox *FixCntHoldAmb;
    QLabel *Label25;
    QComboBox *AmbRes;
    QComboBox *GloAmbRes;
    QComboBox *BdsAmbRes;
    QLabel *LabelRatio;
    QLabel *LabelConf;
    QLabel *Label13;
    QLabel *LabelHold;
    QLabel *Label22;
    QLabel *Label14;
    QComboBox *SyncSol;
    QLabel *Label11;
    QLabel *Label37;
    QDoubleSpinBox *BaselineLen;
    QDoubleSpinBox *BaselineSig;
    QWidget *TabSheet3;
    QGridLayout *gridLayout_3;
    QSpinBox *TimeDecimal;
    QLabel *LabelSolFormat;
    QComboBox *SolFormat;
    QLabel *Label20;
    QComboBox *OutputHead;
    QComboBox *OutputOpt;
    QLabel *LabelTimeFormat;
    QComboBox *TimeFormat;
    QLabel *LabelLatLonFormat;
    QLabel *LabelFieldSep;
    QLabel *Label2;
    QComboBox *OutputDatum;
    QComboBox *OutputHeight;
    QLabel *Label18;
    QComboBox *OutputGeoid;
    QLabel *Label31;
    QComboBox *SolStatic;
    QLabel *Label21;
    QLabel *Label36;
    QComboBox *DebugStatus;
    QComboBox *DebugTrace;
    QComboBox *LatLonFormat;
    QLineEdit *FieldSep;
    QComboBox *OutputSingle;
    QDoubleSpinBox *MaxSolStd;
    QDoubleSpinBox *NmeaIntv2;
    QDoubleSpinBox *NmeaIntv1;
    QWidget *TabSheet4;
    QGridLayout *gridLayout_11;
    QGroupBox *GroupBox3;
    QGridLayout *gridLayout_4;
    QDoubleSpinBox *MeasErr4;
    QDoubleSpinBox *MeasErrR1;
    QDoubleSpinBox *MeasErrR2;
    QDoubleSpinBox *MeasErr2;
    QDoubleSpinBox *MeasErr3;
    QLabel *Label7;
    QLabel *Label16;
    QLabel *Label64;
    QLabel *Label6;
    QDoubleSpinBox *MeasErr5;
    QLabel *Label29;
    QLineEdit *SatClkStab;
    QGroupBox *GroupBox4;
    QGridLayout *gridLayout_5;
    QLabel *Label26;
    QLineEdit *PrNoise2;
    QLabel *Label27;
    QLabel *Label10;
    QLineEdit *PrNoise4;
    QLineEdit *PrNoise5;
    QLabel *Label28;
    QLineEdit *PrNoise3;
    QLineEdit *PrNoise1;
    QWidget *TabSheet5;
    QGridLayout *gridLayout_13;
    QPushButton *BtnStaPosView;
    QPushButton *BtnStaPosFile;
    QLineEdit *StaPosFile;
    QLabel *Label4;
    QLabel *Label30;
    QGroupBox *GroupRefAnt;
    QGridLayout *gridLayout_6;
    QComboBox *RefPosType;
    QPushButton *BtnRefPos;
    QLineEdit *RefPos1;
    QLineEdit *RefPos2;
    QLineEdit *RefPos3;
    QComboBox *RefAnt;
    QCheckBox *RefAntPcv;
    QLabel *LabelRefAntD;
    QDoubleSpinBox *RefAntE;
    QDoubleSpinBox *RefAntN;
    QDoubleSpinBox *RefAntU;
    QGroupBox *GroupRovAnt;
    QGridLayout *gridLayout_7;
    QComboBox *RovPosType;
    QPushButton *BtnRovPos;
    QLineEdit *RovPos1;
    QLineEdit *RovPos2;
    QLineEdit *RovPos3;
    QComboBox *RovAnt;
    QDoubleSpinBox *RovAntE;
    QCheckBox *RovAntPcv;
    QLabel *LabelRovAntD;
    QDoubleSpinBox *RovAntN;
    QDoubleSpinBox *RovAntU;
    QWidget *TabSheet7;
    QGridLayout *gridLayout_8;
    QLabel *Label38;
    QPushButton *BtnSatPcvView;
    QPushButton *BtnAntPcvView;
    QLineEdit *SatPcvFile;
    QPushButton *BtnSatPcvFile;
    QLineEdit *AntPcvFile;
    QPushButton *BtnAntPcvFile;
    QLineEdit *GeoidDataFile;
    QPushButton *BtnGeoidDataFile;
    QLabel *Label15;
    QPushButton *BtnDCBView;
    QLineEdit *DCBFile;
    QPushButton *BtnDCBFile;
    QLabel *Label17;
    QPushButton *BtnEOPView;
    QLineEdit *EOPFile;
    QPushButton *BtnEOPFile;
    QLabel *Label34;
    QPushButton *BtnBLQFileView;
    QLineEdit *BLQFile;
    QPushButton *BtnBLQFile;
    QLabel *Label1;
    QLineEdit *IonoFile;
    QPushButton *BtnIonoFile;
    QLabel *Label63;
    QWidget *TabSheet6;
    QGridLayout *gridLayout_9;
    QWidget *Panel1;
    QGridLayout *gridLayout_12;
    QPushButton *BtnHelp;
    QLabel *Label46;
    QLabel *Label62;
    QLabel *Label43;
    QLabel *Label65;
    QLabel *Label41;
    QComboBox *IntpRefObs;
    QLabel *Label42;
    QComboBox *ComboBox1;
    QLabel *Label40;
    QLineEdit *SbasSat;
    QLabel *Label60;
    QLineEdit *RnxOpts1;
    QLabel *Label12;
    QLineEdit *RnxOpts2;
    QLabel *Label23;
    QLineEdit *PPPOpts;
    QLabel *Label45;
    QLabel *Label19;
    QLabel *Label44;
    QPlainTextEdit *RovList;
    QPlainTextEdit *BaseList;

    void setupUi(QWidget *OptDialog)
    {
        if (OptDialog->objectName().isEmpty())
            OptDialog->setObjectName(QStringLiteral("OptDialog"));
        OptDialog->resize(655, 587);
        gridLayout_10 = new QGridLayout(OptDialog);
        gridLayout_10->setObjectName(QStringLiteral("gridLayout_10"));
        BtnExtOpt = new QPushButton(OptDialog);
        BtnExtOpt->setObjectName(QStringLiteral("BtnExtOpt"));
        BtnExtOpt->setEnabled(false);
        BtnExtOpt->setFlat(false);

        gridLayout_10->addWidget(BtnExtOpt, 2, 0, 1, 1);

        BtnOk = new QPushButton(OptDialog);
        BtnOk->setObjectName(QStringLiteral("BtnOk"));
        BtnOk->setEnabled(true);
        BtnOk->setFlat(false);

        gridLayout_10->addWidget(BtnOk, 2, 6, 1, 2);

        BtnLoad = new QPushButton(OptDialog);
        BtnLoad->setObjectName(QStringLiteral("BtnLoad"));
        BtnLoad->setEnabled(true);
        BtnLoad->setFlat(false);

        gridLayout_10->addWidget(BtnLoad, 2, 1, 1, 2);

        BtnSave = new QPushButton(OptDialog);
        BtnSave->setObjectName(QStringLiteral("BtnSave"));
        BtnSave->setEnabled(true);
        BtnSave->setFlat(false);

        gridLayout_10->addWidget(BtnSave, 2, 3, 1, 2);

        widget = new QWidget(OptDialog);
        widget->setObjectName(QStringLiteral("widget"));
        horizontalLayout = new QHBoxLayout(widget);
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        Label87 = new QLabel(widget);
        Label87->setObjectName(QStringLiteral("Label87"));
        Label87->setEnabled(true);

        horizontalLayout->addWidget(Label87);

        Label5 = new QLabel(widget);
        Label5->setObjectName(QStringLiteral("Label5"));
        Label5->setEnabled(true);

        horizontalLayout->addWidget(Label5);

        Label82 = new QLabel(widget);
        Label82->setObjectName(QStringLiteral("Label82"));
        Label82->setEnabled(true);

        horizontalLayout->addWidget(Label82);

        Label83 = new QLabel(widget);
        Label83->setObjectName(QStringLiteral("Label83"));
        Label83->setEnabled(true);

        horizontalLayout->addWidget(Label83);

        Label86 = new QLabel(widget);
        Label86->setObjectName(QStringLiteral("Label86"));
        Label86->setEnabled(true);

        horizontalLayout->addWidget(Label86);


        gridLayout_10->addWidget(widget, 3, 5, 1, 4);

        BtnCancel = new QPushButton(OptDialog);
        BtnCancel->setObjectName(QStringLiteral("BtnCancel"));
        BtnCancel->setEnabled(true);
        BtnCancel->setFlat(false);

        gridLayout_10->addWidget(BtnCancel, 2, 8, 1, 1);

        Misc = new QTabWidget(OptDialog);
        Misc->setObjectName(QStringLiteral("Misc"));
        Misc->setEnabled(true);
        Misc->setTabPosition(QTabWidget::North);
        TabSheet1 = new QWidget();
        TabSheet1->setObjectName(QStringLiteral("TabSheet1"));
        gridLayout = new QGridLayout(TabSheet1);
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        PosMode = new QComboBox(TabSheet1);
        PosMode->setObjectName(QStringLiteral("PosMode"));
        PosMode->setEnabled(true);

        gridLayout->addWidget(PosMode, 1, 1, 1, 2);

        LabelPosMode = new QLabel(TabSheet1);
        LabelPosMode->setObjectName(QStringLiteral("LabelPosMode"));
        LabelPosMode->setEnabled(true);

        gridLayout->addWidget(LabelPosMode, 1, 0, 1, 1);

        Label8 = new QLabel(TabSheet1);
        Label8->setObjectName(QStringLiteral("Label8"));
        Label8->setEnabled(true);

        gridLayout->addWidget(Label8, 5, 0, 1, 1);

        Solution = new QComboBox(TabSheet1);
        Solution->setObjectName(QStringLiteral("Solution"));
        Solution->setEnabled(true);

        gridLayout->addWidget(Solution, 2, 2, 1, 1);

        ElMask = new QComboBox(TabSheet1);
        ElMask->setObjectName(QStringLiteral("ElMask"));
        ElMask->setEnabled(true);

        gridLayout->addWidget(ElMask, 3, 1, 1, 1);

        widget_2 = new QWidget(TabSheet1);
        widget_2->setObjectName(QStringLiteral("widget_2"));
        QSizePolicy sizePolicy(QSizePolicy::Preferred, QSizePolicy::Fixed);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(widget_2->sizePolicy().hasHeightForWidth());
        widget_2->setSizePolicy(sizePolicy);
        horizontalLayout_2 = new QHBoxLayout(widget_2);
        horizontalLayout_2->setObjectName(QStringLiteral("horizontalLayout_2"));
        horizontalLayout_2->setContentsMargins(0, 0, 0, 0);
        PosOpt1 = new QCheckBox(widget_2);
        PosOpt1->setObjectName(QStringLiteral("PosOpt1"));
        PosOpt1->setChecked(false);

        horizontalLayout_2->addWidget(PosOpt1);

        PosOpt2 = new QCheckBox(widget_2);
        PosOpt2->setObjectName(QStringLiteral("PosOpt2"));
        PosOpt2->setChecked(false);

        horizontalLayout_2->addWidget(PosOpt2);

        PosOpt3 = new QCheckBox(widget_2);
        PosOpt3->setObjectName(QStringLiteral("PosOpt3"));
        PosOpt3->setChecked(false);

        horizontalLayout_2->addWidget(PosOpt3);

        PosOpt4 = new QCheckBox(widget_2);
        PosOpt4->setObjectName(QStringLiteral("PosOpt4"));
        PosOpt4->setChecked(false);

        horizontalLayout_2->addWidget(PosOpt4);

        PosOpt5 = new QCheckBox(widget_2);
        PosOpt5->setObjectName(QStringLiteral("PosOpt5"));
        PosOpt5->setChecked(false);

        horizontalLayout_2->addWidget(PosOpt5);

        PosOpt6 = new QCheckBox(widget_2);
        PosOpt6->setObjectName(QStringLiteral("PosOpt6"));
        PosOpt6->setChecked(false);

        horizontalLayout_2->addWidget(PosOpt6);


        gridLayout->addWidget(widget_2, 11, 0, 1, 3);

        LabelFreq = new QLabel(TabSheet1);
        LabelFreq->setObjectName(QStringLiteral("LabelFreq"));
        LabelFreq->setEnabled(true);

        gridLayout->addWidget(LabelFreq, 2, 0, 1, 1);

        Freq = new QComboBox(TabSheet1);
        Freq->setObjectName(QStringLiteral("Freq"));
        Freq->setEnabled(true);

        gridLayout->addWidget(Freq, 2, 1, 1, 1);

        LabelElMask = new QLabel(TabSheet1);
        LabelElMask->setObjectName(QStringLiteral("LabelElMask"));
        LabelElMask->setEnabled(true);

        gridLayout->addWidget(LabelElMask, 3, 0, 1, 1);

        TideCorr = new QComboBox(TabSheet1);
        TideCorr->setObjectName(QStringLiteral("TideCorr"));
        TideCorr->setEnabled(true);

        gridLayout->addWidget(TideCorr, 4, 2, 1, 1);

        DynamicModel = new QComboBox(TabSheet1);
        DynamicModel->setObjectName(QStringLiteral("DynamicModel"));
        DynamicModel->setEnabled(true);

        gridLayout->addWidget(DynamicModel, 4, 1, 1, 1);

        Label3 = new QLabel(TabSheet1);
        Label3->setObjectName(QStringLiteral("Label3"));
        Label3->setEnabled(true);

        gridLayout->addWidget(Label3, 4, 0, 1, 1);

        IonoOpt = new QComboBox(TabSheet1);
        IonoOpt->setObjectName(QStringLiteral("IonoOpt"));
        IonoOpt->setEnabled(true);

        gridLayout->addWidget(IonoOpt, 5, 1, 1, 2);

        BtnMask = new QPushButton(TabSheet1);
        BtnMask->setObjectName(QStringLiteral("BtnMask"));
        BtnMask->setEnabled(true);
        BtnMask->setFlat(false);

        gridLayout->addWidget(BtnMask, 3, 2, 1, 1);

        Label9 = new QLabel(TabSheet1);
        Label9->setObjectName(QStringLiteral("Label9"));
        Label9->setEnabled(true);

        gridLayout->addWidget(Label9, 6, 0, 1, 1);

        TropOpt = new QComboBox(TabSheet1);
        TropOpt->setObjectName(QStringLiteral("TropOpt"));
        TropOpt->setEnabled(true);

        gridLayout->addWidget(TropOpt, 6, 1, 1, 2);

        Label32 = new QLabel(TabSheet1);
        Label32->setObjectName(QStringLiteral("Label32"));
        Label32->setEnabled(true);

        gridLayout->addWidget(Label32, 7, 0, 1, 1);

        SatEphem = new QComboBox(TabSheet1);
        SatEphem->setObjectName(QStringLiteral("SatEphem"));
        SatEphem->setEnabled(true);

        gridLayout->addWidget(SatEphem, 7, 1, 1, 2);

        Label35 = new QLabel(TabSheet1);
        Label35->setObjectName(QStringLiteral("Label35"));
        Label35->setEnabled(true);

        gridLayout->addWidget(Label35, 12, 0, 1, 1);

        ExSats = new QLineEdit(TabSheet1);
        ExSats->setObjectName(QStringLiteral("ExSats"));
        ExSats->setEnabled(true);

        gridLayout->addWidget(ExSats, 12, 1, 1, 2);

        widget_3 = new QWidget(TabSheet1);
        widget_3->setObjectName(QStringLiteral("widget_3"));
        sizePolicy.setHeightForWidth(widget_3->sizePolicy().hasHeightForWidth());
        widget_3->setSizePolicy(sizePolicy);
        horizontalLayout_3 = new QHBoxLayout(widget_3);
        horizontalLayout_3->setObjectName(QStringLiteral("horizontalLayout_3"));
        horizontalLayout_3->setContentsMargins(0, 0, 0, 0);
        NavSys1 = new QCheckBox(widget_3);
        NavSys1->setObjectName(QStringLiteral("NavSys1"));
        NavSys1->setChecked(true);

        horizontalLayout_3->addWidget(NavSys1);

        NavSys2 = new QCheckBox(widget_3);
        NavSys2->setObjectName(QStringLiteral("NavSys2"));
        NavSys2->setChecked(false);

        horizontalLayout_3->addWidget(NavSys2);

        NavSys3 = new QCheckBox(widget_3);
        NavSys3->setObjectName(QStringLiteral("NavSys3"));
        NavSys3->setChecked(false);

        horizontalLayout_3->addWidget(NavSys3);

        NavSys4 = new QCheckBox(widget_3);
        NavSys4->setObjectName(QStringLiteral("NavSys4"));
        NavSys4->setChecked(false);

        horizontalLayout_3->addWidget(NavSys4);

        NavSys5 = new QCheckBox(widget_3);
        NavSys5->setObjectName(QStringLiteral("NavSys5"));
        NavSys5->setChecked(false);

        horizontalLayout_3->addWidget(NavSys5);

        NavSys6 = new QCheckBox(widget_3);
        NavSys6->setObjectName(QStringLiteral("NavSys6"));
        NavSys6->setChecked(false);

        horizontalLayout_3->addWidget(NavSys6);

        NavSys7 = new QCheckBox(widget_3);
        NavSys7->setObjectName(QStringLiteral("NavSys7"));

        horizontalLayout_3->addWidget(NavSys7);


        gridLayout->addWidget(widget_3, 14, 0, 1, 3);

        Misc->addTab(TabSheet1, QString());
        TabSheet2 = new QWidget();
        TabSheet2->setObjectName(QStringLiteral("TabSheet2"));
        gridLayout_2 = new QGridLayout(TabSheet2);
        gridLayout_2->setObjectName(QStringLiteral("gridLayout_2"));
        ElMaskHold = new QDoubleSpinBox(TabSheet2);
        ElMaskHold->setObjectName(QStringLiteral("ElMaskHold"));
        ElMaskHold->setDecimals(0);
        ElMaskHold->setMaximum(90);

        gridLayout_2->addWidget(ElMaskHold, 8, 3, 1, 2);

        OutCntResetAmb = new QSpinBox(TabSheet2);
        OutCntResetAmb->setObjectName(QStringLiteral("OutCntResetAmb"));
        OutCntResetAmb->setMaximum(100);
        OutCntResetAmb->setValue(5);

        gridLayout_2->addWidget(OutCntResetAmb, 11, 1, 1, 2);

        SlipThres = new QDoubleSpinBox(TabSheet2);
        SlipThres->setObjectName(QStringLiteral("SlipThres"));
        SlipThres->setDecimals(3);
        SlipThres->setValue(0.05);

        gridLayout_2->addWidget(SlipThres, 11, 3, 1, 2);

        MaxAgeDiff = new QDoubleSpinBox(TabSheet2);
        MaxAgeDiff->setObjectName(QStringLiteral("MaxAgeDiff"));
        MaxAgeDiff->setDecimals(1);
        MaxAgeDiff->setMaximum(10000);
        MaxAgeDiff->setValue(30);

        gridLayout_2->addWidget(MaxAgeDiff, 13, 1, 1, 2);

        ARIter = new QSpinBox(TabSheet2);
        ARIter->setObjectName(QStringLiteral("ARIter"));
        ARIter->setValue(1);

        gridLayout_2->addWidget(ARIter, 17, 1, 1, 2);

        RejectGdop = new QDoubleSpinBox(TabSheet2);
        RejectGdop->setObjectName(QStringLiteral("RejectGdop"));
        RejectGdop->setDecimals(1);
        RejectGdop->setMaximum(1000);
        RejectGdop->setValue(30);

        gridLayout_2->addWidget(RejectGdop, 14, 1, 1, 2);

        RejectThres = new QDoubleSpinBox(TabSheet2);
        RejectThres->setObjectName(QStringLiteral("RejectThres"));
        RejectThres->setDecimals(1);
        RejectThres->setMaximum(1000);
        RejectThres->setValue(30);

        gridLayout_2->addWidget(RejectThres, 14, 3, 1, 2);

        NumIter = new QSpinBox(TabSheet2);
        NumIter->setObjectName(QStringLiteral("NumIter"));
        NumIter->setValue(1);

        gridLayout_2->addWidget(NumIter, 17, 3, 1, 2);

        ValidThresAR = new QDoubleSpinBox(TabSheet2);
        ValidThresAR->setObjectName(QStringLiteral("ValidThresAR"));
        ValidThresAR->setDecimals(3);
        ValidThresAR->setMaximum(100);
        ValidThresAR->setValue(3);

        gridLayout_2->addWidget(ValidThresAR, 2, 1, 1, 4);

        ElMaskAR = new QDoubleSpinBox(TabSheet2);
        ElMaskAR->setObjectName(QStringLiteral("ElMaskAR"));
        ElMaskAR->setDecimals(0);
        ElMaskAR->setMaximum(90);

        gridLayout_2->addWidget(ElMaskAR, 6, 3, 1, 2);

        LockCntFixAmb = new QSpinBox(TabSheet2);
        LockCntFixAmb->setObjectName(QStringLiteral("LockCntFixAmb"));
        LockCntFixAmb->setMaximum(3600);
        LockCntFixAmb->setValue(5);

        gridLayout_2->addWidget(LockCntFixAmb, 6, 1, 1, 2);

        ThresAR2 = new QDoubleSpinBox(TabSheet2);
        ThresAR2->setObjectName(QStringLiteral("ThresAR2"));
        ThresAR2->setDecimals(8);
        ThresAR2->setMaximum(100);
        ThresAR2->setValue(0.99995);

        gridLayout_2->addWidget(ThresAR2, 4, 1, 1, 2);

        ThresAR3 = new QDoubleSpinBox(TabSheet2);
        ThresAR3->setObjectName(QStringLiteral("ThresAR3"));
        ThresAR3->setDecimals(3);
        ThresAR3->setMaximum(1000);
        ThresAR3->setValue(0.2);

        gridLayout_2->addWidget(ThresAR3, 4, 3, 1, 2);

        BaselineConst = new QCheckBox(TabSheet2);
        BaselineConst->setObjectName(QStringLiteral("BaselineConst"));
        BaselineConst->setChecked(false);

        gridLayout_2->addWidget(BaselineConst, 19, 0, 1, 1);

        FixCntHoldAmb = new QSpinBox(TabSheet2);
        FixCntHoldAmb->setObjectName(QStringLiteral("FixCntHoldAmb"));
        FixCntHoldAmb->setMaximum(1000);
        FixCntHoldAmb->setValue(10);

        gridLayout_2->addWidget(FixCntHoldAmb, 8, 1, 1, 2);

        Label25 = new QLabel(TabSheet2);
        Label25->setObjectName(QStringLiteral("Label25"));
        Label25->setEnabled(true);

        gridLayout_2->addWidget(Label25, 0, 0, 1, 1);

        AmbRes = new QComboBox(TabSheet2);
        AmbRes->setObjectName(QStringLiteral("AmbRes"));
        AmbRes->setEnabled(true);

        gridLayout_2->addWidget(AmbRes, 0, 1, 1, 1);

        GloAmbRes = new QComboBox(TabSheet2);
        GloAmbRes->setObjectName(QStringLiteral("GloAmbRes"));
        GloAmbRes->setEnabled(true);

        gridLayout_2->addWidget(GloAmbRes, 0, 2, 1, 2);

        BdsAmbRes = new QComboBox(TabSheet2);
        BdsAmbRes->setObjectName(QStringLiteral("BdsAmbRes"));
        BdsAmbRes->setEnabled(true);

        gridLayout_2->addWidget(BdsAmbRes, 0, 4, 1, 1);

        LabelRatio = new QLabel(TabSheet2);
        LabelRatio->setObjectName(QStringLiteral("LabelRatio"));
        LabelRatio->setEnabled(true);

        gridLayout_2->addWidget(LabelRatio, 2, 0, 1, 1);

        LabelConf = new QLabel(TabSheet2);
        LabelConf->setObjectName(QStringLiteral("LabelConf"));
        LabelConf->setEnabled(true);

        gridLayout_2->addWidget(LabelConf, 4, 0, 1, 1);

        Label13 = new QLabel(TabSheet2);
        Label13->setObjectName(QStringLiteral("Label13"));
        Label13->setEnabled(true);

        gridLayout_2->addWidget(Label13, 6, 0, 1, 1);

        LabelHold = new QLabel(TabSheet2);
        LabelHold->setObjectName(QStringLiteral("LabelHold"));
        LabelHold->setEnabled(true);

        gridLayout_2->addWidget(LabelHold, 8, 0, 1, 1);

        Label22 = new QLabel(TabSheet2);
        Label22->setObjectName(QStringLiteral("Label22"));
        Label22->setEnabled(true);

        gridLayout_2->addWidget(Label22, 11, 0, 1, 1);

        Label14 = new QLabel(TabSheet2);
        Label14->setObjectName(QStringLiteral("Label14"));
        Label14->setEnabled(true);

        gridLayout_2->addWidget(Label14, 13, 0, 1, 1);

        SyncSol = new QComboBox(TabSheet2);
        SyncSol->setObjectName(QStringLiteral("SyncSol"));
        SyncSol->setEnabled(false);

        gridLayout_2->addWidget(SyncSol, 13, 3, 1, 2);

        Label11 = new QLabel(TabSheet2);
        Label11->setObjectName(QStringLiteral("Label11"));
        Label11->setEnabled(true);

        gridLayout_2->addWidget(Label11, 14, 0, 1, 1);

        Label37 = new QLabel(TabSheet2);
        Label37->setObjectName(QStringLiteral("Label37"));
        Label37->setEnabled(true);

        gridLayout_2->addWidget(Label37, 17, 0, 1, 1);

        BaselineLen = new QDoubleSpinBox(TabSheet2);
        BaselineLen->setObjectName(QStringLiteral("BaselineLen"));
        BaselineLen->setDecimals(3);
        BaselineLen->setMaximum(10000);

        gridLayout_2->addWidget(BaselineLen, 19, 1, 1, 2);

        BaselineSig = new QDoubleSpinBox(TabSheet2);
        BaselineSig->setObjectName(QStringLiteral("BaselineSig"));
        BaselineSig->setDecimals(3);
        BaselineSig->setValue(0.001);

        gridLayout_2->addWidget(BaselineSig, 19, 3, 1, 2);

        Misc->addTab(TabSheet2, QString());
        TabSheet3 = new QWidget();
        TabSheet3->setObjectName(QStringLiteral("TabSheet3"));
        gridLayout_3 = new QGridLayout(TabSheet3);
        gridLayout_3->setObjectName(QStringLiteral("gridLayout_3"));
        TimeDecimal = new QSpinBox(TabSheet3);
        TimeDecimal->setObjectName(QStringLiteral("TimeDecimal"));
        TimeDecimal->setMaximum(20);
        TimeDecimal->setValue(3);

        gridLayout_3->addWidget(TimeDecimal, 3, 3, 1, 1);

        LabelSolFormat = new QLabel(TabSheet3);
        LabelSolFormat->setObjectName(QStringLiteral("LabelSolFormat"));
        LabelSolFormat->setEnabled(true);

        gridLayout_3->addWidget(LabelSolFormat, 0, 0, 1, 1);

        SolFormat = new QComboBox(TabSheet3);
        SolFormat->setObjectName(QStringLiteral("SolFormat"));
        SolFormat->setEnabled(true);

        gridLayout_3->addWidget(SolFormat, 0, 1, 1, 3);

        Label20 = new QLabel(TabSheet3);
        Label20->setObjectName(QStringLiteral("Label20"));
        Label20->setEnabled(true);

        gridLayout_3->addWidget(Label20, 1, 0, 1, 1);

        OutputHead = new QComboBox(TabSheet3);
        OutputHead->setObjectName(QStringLiteral("OutputHead"));
        OutputHead->setEnabled(true);

        gridLayout_3->addWidget(OutputHead, 1, 1, 1, 1);

        OutputOpt = new QComboBox(TabSheet3);
        OutputOpt->setObjectName(QStringLiteral("OutputOpt"));
        OutputOpt->setEnabled(true);

        gridLayout_3->addWidget(OutputOpt, 1, 2, 1, 2);

        LabelTimeFormat = new QLabel(TabSheet3);
        LabelTimeFormat->setObjectName(QStringLiteral("LabelTimeFormat"));
        LabelTimeFormat->setEnabled(true);

        gridLayout_3->addWidget(LabelTimeFormat, 3, 0, 1, 1);

        TimeFormat = new QComboBox(TabSheet3);
        TimeFormat->setObjectName(QStringLiteral("TimeFormat"));
        TimeFormat->setEnabled(true);

        gridLayout_3->addWidget(TimeFormat, 3, 1, 1, 2);

        LabelLatLonFormat = new QLabel(TabSheet3);
        LabelLatLonFormat->setObjectName(QStringLiteral("LabelLatLonFormat"));
        LabelLatLonFormat->setEnabled(true);

        gridLayout_3->addWidget(LabelLatLonFormat, 4, 0, 1, 1);

        LabelFieldSep = new QLabel(TabSheet3);
        LabelFieldSep->setObjectName(QStringLiteral("LabelFieldSep"));
        LabelFieldSep->setEnabled(true);

        gridLayout_3->addWidget(LabelFieldSep, 5, 0, 1, 1);

        Label2 = new QLabel(TabSheet3);
        Label2->setObjectName(QStringLiteral("Label2"));
        Label2->setEnabled(true);

        gridLayout_3->addWidget(Label2, 6, 0, 1, 1);

        OutputDatum = new QComboBox(TabSheet3);
        OutputDatum->setObjectName(QStringLiteral("OutputDatum"));
        OutputDatum->setEnabled(true);

        gridLayout_3->addWidget(OutputDatum, 6, 1, 1, 2);

        OutputHeight = new QComboBox(TabSheet3);
        OutputHeight->setObjectName(QStringLiteral("OutputHeight"));
        OutputHeight->setEnabled(true);

        gridLayout_3->addWidget(OutputHeight, 6, 3, 1, 1);

        Label18 = new QLabel(TabSheet3);
        Label18->setObjectName(QStringLiteral("Label18"));
        Label18->setEnabled(true);

        gridLayout_3->addWidget(Label18, 7, 0, 1, 1);

        OutputGeoid = new QComboBox(TabSheet3);
        OutputGeoid->setObjectName(QStringLiteral("OutputGeoid"));
        OutputGeoid->setEnabled(true);

        gridLayout_3->addWidget(OutputGeoid, 7, 1, 1, 3);

        Label31 = new QLabel(TabSheet3);
        Label31->setObjectName(QStringLiteral("Label31"));
        Label31->setEnabled(true);

        gridLayout_3->addWidget(Label31, 8, 0, 1, 1);

        SolStatic = new QComboBox(TabSheet3);
        SolStatic->setObjectName(QStringLiteral("SolStatic"));
        SolStatic->setEnabled(true);

        gridLayout_3->addWidget(SolStatic, 8, 1, 1, 3);

        Label21 = new QLabel(TabSheet3);
        Label21->setObjectName(QStringLiteral("Label21"));
        Label21->setEnabled(false);

        gridLayout_3->addWidget(Label21, 10, 0, 1, 1);

        Label36 = new QLabel(TabSheet3);
        Label36->setObjectName(QStringLiteral("Label36"));
        Label36->setEnabled(true);

        gridLayout_3->addWidget(Label36, 11, 0, 1, 1);

        DebugStatus = new QComboBox(TabSheet3);
        DebugStatus->setObjectName(QStringLiteral("DebugStatus"));
        DebugStatus->setEnabled(true);

        gridLayout_3->addWidget(DebugStatus, 11, 1, 1, 1);

        DebugTrace = new QComboBox(TabSheet3);
        DebugTrace->setObjectName(QStringLiteral("DebugTrace"));
        DebugTrace->setEnabled(true);

        gridLayout_3->addWidget(DebugTrace, 11, 2, 1, 2);

        LatLonFormat = new QComboBox(TabSheet3);
        LatLonFormat->setObjectName(QStringLiteral("LatLonFormat"));
        LatLonFormat->setEnabled(true);

        gridLayout_3->addWidget(LatLonFormat, 4, 1, 1, 2);

        FieldSep = new QLineEdit(TabSheet3);
        FieldSep->setObjectName(QStringLiteral("FieldSep"));
        FieldSep->setEnabled(true);

        gridLayout_3->addWidget(FieldSep, 4, 3, 1, 1);

        OutputSingle = new QComboBox(TabSheet3);
        OutputSingle->setObjectName(QStringLiteral("OutputSingle"));

        gridLayout_3->addWidget(OutputSingle, 5, 1, 1, 2);

        MaxSolStd = new QDoubleSpinBox(TabSheet3);
        MaxSolStd->setObjectName(QStringLiteral("MaxSolStd"));

        gridLayout_3->addWidget(MaxSolStd, 5, 3, 1, 1);

        NmeaIntv2 = new QDoubleSpinBox(TabSheet3);
        NmeaIntv2->setObjectName(QStringLiteral("NmeaIntv2"));
        NmeaIntv2->setEnabled(false);
        NmeaIntv2->setMaximum(3600);

        gridLayout_3->addWidget(NmeaIntv2, 10, 3, 1, 1);

        NmeaIntv1 = new QDoubleSpinBox(TabSheet3);
        NmeaIntv1->setObjectName(QStringLiteral("NmeaIntv1"));
        NmeaIntv1->setEnabled(false);
        NmeaIntv1->setMaximum(3600);

        gridLayout_3->addWidget(NmeaIntv1, 10, 1, 1, 2);

        Misc->addTab(TabSheet3, QString());
        TabSheet4 = new QWidget();
        TabSheet4->setObjectName(QStringLiteral("TabSheet4"));
        gridLayout_11 = new QGridLayout(TabSheet4);
        gridLayout_11->setObjectName(QStringLiteral("gridLayout_11"));
        GroupBox3 = new QGroupBox(TabSheet4);
        GroupBox3->setObjectName(QStringLiteral("GroupBox3"));
        gridLayout_4 = new QGridLayout(GroupBox3);
        gridLayout_4->setObjectName(QStringLiteral("gridLayout_4"));
        MeasErr4 = new QDoubleSpinBox(GroupBox3);
        MeasErr4->setObjectName(QStringLiteral("MeasErr4"));
        MeasErr4->setDecimals(3);

        gridLayout_4->addWidget(MeasErr4, 5, 1, 1, 2);

        MeasErrR1 = new QDoubleSpinBox(GroupBox3);
        MeasErrR1->setObjectName(QStringLiteral("MeasErrR1"));
        MeasErrR1->setDecimals(1);
        MeasErrR1->setMaximum(10000);
        MeasErrR1->setValue(100);

        gridLayout_4->addWidget(MeasErrR1, 1, 1, 1, 1);

        MeasErrR2 = new QDoubleSpinBox(GroupBox3);
        MeasErrR2->setObjectName(QStringLiteral("MeasErrR2"));
        MeasErrR2->setDecimals(1);
        MeasErrR2->setMaximum(10000);
        MeasErrR2->setValue(100);

        gridLayout_4->addWidget(MeasErrR2, 1, 2, 1, 1);

        MeasErr2 = new QDoubleSpinBox(GroupBox3);
        MeasErr2->setObjectName(QStringLiteral("MeasErr2"));
        MeasErr2->setDecimals(3);
        MeasErr2->setMaximum(100);
        MeasErr2->setValue(0.003);

        gridLayout_4->addWidget(MeasErr2, 3, 1, 1, 1);

        MeasErr3 = new QDoubleSpinBox(GroupBox3);
        MeasErr3->setObjectName(QStringLiteral("MeasErr3"));
        MeasErr3->setDecimals(3);
        MeasErr3->setValue(0.003);

        gridLayout_4->addWidget(MeasErr3, 3, 2, 1, 1);

        Label7 = new QLabel(GroupBox3);
        Label7->setObjectName(QStringLiteral("Label7"));
        Label7->setEnabled(true);

        gridLayout_4->addWidget(Label7, 3, 0, 1, 1);

        Label16 = new QLabel(GroupBox3);
        Label16->setObjectName(QStringLiteral("Label16"));
        Label16->setEnabled(true);

        gridLayout_4->addWidget(Label16, 5, 0, 1, 1);

        Label64 = new QLabel(GroupBox3);
        Label64->setObjectName(QStringLiteral("Label64"));
        Label64->setEnabled(true);

        gridLayout_4->addWidget(Label64, 7, 0, 1, 1);

        Label6 = new QLabel(GroupBox3);
        Label6->setObjectName(QStringLiteral("Label6"));
        Label6->setEnabled(true);

        gridLayout_4->addWidget(Label6, 1, 0, 1, 1);

        MeasErr5 = new QDoubleSpinBox(GroupBox3);
        MeasErr5->setObjectName(QStringLiteral("MeasErr5"));
        MeasErr5->setDecimals(3);
        MeasErr5->setValue(0.1);

        gridLayout_4->addWidget(MeasErr5, 7, 1, 1, 2);


        gridLayout_11->addWidget(GroupBox3, 0, 0, 1, 2);

        Label29 = new QLabel(TabSheet4);
        Label29->setObjectName(QStringLiteral("Label29"));
        Label29->setEnabled(true);

        gridLayout_11->addWidget(Label29, 5, 0, 1, 1);

        SatClkStab = new QLineEdit(TabSheet4);
        SatClkStab->setObjectName(QStringLiteral("SatClkStab"));
        SatClkStab->setEnabled(true);

        gridLayout_11->addWidget(SatClkStab, 5, 1, 1, 1);

        GroupBox4 = new QGroupBox(TabSheet4);
        GroupBox4->setObjectName(QStringLiteral("GroupBox4"));
        gridLayout_5 = new QGridLayout(GroupBox4);
        gridLayout_5->setObjectName(QStringLiteral("gridLayout_5"));
        Label26 = new QLabel(GroupBox4);
        Label26->setObjectName(QStringLiteral("Label26"));
        Label26->setEnabled(true);

        gridLayout_5->addWidget(Label26, 1, 0, 1, 1);

        PrNoise2 = new QLineEdit(GroupBox4);
        PrNoise2->setObjectName(QStringLiteral("PrNoise2"));
        PrNoise2->setEnabled(true);

        gridLayout_5->addWidget(PrNoise2, 2, 1, 1, 2);

        Label27 = new QLabel(GroupBox4);
        Label27->setObjectName(QStringLiteral("Label27"));
        Label27->setEnabled(true);

        gridLayout_5->addWidget(Label27, 2, 0, 1, 1);

        Label10 = new QLabel(GroupBox4);
        Label10->setObjectName(QStringLiteral("Label10"));
        Label10->setEnabled(true);

        gridLayout_5->addWidget(Label10, 0, 0, 1, 1);

        PrNoise4 = new QLineEdit(GroupBox4);
        PrNoise4->setObjectName(QStringLiteral("PrNoise4"));
        PrNoise4->setEnabled(true);

        gridLayout_5->addWidget(PrNoise4, 0, 1, 1, 1);

        PrNoise5 = new QLineEdit(GroupBox4);
        PrNoise5->setObjectName(QStringLiteral("PrNoise5"));
        PrNoise5->setEnabled(true);

        gridLayout_5->addWidget(PrNoise5, 0, 2, 1, 1);

        Label28 = new QLabel(GroupBox4);
        Label28->setObjectName(QStringLiteral("Label28"));
        Label28->setEnabled(true);

        gridLayout_5->addWidget(Label28, 3, 0, 1, 1);

        PrNoise3 = new QLineEdit(GroupBox4);
        PrNoise3->setObjectName(QStringLiteral("PrNoise3"));
        PrNoise3->setEnabled(true);

        gridLayout_5->addWidget(PrNoise3, 3, 1, 1, 2);

        PrNoise1 = new QLineEdit(GroupBox4);
        PrNoise1->setObjectName(QStringLiteral("PrNoise1"));
        PrNoise1->setEnabled(true);

        gridLayout_5->addWidget(PrNoise1, 1, 1, 1, 2);


        gridLayout_11->addWidget(GroupBox4, 4, 0, 1, 2);

        Misc->addTab(TabSheet4, QString());
        TabSheet5 = new QWidget();
        TabSheet5->setObjectName(QStringLiteral("TabSheet5"));
        gridLayout_13 = new QGridLayout(TabSheet5);
        gridLayout_13->setObjectName(QStringLiteral("gridLayout_13"));
        BtnStaPosView = new QPushButton(TabSheet5);
        BtnStaPosView->setObjectName(QStringLiteral("BtnStaPosView"));
        BtnStaPosView->setEnabled(true);
        QIcon icon;
        icon.addFile(QStringLiteral(":/buttons/doc.bmp"), QSize(), QIcon::Normal, QIcon::Off);
        BtnStaPosView->setIcon(icon);
        BtnStaPosView->setFlat(true);

        gridLayout_13->addWidget(BtnStaPosView, 5, 2, 1, 1);

        BtnStaPosFile = new QPushButton(TabSheet5);
        BtnStaPosFile->setObjectName(QStringLiteral("BtnStaPosFile"));
        BtnStaPosFile->setEnabled(true);
        QPalette palette;
        QBrush brush(QColor(0, 0, 0, 255));
        brush.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Active, QPalette::WindowText, brush);
        palette.setBrush(QPalette::Inactive, QPalette::WindowText, brush);
        palette.setBrush(QPalette::Disabled, QPalette::WindowText, brush);
        BtnStaPosFile->setPalette(palette);
        BtnStaPosFile->setFlat(false);

        gridLayout_13->addWidget(BtnStaPosFile, 5, 3, 1, 1);

        StaPosFile = new QLineEdit(TabSheet5);
        StaPosFile->setObjectName(QStringLiteral("StaPosFile"));
        StaPosFile->setEnabled(true);

        gridLayout_13->addWidget(StaPosFile, 5, 1, 1, 1);

        Label4 = new QLabel(TabSheet5);
        Label4->setObjectName(QStringLiteral("Label4"));
        Label4->setEnabled(true);
        sizePolicy.setHeightForWidth(Label4->sizePolicy().hasHeightForWidth());
        Label4->setSizePolicy(sizePolicy);

        gridLayout_13->addWidget(Label4, 6, 0, 1, 4);

        Label30 = new QLabel(TabSheet5);
        Label30->setObjectName(QStringLiteral("Label30"));
        Label30->setEnabled(true);

        gridLayout_13->addWidget(Label30, 5, 0, 1, 1);

        GroupRefAnt = new QGroupBox(TabSheet5);
        GroupRefAnt->setObjectName(QStringLiteral("GroupRefAnt"));
        sizePolicy.setHeightForWidth(GroupRefAnt->sizePolicy().hasHeightForWidth());
        GroupRefAnt->setSizePolicy(sizePolicy);
        gridLayout_6 = new QGridLayout(GroupRefAnt);
        gridLayout_6->setObjectName(QStringLiteral("gridLayout_6"));
        RefPosType = new QComboBox(GroupRefAnt);
        RefPosType->setObjectName(QStringLiteral("RefPosType"));
        RefPosType->setEnabled(true);

        gridLayout_6->addWidget(RefPosType, 0, 0, 1, 1);

        BtnRefPos = new QPushButton(GroupRefAnt);
        BtnRefPos->setObjectName(QStringLiteral("BtnRefPos"));
        BtnRefPos->setEnabled(true);
        BtnRefPos->setFlat(false);

        gridLayout_6->addWidget(BtnRefPos, 0, 5, 1, 1);

        RefPos1 = new QLineEdit(GroupRefAnt);
        RefPos1->setObjectName(QStringLiteral("RefPos1"));
        RefPos1->setEnabled(true);

        gridLayout_6->addWidget(RefPos1, 1, 0, 1, 1);

        RefPos2 = new QLineEdit(GroupRefAnt);
        RefPos2->setObjectName(QStringLiteral("RefPos2"));
        RefPos2->setEnabled(true);

        gridLayout_6->addWidget(RefPos2, 1, 1, 1, 2);

        RefPos3 = new QLineEdit(GroupRefAnt);
        RefPos3->setObjectName(QStringLiteral("RefPos3"));
        RefPos3->setEnabled(true);

        gridLayout_6->addWidget(RefPos3, 1, 3, 1, 3);

        RefAnt = new QComboBox(GroupRefAnt);
        RefAnt->setObjectName(QStringLiteral("RefAnt"));
        RefAnt->setEnabled(true);

        gridLayout_6->addWidget(RefAnt, 3, 0, 1, 1);

        RefAntPcv = new QCheckBox(GroupRefAnt);
        RefAntPcv->setObjectName(QStringLiteral("RefAntPcv"));
        RefAntPcv->setChecked(false);

        gridLayout_6->addWidget(RefAntPcv, 2, 0, 1, 1);

        LabelRefAntD = new QLabel(GroupRefAnt);
        LabelRefAntD->setObjectName(QStringLiteral("LabelRefAntD"));
        LabelRefAntD->setEnabled(true);

        gridLayout_6->addWidget(LabelRefAntD, 2, 1, 1, 1);

        RefAntE = new QDoubleSpinBox(GroupRefAnt);
        RefAntE->setObjectName(QStringLiteral("RefAntE"));
        RefAntE->setDecimals(4);
        RefAntE->setMaximum(1000);

        gridLayout_6->addWidget(RefAntE, 3, 1, 1, 1);

        RefAntN = new QDoubleSpinBox(GroupRefAnt);
        RefAntN->setObjectName(QStringLiteral("RefAntN"));
        RefAntN->setDecimals(4);
        RefAntN->setMaximum(1000);

        gridLayout_6->addWidget(RefAntN, 3, 2, 1, 2);

        RefAntU = new QDoubleSpinBox(GroupRefAnt);
        RefAntU->setObjectName(QStringLiteral("RefAntU"));
        RefAntU->setDecimals(4);
        RefAntU->setMaximum(1000);

        gridLayout_6->addWidget(RefAntU, 3, 4, 1, 2);


        gridLayout_13->addWidget(GroupRefAnt, 4, 0, 1, 4);

        GroupRovAnt = new QGroupBox(TabSheet5);
        GroupRovAnt->setObjectName(QStringLiteral("GroupRovAnt"));
        sizePolicy.setHeightForWidth(GroupRovAnt->sizePolicy().hasHeightForWidth());
        GroupRovAnt->setSizePolicy(sizePolicy);
        gridLayout_7 = new QGridLayout(GroupRovAnt);
        gridLayout_7->setObjectName(QStringLiteral("gridLayout_7"));
        RovPosType = new QComboBox(GroupRovAnt);
        RovPosType->setObjectName(QStringLiteral("RovPosType"));
        RovPosType->setEnabled(false);

        gridLayout_7->addWidget(RovPosType, 0, 0, 1, 1);

        BtnRovPos = new QPushButton(GroupRovAnt);
        BtnRovPos->setObjectName(QStringLiteral("BtnRovPos"));
        BtnRovPos->setEnabled(true);
        BtnRovPos->setFlat(false);

        gridLayout_7->addWidget(BtnRovPos, 0, 5, 1, 1);

        RovPos1 = new QLineEdit(GroupRovAnt);
        RovPos1->setObjectName(QStringLiteral("RovPos1"));
        RovPos1->setEnabled(true);

        gridLayout_7->addWidget(RovPos1, 1, 0, 1, 1);

        RovPos2 = new QLineEdit(GroupRovAnt);
        RovPos2->setObjectName(QStringLiteral("RovPos2"));
        RovPos2->setEnabled(true);

        gridLayout_7->addWidget(RovPos2, 1, 1, 1, 2);

        RovPos3 = new QLineEdit(GroupRovAnt);
        RovPos3->setObjectName(QStringLiteral("RovPos3"));
        RovPos3->setEnabled(true);

        gridLayout_7->addWidget(RovPos3, 1, 3, 1, 3);

        RovAnt = new QComboBox(GroupRovAnt);
        RovAnt->setObjectName(QStringLiteral("RovAnt"));
        RovAnt->setEnabled(true);

        gridLayout_7->addWidget(RovAnt, 4, 0, 1, 1);

        RovAntE = new QDoubleSpinBox(GroupRovAnt);
        RovAntE->setObjectName(QStringLiteral("RovAntE"));
        RovAntE->setDecimals(4);
        RovAntE->setMaximum(1000);

        gridLayout_7->addWidget(RovAntE, 4, 1, 1, 1);

        RovAntPcv = new QCheckBox(GroupRovAnt);
        RovAntPcv->setObjectName(QStringLiteral("RovAntPcv"));
        RovAntPcv->setChecked(false);

        gridLayout_7->addWidget(RovAntPcv, 2, 0, 1, 1);

        LabelRovAntD = new QLabel(GroupRovAnt);
        LabelRovAntD->setObjectName(QStringLiteral("LabelRovAntD"));
        LabelRovAntD->setEnabled(true);

        gridLayout_7->addWidget(LabelRovAntD, 2, 1, 1, 1);

        RovAntN = new QDoubleSpinBox(GroupRovAnt);
        RovAntN->setObjectName(QStringLiteral("RovAntN"));
        RovAntN->setDecimals(4);
        RovAntN->setMaximum(1000);

        gridLayout_7->addWidget(RovAntN, 4, 2, 1, 2);

        RovAntU = new QDoubleSpinBox(GroupRovAnt);
        RovAntU->setObjectName(QStringLiteral("RovAntU"));
        RovAntU->setDecimals(4);
        RovAntU->setMaximum(1000);

        gridLayout_7->addWidget(RovAntU, 4, 4, 1, 2);


        gridLayout_13->addWidget(GroupRovAnt, 0, 0, 2, 5);

        Misc->addTab(TabSheet5, QString());
        TabSheet7 = new QWidget();
        TabSheet7->setObjectName(QStringLiteral("TabSheet7"));
        gridLayout_8 = new QGridLayout(TabSheet7);
        gridLayout_8->setObjectName(QStringLiteral("gridLayout_8"));
        Label38 = new QLabel(TabSheet7);
        Label38->setObjectName(QStringLiteral("Label38"));
        Label38->setEnabled(true);

        gridLayout_8->addWidget(Label38, 0, 0, 1, 1);

        BtnSatPcvView = new QPushButton(TabSheet7);
        BtnSatPcvView->setObjectName(QStringLiteral("BtnSatPcvView"));
        BtnSatPcvView->setEnabled(true);
        BtnSatPcvView->setIcon(icon);
        BtnSatPcvView->setFlat(true);

        gridLayout_8->addWidget(BtnSatPcvView, 0, 1, 1, 1);

        BtnAntPcvView = new QPushButton(TabSheet7);
        BtnAntPcvView->setObjectName(QStringLiteral("BtnAntPcvView"));
        BtnAntPcvView->setEnabled(true);
        BtnAntPcvView->setIcon(icon);
        BtnAntPcvView->setFlat(true);

        gridLayout_8->addWidget(BtnAntPcvView, 0, 2, 1, 1);

        SatPcvFile = new QLineEdit(TabSheet7);
        SatPcvFile->setObjectName(QStringLiteral("SatPcvFile"));
        SatPcvFile->setEnabled(true);

        gridLayout_8->addWidget(SatPcvFile, 1, 0, 1, 2);

        BtnSatPcvFile = new QPushButton(TabSheet7);
        BtnSatPcvFile->setObjectName(QStringLiteral("BtnSatPcvFile"));
        BtnSatPcvFile->setEnabled(true);
        BtnSatPcvFile->setFlat(false);

        gridLayout_8->addWidget(BtnSatPcvFile, 1, 2, 1, 1);

        AntPcvFile = new QLineEdit(TabSheet7);
        AntPcvFile->setObjectName(QStringLiteral("AntPcvFile"));
        AntPcvFile->setEnabled(true);

        gridLayout_8->addWidget(AntPcvFile, 2, 0, 1, 2);

        BtnAntPcvFile = new QPushButton(TabSheet7);
        BtnAntPcvFile->setObjectName(QStringLiteral("BtnAntPcvFile"));
        BtnAntPcvFile->setEnabled(true);
        BtnAntPcvFile->setFlat(false);

        gridLayout_8->addWidget(BtnAntPcvFile, 2, 2, 1, 1);

        GeoidDataFile = new QLineEdit(TabSheet7);
        GeoidDataFile->setObjectName(QStringLiteral("GeoidDataFile"));
        GeoidDataFile->setEnabled(true);

        gridLayout_8->addWidget(GeoidDataFile, 5, 0, 1, 2);

        BtnGeoidDataFile = new QPushButton(TabSheet7);
        BtnGeoidDataFile->setObjectName(QStringLiteral("BtnGeoidDataFile"));
        BtnGeoidDataFile->setEnabled(true);
        BtnGeoidDataFile->setFlat(false);

        gridLayout_8->addWidget(BtnGeoidDataFile, 5, 2, 1, 1);

        Label15 = new QLabel(TabSheet7);
        Label15->setObjectName(QStringLiteral("Label15"));
        Label15->setEnabled(true);

        gridLayout_8->addWidget(Label15, 6, 0, 1, 1);

        BtnDCBView = new QPushButton(TabSheet7);
        BtnDCBView->setObjectName(QStringLiteral("BtnDCBView"));
        BtnDCBView->setEnabled(true);
        BtnDCBView->setIcon(icon);
        BtnDCBView->setFlat(true);

        gridLayout_8->addWidget(BtnDCBView, 6, 2, 1, 1);

        DCBFile = new QLineEdit(TabSheet7);
        DCBFile->setObjectName(QStringLiteral("DCBFile"));
        DCBFile->setEnabled(true);

        gridLayout_8->addWidget(DCBFile, 7, 0, 1, 2);

        BtnDCBFile = new QPushButton(TabSheet7);
        BtnDCBFile->setObjectName(QStringLiteral("BtnDCBFile"));
        BtnDCBFile->setEnabled(true);
        BtnDCBFile->setFlat(false);

        gridLayout_8->addWidget(BtnDCBFile, 7, 2, 1, 1);

        Label17 = new QLabel(TabSheet7);
        Label17->setObjectName(QStringLiteral("Label17"));
        Label17->setEnabled(true);

        gridLayout_8->addWidget(Label17, 8, 0, 1, 1);

        BtnEOPView = new QPushButton(TabSheet7);
        BtnEOPView->setObjectName(QStringLiteral("BtnEOPView"));
        BtnEOPView->setEnabled(true);
        BtnEOPView->setIcon(icon);
        BtnEOPView->setFlat(true);

        gridLayout_8->addWidget(BtnEOPView, 8, 2, 1, 1);

        EOPFile = new QLineEdit(TabSheet7);
        EOPFile->setObjectName(QStringLiteral("EOPFile"));
        EOPFile->setEnabled(true);

        gridLayout_8->addWidget(EOPFile, 9, 0, 1, 2);

        BtnEOPFile = new QPushButton(TabSheet7);
        BtnEOPFile->setObjectName(QStringLiteral("BtnEOPFile"));
        BtnEOPFile->setEnabled(true);
        BtnEOPFile->setFlat(false);

        gridLayout_8->addWidget(BtnEOPFile, 9, 2, 1, 1);

        Label34 = new QLabel(TabSheet7);
        Label34->setObjectName(QStringLiteral("Label34"));
        Label34->setEnabled(true);

        gridLayout_8->addWidget(Label34, 10, 0, 1, 1);

        BtnBLQFileView = new QPushButton(TabSheet7);
        BtnBLQFileView->setObjectName(QStringLiteral("BtnBLQFileView"));
        BtnBLQFileView->setEnabled(true);
        BtnBLQFileView->setIcon(icon);
        BtnBLQFileView->setFlat(true);

        gridLayout_8->addWidget(BtnBLQFileView, 10, 2, 1, 1);

        BLQFile = new QLineEdit(TabSheet7);
        BLQFile->setObjectName(QStringLiteral("BLQFile"));
        BLQFile->setEnabled(true);

        gridLayout_8->addWidget(BLQFile, 11, 0, 1, 2);

        BtnBLQFile = new QPushButton(TabSheet7);
        BtnBLQFile->setObjectName(QStringLiteral("BtnBLQFile"));
        BtnBLQFile->setEnabled(true);
        BtnBLQFile->setFlat(false);

        gridLayout_8->addWidget(BtnBLQFile, 11, 2, 1, 1);

        Label1 = new QLabel(TabSheet7);
        Label1->setObjectName(QStringLiteral("Label1"));
        Label1->setEnabled(true);
        sizePolicy.setHeightForWidth(Label1->sizePolicy().hasHeightForWidth());
        Label1->setSizePolicy(sizePolicy);

        gridLayout_8->addWidget(Label1, 12, 0, 1, 1);

        IonoFile = new QLineEdit(TabSheet7);
        IonoFile->setObjectName(QStringLiteral("IonoFile"));
        IonoFile->setEnabled(true);

        gridLayout_8->addWidget(IonoFile, 13, 0, 1, 2);

        BtnIonoFile = new QPushButton(TabSheet7);
        BtnIonoFile->setObjectName(QStringLiteral("BtnIonoFile"));
        BtnIonoFile->setEnabled(true);
        BtnIonoFile->setFlat(false);

        gridLayout_8->addWidget(BtnIonoFile, 13, 2, 1, 1);

        Label63 = new QLabel(TabSheet7);
        Label63->setObjectName(QStringLiteral("Label63"));
        Label63->setEnabled(true);
        sizePolicy.setHeightForWidth(Label63->sizePolicy().hasHeightForWidth());
        Label63->setSizePolicy(sizePolicy);

        gridLayout_8->addWidget(Label63, 3, 0, 1, 1);

        Misc->addTab(TabSheet7, QString());
        TabSheet6 = new QWidget();
        TabSheet6->setObjectName(QStringLiteral("TabSheet6"));
        gridLayout_9 = new QGridLayout(TabSheet6);
        gridLayout_9->setObjectName(QStringLiteral("gridLayout_9"));
        Panel1 = new QWidget(TabSheet6);
        Panel1->setObjectName(QStringLiteral("Panel1"));
        Panel1->setEnabled(true);
        QSizePolicy sizePolicy1(QSizePolicy::Preferred, QSizePolicy::Preferred);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(Panel1->sizePolicy().hasHeightForWidth());
        Panel1->setSizePolicy(sizePolicy1);
        Panel1->setLayoutDirection(Qt::LeftToRight);
        gridLayout_12 = new QGridLayout(Panel1);
        gridLayout_12->setSpacing(0);
        gridLayout_12->setObjectName(QStringLiteral("gridLayout_12"));
        gridLayout_12->setContentsMargins(0, 0, 0, -1);
        BtnHelp = new QPushButton(Panel1);
        BtnHelp->setObjectName(QStringLiteral("BtnHelp"));
        BtnHelp->setEnabled(true);
        BtnHelp->setFlat(true);

        gridLayout_12->addWidget(BtnHelp, 0, 0, 1, 1);

        Label46 = new QLabel(Panel1);
        Label46->setObjectName(QStringLiteral("Label46"));
        Label46->setEnabled(true);

        gridLayout_12->addWidget(Label46, 0, 1, 1, 1);

        Label62 = new QLabel(Panel1);
        Label62->setObjectName(QStringLiteral("Label62"));
        Label62->setEnabled(true);

        gridLayout_12->addWidget(Label62, 0, 2, 1, 1);

        Label43 = new QLabel(Panel1);
        Label43->setObjectName(QStringLiteral("Label43"));
        Label43->setEnabled(true);

        gridLayout_12->addWidget(Label43, 1, 0, 1, 2);

        Label65 = new QLabel(Panel1);
        Label65->setObjectName(QStringLiteral("Label65"));
        Label65->setEnabled(true);

        gridLayout_12->addWidget(Label65, 1, 2, 1, 1);


        gridLayout_9->addWidget(Panel1, 7, 0, 1, 1);

        Label41 = new QLabel(TabSheet6);
        Label41->setObjectName(QStringLiteral("Label41"));
        Label41->setEnabled(true);

        gridLayout_9->addWidget(Label41, 0, 0, 1, 3);

        IntpRefObs = new QComboBox(TabSheet6);
        IntpRefObs->setObjectName(QStringLiteral("IntpRefObs"));
        IntpRefObs->setEnabled(true);

        gridLayout_9->addWidget(IntpRefObs, 0, 3, 1, 1);

        Label42 = new QLabel(TabSheet6);
        Label42->setObjectName(QStringLiteral("Label42"));
        Label42->setEnabled(false);

        gridLayout_9->addWidget(Label42, 1, 0, 1, 2);

        ComboBox1 = new QComboBox(TabSheet6);
        ComboBox1->setObjectName(QStringLiteral("ComboBox1"));
        ComboBox1->setEnabled(false);

        gridLayout_9->addWidget(ComboBox1, 1, 3, 1, 1);

        Label40 = new QLabel(TabSheet6);
        Label40->setObjectName(QStringLiteral("Label40"));
        Label40->setEnabled(true);

        gridLayout_9->addWidget(Label40, 2, 0, 1, 3);

        SbasSat = new QLineEdit(TabSheet6);
        SbasSat->setObjectName(QStringLiteral("SbasSat"));
        SbasSat->setEnabled(true);

        gridLayout_9->addWidget(SbasSat, 2, 3, 1, 1);

        Label60 = new QLabel(TabSheet6);
        Label60->setObjectName(QStringLiteral("Label60"));
        Label60->setEnabled(true);

        gridLayout_9->addWidget(Label60, 3, 0, 1, 1);

        RnxOpts1 = new QLineEdit(TabSheet6);
        RnxOpts1->setObjectName(QStringLiteral("RnxOpts1"));
        RnxOpts1->setEnabled(true);

        gridLayout_9->addWidget(RnxOpts1, 3, 1, 1, 3);

        Label12 = new QLabel(TabSheet6);
        Label12->setObjectName(QStringLiteral("Label12"));
        Label12->setEnabled(true);

        gridLayout_9->addWidget(Label12, 4, 0, 1, 1);

        RnxOpts2 = new QLineEdit(TabSheet6);
        RnxOpts2->setObjectName(QStringLiteral("RnxOpts2"));
        RnxOpts2->setEnabled(true);

        gridLayout_9->addWidget(RnxOpts2, 4, 1, 1, 3);

        Label23 = new QLabel(TabSheet6);
        Label23->setObjectName(QStringLiteral("Label23"));
        Label23->setEnabled(true);

        gridLayout_9->addWidget(Label23, 5, 0, 1, 1);

        PPPOpts = new QLineEdit(TabSheet6);
        PPPOpts->setObjectName(QStringLiteral("PPPOpts"));
        PPPOpts->setEnabled(true);

        gridLayout_9->addWidget(PPPOpts, 5, 1, 1, 3);

        Label45 = new QLabel(TabSheet6);
        Label45->setObjectName(QStringLiteral("Label45"));
        Label45->setEnabled(true);

        gridLayout_9->addWidget(Label45, 6, 0, 1, 1);

        Label19 = new QLabel(TabSheet6);
        Label19->setObjectName(QStringLiteral("Label19"));
        Label19->setEnabled(true);

        gridLayout_9->addWidget(Label19, 6, 2, 1, 1);

        Label44 = new QLabel(TabSheet6);
        Label44->setObjectName(QStringLiteral("Label44"));
        Label44->setEnabled(true);

        gridLayout_9->addWidget(Label44, 6, 3, 1, 1);

        RovList = new QPlainTextEdit(TabSheet6);
        RovList->setObjectName(QStringLiteral("RovList"));
        RovList->setEnabled(true);
        RovList->setFrameShape(QFrame::Panel);
        RovList->setFrameShadow(QFrame::Sunken);

        gridLayout_9->addWidget(RovList, 7, 1, 1, 2);

        BaseList = new QPlainTextEdit(TabSheet6);
        BaseList->setObjectName(QStringLiteral("BaseList"));
        BaseList->setEnabled(true);
        BaseList->setFrameShape(QFrame::Panel);
        BaseList->setFrameShadow(QFrame::Sunken);

        gridLayout_9->addWidget(BaseList, 7, 3, 1, 1);

        Misc->addTab(TabSheet6, QString());

        gridLayout_10->addWidget(Misc, 0, 0, 2, 9);

        QWidget::setTabOrder(BtnExtOpt, BtnLoad);
        QWidget::setTabOrder(BtnLoad, BtnSave);
        QWidget::setTabOrder(BtnSave, BtnOk);
        QWidget::setTabOrder(BtnOk, BtnCancel);
        QWidget::setTabOrder(BtnCancel, Misc);
        QWidget::setTabOrder(Misc, PosMode);
        QWidget::setTabOrder(PosMode, Freq);
        QWidget::setTabOrder(Freq, Solution);
        QWidget::setTabOrder(Solution, ElMask);
        QWidget::setTabOrder(ElMask, BtnMask);
        QWidget::setTabOrder(BtnMask, DynamicModel);
        QWidget::setTabOrder(DynamicModel, TideCorr);
        QWidget::setTabOrder(TideCorr, IonoOpt);
        QWidget::setTabOrder(IonoOpt, TropOpt);
        QWidget::setTabOrder(TropOpt, SatEphem);
        QWidget::setTabOrder(SatEphem, PosOpt1);
        QWidget::setTabOrder(PosOpt1, PosOpt2);
        QWidget::setTabOrder(PosOpt2, PosOpt3);
        QWidget::setTabOrder(PosOpt3, PosOpt4);
        QWidget::setTabOrder(PosOpt4, PosOpt5);
        QWidget::setTabOrder(PosOpt5, PosOpt6);
        QWidget::setTabOrder(PosOpt6, ExSats);
        QWidget::setTabOrder(ExSats, NavSys1);
        QWidget::setTabOrder(NavSys1, NavSys2);
        QWidget::setTabOrder(NavSys2, NavSys3);
        QWidget::setTabOrder(NavSys3, NavSys4);
        QWidget::setTabOrder(NavSys4, NavSys5);
        QWidget::setTabOrder(NavSys5, NavSys6);
        QWidget::setTabOrder(NavSys6, NavSys7);
        QWidget::setTabOrder(NavSys7, AmbRes);
        QWidget::setTabOrder(AmbRes, GloAmbRes);
        QWidget::setTabOrder(GloAmbRes, BdsAmbRes);
        QWidget::setTabOrder(BdsAmbRes, ValidThresAR);
        QWidget::setTabOrder(ValidThresAR, ThresAR2);
        QWidget::setTabOrder(ThresAR2, ThresAR3);
        QWidget::setTabOrder(ThresAR3, LockCntFixAmb);
        QWidget::setTabOrder(LockCntFixAmb, ElMaskAR);
        QWidget::setTabOrder(ElMaskAR, FixCntHoldAmb);
        QWidget::setTabOrder(FixCntHoldAmb, ElMaskHold);
        QWidget::setTabOrder(ElMaskHold, OutCntResetAmb);
        QWidget::setTabOrder(OutCntResetAmb, SlipThres);
        QWidget::setTabOrder(SlipThres, MaxAgeDiff);
        QWidget::setTabOrder(MaxAgeDiff, SyncSol);
        QWidget::setTabOrder(SyncSol, RejectGdop);
        QWidget::setTabOrder(RejectGdop, RejectThres);
        QWidget::setTabOrder(RejectThres, ARIter);
        QWidget::setTabOrder(ARIter, NumIter);
        QWidget::setTabOrder(NumIter, BaselineConst);
        QWidget::setTabOrder(BaselineConst, BaselineLen);
        QWidget::setTabOrder(BaselineLen, BaselineSig);
        QWidget::setTabOrder(BaselineSig, SolFormat);
        QWidget::setTabOrder(SolFormat, OutputHead);
        QWidget::setTabOrder(OutputHead, OutputOpt);
        QWidget::setTabOrder(OutputOpt, TimeFormat);
        QWidget::setTabOrder(TimeFormat, TimeDecimal);
        QWidget::setTabOrder(TimeDecimal, LatLonFormat);
        QWidget::setTabOrder(LatLonFormat, FieldSep);
        QWidget::setTabOrder(FieldSep, OutputSingle);
        QWidget::setTabOrder(OutputSingle, MaxSolStd);
        QWidget::setTabOrder(MaxSolStd, OutputDatum);
        QWidget::setTabOrder(OutputDatum, OutputHeight);
        QWidget::setTabOrder(OutputHeight, OutputGeoid);
        QWidget::setTabOrder(OutputGeoid, SolStatic);
        QWidget::setTabOrder(SolStatic, NmeaIntv1);
        QWidget::setTabOrder(NmeaIntv1, NmeaIntv2);
        QWidget::setTabOrder(NmeaIntv2, DebugStatus);
        QWidget::setTabOrder(DebugStatus, DebugTrace);
        QWidget::setTabOrder(DebugTrace, MeasErrR1);
        QWidget::setTabOrder(MeasErrR1, MeasErrR2);
        QWidget::setTabOrder(MeasErrR2, MeasErr2);
        QWidget::setTabOrder(MeasErr2, MeasErr3);
        QWidget::setTabOrder(MeasErr3, MeasErr4);
        QWidget::setTabOrder(MeasErr4, MeasErr5);
        QWidget::setTabOrder(MeasErr5, PrNoise4);
        QWidget::setTabOrder(PrNoise4, PrNoise5);
        QWidget::setTabOrder(PrNoise5, PrNoise1);
        QWidget::setTabOrder(PrNoise1, PrNoise2);
        QWidget::setTabOrder(PrNoise2, PrNoise3);
        QWidget::setTabOrder(PrNoise3, SatClkStab);
        QWidget::setTabOrder(SatClkStab, RovPosType);
        QWidget::setTabOrder(RovPosType, BtnRovPos);
        QWidget::setTabOrder(BtnRovPos, RovPos1);
        QWidget::setTabOrder(RovPos1, RovPos2);
        QWidget::setTabOrder(RovPos2, RovPos3);
        QWidget::setTabOrder(RovPos3, RovAntPcv);
        QWidget::setTabOrder(RovAntPcv, RovAnt);
        QWidget::setTabOrder(RovAnt, RovAntE);
        QWidget::setTabOrder(RovAntE, RovAntN);
        QWidget::setTabOrder(RovAntN, RovAntU);
        QWidget::setTabOrder(RovAntU, RefPosType);
        QWidget::setTabOrder(RefPosType, BtnRefPos);
        QWidget::setTabOrder(BtnRefPos, RefPos1);
        QWidget::setTabOrder(RefPos1, RefPos2);
        QWidget::setTabOrder(RefPos2, RefPos3);
        QWidget::setTabOrder(RefPos3, RefAntPcv);
        QWidget::setTabOrder(RefAntPcv, RefAnt);
        QWidget::setTabOrder(RefAnt, RefAntE);
        QWidget::setTabOrder(RefAntE, RefAntN);
        QWidget::setTabOrder(RefAntN, RefAntU);
        QWidget::setTabOrder(RefAntU, StaPosFile);
        QWidget::setTabOrder(StaPosFile, BtnStaPosView);
        QWidget::setTabOrder(BtnStaPosView, BtnStaPosFile);
        QWidget::setTabOrder(BtnStaPosFile, BtnSatPcvView);
        QWidget::setTabOrder(BtnSatPcvView, BtnAntPcvView);
        QWidget::setTabOrder(BtnAntPcvView, SatPcvFile);
        QWidget::setTabOrder(SatPcvFile, BtnSatPcvFile);
        QWidget::setTabOrder(BtnSatPcvFile, AntPcvFile);
        QWidget::setTabOrder(AntPcvFile, BtnAntPcvFile);
        QWidget::setTabOrder(BtnAntPcvFile, GeoidDataFile);
        QWidget::setTabOrder(GeoidDataFile, BtnGeoidDataFile);
        QWidget::setTabOrder(BtnGeoidDataFile, DCBFile);
        QWidget::setTabOrder(DCBFile, BtnDCBView);
        QWidget::setTabOrder(BtnDCBView, BtnDCBFile);
        QWidget::setTabOrder(BtnDCBFile, EOPFile);
        QWidget::setTabOrder(EOPFile, BtnEOPView);
        QWidget::setTabOrder(BtnEOPView, BtnEOPFile);
        QWidget::setTabOrder(BtnEOPFile, BLQFile);
        QWidget::setTabOrder(BLQFile, BtnBLQFileView);
        QWidget::setTabOrder(BtnBLQFileView, BtnBLQFile);
        QWidget::setTabOrder(BtnBLQFile, IonoFile);
        QWidget::setTabOrder(IonoFile, BtnIonoFile);
        QWidget::setTabOrder(BtnIonoFile, IntpRefObs);
        QWidget::setTabOrder(IntpRefObs, ComboBox1);
        QWidget::setTabOrder(ComboBox1, SbasSat);
        QWidget::setTabOrder(SbasSat, RnxOpts1);
        QWidget::setTabOrder(RnxOpts1, RnxOpts2);
        QWidget::setTabOrder(RnxOpts2, PPPOpts);
        QWidget::setTabOrder(PPPOpts, BtnHelp);
        QWidget::setTabOrder(BtnHelp, RovList);
        QWidget::setTabOrder(RovList, BaseList);

        retranslateUi(OptDialog);

        Misc->setCurrentIndex(0);


        QMetaObject::connectSlotsByName(OptDialog);
    } // setupUi

    void retranslateUi(QWidget *OptDialog)
    {
        OptDialog->setWindowTitle(QApplication::translate("OptDialog", "Options", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        OptDialog->setToolTip(QString());
#endif // QT_NO_TOOLTIP
#ifndef QT_NO_TOOLTIP
        BtnExtOpt->setToolTip(QString());
#endif // QT_NO_TOOLTIP
        BtnExtOpt->setText(QApplication::translate("OptDialog", "Ext Opt...", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        BtnOk->setToolTip(QString());
#endif // QT_NO_TOOLTIP
        BtnOk->setText(QApplication::translate("OptDialog", "&OK", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        BtnLoad->setToolTip(QString());
#endif // QT_NO_TOOLTIP
        BtnLoad->setText(QApplication::translate("OptDialog", "&Load...", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        BtnSave->setToolTip(QString());
#endif // QT_NO_TOOLTIP
        BtnSave->setText(QApplication::translate("OptDialog", "&Save...", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        Label87->setToolTip(QString());
#endif // QT_NO_TOOLTIP
        Label87->setText(QApplication::translate("OptDialog", "a", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        Label5->setToolTip(QString());
#endif // QT_NO_TOOLTIP
        Label5->setText(QApplication::translate("OptDialog", "Correction File", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        Label82->setToolTip(QString());
#endif // QT_NO_TOOLTIP
        Label82->setText(QApplication::translate("OptDialog", "a", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        Label83->setToolTip(QString());
#endif // QT_NO_TOOLTIP
        Label83->setText(QApplication::translate("OptDialog", "b", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        Label86->setToolTip(QString());
#endif // QT_NO_TOOLTIP
        Label86->setText(QApplication::translate("OptDialog", "b", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        BtnCancel->setToolTip(QString());
#endif // QT_NO_TOOLTIP
        BtnCancel->setText(QApplication::translate("OptDialog", "&Cancel", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        Misc->setToolTip(QString());
#endif // QT_NO_TOOLTIP
#ifndef QT_NO_TOOLTIP
        TabSheet1->setToolTip(QString());
#endif // QT_NO_TOOLTIP
        PosMode->clear();
        PosMode->insertItems(0, QStringList()
         << QApplication::translate("OptDialog", "Single", Q_NULLPTR)
         << QApplication::translate("OptDialog", "DGPS/DGNSS", Q_NULLPTR)
         << QApplication::translate("OptDialog", "Kinematic", Q_NULLPTR)
         << QApplication::translate("OptDialog", "Static", Q_NULLPTR)
         << QApplication::translate("OptDialog", "Moving-Base", Q_NULLPTR)
         << QApplication::translate("OptDialog", "Fixed", Q_NULLPTR)
         << QApplication::translate("OptDialog", "PPP Kinematic", Q_NULLPTR)
         << QApplication::translate("OptDialog", "PPP Static", Q_NULLPTR)
         << QApplication::translate("OptDialog", "PPP Fixed", Q_NULLPTR)
         << QApplication::translate("OptDialog", "Network RTK", Q_NULLPTR)
        );
#ifndef QT_NO_TOOLTIP
        PosMode->setToolTip(QString());
#endif // QT_NO_TOOLTIP
#ifndef QT_NO_TOOLTIP
        LabelPosMode->setToolTip(QString());
#endif // QT_NO_TOOLTIP
        LabelPosMode->setText(QApplication::translate("OptDialog", "Positioning Mode", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        Label8->setToolTip(QString());
#endif // QT_NO_TOOLTIP
        Label8->setText(QApplication::translate("OptDialog", "Ionosphere Correction", Q_NULLPTR));
        Solution->clear();
        Solution->insertItems(0, QStringList()
         << QApplication::translate("OptDialog", "Forward", Q_NULLPTR)
         << QApplication::translate("OptDialog", "Backward", Q_NULLPTR)
         << QApplication::translate("OptDialog", "Combined", Q_NULLPTR)
        );
#ifndef QT_NO_TOOLTIP
        Solution->setToolTip(QString());
#endif // QT_NO_TOOLTIP
        ElMask->clear();
        ElMask->insertItems(0, QStringList()
         << QApplication::translate("OptDialog", "0", Q_NULLPTR)
         << QApplication::translate("OptDialog", "5", Q_NULLPTR)
         << QApplication::translate("OptDialog", "10", Q_NULLPTR)
         << QApplication::translate("OptDialog", "15", Q_NULLPTR)
         << QApplication::translate("OptDialog", "20", Q_NULLPTR)
         << QApplication::translate("OptDialog", "25", Q_NULLPTR)
         << QApplication::translate("OptDialog", "30", Q_NULLPTR)
         << QApplication::translate("OptDialog", "35", Q_NULLPTR)
         << QApplication::translate("OptDialog", "40", Q_NULLPTR)
         << QApplication::translate("OptDialog", "45", Q_NULLPTR)
         << QApplication::translate("OptDialog", "50", Q_NULLPTR)
         << QApplication::translate("OptDialog", "55", Q_NULLPTR)
         << QApplication::translate("OptDialog", "60", Q_NULLPTR)
         << QApplication::translate("OptDialog", "65", Q_NULLPTR)
         << QApplication::translate("OptDialog", "70", Q_NULLPTR)
        );
#ifndef QT_NO_TOOLTIP
        ElMask->setToolTip(QString());
#endif // QT_NO_TOOLTIP
#ifndef QT_NO_TOOLTIP
        PosOpt1->setToolTip(QString());
#endif // QT_NO_TOOLTIP
        PosOpt1->setText(QApplication::translate("OptDialog", "Sat PCV", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        PosOpt2->setToolTip(QString());
#endif // QT_NO_TOOLTIP
        PosOpt2->setText(QApplication::translate("OptDialog", "Rec PCV", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        PosOpt3->setToolTip(QString());
#endif // QT_NO_TOOLTIP
        PosOpt3->setText(QApplication::translate("OptDialog", "PhWU", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        PosOpt4->setToolTip(QString());
#endif // QT_NO_TOOLTIP
        PosOpt4->setText(QApplication::translate("OptDialog", "Rej Ecl", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        PosOpt5->setToolTip(QString());
#endif // QT_NO_TOOLTIP
        PosOpt5->setText(QApplication::translate("OptDialog", "RAIM FDE", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        PosOpt6->setToolTip(QString());
#endif // QT_NO_TOOLTIP
        PosOpt6->setText(QApplication::translate("OptDialog", "DBCorr", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        LabelFreq->setToolTip(QString());
#endif // QT_NO_TOOLTIP
        LabelFreq->setText(QApplication::translate("OptDialog", "Frequencies / Filter Type", Q_NULLPTR));
        Freq->clear();
        Freq->insertItems(0, QStringList()
         << QApplication::translate("OptDialog", "L1", Q_NULLPTR)
         << QApplication::translate("OptDialog", "L1+L2", Q_NULLPTR)
         << QApplication::translate("OptDialog", "L1+L2+L5", Q_NULLPTR)
         << QApplication::translate("OptDialog", "L1+L5", Q_NULLPTR)
        );
#ifndef QT_NO_TOOLTIP
        Freq->setToolTip(QString());
#endif // QT_NO_TOOLTIP
#ifndef QT_NO_TOOLTIP
        LabelElMask->setToolTip(QString());
#endif // QT_NO_TOOLTIP
        LabelElMask->setText(QApplication::translate("OptDialog", "Elevation Mask (\302\260) / SNR Mask (dBHz)", Q_NULLPTR));
        TideCorr->clear();
        TideCorr->insertItems(0, QStringList()
         << QApplication::translate("OptDialog", "OFF", Q_NULLPTR)
         << QApplication::translate("OptDialog", "Solid", Q_NULLPTR)
         << QApplication::translate("OptDialog", "Solid/OTL", Q_NULLPTR)
        );
#ifndef QT_NO_TOOLTIP
        TideCorr->setToolTip(QString());
#endif // QT_NO_TOOLTIP
        DynamicModel->clear();
        DynamicModel->insertItems(0, QStringList()
         << QApplication::translate("OptDialog", "OFF", Q_NULLPTR)
         << QApplication::translate("OptDialog", "ON", Q_NULLPTR)
        );
#ifndef QT_NO_TOOLTIP
        DynamicModel->setToolTip(QString());
#endif // QT_NO_TOOLTIP
#ifndef QT_NO_TOOLTIP
        Label3->setToolTip(QString());
#endif // QT_NO_TOOLTIP
        Label3->setText(QApplication::translate("OptDialog", "Rec Dynamics / Earth Tides Correction", Q_NULLPTR));
        IonoOpt->clear();
        IonoOpt->insertItems(0, QStringList()
         << QApplication::translate("OptDialog", "OFF", Q_NULLPTR)
         << QApplication::translate("OptDialog", "Broadcast", Q_NULLPTR)
         << QApplication::translate("OptDialog", "SBAS", Q_NULLPTR)
         << QApplication::translate("OptDialog", "Iono-Free LC", Q_NULLPTR)
         << QApplication::translate("OptDialog", "Estimate TEC", Q_NULLPTR)
         << QApplication::translate("OptDialog", "IONEX TEC", Q_NULLPTR)
         << QApplication::translate("OptDialog", "QZSS Broardcast", Q_NULLPTR)
         << QApplication::translate("OptDialog", "QZSS LEX", Q_NULLPTR)
         << QApplication::translate("OptDialog", "Input TEC", Q_NULLPTR)
        );
#ifndef QT_NO_TOOLTIP
        IonoOpt->setToolTip(QString());
#endif // QT_NO_TOOLTIP
#ifndef QT_NO_TOOLTIP
        BtnMask->setToolTip(QString());
#endif // QT_NO_TOOLTIP
        BtnMask->setText(QApplication::translate("OptDialog", "...", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        Label9->setToolTip(QString());
#endif // QT_NO_TOOLTIP
        Label9->setText(QApplication::translate("OptDialog", "Troposphere Correction", Q_NULLPTR));
        TropOpt->clear();
        TropOpt->insertItems(0, QStringList()
         << QApplication::translate("OptDialog", "OFF", Q_NULLPTR)
         << QApplication::translate("OptDialog", "Saastamoinen", Q_NULLPTR)
         << QApplication::translate("OptDialog", "SBAS", Q_NULLPTR)
         << QApplication::translate("OptDialog", "Estimate ZTD", Q_NULLPTR)
         << QApplication::translate("OptDialog", "Estimate ZTD+Grad", Q_NULLPTR)
         << QApplication::translate("OptDialog", "Input ZTD", Q_NULLPTR)
        );
#ifndef QT_NO_TOOLTIP
        TropOpt->setToolTip(QString());
#endif // QT_NO_TOOLTIP
#ifndef QT_NO_TOOLTIP
        Label32->setToolTip(QString());
#endif // QT_NO_TOOLTIP
        Label32->setText(QApplication::translate("OptDialog", "Satellite Ephemeris/Clock", Q_NULLPTR));
        SatEphem->clear();
        SatEphem->insertItems(0, QStringList()
         << QApplication::translate("OptDialog", "Broadcast", Q_NULLPTR)
         << QApplication::translate("OptDialog", "Precise", Q_NULLPTR)
         << QApplication::translate("OptDialog", "Broadcast+SBAS", Q_NULLPTR)
         << QApplication::translate("OptDialog", "Broadcast+SSR APC", Q_NULLPTR)
         << QApplication::translate("OptDialog", "Broadcast+SSR CoM", Q_NULLPTR)
         << QApplication::translate("OptDialog", "QZSS LEX", Q_NULLPTR)
        );
#ifndef QT_NO_TOOLTIP
        SatEphem->setToolTip(QString());
#endif // QT_NO_TOOLTIP
#ifndef QT_NO_TOOLTIP
        Label35->setToolTip(QString());
#endif // QT_NO_TOOLTIP
        Label35->setText(QApplication::translate("OptDialog", "Excluded Satellites (+PRN: Included)", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        ExSats->setToolTip(QString());
#endif // QT_NO_TOOLTIP
        ExSats->setText(QString());
#ifndef QT_NO_TOOLTIP
        NavSys1->setToolTip(QString());
#endif // QT_NO_TOOLTIP
        NavSys1->setText(QApplication::translate("OptDialog", "GPS", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        NavSys2->setToolTip(QString());
#endif // QT_NO_TOOLTIP
        NavSys2->setText(QApplication::translate("OptDialog", "GLO", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        NavSys3->setToolTip(QString());
#endif // QT_NO_TOOLTIP
        NavSys3->setText(QApplication::translate("OptDialog", "Galileo", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        NavSys4->setToolTip(QString());
#endif // QT_NO_TOOLTIP
        NavSys4->setText(QApplication::translate("OptDialog", "QZSS", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        NavSys5->setToolTip(QString());
#endif // QT_NO_TOOLTIP
        NavSys5->setText(QApplication::translate("OptDialog", "SBAS", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        NavSys6->setToolTip(QString());
#endif // QT_NO_TOOLTIP
        NavSys6->setText(QApplication::translate("OptDialog", "BeiDou", Q_NULLPTR));
        NavSys7->setText(QApplication::translate("OptDialog", "IRNSS", Q_NULLPTR));
        Misc->setTabText(Misc->indexOf(TabSheet1), QApplication::translate("OptDialog", "Setting&1", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        TabSheet2->setToolTip(QString());
#endif // QT_NO_TOOLTIP
        ElMaskHold->setSuffix(QApplication::translate("OptDialog", "\302\260", Q_NULLPTR));
        SlipThres->setSuffix(QApplication::translate("OptDialog", " m", Q_NULLPTR));
        MaxAgeDiff->setSuffix(QApplication::translate("OptDialog", " s", Q_NULLPTR));
        RejectGdop->setSuffix(QApplication::translate("OptDialog", " m", Q_NULLPTR));
        ElMaskAR->setSuffix(QApplication::translate("OptDialog", "\302\260", Q_NULLPTR));
        LockCntFixAmb->setSuffix(QApplication::translate("OptDialog", " s", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        BaselineConst->setToolTip(QString());
#endif // QT_NO_TOOLTIP
        BaselineConst->setText(QApplication::translate("OptDialog", "Baseline Length Constraint", Q_NULLPTR));
        FixCntHoldAmb->setSuffix(QApplication::translate("OptDialog", " s", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        Label25->setToolTip(QString());
#endif // QT_NO_TOOLTIP
        Label25->setText(QApplication::translate("OptDialog", "Integer Ambiguity Res (GPS/GLO/BDS)", Q_NULLPTR));
        AmbRes->clear();
        AmbRes->insertItems(0, QStringList()
         << QApplication::translate("OptDialog", "OFF", Q_NULLPTR)
         << QApplication::translate("OptDialog", "Continuous", Q_NULLPTR)
         << QApplication::translate("OptDialog", "Instantaneous", Q_NULLPTR)
         << QApplication::translate("OptDialog", "Fix and Hold", Q_NULLPTR)
         << QApplication::translate("OptDialog", "PPP-AR", Q_NULLPTR)
        );
#ifndef QT_NO_TOOLTIP
        AmbRes->setToolTip(QString());
#endif // QT_NO_TOOLTIP
        GloAmbRes->clear();
        GloAmbRes->insertItems(0, QStringList()
         << QApplication::translate("OptDialog", "OFF", Q_NULLPTR)
         << QApplication::translate("OptDialog", "ON", Q_NULLPTR)
         << QApplication::translate("OptDialog", "Auto Calibration", Q_NULLPTR)
        );
#ifndef QT_NO_TOOLTIP
        GloAmbRes->setToolTip(QString());
#endif // QT_NO_TOOLTIP
        BdsAmbRes->clear();
        BdsAmbRes->insertItems(0, QStringList()
         << QApplication::translate("OptDialog", "OFF", Q_NULLPTR)
         << QApplication::translate("OptDialog", "ON", Q_NULLPTR)
        );
#ifndef QT_NO_TOOLTIP
        BdsAmbRes->setToolTip(QString());
#endif // QT_NO_TOOLTIP
#ifndef QT_NO_TOOLTIP
        LabelRatio->setToolTip(QString());
#endif // QT_NO_TOOLTIP
        LabelRatio->setText(QApplication::translate("OptDialog", "Min Ratio to Fix Ambiguity", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        LabelConf->setToolTip(QString());
#endif // QT_NO_TOOLTIP
        LabelConf->setText(QApplication::translate("OptDialog", "Min Confidence / Max FCB to Fix Amb", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        Label13->setToolTip(QString());
#endif // QT_NO_TOOLTIP
        Label13->setText(QApplication::translate("OptDialog", "Min Lock / Elevation to Fix Amb", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        LabelHold->setToolTip(QString());
#endif // QT_NO_TOOLTIP
        LabelHold->setText(QApplication::translate("OptDialog", "Min Fix / Elevation to Hold Amb", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        Label22->setToolTip(QString());
#endif // QT_NO_TOOLTIP
        Label22->setText(QApplication::translate("OptDialog", "Outage to Reset Amb / Slip Thres", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        Label14->setToolTip(QString());
#endif // QT_NO_TOOLTIP
        Label14->setText(QApplication::translate("OptDialog", "Max Age of Diff / Sync Solution", Q_NULLPTR));
        SyncSol->clear();
        SyncSol->insertItems(0, QStringList()
         << QApplication::translate("OptDialog", "OFF", Q_NULLPTR)
         << QApplication::translate("OptDialog", "ON", Q_NULLPTR)
         << QApplication::translate("OptDialog", "Auto Calibration", Q_NULLPTR)
        );
#ifndef QT_NO_TOOLTIP
        SyncSol->setToolTip(QString());
#endif // QT_NO_TOOLTIP
#ifndef QT_NO_TOOLTIP
        Label11->setToolTip(QString());
#endif // QT_NO_TOOLTIP
        Label11->setText(QApplication::translate("OptDialog", "Reject Threshold of GDOP / Innov", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        Label37->setToolTip(QString());
#endif // QT_NO_TOOLTIP
        Label37->setText(QApplication::translate("OptDialog", "Max # of AR Iter/# of Filter Iter", Q_NULLPTR));
        BaselineLen->setSuffix(QApplication::translate("OptDialog", " m", Q_NULLPTR));
        BaselineSig->setSuffix(QApplication::translate("OptDialog", " m", Q_NULLPTR));
        Misc->setTabText(Misc->indexOf(TabSheet2), QApplication::translate("OptDialog", "Setting&2", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        TabSheet3->setToolTip(QString());
#endif // QT_NO_TOOLTIP
#ifndef QT_NO_TOOLTIP
        LabelSolFormat->setToolTip(QString());
#endif // QT_NO_TOOLTIP
        LabelSolFormat->setText(QApplication::translate("OptDialog", "Solution Format", Q_NULLPTR));
        SolFormat->clear();
        SolFormat->insertItems(0, QStringList()
         << QApplication::translate("OptDialog", "Lat/Lon/Height", Q_NULLPTR)
         << QApplication::translate("OptDialog", "X/Y/Z-ECEF", Q_NULLPTR)
         << QApplication::translate("OptDialog", "E/N/U-Baseline", Q_NULLPTR)
         << QApplication::translate("OptDialog", "NMEA0183", Q_NULLPTR)
        );
#ifndef QT_NO_TOOLTIP
        SolFormat->setToolTip(QString());
#endif // QT_NO_TOOLTIP
#ifndef QT_NO_TOOLTIP
        Label20->setToolTip(QString());
#endif // QT_NO_TOOLTIP
        Label20->setText(QApplication::translate("OptDialog", "Output Header / Output Processing Options", Q_NULLPTR));
        OutputHead->clear();
        OutputHead->insertItems(0, QStringList()
         << QApplication::translate("OptDialog", "OFF", Q_NULLPTR)
         << QApplication::translate("OptDialog", "ON", Q_NULLPTR)
        );
#ifndef QT_NO_TOOLTIP
        OutputHead->setToolTip(QString());
#endif // QT_NO_TOOLTIP
        OutputOpt->clear();
        OutputOpt->insertItems(0, QStringList()
         << QApplication::translate("OptDialog", "OFF", Q_NULLPTR)
         << QApplication::translate("OptDialog", "ON", Q_NULLPTR)
        );
#ifndef QT_NO_TOOLTIP
        OutputOpt->setToolTip(QString());
#endif // QT_NO_TOOLTIP
#ifndef QT_NO_TOOLTIP
        LabelTimeFormat->setToolTip(QString());
#endif // QT_NO_TOOLTIP
        LabelTimeFormat->setText(QApplication::translate("OptDialog", "Time Format / # of Decimals", Q_NULLPTR));
        TimeFormat->clear();
        TimeFormat->insertItems(0, QStringList()
         << QApplication::translate("OptDialog", "ww ssss GPST", Q_NULLPTR)
         << QApplication::translate("OptDialog", "hh:mm:ss GPST", Q_NULLPTR)
         << QApplication::translate("OptDialog", "hh:mm:ss UTC", Q_NULLPTR)
         << QApplication::translate("OptDialog", "hh:mm:ss JST", Q_NULLPTR)
        );
#ifndef QT_NO_TOOLTIP
        TimeFormat->setToolTip(QString());
#endif // QT_NO_TOOLTIP
#ifndef QT_NO_TOOLTIP
        LabelLatLonFormat->setToolTip(QString());
#endif // QT_NO_TOOLTIP
        LabelLatLonFormat->setText(QApplication::translate("OptDialog", "Latitude Longitude Format / Field Separator", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        LabelFieldSep->setToolTip(QString());
#endif // QT_NO_TOOLTIP
        LabelFieldSep->setText(QApplication::translate("OptDialog", "Output Single if Sol Outage / Max Sol Std", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        Label2->setToolTip(QString());
#endif // QT_NO_TOOLTIP
        Label2->setText(QApplication::translate("OptDialog", "Datum / Height", Q_NULLPTR));
        OutputDatum->clear();
        OutputDatum->insertItems(0, QStringList()
         << QApplication::translate("OptDialog", "WGS84", Q_NULLPTR)
        );
#ifndef QT_NO_TOOLTIP
        OutputDatum->setToolTip(QString());
#endif // QT_NO_TOOLTIP
        OutputHeight->clear();
        OutputHeight->insertItems(0, QStringList()
         << QApplication::translate("OptDialog", "Ellipsoidal", Q_NULLPTR)
         << QApplication::translate("OptDialog", "Geodetic", Q_NULLPTR)
        );
#ifndef QT_NO_TOOLTIP
        OutputHeight->setToolTip(QString());
#endif // QT_NO_TOOLTIP
#ifndef QT_NO_TOOLTIP
        Label18->setToolTip(QString());
#endif // QT_NO_TOOLTIP
        Label18->setText(QApplication::translate("OptDialog", "Geoid Model", Q_NULLPTR));
        OutputGeoid->clear();
        OutputGeoid->insertItems(0, QStringList()
         << QApplication::translate("OptDialog", "Internal", Q_NULLPTR)
         << QApplication::translate("OptDialog", "EGM96-BE 15\"", Q_NULLPTR)
         << QApplication::translate("OptDialog", "EGM2008-SE 2.5\"", Q_NULLPTR)
         << QApplication::translate("OptDialog", "EGM2008-SE 1.0\"", Q_NULLPTR)
         << QApplication::translate("OptDialog", "GSI2000 1x1.5\"", Q_NULLPTR)
        );
#ifndef QT_NO_TOOLTIP
        OutputGeoid->setToolTip(QString());
#endif // QT_NO_TOOLTIP
#ifndef QT_NO_TOOLTIP
        Label31->setToolTip(QString());
#endif // QT_NO_TOOLTIP
        Label31->setText(QApplication::translate("OptDialog", "Solution for Static Mode", Q_NULLPTR));
        SolStatic->clear();
        SolStatic->insertItems(0, QStringList()
         << QApplication::translate("OptDialog", "All", Q_NULLPTR)
         << QApplication::translate("OptDialog", "Single", Q_NULLPTR)
        );
#ifndef QT_NO_TOOLTIP
        SolStatic->setToolTip(QString());
#endif // QT_NO_TOOLTIP
#ifndef QT_NO_TOOLTIP
        Label21->setToolTip(QString());
#endif // QT_NO_TOOLTIP
        Label21->setText(QApplication::translate("OptDialog", "NMEA Interval (s) RMC/GGA, GSA/GSV", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        Label36->setToolTip(QString());
#endif // QT_NO_TOOLTIP
        Label36->setText(QApplication::translate("OptDialog", "Output Solution Status / Output Debug Trace", Q_NULLPTR));
        DebugStatus->clear();
        DebugStatus->insertItems(0, QStringList()
         << QApplication::translate("OptDialog", "OFF", Q_NULLPTR)
         << QApplication::translate("OptDialog", "State", Q_NULLPTR)
         << QApplication::translate("OptDialog", "Residuals", Q_NULLPTR)
        );
#ifndef QT_NO_TOOLTIP
        DebugStatus->setToolTip(QString());
#endif // QT_NO_TOOLTIP
        DebugTrace->clear();
        DebugTrace->insertItems(0, QStringList()
         << QApplication::translate("OptDialog", "OFF", Q_NULLPTR)
         << QApplication::translate("OptDialog", "Level1", Q_NULLPTR)
         << QApplication::translate("OptDialog", "Level2", Q_NULLPTR)
         << QApplication::translate("OptDialog", "Level3", Q_NULLPTR)
         << QApplication::translate("OptDialog", "Level4", Q_NULLPTR)
         << QApplication::translate("OptDialog", "Level5", Q_NULLPTR)
        );
#ifndef QT_NO_TOOLTIP
        DebugTrace->setToolTip(QString());
#endif // QT_NO_TOOLTIP
        LatLonFormat->clear();
        LatLonFormat->insertItems(0, QStringList()
         << QApplication::translate("OptDialog", "ddd.dddddd", Q_NULLPTR)
         << QApplication::translate("OptDialog", "ddd mm ss.ss", Q_NULLPTR)
        );
#ifndef QT_NO_TOOLTIP
        LatLonFormat->setToolTip(QString());
#endif // QT_NO_TOOLTIP
        LatLonFormat->setCurrentText(QApplication::translate("OptDialog", "ddd.dddddd", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        FieldSep->setToolTip(QString());
#endif // QT_NO_TOOLTIP
        FieldSep->setText(QString());
        OutputSingle->clear();
        OutputSingle->insertItems(0, QStringList()
         << QApplication::translate("OptDialog", "OFF", Q_NULLPTR)
         << QApplication::translate("OptDialog", "ON", Q_NULLPTR)
        );
        MaxSolStd->setSuffix(QApplication::translate("OptDialog", " m", Q_NULLPTR));
        NmeaIntv2->setSuffix(QApplication::translate("OptDialog", " s", Q_NULLPTR));
        NmeaIntv1->setSuffix(QApplication::translate("OptDialog", " s", Q_NULLPTR));
        Misc->setTabText(Misc->indexOf(TabSheet3), QApplication::translate("OptDialog", "O&utput", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        TabSheet4->setToolTip(QString());
#endif // QT_NO_TOOLTIP
#ifndef QT_NO_TOOLTIP
        GroupBox3->setToolTip(QString());
#endif // QT_NO_TOOLTIP
        GroupBox3->setTitle(QApplication::translate("OptDialog", "Measurement Errors (1-sigma)", Q_NULLPTR));
        MeasErr4->setSuffix(QApplication::translate("OptDialog", " m/10km", Q_NULLPTR));
        MeasErr2->setSuffix(QApplication::translate("OptDialog", " m", Q_NULLPTR));
        MeasErr3->setSuffix(QApplication::translate("OptDialog", " m", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        Label7->setToolTip(QString());
#endif // QT_NO_TOOLTIP
        Label7->setText(QApplication::translate("OptDialog", "Carrier-Phase Error a+b/sinEl", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        Label16->setToolTip(QString());
#endif // QT_NO_TOOLTIP
        Label16->setText(QApplication::translate("OptDialog", "Carrier-Phase Error/Baseline", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        Label64->setToolTip(QString());
#endif // QT_NO_TOOLTIP
        Label64->setText(QApplication::translate("OptDialog", "Doppler Frequency", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        Label6->setToolTip(QString());
#endif // QT_NO_TOOLTIP
        Label6->setText(QApplication::translate("OptDialog", "Code/Carrier-Phase Error Ratio L1/L2", Q_NULLPTR));
        MeasErr5->setSuffix(QApplication::translate("OptDialog", " Hz", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        Label29->setToolTip(QString());
#endif // QT_NO_TOOLTIP
        Label29->setText(QApplication::translate("OptDialog", "Satellite Clock Stability (s/s)", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        SatClkStab->setToolTip(QString());
#endif // QT_NO_TOOLTIP
        SatClkStab->setText(QApplication::translate("OptDialog", "5.0E-12", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        GroupBox4->setToolTip(QString());
#endif // QT_NO_TOOLTIP
        GroupBox4->setTitle(QApplication::translate("OptDialog", "Process Noises (1-sigma/sqrt(s))", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        Label26->setToolTip(QString());
#endif // QT_NO_TOOLTIP
        Label26->setText(QApplication::translate("OptDialog", "Carrier-Phase Bias (cycle)", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        PrNoise2->setToolTip(QString());
#endif // QT_NO_TOOLTIP
        PrNoise2->setText(QApplication::translate("OptDialog", "1.0E-03", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        Label27->setToolTip(QString());
#endif // QT_NO_TOOLTIP
        Label27->setText(QApplication::translate("OptDialog", "Vertical Ionospheric Delay (m/10km)", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        Label10->setToolTip(QString());
#endif // QT_NO_TOOLTIP
        Label10->setText(QApplication::translate("OptDialog", "Receiver Accel Horiz/Vertical (m/s2)", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        PrNoise4->setToolTip(QString());
#endif // QT_NO_TOOLTIP
        PrNoise4->setText(QApplication::translate("OptDialog", "1.0E-04", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        PrNoise5->setToolTip(QString());
#endif // QT_NO_TOOLTIP
        PrNoise5->setText(QApplication::translate("OptDialog", "1.0E-04", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        Label28->setToolTip(QString());
#endif // QT_NO_TOOLTIP
        Label28->setText(QApplication::translate("OptDialog", "Zenith Tropospheric Delay (m)", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        PrNoise3->setToolTip(QString());
#endif // QT_NO_TOOLTIP
        PrNoise3->setText(QApplication::translate("OptDialog", "1.0E-04", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        PrNoise1->setToolTip(QString());
#endif // QT_NO_TOOLTIP
        PrNoise1->setText(QApplication::translate("OptDialog", "1.0E-04", Q_NULLPTR));
        Misc->setTabText(Misc->indexOf(TabSheet4), QApplication::translate("OptDialog", "S&tatistics", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        TabSheet5->setToolTip(QString());
#endif // QT_NO_TOOLTIP
#ifndef QT_NO_TOOLTIP
        BtnStaPosView->setToolTip(QString());
#endif // QT_NO_TOOLTIP
        BtnStaPosView->setText(QString());
#ifndef QT_NO_TOOLTIP
        BtnStaPosFile->setToolTip(QString());
#endif // QT_NO_TOOLTIP
        BtnStaPosFile->setText(QApplication::translate("OptDialog", "...", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        StaPosFile->setToolTip(QString());
#endif // QT_NO_TOOLTIP
        StaPosFile->setText(QString());
#ifndef QT_NO_TOOLTIP
        Label4->setToolTip(QString());
#endif // QT_NO_TOOLTIP
        Label4->setText(QString());
#ifndef QT_NO_TOOLTIP
        Label30->setToolTip(QString());
#endif // QT_NO_TOOLTIP
        Label30->setText(QApplication::translate("OptDialog", "Station Position File", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        GroupRefAnt->setToolTip(QString());
#endif // QT_NO_TOOLTIP
        GroupRefAnt->setTitle(QApplication::translate("OptDialog", "Base Station", Q_NULLPTR));
        RefPosType->clear();
        RefPosType->insertItems(0, QStringList()
         << QApplication::translate("OptDialog", "Lat/Lon/Height deg/m", Q_NULLPTR)
         << QApplication::translate("OptDialog", "Lat/Lon/Height dms/m", Q_NULLPTR)
         << QApplication::translate("OptDialog", "X/Y/Z-ECEF m", Q_NULLPTR)
         << QApplication::translate("OptDialog", "Average of Single Position", Q_NULLPTR)
         << QApplication::translate("OptDialog", "Get from Position File", Q_NULLPTR)
         << QApplication::translate("OptDialog", "RINEX Header Position", Q_NULLPTR)
        );
#ifndef QT_NO_TOOLTIP
        RefPosType->setToolTip(QString());
#endif // QT_NO_TOOLTIP
#ifndef QT_NO_TOOLTIP
        BtnRefPos->setToolTip(QString());
#endif // QT_NO_TOOLTIP
        BtnRefPos->setText(QApplication::translate("OptDialog", "...", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        RefPos1->setToolTip(QString());
#endif // QT_NO_TOOLTIP
        RefPos1->setText(QApplication::translate("OptDialog", "0", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        RefPos2->setToolTip(QString());
#endif // QT_NO_TOOLTIP
        RefPos2->setText(QApplication::translate("OptDialog", "0", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        RefPos3->setToolTip(QString());
#endif // QT_NO_TOOLTIP
        RefPos3->setText(QApplication::translate("OptDialog", "0", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        RefAnt->setToolTip(QString());
#endif // QT_NO_TOOLTIP
#ifndef QT_NO_TOOLTIP
        RefAntPcv->setToolTip(QString());
#endif // QT_NO_TOOLTIP
        RefAntPcv->setText(QApplication::translate("OptDialog", "Antenna Type (*: Auto)", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        LabelRefAntD->setToolTip(QString());
#endif // QT_NO_TOOLTIP
        LabelRefAntD->setText(QApplication::translate("OptDialog", "Delta-E/N/U", Q_NULLPTR));
        RefAntE->setSuffix(QApplication::translate("OptDialog", " m", Q_NULLPTR));
        RefAntN->setSuffix(QApplication::translate("OptDialog", " m", Q_NULLPTR));
        RefAntU->setSuffix(QApplication::translate("OptDialog", " m", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        GroupRovAnt->setToolTip(QString());
#endif // QT_NO_TOOLTIP
        GroupRovAnt->setTitle(QApplication::translate("OptDialog", "Rover", Q_NULLPTR));
        RovPosType->clear();
        RovPosType->insertItems(0, QStringList()
         << QApplication::translate("OptDialog", "Lat/Lon/Height deg/m", Q_NULLPTR)
         << QApplication::translate("OptDialog", "Lat/Lon/Height dms/m", Q_NULLPTR)
         << QApplication::translate("OptDialog", "X/Y/Z-ECEF m", Q_NULLPTR)
         << QApplication::translate("OptDialog", "Average of Single Pos", Q_NULLPTR)
         << QApplication::translate("OptDialog", "Get from Position File", Q_NULLPTR)
         << QApplication::translate("OptDialog", "RINEX Header Position", Q_NULLPTR)
        );
#ifndef QT_NO_TOOLTIP
        RovPosType->setToolTip(QString());
#endif // QT_NO_TOOLTIP
#ifndef QT_NO_TOOLTIP
        BtnRovPos->setToolTip(QString());
#endif // QT_NO_TOOLTIP
        BtnRovPos->setText(QApplication::translate("OptDialog", "...", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        RovPos1->setToolTip(QString());
#endif // QT_NO_TOOLTIP
        RovPos1->setText(QApplication::translate("OptDialog", "0", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        RovPos2->setToolTip(QString());
#endif // QT_NO_TOOLTIP
        RovPos2->setText(QApplication::translate("OptDialog", "0", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        RovPos3->setToolTip(QString());
#endif // QT_NO_TOOLTIP
        RovPos3->setText(QApplication::translate("OptDialog", "0", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        RovAnt->setToolTip(QString());
#endif // QT_NO_TOOLTIP
        RovAntE->setSuffix(QApplication::translate("OptDialog", " m", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        RovAntPcv->setToolTip(QString());
#endif // QT_NO_TOOLTIP
        RovAntPcv->setText(QApplication::translate("OptDialog", "Antenna Type (*: Auto)", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        LabelRovAntD->setToolTip(QString());
#endif // QT_NO_TOOLTIP
        LabelRovAntD->setText(QApplication::translate("OptDialog", "Delta-E/N/U", Q_NULLPTR));
        RovAntN->setSuffix(QApplication::translate("OptDialog", " m", Q_NULLPTR));
        Misc->setTabText(Misc->indexOf(TabSheet5), QApplication::translate("OptDialog", "&Positions", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        TabSheet7->setToolTip(QString());
#endif // QT_NO_TOOLTIP
#ifndef QT_NO_TOOLTIP
        Label38->setToolTip(QString());
#endif // QT_NO_TOOLTIP
        Label38->setText(QApplication::translate("OptDialog", "Satellite/Receiver Antenna PCV File ANTEX/NGS PCV", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        BtnSatPcvView->setToolTip(QString());
#endif // QT_NO_TOOLTIP
        BtnSatPcvView->setText(QString());
#ifndef QT_NO_TOOLTIP
        BtnAntPcvView->setToolTip(QString());
#endif // QT_NO_TOOLTIP
        BtnAntPcvView->setText(QString());
#ifndef QT_NO_TOOLTIP
        SatPcvFile->setToolTip(QString());
#endif // QT_NO_TOOLTIP
        SatPcvFile->setText(QString());
#ifndef QT_NO_TOOLTIP
        BtnSatPcvFile->setToolTip(QString());
#endif // QT_NO_TOOLTIP
        BtnSatPcvFile->setText(QApplication::translate("OptDialog", "...", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        AntPcvFile->setToolTip(QString());
#endif // QT_NO_TOOLTIP
        AntPcvFile->setText(QString());
#ifndef QT_NO_TOOLTIP
        BtnAntPcvFile->setToolTip(QString());
#endif // QT_NO_TOOLTIP
        BtnAntPcvFile->setText(QApplication::translate("OptDialog", "...", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        GeoidDataFile->setToolTip(QString());
#endif // QT_NO_TOOLTIP
        GeoidDataFile->setText(QString());
#ifndef QT_NO_TOOLTIP
        BtnGeoidDataFile->setToolTip(QString());
#endif // QT_NO_TOOLTIP
        BtnGeoidDataFile->setText(QApplication::translate("OptDialog", "...", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        Label15->setToolTip(QString());
#endif // QT_NO_TOOLTIP
        Label15->setText(QApplication::translate("OptDialog", "DCB Data File", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        BtnDCBView->setToolTip(QString());
#endif // QT_NO_TOOLTIP
        BtnDCBView->setText(QString());
#ifndef QT_NO_TOOLTIP
        DCBFile->setToolTip(QString());
#endif // QT_NO_TOOLTIP
        DCBFile->setText(QString());
#ifndef QT_NO_TOOLTIP
        BtnDCBFile->setToolTip(QString());
#endif // QT_NO_TOOLTIP
        BtnDCBFile->setText(QApplication::translate("OptDialog", "...", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        Label17->setToolTip(QString());
#endif // QT_NO_TOOLTIP
        Label17->setText(QApplication::translate("OptDialog", "EOP Data File", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        BtnEOPView->setToolTip(QString());
#endif // QT_NO_TOOLTIP
        BtnEOPView->setText(QString());
#ifndef QT_NO_TOOLTIP
        EOPFile->setToolTip(QString());
#endif // QT_NO_TOOLTIP
        EOPFile->setText(QString());
#ifndef QT_NO_TOOLTIP
        BtnEOPFile->setToolTip(QString());
#endif // QT_NO_TOOLTIP
        BtnEOPFile->setText(QApplication::translate("OptDialog", "...", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        Label34->setToolTip(QString());
#endif // QT_NO_TOOLTIP
        Label34->setText(QApplication::translate("OptDialog", "OTL BLQ File", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        BtnBLQFileView->setToolTip(QString());
#endif // QT_NO_TOOLTIP
        BtnBLQFileView->setText(QString());
#ifndef QT_NO_TOOLTIP
        BLQFile->setToolTip(QString());
#endif // QT_NO_TOOLTIP
        BLQFile->setText(QString());
#ifndef QT_NO_TOOLTIP
        BtnBLQFile->setToolTip(QString());
#endif // QT_NO_TOOLTIP
        BtnBLQFile->setText(QApplication::translate("OptDialog", "...", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        Label1->setToolTip(QString());
#endif // QT_NO_TOOLTIP
        Label1->setText(QApplication::translate("OptDialog", "Ionosphere Data File", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        IonoFile->setToolTip(QString());
#endif // QT_NO_TOOLTIP
        IonoFile->setText(QString());
#ifndef QT_NO_TOOLTIP
        BtnIonoFile->setToolTip(QString());
#endif // QT_NO_TOOLTIP
        BtnIonoFile->setText(QApplication::translate("OptDialog", "...", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        Label63->setToolTip(QString());
#endif // QT_NO_TOOLTIP
        Label63->setText(QApplication::translate("OptDialog", "Geoid Data File", Q_NULLPTR));
        Misc->setTabText(Misc->indexOf(TabSheet7), QApplication::translate("OptDialog", "&Files", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        TabSheet6->setToolTip(QString());
#endif // QT_NO_TOOLTIP
#ifndef QT_NO_TOOLTIP
        Panel1->setToolTip(QString());
#endif // QT_NO_TOOLTIP
        Panel1->setProperty("text", QVariant(QString()));
#ifndef QT_NO_TOOLTIP
        BtnHelp->setToolTip(QString());
#endif // QT_NO_TOOLTIP
        BtnHelp->setText(QApplication::translate("OptDialog", "?", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        Label46->setToolTip(QString());
#endif // QT_NO_TOOLTIP
        Label46->setText(QApplication::translate("OptDialog", ":", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        Label62->setToolTip(QString());
#endif // QT_NO_TOOLTIP
        Label62->setText(QApplication::translate("OptDialog", "Keywords in File Path", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        Label43->setToolTip(QString());
#endif // QT_NO_TOOLTIP
        Label43->setText(QApplication::translate("OptDialog", "#..:", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        Label65->setToolTip(QString());
#endif // QT_NO_TOOLTIP
        Label65->setText(QApplication::translate("OptDialog", "Comment in List", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        Label41->setToolTip(QString());
#endif // QT_NO_TOOLTIP
        Label41->setText(QApplication::translate("OptDialog", "Time Interpolation of Base Station Data", Q_NULLPTR));
        IntpRefObs->clear();
        IntpRefObs->insertItems(0, QStringList()
         << QApplication::translate("OptDialog", "OFF", Q_NULLPTR)
         << QApplication::translate("OptDialog", "ON", Q_NULLPTR)
        );
#ifndef QT_NO_TOOLTIP
        IntpRefObs->setToolTip(QString());
#endif // QT_NO_TOOLTIP
#ifndef QT_NO_TOOLTIP
        Label42->setToolTip(QString());
#endif // QT_NO_TOOLTIP
        Label42->setText(QApplication::translate("OptDialog", "DGPS/DGNSS Corrections", Q_NULLPTR));
        ComboBox1->clear();
        ComboBox1->insertItems(0, QStringList()
         << QApplication::translate("OptDialog", "SBAS", Q_NULLPTR)
         << QApplication::translate("OptDialog", "RTCM", Q_NULLPTR)
        );
#ifndef QT_NO_TOOLTIP
        ComboBox1->setToolTip(QString());
#endif // QT_NO_TOOLTIP
#ifndef QT_NO_TOOLTIP
        Label40->setToolTip(QString());
#endif // QT_NO_TOOLTIP
        Label40->setText(QApplication::translate("OptDialog", "SBAS Satellite Selection (0: All) ", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        SbasSat->setToolTip(QString());
#endif // QT_NO_TOOLTIP
        SbasSat->setText(QApplication::translate("OptDialog", "0", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        Label60->setToolTip(QString());
#endif // QT_NO_TOOLTIP
        Label60->setText(QApplication::translate("OptDialog", "RINEX Opt (Rover)", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        RnxOpts1->setToolTip(QString());
#endif // QT_NO_TOOLTIP
        RnxOpts1->setText(QString());
#ifndef QT_NO_TOOLTIP
        Label12->setToolTip(QString());
#endif // QT_NO_TOOLTIP
        Label12->setText(QApplication::translate("OptDialog", "RINEX Opt (Base)", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        RnxOpts2->setToolTip(QString());
#endif // QT_NO_TOOLTIP
        RnxOpts2->setText(QString());
#ifndef QT_NO_TOOLTIP
        Label23->setToolTip(QString());
#endif // QT_NO_TOOLTIP
        Label23->setText(QApplication::translate("OptDialog", "PPP Options", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        PPPOpts->setToolTip(QString());
#endif // QT_NO_TOOLTIP
        PPPOpts->setText(QString());
#ifndef QT_NO_TOOLTIP
        Label45->setToolTip(QString());
#endif // QT_NO_TOOLTIP
        Label45->setText(QApplication::translate("OptDialog", "Station ID List", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        Label19->setToolTip(QString());
#endif // QT_NO_TOOLTIP
        Label19->setText(QApplication::translate("OptDialog", "Rovers", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        Label44->setToolTip(QString());
#endif // QT_NO_TOOLTIP
        Label44->setText(QApplication::translate("OptDialog", "Base Stations", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        RovList->setToolTip(QString());
#endif // QT_NO_TOOLTIP
        RovList->setPlainText(QApplication::translate("OptDialog", "rover", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        BaseList->setToolTip(QString());
#endif // QT_NO_TOOLTIP
        BaseList->setPlainText(QApplication::translate("OptDialog", "base", Q_NULLPTR));
        Misc->setTabText(Misc->indexOf(TabSheet6), QApplication::translate("OptDialog", "&Misc", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class OptDialog: public Ui_OptDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_POSTOPT_H
