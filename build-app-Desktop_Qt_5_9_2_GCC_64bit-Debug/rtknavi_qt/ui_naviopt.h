/********************************************************************************
** Form generated from reading UI file 'naviopt.ui'
**
** Created by: Qt User Interface Compiler version 5.9.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_NAVIOPT_H
#define UI_NAVIOPT_H

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
#include <QtWidgets/QTabWidget>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_OptDialog
{
public:
    QVBoxLayout *verticalLayout;
    QTabWidget *Options;
    QWidget *TabSheet1;
    QGridLayout *gridLayout;
    QLabel *Label3;
    QComboBox *DynamicModel;
    QComboBox *TideCorr;
    QLabel *Label8;
    QLabel *Label9;
    QComboBox *TropOpt;
    QComboBox *Freq;
    QComboBox *Solution;
    QLabel *LabelElMask;
    QComboBox *IonoOpt;
    QComboBox *ElMask;
    QLabel *Label32;
    QPushButton *BtnSnrMask;
    QComboBox *PosMode;
    QLabel *LabelFreq;
    QComboBox *SatEphem;
    QCheckBox *PosOpt1;
    QCheckBox *PosOpt2;
    QCheckBox *PosOpt3;
    QCheckBox *PosOpt4;
    QCheckBox *PosOpt5;
    QLabel *Label35;
    QLabel *LabelPosMode;
    QLineEdit *ExSatsE;
    QWidget *widget_2;
    QHBoxLayout *horizontalLayout_2;
    QCheckBox *NavSys1;
    QCheckBox *NavSys2;
    QCheckBox *NavSys3;
    QCheckBox *NavSys4;
    QCheckBox *NavSys5;
    QCheckBox *NavSys6;
    QCheckBox *NavSys7;
    QWidget *TabSheet2;
    QGridLayout *gridLayout_2;
    QDoubleSpinBox *ValidThresAR;
    QDoubleSpinBox *ThresAR2;
    QSpinBox *NumIter;
    QDoubleSpinBox *ThresAR3;
    QDoubleSpinBox *BaselineSig;
    QDoubleSpinBox *BaselineLen;
    QSpinBox *LockCntFixAmb;
    QDoubleSpinBox *ElMaskAR;
    QSpinBox *FixCntHoldAmb;
    QDoubleSpinBox *ElMaskHold;
    QDoubleSpinBox *MaxAgeDiff;
    QLabel *Label25;
    QComboBox *AmbRes;
    QComboBox *GloAmbRes;
    QComboBox *BdsAmbRes;
    QLabel *Label24;
    QLabel *Label12;
    QLabel *Label13;
    QSpinBox *OutCntResetAmb;
    QLabel *LabelHold;
    QLabel *Label22;
    QLabel *Label14;
    QComboBox *SyncSol;
    QLabel *Label11;
    QLabel *Label37;
    QCheckBox *BaselineConst;
    QDoubleSpinBox *RejectGdop;
    QDoubleSpinBox *RejectThres;
    QDoubleSpinBox *SlipThres;
    QWidget *TabSheet3;
    QGridLayout *gridLayout_3;
    QSpinBox *TimeDecimal;
    QDoubleSpinBox *NmeaIntv2;
    QDoubleSpinBox *NmeaIntv1;
    QComboBox *DebugTrace;
    QLabel *Label2;
    QLabel *Label21;
    QComboBox *TimeFormat;
    QLabel *Label36;
    QLabel *Label20;
    QComboBox *OutputGeoid;
    QLabel *LabelFieldSep;
    QComboBox *SolFormat;
    QLabel *Label18;
    QComboBox *SolStatic;
    QComboBox *LatLonFormat;
    QLabel *LabelLatLonFormat;
    QComboBox *OutputDatum;
    QLabel *LabelTimeFormat;
    QLabel *Label17;
    QComboBox *OutputHead;
    QLabel *LabelSolFormat;
    QComboBox *DebugStatus;
    QLineEdit *FieldSep;
    QComboBox *OutputSingle;
    QDoubleSpinBox *MaxSolStd;
    QComboBox *OutputOpt;
    QComboBox *OutputHeight;
    QWidget *TabSheet4;
    QGridLayout *gridLayout_4;
    QGroupBox *GroupBox4;
    QGridLayout *gridLayout_9;
    QLabel *Label33;
    QLineEdit *PrNoise4;
    QLineEdit *PrNoise5;
    QLabel *Label26;
    QLineEdit *PrNoise1;
    QLabel *Label27;
    QLineEdit *PrNoise2;
    QLabel *Label28;
    QLineEdit *PrNoise3;
    QGroupBox *GroupBox3;
    QGridLayout *gridLayout_8;
    QDoubleSpinBox *MeasErrR2;
    QDoubleSpinBox *MeasErrR1;
    QDoubleSpinBox *MeasErr4;
    QDoubleSpinBox *MeasErr5;
    QLabel *Label6;
    QLabel *Label7;
    QLabel *Label16;
    QLabel *Label10;
    QDoubleSpinBox *MeasErr3;
    QDoubleSpinBox *MeasErr2;
    QLabel *Label29;
    QLineEdit *SatClkStab;
    QWidget *TabSheet5;
    QGridLayout *gridLayout_5;
    QWidget *widget_3;
    QGridLayout *gridLayout_12;
    QPushButton *BtnStaPosView;
    QLineEdit *StaPosFile;
    QLabel *Label30;
    QPushButton *BtnStaPosFile;
    QGroupBox *GroupRefAnt;
    QGridLayout *gridLayout_10;
    QCheckBox *RefAntPcv;
    QCheckBox *ChkInitRestart;
    QPushButton *BtnRefPos;
    QLineEdit *RefPos1;
    QLineEdit *RefPos2;
    QLineEdit *RefPos3;
    QSpinBox *MaxAveEp;
    QComboBox *RefPosTypeP;
    QLabel *LabelMaxAveEp;
    QDoubleSpinBox *RefAntU;
    QDoubleSpinBox *RefAntN;
    QDoubleSpinBox *RefAntE;
    QLabel *LabelRefAntD;
    QComboBox *RefAnt;
    QGroupBox *GroupRovAnt;
    QGridLayout *gridLayout_11;
    QComboBox *RovPosTypeP;
    QPushButton *BtnRovPos;
    QLineEdit *RovPos1;
    QLineEdit *RovPos2;
    QLineEdit *RovPos3;
    QCheckBox *RovAntPcv;
    QLabel *LabelRovAntD;
    QComboBox *RovAnt;
    QDoubleSpinBox *RovAntE;
    QDoubleSpinBox *RovAntU;
    QDoubleSpinBox *RovAntN;
    QWidget *TabSheet7;
    QGridLayout *gridLayout_6;
    QPushButton *BtnSatPcvFile;
    QLineEdit *OLFile;
    QLineEdit *DCBFile;
    QLabel *Label31;
    QPushButton *BtnSatPcvView;
    QLineEdit *SatPcvFile;
    QPushButton *BtnAntPcvFile;
    QLineEdit *AntPcvFile;
    QLineEdit *GeoidDataFile;
    QPushButton *BtnGeoidDataFile;
    QLabel *Label48;
    QLineEdit *LocalDir;
    QPushButton *BtnLocalDir;
    QPushButton *BtnDCBFile;
    QPushButton *BtnDCBView;
    QPushButton *BtnEOPView;
    QPushButton *BtnOLFileView;
    QPushButton *BtnOLFile;
    QLabel *Label38;
    QPushButton *BtnAntPcvView;
    QPushButton *BtnEOPFile;
    QLineEdit *EOPFile;
    QLabel *Label34;
    QLabel *Label23;
    QLabel *Label1;
    QWidget *TabSheet8;
    QGridLayout *gridLayout_7;
    QLabel *Label19;
    QLabel *Label44;
    QLabel *Label46;
    QLabel *Label41;
    QLabel *Label42;
    QComboBox *NavSelectS;
    QLabel *Label5;
    QLabel *Label45;
    QLineEdit *ProxyAddrE;
    QLabel *Label40;
    QLabel *FontLabel;
    QPushButton *BtnFont;
    QLabel *Label15;
    QLineEdit *TLEFile;
    QPushButton *BtnTLEFile;
    QLabel *Label39;
    QLineEdit *TLESatFile;
    QPushButton *BtnTLESatFile;
    QSpinBox *TimeoutTimeE;
    QSpinBox *SbasSatE;
    QSpinBox *SvrCycleE;
    QSpinBox *NmeaCycleE;
    QSpinBox *ReconTimeE;
    QSpinBox *SvrBuffSizeE;
    QSpinBox *SolBuffSizeE;
    QSpinBox *SavedSolE;
    QSpinBox *FileSwapMarginE;
    QSpinBox *MoniPortE;
    QLabel *Label43;
    QComboBox *PanelStackE;
    QWidget *widget;
    QHBoxLayout *horizontalLayout;
    QLabel *Label47;
    QPushButton *BtnLoad;
    QPushButton *BtnSave;
    QPushButton *BtnOk;
    QPushButton *BtnCancel;

    void setupUi(QWidget *OptDialog)
    {
        if (OptDialog->objectName().isEmpty())
            OptDialog->setObjectName(QStringLiteral("OptDialog"));
        OptDialog->resize(639, 555);
        verticalLayout = new QVBoxLayout(OptDialog);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        Options = new QTabWidget(OptDialog);
        Options->setObjectName(QStringLiteral("Options"));
        Options->setTabPosition(QTabWidget::North);
        TabSheet1 = new QWidget();
        TabSheet1->setObjectName(QStringLiteral("TabSheet1"));
        gridLayout = new QGridLayout(TabSheet1);
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        Label3 = new QLabel(TabSheet1);
        Label3->setObjectName(QStringLiteral("Label3"));
        Label3->setEnabled(true);

        gridLayout->addWidget(Label3, 3, 0, 1, 6);

        DynamicModel = new QComboBox(TabSheet1);
        DynamicModel->setObjectName(QStringLiteral("DynamicModel"));
        DynamicModel->setEnabled(true);

        gridLayout->addWidget(DynamicModel, 3, 6, 1, 2);

        TideCorr = new QComboBox(TabSheet1);
        TideCorr->setObjectName(QStringLiteral("TideCorr"));
        TideCorr->setEnabled(true);

        gridLayout->addWidget(TideCorr, 3, 8, 1, 1);

        Label8 = new QLabel(TabSheet1);
        Label8->setObjectName(QStringLiteral("Label8"));
        Label8->setEnabled(true);

        gridLayout->addWidget(Label8, 4, 0, 1, 4);

        Label9 = new QLabel(TabSheet1);
        Label9->setObjectName(QStringLiteral("Label9"));
        Label9->setEnabled(true);

        gridLayout->addWidget(Label9, 5, 0, 1, 4);

        TropOpt = new QComboBox(TabSheet1);
        TropOpt->setObjectName(QStringLiteral("TropOpt"));
        TropOpt->setEnabled(true);

        gridLayout->addWidget(TropOpt, 5, 6, 1, 3);

        Freq = new QComboBox(TabSheet1);
        Freq->setObjectName(QStringLiteral("Freq"));
        Freq->setEnabled(true);

        gridLayout->addWidget(Freq, 1, 6, 1, 2);

        Solution = new QComboBox(TabSheet1);
        Solution->setObjectName(QStringLiteral("Solution"));
        Solution->setEnabled(false);

        gridLayout->addWidget(Solution, 1, 8, 1, 1);

        LabelElMask = new QLabel(TabSheet1);
        LabelElMask->setObjectName(QStringLiteral("LabelElMask"));
        LabelElMask->setEnabled(true);

        gridLayout->addWidget(LabelElMask, 2, 0, 1, 6);

        IonoOpt = new QComboBox(TabSheet1);
        IonoOpt->setObjectName(QStringLiteral("IonoOpt"));
        IonoOpt->setEnabled(true);

        gridLayout->addWidget(IonoOpt, 4, 6, 1, 3);

        ElMask = new QComboBox(TabSheet1);
        ElMask->setObjectName(QStringLiteral("ElMask"));
        ElMask->setEnabled(true);

        gridLayout->addWidget(ElMask, 2, 6, 1, 2);

        Label32 = new QLabel(TabSheet1);
        Label32->setObjectName(QStringLiteral("Label32"));
        Label32->setEnabled(true);

        gridLayout->addWidget(Label32, 6, 0, 1, 4);

        BtnSnrMask = new QPushButton(TabSheet1);
        BtnSnrMask->setObjectName(QStringLiteral("BtnSnrMask"));
        BtnSnrMask->setEnabled(true);

        gridLayout->addWidget(BtnSnrMask, 2, 8, 1, 1);

        PosMode = new QComboBox(TabSheet1);
        PosMode->setObjectName(QStringLiteral("PosMode"));
        PosMode->setEnabled(true);

        gridLayout->addWidget(PosMode, 0, 6, 1, 3);

        LabelFreq = new QLabel(TabSheet1);
        LabelFreq->setObjectName(QStringLiteral("LabelFreq"));
        LabelFreq->setEnabled(true);

        gridLayout->addWidget(LabelFreq, 1, 0, 1, 4);

        SatEphem = new QComboBox(TabSheet1);
        SatEphem->setObjectName(QStringLiteral("SatEphem"));
        SatEphem->setEnabled(true);

        gridLayout->addWidget(SatEphem, 6, 6, 1, 3);

        PosOpt1 = new QCheckBox(TabSheet1);
        PosOpt1->setObjectName(QStringLiteral("PosOpt1"));
        PosOpt1->setChecked(false);

        gridLayout->addWidget(PosOpt1, 7, 0, 1, 2);

        PosOpt2 = new QCheckBox(TabSheet1);
        PosOpt2->setObjectName(QStringLiteral("PosOpt2"));
        PosOpt2->setChecked(false);

        gridLayout->addWidget(PosOpt2, 7, 2, 1, 2);

        PosOpt3 = new QCheckBox(TabSheet1);
        PosOpt3->setObjectName(QStringLiteral("PosOpt3"));
        PosOpt3->setChecked(false);

        gridLayout->addWidget(PosOpt3, 7, 4, 1, 2);

        PosOpt4 = new QCheckBox(TabSheet1);
        PosOpt4->setObjectName(QStringLiteral("PosOpt4"));
        PosOpt4->setChecked(false);

        gridLayout->addWidget(PosOpt4, 7, 6, 1, 2);

        PosOpt5 = new QCheckBox(TabSheet1);
        PosOpt5->setObjectName(QStringLiteral("PosOpt5"));
        PosOpt5->setChecked(false);

        gridLayout->addWidget(PosOpt5, 7, 8, 1, 1);

        Label35 = new QLabel(TabSheet1);
        Label35->setObjectName(QStringLiteral("Label35"));
        Label35->setEnabled(true);

        gridLayout->addWidget(Label35, 8, 0, 1, 6);

        LabelPosMode = new QLabel(TabSheet1);
        LabelPosMode->setObjectName(QStringLiteral("LabelPosMode"));
        LabelPosMode->setEnabled(true);

        gridLayout->addWidget(LabelPosMode, 0, 0, 1, 3);

        ExSatsE = new QLineEdit(TabSheet1);
        ExSatsE->setObjectName(QStringLiteral("ExSatsE"));
        ExSatsE->setEnabled(true);

        gridLayout->addWidget(ExSatsE, 8, 6, 1, 3);

        widget_2 = new QWidget(TabSheet1);
        widget_2->setObjectName(QStringLiteral("widget_2"));
        QSizePolicy sizePolicy(QSizePolicy::Preferred, QSizePolicy::Fixed);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(widget_2->sizePolicy().hasHeightForWidth());
        widget_2->setSizePolicy(sizePolicy);
        horizontalLayout_2 = new QHBoxLayout(widget_2);
        horizontalLayout_2->setSpacing(0);
        horizontalLayout_2->setObjectName(QStringLiteral("horizontalLayout_2"));
        horizontalLayout_2->setContentsMargins(0, 0, 0, 0);
        NavSys1 = new QCheckBox(widget_2);
        NavSys1->setObjectName(QStringLiteral("NavSys1"));
        NavSys1->setChecked(true);

        horizontalLayout_2->addWidget(NavSys1);

        NavSys2 = new QCheckBox(widget_2);
        NavSys2->setObjectName(QStringLiteral("NavSys2"));
        NavSys2->setChecked(false);

        horizontalLayout_2->addWidget(NavSys2);

        NavSys3 = new QCheckBox(widget_2);
        NavSys3->setObjectName(QStringLiteral("NavSys3"));
        NavSys3->setChecked(false);

        horizontalLayout_2->addWidget(NavSys3);

        NavSys4 = new QCheckBox(widget_2);
        NavSys4->setObjectName(QStringLiteral("NavSys4"));
        NavSys4->setChecked(false);

        horizontalLayout_2->addWidget(NavSys4);

        NavSys5 = new QCheckBox(widget_2);
        NavSys5->setObjectName(QStringLiteral("NavSys5"));
        NavSys5->setChecked(false);

        horizontalLayout_2->addWidget(NavSys5);

        NavSys6 = new QCheckBox(widget_2);
        NavSys6->setObjectName(QStringLiteral("NavSys6"));
        NavSys6->setChecked(false);

        horizontalLayout_2->addWidget(NavSys6);

        NavSys7 = new QCheckBox(widget_2);
        NavSys7->setObjectName(QStringLiteral("NavSys7"));

        horizontalLayout_2->addWidget(NavSys7);


        gridLayout->addWidget(widget_2, 9, 0, 1, 9);

        Options->addTab(TabSheet1, QString());
        TabSheet2 = new QWidget();
        TabSheet2->setObjectName(QStringLiteral("TabSheet2"));
        gridLayout_2 = new QGridLayout(TabSheet2);
        gridLayout_2->setObjectName(QStringLiteral("gridLayout_2"));
        ValidThresAR = new QDoubleSpinBox(TabSheet2);
        ValidThresAR->setObjectName(QStringLiteral("ValidThresAR"));
        ValidThresAR->setDecimals(1);
        ValidThresAR->setValue(3);

        gridLayout_2->addWidget(ValidThresAR, 2, 1, 1, 4);

        ThresAR2 = new QDoubleSpinBox(TabSheet2);
        ThresAR2->setObjectName(QStringLiteral("ThresAR2"));
        ThresAR2->setDecimals(4);
        ThresAR2->setValue(0.9999);

        gridLayout_2->addWidget(ThresAR2, 4, 1, 1, 2);

        NumIter = new QSpinBox(TabSheet2);
        NumIter->setObjectName(QStringLiteral("NumIter"));
        NumIter->setValue(1);

        gridLayout_2->addWidget(NumIter, 16, 1, 1, 2);

        ThresAR3 = new QDoubleSpinBox(TabSheet2);
        ThresAR3->setObjectName(QStringLiteral("ThresAR3"));
        ThresAR3->setValue(0.2);

        gridLayout_2->addWidget(ThresAR3, 4, 3, 1, 2);

        BaselineSig = new QDoubleSpinBox(TabSheet2);
        BaselineSig->setObjectName(QStringLiteral("BaselineSig"));
        BaselineSig->setDecimals(3);
        BaselineSig->setMaximum(1e+6);

        gridLayout_2->addWidget(BaselineSig, 17, 3, 1, 2);

        BaselineLen = new QDoubleSpinBox(TabSheet2);
        BaselineLen->setObjectName(QStringLiteral("BaselineLen"));
        BaselineLen->setDecimals(3);
        BaselineLen->setMaximum(1e+6);

        gridLayout_2->addWidget(BaselineLen, 17, 1, 1, 2);

        LockCntFixAmb = new QSpinBox(TabSheet2);
        LockCntFixAmb->setObjectName(QStringLiteral("LockCntFixAmb"));
        LockCntFixAmb->setMaximum(10000);

        gridLayout_2->addWidget(LockCntFixAmb, 6, 1, 1, 2);

        ElMaskAR = new QDoubleSpinBox(TabSheet2);
        ElMaskAR->setObjectName(QStringLiteral("ElMaskAR"));
        ElMaskAR->setDecimals(0);
        ElMaskAR->setMaximum(90);

        gridLayout_2->addWidget(ElMaskAR, 6, 3, 1, 2);

        FixCntHoldAmb = new QSpinBox(TabSheet2);
        FixCntHoldAmb->setObjectName(QStringLiteral("FixCntHoldAmb"));
        FixCntHoldAmb->setMaximum(100000);
        FixCntHoldAmb->setValue(10);

        gridLayout_2->addWidget(FixCntHoldAmb, 8, 1, 1, 2);

        ElMaskHold = new QDoubleSpinBox(TabSheet2);
        ElMaskHold->setObjectName(QStringLiteral("ElMaskHold"));
        ElMaskHold->setDecimals(0);
        ElMaskHold->setMaximum(90);
        ElMaskHold->setValue(10);

        gridLayout_2->addWidget(ElMaskHold, 8, 3, 1, 2);

        MaxAgeDiff = new QDoubleSpinBox(TabSheet2);
        MaxAgeDiff->setObjectName(QStringLiteral("MaxAgeDiff"));
        MaxAgeDiff->setDecimals(1);
        MaxAgeDiff->setMaximum(3600);
        MaxAgeDiff->setValue(30);

        gridLayout_2->addWidget(MaxAgeDiff, 12, 1, 1, 2);

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

        Label24 = new QLabel(TabSheet2);
        Label24->setObjectName(QStringLiteral("Label24"));
        Label24->setEnabled(true);

        gridLayout_2->addWidget(Label24, 2, 0, 1, 1);

        Label12 = new QLabel(TabSheet2);
        Label12->setObjectName(QStringLiteral("Label12"));
        Label12->setEnabled(true);

        gridLayout_2->addWidget(Label12, 4, 0, 1, 1);

        Label13 = new QLabel(TabSheet2);
        Label13->setObjectName(QStringLiteral("Label13"));
        Label13->setEnabled(true);

        gridLayout_2->addWidget(Label13, 6, 0, 1, 1);

        OutCntResetAmb = new QSpinBox(TabSheet2);
        OutCntResetAmb->setObjectName(QStringLiteral("OutCntResetAmb"));
        OutCntResetAmb->setMaximum(1000);
        OutCntResetAmb->setValue(5);

        gridLayout_2->addWidget(OutCntResetAmb, 10, 1, 1, 2);

        LabelHold = new QLabel(TabSheet2);
        LabelHold->setObjectName(QStringLiteral("LabelHold"));
        LabelHold->setEnabled(true);

        gridLayout_2->addWidget(LabelHold, 8, 0, 1, 1);

        Label22 = new QLabel(TabSheet2);
        Label22->setObjectName(QStringLiteral("Label22"));
        Label22->setEnabled(true);

        gridLayout_2->addWidget(Label22, 10, 0, 1, 1);

        Label14 = new QLabel(TabSheet2);
        Label14->setObjectName(QStringLiteral("Label14"));
        Label14->setEnabled(true);

        gridLayout_2->addWidget(Label14, 12, 0, 1, 1);

        SyncSol = new QComboBox(TabSheet2);
        SyncSol->setObjectName(QStringLiteral("SyncSol"));
        SyncSol->setEnabled(true);

        gridLayout_2->addWidget(SyncSol, 12, 3, 1, 2);

        Label11 = new QLabel(TabSheet2);
        Label11->setObjectName(QStringLiteral("Label11"));
        Label11->setEnabled(true);

        gridLayout_2->addWidget(Label11, 14, 0, 1, 1);

        Label37 = new QLabel(TabSheet2);
        Label37->setObjectName(QStringLiteral("Label37"));
        Label37->setEnabled(true);

        gridLayout_2->addWidget(Label37, 16, 0, 1, 1);

        BaselineConst = new QCheckBox(TabSheet2);
        BaselineConst->setObjectName(QStringLiteral("BaselineConst"));
        BaselineConst->setChecked(false);

        gridLayout_2->addWidget(BaselineConst, 17, 0, 1, 1);

        RejectGdop = new QDoubleSpinBox(TabSheet2);
        RejectGdop->setObjectName(QStringLiteral("RejectGdop"));
        RejectGdop->setDecimals(1);
        RejectGdop->setValue(30);

        gridLayout_2->addWidget(RejectGdop, 14, 1, 1, 2);

        RejectThres = new QDoubleSpinBox(TabSheet2);
        RejectThres->setObjectName(QStringLiteral("RejectThres"));
        RejectThres->setDecimals(1);
        RejectThres->setValue(30);

        gridLayout_2->addWidget(RejectThres, 14, 3, 1, 2);

        SlipThres = new QDoubleSpinBox(TabSheet2);
        SlipThres->setObjectName(QStringLiteral("SlipThres"));
        SlipThres->setDecimals(3);
        SlipThres->setValue(0.05);

        gridLayout_2->addWidget(SlipThres, 10, 3, 1, 2);

        Options->addTab(TabSheet2, QString());
        TabSheet3 = new QWidget();
        TabSheet3->setObjectName(QStringLiteral("TabSheet3"));
        gridLayout_3 = new QGridLayout(TabSheet3);
        gridLayout_3->setObjectName(QStringLiteral("gridLayout_3"));
        TimeDecimal = new QSpinBox(TabSheet3);
        TimeDecimal->setObjectName(QStringLiteral("TimeDecimal"));
        TimeDecimal->setValue(3);

        gridLayout_3->addWidget(TimeDecimal, 4, 3, 1, 1);

        NmeaIntv2 = new QDoubleSpinBox(TabSheet3);
        NmeaIntv2->setObjectName(QStringLiteral("NmeaIntv2"));
        NmeaIntv2->setValue(1);

        gridLayout_3->addWidget(NmeaIntv2, 12, 3, 1, 1);

        NmeaIntv1 = new QDoubleSpinBox(TabSheet3);
        NmeaIntv1->setObjectName(QStringLiteral("NmeaIntv1"));

        gridLayout_3->addWidget(NmeaIntv1, 12, 1, 1, 2);

        DebugTrace = new QComboBox(TabSheet3);
        DebugTrace->setObjectName(QStringLiteral("DebugTrace"));
        DebugTrace->setEnabled(true);

        gridLayout_3->addWidget(DebugTrace, 13, 2, 1, 2);

        Label2 = new QLabel(TabSheet3);
        Label2->setObjectName(QStringLiteral("Label2"));
        Label2->setEnabled(true);

        gridLayout_3->addWidget(Label2, 8, 0, 1, 1);

        Label21 = new QLabel(TabSheet3);
        Label21->setObjectName(QStringLiteral("Label21"));
        Label21->setEnabled(false);

        gridLayout_3->addWidget(Label21, 10, 0, 1, 1);

        TimeFormat = new QComboBox(TabSheet3);
        TimeFormat->setObjectName(QStringLiteral("TimeFormat"));
        TimeFormat->setEnabled(true);

        gridLayout_3->addWidget(TimeFormat, 4, 1, 1, 2);

        Label36 = new QLabel(TabSheet3);
        Label36->setObjectName(QStringLiteral("Label36"));
        Label36->setEnabled(true);

        gridLayout_3->addWidget(Label36, 13, 0, 1, 1);

        Label20 = new QLabel(TabSheet3);
        Label20->setObjectName(QStringLiteral("Label20"));
        Label20->setEnabled(true);

        gridLayout_3->addWidget(Label20, 2, 0, 1, 1);

        OutputGeoid = new QComboBox(TabSheet3);
        OutputGeoid->setObjectName(QStringLiteral("OutputGeoid"));
        OutputGeoid->setEnabled(true);

        gridLayout_3->addWidget(OutputGeoid, 9, 1, 1, 3);

        LabelFieldSep = new QLabel(TabSheet3);
        LabelFieldSep->setObjectName(QStringLiteral("LabelFieldSep"));
        LabelFieldSep->setEnabled(true);

        gridLayout_3->addWidget(LabelFieldSep, 7, 0, 1, 1);

        SolFormat = new QComboBox(TabSheet3);
        SolFormat->setObjectName(QStringLiteral("SolFormat"));
        SolFormat->setEnabled(false);

        gridLayout_3->addWidget(SolFormat, 0, 1, 1, 3);

        Label18 = new QLabel(TabSheet3);
        Label18->setObjectName(QStringLiteral("Label18"));
        Label18->setEnabled(true);

        gridLayout_3->addWidget(Label18, 9, 0, 1, 1);

        SolStatic = new QComboBox(TabSheet3);
        SolStatic->setObjectName(QStringLiteral("SolStatic"));
        SolStatic->setEnabled(false);

        gridLayout_3->addWidget(SolStatic, 10, 1, 1, 3);

        LatLonFormat = new QComboBox(TabSheet3);
        LatLonFormat->setObjectName(QStringLiteral("LatLonFormat"));
        LatLonFormat->setEnabled(true);

        gridLayout_3->addWidget(LatLonFormat, 5, 1, 1, 2);

        LabelLatLonFormat = new QLabel(TabSheet3);
        LabelLatLonFormat->setObjectName(QStringLiteral("LabelLatLonFormat"));
        LabelLatLonFormat->setEnabled(true);

        gridLayout_3->addWidget(LabelLatLonFormat, 5, 0, 1, 1);

        OutputDatum = new QComboBox(TabSheet3);
        OutputDatum->setObjectName(QStringLiteral("OutputDatum"));
        OutputDatum->setEnabled(true);

        gridLayout_3->addWidget(OutputDatum, 8, 1, 1, 1);

        LabelTimeFormat = new QLabel(TabSheet3);
        LabelTimeFormat->setObjectName(QStringLiteral("LabelTimeFormat"));
        LabelTimeFormat->setEnabled(true);

        gridLayout_3->addWidget(LabelTimeFormat, 4, 0, 1, 1);

        Label17 = new QLabel(TabSheet3);
        Label17->setObjectName(QStringLiteral("Label17"));
        Label17->setEnabled(true);

        gridLayout_3->addWidget(Label17, 12, 0, 1, 1);

        OutputHead = new QComboBox(TabSheet3);
        OutputHead->setObjectName(QStringLiteral("OutputHead"));
        OutputHead->setEnabled(true);

        gridLayout_3->addWidget(OutputHead, 2, 1, 1, 1);

        LabelSolFormat = new QLabel(TabSheet3);
        LabelSolFormat->setObjectName(QStringLiteral("LabelSolFormat"));
        LabelSolFormat->setEnabled(true);

        gridLayout_3->addWidget(LabelSolFormat, 0, 0, 1, 1);

        DebugStatus = new QComboBox(TabSheet3);
        DebugStatus->setObjectName(QStringLiteral("DebugStatus"));
        DebugStatus->setEnabled(true);

        gridLayout_3->addWidget(DebugStatus, 13, 1, 1, 1);

        FieldSep = new QLineEdit(TabSheet3);
        FieldSep->setObjectName(QStringLiteral("FieldSep"));
        FieldSep->setEnabled(true);

        gridLayout_3->addWidget(FieldSep, 5, 3, 1, 1);

        OutputSingle = new QComboBox(TabSheet3);
        OutputSingle->setObjectName(QStringLiteral("OutputSingle"));

        gridLayout_3->addWidget(OutputSingle, 7, 1, 1, 1);

        MaxSolStd = new QDoubleSpinBox(TabSheet3);
        MaxSolStd->setObjectName(QStringLiteral("MaxSolStd"));

        gridLayout_3->addWidget(MaxSolStd, 7, 3, 1, 1);

        OutputOpt = new QComboBox(TabSheet3);
        OutputOpt->setObjectName(QStringLiteral("OutputOpt"));
        OutputOpt->setEnabled(false);

        gridLayout_3->addWidget(OutputOpt, 2, 3, 1, 1);

        OutputHeight = new QComboBox(TabSheet3);
        OutputHeight->setObjectName(QStringLiteral("OutputHeight"));
        OutputHeight->setEnabled(true);

        gridLayout_3->addWidget(OutputHeight, 8, 3, 1, 1);

        Options->addTab(TabSheet3, QString());
        TabSheet4 = new QWidget();
        TabSheet4->setObjectName(QStringLiteral("TabSheet4"));
        gridLayout_4 = new QGridLayout(TabSheet4);
        gridLayout_4->setObjectName(QStringLiteral("gridLayout_4"));
        GroupBox4 = new QGroupBox(TabSheet4);
        GroupBox4->setObjectName(QStringLiteral("GroupBox4"));
        gridLayout_9 = new QGridLayout(GroupBox4);
        gridLayout_9->setObjectName(QStringLiteral("gridLayout_9"));
        Label33 = new QLabel(GroupBox4);
        Label33->setObjectName(QStringLiteral("Label33"));
        Label33->setEnabled(true);

        gridLayout_9->addWidget(Label33, 0, 0, 1, 1);

        PrNoise4 = new QLineEdit(GroupBox4);
        PrNoise4->setObjectName(QStringLiteral("PrNoise4"));
        PrNoise4->setEnabled(true);

        gridLayout_9->addWidget(PrNoise4, 0, 1, 1, 1);

        PrNoise5 = new QLineEdit(GroupBox4);
        PrNoise5->setObjectName(QStringLiteral("PrNoise5"));
        PrNoise5->setEnabled(true);

        gridLayout_9->addWidget(PrNoise5, 0, 2, 1, 1);

        Label26 = new QLabel(GroupBox4);
        Label26->setObjectName(QStringLiteral("Label26"));
        Label26->setEnabled(true);

        gridLayout_9->addWidget(Label26, 1, 0, 1, 1);

        PrNoise1 = new QLineEdit(GroupBox4);
        PrNoise1->setObjectName(QStringLiteral("PrNoise1"));
        PrNoise1->setEnabled(true);

        gridLayout_9->addWidget(PrNoise1, 1, 1, 1, 2);

        Label27 = new QLabel(GroupBox4);
        Label27->setObjectName(QStringLiteral("Label27"));
        Label27->setEnabled(true);

        gridLayout_9->addWidget(Label27, 2, 0, 1, 1);

        PrNoise2 = new QLineEdit(GroupBox4);
        PrNoise2->setObjectName(QStringLiteral("PrNoise2"));
        PrNoise2->setEnabled(true);

        gridLayout_9->addWidget(PrNoise2, 2, 1, 1, 2);

        Label28 = new QLabel(GroupBox4);
        Label28->setObjectName(QStringLiteral("Label28"));
        Label28->setEnabled(true);

        gridLayout_9->addWidget(Label28, 3, 0, 1, 1);

        PrNoise3 = new QLineEdit(GroupBox4);
        PrNoise3->setObjectName(QStringLiteral("PrNoise3"));
        PrNoise3->setEnabled(true);

        gridLayout_9->addWidget(PrNoise3, 3, 1, 1, 2);


        gridLayout_4->addWidget(GroupBox4, 1, 0, 1, 2);

        GroupBox3 = new QGroupBox(TabSheet4);
        GroupBox3->setObjectName(QStringLiteral("GroupBox3"));
        gridLayout_8 = new QGridLayout(GroupBox3);
        gridLayout_8->setObjectName(QStringLiteral("gridLayout_8"));
        MeasErrR2 = new QDoubleSpinBox(GroupBox3);
        MeasErrR2->setObjectName(QStringLiteral("MeasErrR2"));
        MeasErrR2->setMaximum(1e+6);
        MeasErrR2->setValue(100);

        gridLayout_8->addWidget(MeasErrR2, 1, 2, 1, 1);

        MeasErrR1 = new QDoubleSpinBox(GroupBox3);
        MeasErrR1->setObjectName(QStringLiteral("MeasErrR1"));
        MeasErrR1->setDecimals(1);
        MeasErrR1->setMaximum(100000);
        MeasErrR1->setValue(100);

        gridLayout_8->addWidget(MeasErrR1, 1, 1, 1, 1);

        MeasErr4 = new QDoubleSpinBox(GroupBox3);
        MeasErr4->setObjectName(QStringLiteral("MeasErr4"));
        MeasErr4->setDecimals(3);

        gridLayout_8->addWidget(MeasErr4, 5, 1, 1, 2);

        MeasErr5 = new QDoubleSpinBox(GroupBox3);
        MeasErr5->setObjectName(QStringLiteral("MeasErr5"));
        MeasErr5->setMinimum(-10000);
        MeasErr5->setMaximum(10000);
        MeasErr5->setValue(1);

        gridLayout_8->addWidget(MeasErr5, 6, 1, 1, 2);

        Label6 = new QLabel(GroupBox3);
        Label6->setObjectName(QStringLiteral("Label6"));
        Label6->setEnabled(true);

        gridLayout_8->addWidget(Label6, 1, 0, 1, 1);

        Label7 = new QLabel(GroupBox3);
        Label7->setObjectName(QStringLiteral("Label7"));
        Label7->setEnabled(true);

        gridLayout_8->addWidget(Label7, 3, 0, 1, 1);

        Label16 = new QLabel(GroupBox3);
        Label16->setObjectName(QStringLiteral("Label16"));
        Label16->setEnabled(true);

        gridLayout_8->addWidget(Label16, 5, 0, 1, 1);

        Label10 = new QLabel(GroupBox3);
        Label10->setObjectName(QStringLiteral("Label10"));
        Label10->setEnabled(true);

        gridLayout_8->addWidget(Label10, 6, 0, 1, 1);

        MeasErr3 = new QDoubleSpinBox(GroupBox3);
        MeasErr3->setObjectName(QStringLiteral("MeasErr3"));
        MeasErr3->setDecimals(3);
        MeasErr3->setMaximum(10);
        MeasErr3->setSingleStep(0.001);
        MeasErr3->setValue(0.003);

        gridLayout_8->addWidget(MeasErr3, 3, 2, 1, 1);

        MeasErr2 = new QDoubleSpinBox(GroupBox3);
        MeasErr2->setObjectName(QStringLiteral("MeasErr2"));
        MeasErr2->setDecimals(3);
        MeasErr2->setMaximum(10);
        MeasErr2->setSingleStep(0.001);
        MeasErr2->setValue(0.003);

        gridLayout_8->addWidget(MeasErr2, 3, 1, 1, 1);


        gridLayout_4->addWidget(GroupBox3, 0, 0, 1, 2);

        Label29 = new QLabel(TabSheet4);
        Label29->setObjectName(QStringLiteral("Label29"));
        Label29->setEnabled(true);

        gridLayout_4->addWidget(Label29, 2, 0, 1, 1);

        SatClkStab = new QLineEdit(TabSheet4);
        SatClkStab->setObjectName(QStringLiteral("SatClkStab"));
        SatClkStab->setEnabled(true);

        gridLayout_4->addWidget(SatClkStab, 2, 1, 1, 1);

        Options->addTab(TabSheet4, QString());
        TabSheet5 = new QWidget();
        TabSheet5->setObjectName(QStringLiteral("TabSheet5"));
        gridLayout_5 = new QGridLayout(TabSheet5);
        gridLayout_5->setObjectName(QStringLiteral("gridLayout_5"));
        widget_3 = new QWidget(TabSheet5);
        widget_3->setObjectName(QStringLiteral("widget_3"));
        QSizePolicy sizePolicy1(QSizePolicy::Preferred, QSizePolicy::Maximum);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(widget_3->sizePolicy().hasHeightForWidth());
        widget_3->setSizePolicy(sizePolicy1);
        gridLayout_12 = new QGridLayout(widget_3);
        gridLayout_12->setObjectName(QStringLiteral("gridLayout_12"));
        BtnStaPosView = new QPushButton(widget_3);
        BtnStaPosView->setObjectName(QStringLiteral("BtnStaPosView"));
        BtnStaPosView->setEnabled(true);
        QIcon icon;
        icon.addFile(QStringLiteral(":/buttons/doc.bmp"), QSize(), QIcon::Normal, QIcon::Off);
        BtnStaPosView->setIcon(icon);
        BtnStaPosView->setFlat(true);

        gridLayout_12->addWidget(BtnStaPosView, 1, 1, 1, 1);

        StaPosFile = new QLineEdit(widget_3);
        StaPosFile->setObjectName(QStringLiteral("StaPosFile"));
        StaPosFile->setEnabled(true);

        gridLayout_12->addWidget(StaPosFile, 1, 0, 1, 1);

        Label30 = new QLabel(widget_3);
        Label30->setObjectName(QStringLiteral("Label30"));
        Label30->setEnabled(true);

        gridLayout_12->addWidget(Label30, 0, 0, 1, 1);

        BtnStaPosFile = new QPushButton(widget_3);
        BtnStaPosFile->setObjectName(QStringLiteral("BtnStaPosFile"));
        BtnStaPosFile->setEnabled(true);

        gridLayout_12->addWidget(BtnStaPosFile, 1, 2, 1, 1);


        gridLayout_5->addWidget(widget_3, 4, 0, 1, 1);

        GroupRefAnt = new QGroupBox(TabSheet5);
        GroupRefAnt->setObjectName(QStringLiteral("GroupRefAnt"));
        gridLayout_10 = new QGridLayout(GroupRefAnt);
        gridLayout_10->setObjectName(QStringLiteral("gridLayout_10"));
        RefAntPcv = new QCheckBox(GroupRefAnt);
        RefAntPcv->setObjectName(QStringLiteral("RefAntPcv"));
        RefAntPcv->setChecked(false);

        gridLayout_10->addWidget(RefAntPcv, 2, 0, 1, 2);

        ChkInitRestart = new QCheckBox(GroupRefAnt);
        ChkInitRestart->setObjectName(QStringLiteral("ChkInitRestart"));

        gridLayout_10->addWidget(ChkInitRestart, 0, 5, 1, 1);

        BtnRefPos = new QPushButton(GroupRefAnt);
        BtnRefPos->setObjectName(QStringLiteral("BtnRefPos"));
        BtnRefPos->setEnabled(true);

        gridLayout_10->addWidget(BtnRefPos, 0, 6, 1, 1);

        RefPos1 = new QLineEdit(GroupRefAnt);
        RefPos1->setObjectName(QStringLiteral("RefPos1"));
        RefPos1->setEnabled(true);

        gridLayout_10->addWidget(RefPos1, 1, 0, 1, 1);

        RefPos2 = new QLineEdit(GroupRefAnt);
        RefPos2->setObjectName(QStringLiteral("RefPos2"));
        RefPos2->setEnabled(true);

        gridLayout_10->addWidget(RefPos2, 1, 1, 1, 2);

        RefPos3 = new QLineEdit(GroupRefAnt);
        RefPos3->setObjectName(QStringLiteral("RefPos3"));
        RefPos3->setEnabled(true);

        gridLayout_10->addWidget(RefPos3, 1, 3, 1, 4);

        MaxAveEp = new QSpinBox(GroupRefAnt);
        MaxAveEp->setObjectName(QStringLiteral("MaxAveEp"));
        MaxAveEp->setMaximum(10000);
        MaxAveEp->setValue(3600);

        gridLayout_10->addWidget(MaxAveEp, 0, 4, 1, 1);

        RefPosTypeP = new QComboBox(GroupRefAnt);
        RefPosTypeP->setObjectName(QStringLiteral("RefPosTypeP"));
        RefPosTypeP->setEnabled(true);

        gridLayout_10->addWidget(RefPosTypeP, 0, 0, 1, 1);

        LabelMaxAveEp = new QLabel(GroupRefAnt);
        LabelMaxAveEp->setObjectName(QStringLiteral("LabelMaxAveEp"));

        gridLayout_10->addWidget(LabelMaxAveEp, 0, 1, 1, 3);

        RefAntU = new QDoubleSpinBox(GroupRefAnt);
        RefAntU->setObjectName(QStringLiteral("RefAntU"));
        RefAntU->setDecimals(4);
        RefAntU->setMaximum(1e+6);

        gridLayout_10->addWidget(RefAntU, 4, 6, 1, 1);

        RefAntN = new QDoubleSpinBox(GroupRefAnt);
        RefAntN->setObjectName(QStringLiteral("RefAntN"));
        RefAntN->setDecimals(4);
        RefAntN->setMaximum(1e+6);

        gridLayout_10->addWidget(RefAntN, 4, 5, 1, 1);

        RefAntE = new QDoubleSpinBox(GroupRefAnt);
        RefAntE->setObjectName(QStringLiteral("RefAntE"));
        RefAntE->setDecimals(4);
        RefAntE->setMaximum(1e+6);

        gridLayout_10->addWidget(RefAntE, 4, 4, 1, 1);

        LabelRefAntD = new QLabel(GroupRefAnt);
        LabelRefAntD->setObjectName(QStringLiteral("LabelRefAntD"));
        LabelRefAntD->setEnabled(true);

        gridLayout_10->addWidget(LabelRefAntD, 2, 4, 1, 1);

        RefAnt = new QComboBox(GroupRefAnt);
        RefAnt->setObjectName(QStringLiteral("RefAnt"));
        RefAnt->setEnabled(true);

        gridLayout_10->addWidget(RefAnt, 4, 0, 1, 3);


        gridLayout_5->addWidget(GroupRefAnt, 3, 0, 1, 1);

        GroupRovAnt = new QGroupBox(TabSheet5);
        GroupRovAnt->setObjectName(QStringLiteral("GroupRovAnt"));
        gridLayout_11 = new QGridLayout(GroupRovAnt);
        gridLayout_11->setObjectName(QStringLiteral("gridLayout_11"));
        RovPosTypeP = new QComboBox(GroupRovAnt);
        RovPosTypeP->setObjectName(QStringLiteral("RovPosTypeP"));
        RovPosTypeP->setEnabled(false);

        gridLayout_11->addWidget(RovPosTypeP, 0, 0, 1, 2);

        BtnRovPos = new QPushButton(GroupRovAnt);
        BtnRovPos->setObjectName(QStringLiteral("BtnRovPos"));
        BtnRovPos->setEnabled(true);

        gridLayout_11->addWidget(BtnRovPos, 0, 5, 1, 1);

        RovPos1 = new QLineEdit(GroupRovAnt);
        RovPos1->setObjectName(QStringLiteral("RovPos1"));
        RovPos1->setEnabled(true);

        gridLayout_11->addWidget(RovPos1, 1, 0, 1, 1);

        RovPos2 = new QLineEdit(GroupRovAnt);
        RovPos2->setObjectName(QStringLiteral("RovPos2"));
        RovPos2->setEnabled(true);

        gridLayout_11->addWidget(RovPos2, 1, 1, 1, 2);

        RovPos3 = new QLineEdit(GroupRovAnt);
        RovPos3->setObjectName(QStringLiteral("RovPos3"));
        RovPos3->setEnabled(true);

        gridLayout_11->addWidget(RovPos3, 1, 3, 1, 3);

        RovAntPcv = new QCheckBox(GroupRovAnt);
        RovAntPcv->setObjectName(QStringLiteral("RovAntPcv"));
        RovAntPcv->setChecked(false);

        gridLayout_11->addWidget(RovAntPcv, 3, 0, 1, 2);

        LabelRovAntD = new QLabel(GroupRovAnt);
        LabelRovAntD->setObjectName(QStringLiteral("LabelRovAntD"));
        LabelRovAntD->setEnabled(true);

        gridLayout_11->addWidget(LabelRovAntD, 3, 2, 1, 3);

        RovAnt = new QComboBox(GroupRovAnt);
        RovAnt->setObjectName(QStringLiteral("RovAnt"));
        RovAnt->setEnabled(true);

        gridLayout_11->addWidget(RovAnt, 5, 0, 1, 2);

        RovAntE = new QDoubleSpinBox(GroupRovAnt);
        RovAntE->setObjectName(QStringLiteral("RovAntE"));
        RovAntE->setDecimals(4);
        RovAntE->setMaximum(1e+6);

        gridLayout_11->addWidget(RovAntE, 5, 2, 1, 1);

        RovAntU = new QDoubleSpinBox(GroupRovAnt);
        RovAntU->setObjectName(QStringLiteral("RovAntU"));
        RovAntU->setDecimals(4);
        RovAntU->setMaximum(1e+6);

        gridLayout_11->addWidget(RovAntU, 5, 5, 1, 1);

        RovAntN = new QDoubleSpinBox(GroupRovAnt);
        RovAntN->setObjectName(QStringLiteral("RovAntN"));
        RovAntN->setDecimals(4);
        RovAntN->setMaximum(1e+6);

        gridLayout_11->addWidget(RovAntN, 5, 3, 1, 2);


        gridLayout_5->addWidget(GroupRovAnt, 1, 0, 1, 1);

        Options->addTab(TabSheet5, QString());
        TabSheet7 = new QWidget();
        TabSheet7->setObjectName(QStringLiteral("TabSheet7"));
        gridLayout_6 = new QGridLayout(TabSheet7);
        gridLayout_6->setObjectName(QStringLiteral("gridLayout_6"));
        BtnSatPcvFile = new QPushButton(TabSheet7);
        BtnSatPcvFile->setObjectName(QStringLiteral("BtnSatPcvFile"));
        BtnSatPcvFile->setEnabled(true);

        gridLayout_6->addWidget(BtnSatPcvFile, 1, 3, 1, 1);

        OLFile = new QLineEdit(TabSheet7);
        OLFile->setObjectName(QStringLiteral("OLFile"));
        OLFile->setEnabled(true);

        gridLayout_6->addWidget(OLFile, 20, 0, 1, 2);

        DCBFile = new QLineEdit(TabSheet7);
        DCBFile->setObjectName(QStringLiteral("DCBFile"));
        DCBFile->setEnabled(true);

        gridLayout_6->addWidget(DCBFile, 7, 0, 1, 2);

        Label31 = new QLabel(TabSheet7);
        Label31->setObjectName(QStringLiteral("Label31"));
        Label31->setEnabled(true);

        gridLayout_6->addWidget(Label31, 23, 0, 1, 1);

        BtnSatPcvView = new QPushButton(TabSheet7);
        BtnSatPcvView->setObjectName(QStringLiteral("BtnSatPcvView"));
        BtnSatPcvView->setEnabled(true);
        QSizePolicy sizePolicy2(QSizePolicy::Fixed, QSizePolicy::Fixed);
        sizePolicy2.setHorizontalStretch(0);
        sizePolicy2.setVerticalStretch(0);
        sizePolicy2.setHeightForWidth(BtnSatPcvView->sizePolicy().hasHeightForWidth());
        BtnSatPcvView->setSizePolicy(sizePolicy2);
        BtnSatPcvView->setIcon(icon);
        BtnSatPcvView->setFlat(true);

        gridLayout_6->addWidget(BtnSatPcvView, 0, 1, 1, 1);

        SatPcvFile = new QLineEdit(TabSheet7);
        SatPcvFile->setObjectName(QStringLiteral("SatPcvFile"));
        SatPcvFile->setEnabled(true);

        gridLayout_6->addWidget(SatPcvFile, 1, 0, 1, 2);

        BtnAntPcvFile = new QPushButton(TabSheet7);
        BtnAntPcvFile->setObjectName(QStringLiteral("BtnAntPcvFile"));
        BtnAntPcvFile->setEnabled(true);

        gridLayout_6->addWidget(BtnAntPcvFile, 2, 3, 1, 1);

        AntPcvFile = new QLineEdit(TabSheet7);
        AntPcvFile->setObjectName(QStringLiteral("AntPcvFile"));
        AntPcvFile->setEnabled(true);

        gridLayout_6->addWidget(AntPcvFile, 2, 0, 1, 2);

        GeoidDataFile = new QLineEdit(TabSheet7);
        GeoidDataFile->setObjectName(QStringLiteral("GeoidDataFile"));
        GeoidDataFile->setEnabled(true);

        gridLayout_6->addWidget(GeoidDataFile, 4, 0, 1, 2);

        BtnGeoidDataFile = new QPushButton(TabSheet7);
        BtnGeoidDataFile->setObjectName(QStringLiteral("BtnGeoidDataFile"));
        BtnGeoidDataFile->setEnabled(true);

        gridLayout_6->addWidget(BtnGeoidDataFile, 4, 3, 1, 1);

        Label48 = new QLabel(TabSheet7);
        Label48->setObjectName(QStringLiteral("Label48"));
        Label48->setEnabled(true);

        gridLayout_6->addWidget(Label48, 3, 0, 1, 1);

        LocalDir = new QLineEdit(TabSheet7);
        LocalDir->setObjectName(QStringLiteral("LocalDir"));
        LocalDir->setEnabled(true);

        gridLayout_6->addWidget(LocalDir, 24, 0, 1, 2);

        BtnLocalDir = new QPushButton(TabSheet7);
        BtnLocalDir->setObjectName(QStringLiteral("BtnLocalDir"));
        BtnLocalDir->setEnabled(true);

        gridLayout_6->addWidget(BtnLocalDir, 24, 3, 1, 1);

        BtnDCBFile = new QPushButton(TabSheet7);
        BtnDCBFile->setObjectName(QStringLiteral("BtnDCBFile"));
        BtnDCBFile->setEnabled(true);

        gridLayout_6->addWidget(BtnDCBFile, 7, 3, 1, 1);

        BtnDCBView = new QPushButton(TabSheet7);
        BtnDCBView->setObjectName(QStringLiteral("BtnDCBView"));
        BtnDCBView->setEnabled(true);
        BtnDCBView->setFlat(true);

        gridLayout_6->addWidget(BtnDCBView, 5, 3, 2, 1);

        BtnEOPView = new QPushButton(TabSheet7);
        BtnEOPView->setObjectName(QStringLiteral("BtnEOPView"));
        BtnEOPView->setEnabled(true);
        BtnEOPView->setFlat(true);

        gridLayout_6->addWidget(BtnEOPView, 11, 3, 2, 1);

        BtnOLFileView = new QPushButton(TabSheet7);
        BtnOLFileView->setObjectName(QStringLiteral("BtnOLFileView"));
        BtnOLFileView->setEnabled(true);
        BtnOLFileView->setFlat(true);

        gridLayout_6->addWidget(BtnOLFileView, 18, 3, 2, 1);

        BtnOLFile = new QPushButton(TabSheet7);
        BtnOLFile->setObjectName(QStringLiteral("BtnOLFile"));
        BtnOLFile->setEnabled(true);

        gridLayout_6->addWidget(BtnOLFile, 20, 3, 1, 1);

        Label38 = new QLabel(TabSheet7);
        Label38->setObjectName(QStringLiteral("Label38"));
        Label38->setEnabled(true);

        gridLayout_6->addWidget(Label38, 0, 0, 1, 1);

        BtnAntPcvView = new QPushButton(TabSheet7);
        BtnAntPcvView->setObjectName(QStringLiteral("BtnAntPcvView"));
        BtnAntPcvView->setEnabled(true);
        sizePolicy2.setHeightForWidth(BtnAntPcvView->sizePolicy().hasHeightForWidth());
        BtnAntPcvView->setSizePolicy(sizePolicy2);
        BtnAntPcvView->setIcon(icon);
        BtnAntPcvView->setFlat(true);

        gridLayout_6->addWidget(BtnAntPcvView, 0, 3, 1, 1);

        BtnEOPFile = new QPushButton(TabSheet7);
        BtnEOPFile->setObjectName(QStringLiteral("BtnEOPFile"));
        BtnEOPFile->setEnabled(true);

        gridLayout_6->addWidget(BtnEOPFile, 13, 3, 1, 1);

        EOPFile = new QLineEdit(TabSheet7);
        EOPFile->setObjectName(QStringLiteral("EOPFile"));
        EOPFile->setEnabled(true);

        gridLayout_6->addWidget(EOPFile, 13, 0, 1, 2);

        Label34 = new QLabel(TabSheet7);
        Label34->setObjectName(QStringLiteral("Label34"));
        Label34->setEnabled(true);

        gridLayout_6->addWidget(Label34, 19, 0, 1, 1);

        Label23 = new QLabel(TabSheet7);
        Label23->setObjectName(QStringLiteral("Label23"));
        Label23->setEnabled(true);

        gridLayout_6->addWidget(Label23, 12, 0, 1, 1);

        Label1 = new QLabel(TabSheet7);
        Label1->setObjectName(QStringLiteral("Label1"));
        Label1->setEnabled(true);

        gridLayout_6->addWidget(Label1, 6, 0, 1, 1);

        Options->addTab(TabSheet7, QString());
        TabSheet8 = new QWidget();
        TabSheet8->setObjectName(QStringLiteral("TabSheet8"));
        gridLayout_7 = new QGridLayout(TabSheet8);
        gridLayout_7->setObjectName(QStringLiteral("gridLayout_7"));
        Label19 = new QLabel(TabSheet8);
        Label19->setObjectName(QStringLiteral("Label19"));
        Label19->setEnabled(true);

        gridLayout_7->addWidget(Label19, 1, 0, 1, 4);

        Label44 = new QLabel(TabSheet8);
        Label44->setObjectName(QStringLiteral("Label44"));
        Label44->setEnabled(true);

        gridLayout_7->addWidget(Label44, 3, 0, 1, 4);

        Label46 = new QLabel(TabSheet8);
        Label46->setObjectName(QStringLiteral("Label46"));
        Label46->setEnabled(true);

        gridLayout_7->addWidget(Label46, 5, 0, 1, 4);

        Label41 = new QLabel(TabSheet8);
        Label41->setObjectName(QStringLiteral("Label41"));
        Label41->setEnabled(true);

        gridLayout_7->addWidget(Label41, 7, 0, 1, 4);

        Label42 = new QLabel(TabSheet8);
        Label42->setObjectName(QStringLiteral("Label42"));
        Label42->setEnabled(true);

        gridLayout_7->addWidget(Label42, 8, 0, 1, 4);

        NavSelectS = new QComboBox(TabSheet8);
        NavSelectS->setObjectName(QStringLiteral("NavSelectS"));
        NavSelectS->setEnabled(true);

        gridLayout_7->addWidget(NavSelectS, 8, 4, 1, 2);

        Label5 = new QLabel(TabSheet8);
        Label5->setObjectName(QStringLiteral("Label5"));
        Label5->setEnabled(true);

        gridLayout_7->addWidget(Label5, 10, 0, 1, 4);

        Label45 = new QLabel(TabSheet8);
        Label45->setObjectName(QStringLiteral("Label45"));
        Label45->setEnabled(true);

        gridLayout_7->addWidget(Label45, 11, 0, 1, 3);

        ProxyAddrE = new QLineEdit(TabSheet8);
        ProxyAddrE->setObjectName(QStringLiteral("ProxyAddrE"));
        ProxyAddrE->setEnabled(true);

        gridLayout_7->addWidget(ProxyAddrE, 11, 3, 1, 3);

        Label40 = new QLabel(TabSheet8);
        Label40->setObjectName(QStringLiteral("Label40"));
        Label40->setEnabled(true);

        gridLayout_7->addWidget(Label40, 13, 3, 1, 1);

        FontLabel = new QLabel(TabSheet8);
        FontLabel->setObjectName(QStringLiteral("FontLabel"));
        FontLabel->setEnabled(true);
        QPalette palette;
        QBrush brush(QColor(0, 0, 0, 255));
        brush.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Active, QPalette::WindowText, brush);
        palette.setBrush(QPalette::Inactive, QPalette::WindowText, brush);
        palette.setBrush(QPalette::Disabled, QPalette::WindowText, brush);
        FontLabel->setPalette(palette);
        FontLabel->setAlignment(Qt::AlignCenter);

        gridLayout_7->addWidget(FontLabel, 13, 4, 1, 1);

        BtnFont = new QPushButton(TabSheet8);
        BtnFont->setObjectName(QStringLiteral("BtnFont"));
        BtnFont->setEnabled(true);
        sizePolicy2.setHeightForWidth(BtnFont->sizePolicy().hasHeightForWidth());
        BtnFont->setSizePolicy(sizePolicy2);

        gridLayout_7->addWidget(BtnFont, 13, 5, 1, 1);

        Label15 = new QLabel(TabSheet8);
        Label15->setObjectName(QStringLiteral("Label15"));
        Label15->setEnabled(true);

        gridLayout_7->addWidget(Label15, 14, 0, 1, 1);

        TLEFile = new QLineEdit(TabSheet8);
        TLEFile->setObjectName(QStringLiteral("TLEFile"));
        TLEFile->setEnabled(true);

        gridLayout_7->addWidget(TLEFile, 14, 1, 1, 4);

        BtnTLEFile = new QPushButton(TabSheet8);
        BtnTLEFile->setObjectName(QStringLiteral("BtnTLEFile"));
        BtnTLEFile->setEnabled(true);
        sizePolicy2.setHeightForWidth(BtnTLEFile->sizePolicy().hasHeightForWidth());
        BtnTLEFile->setSizePolicy(sizePolicy2);

        gridLayout_7->addWidget(BtnTLEFile, 14, 5, 1, 1);

        Label39 = new QLabel(TabSheet8);
        Label39->setObjectName(QStringLiteral("Label39"));
        Label39->setEnabled(true);

        gridLayout_7->addWidget(Label39, 15, 0, 1, 1);

        TLESatFile = new QLineEdit(TabSheet8);
        TLESatFile->setObjectName(QStringLiteral("TLESatFile"));
        TLESatFile->setEnabled(true);

        gridLayout_7->addWidget(TLESatFile, 15, 1, 1, 4);

        BtnTLESatFile = new QPushButton(TabSheet8);
        BtnTLESatFile->setObjectName(QStringLiteral("BtnTLESatFile"));
        BtnTLESatFile->setEnabled(true);
        sizePolicy2.setHeightForWidth(BtnTLESatFile->sizePolicy().hasHeightForWidth());
        BtnTLESatFile->setSizePolicy(sizePolicy2);

        gridLayout_7->addWidget(BtnTLESatFile, 15, 5, 1, 1);

        TimeoutTimeE = new QSpinBox(TabSheet8);
        TimeoutTimeE->setObjectName(QStringLiteral("TimeoutTimeE"));
        TimeoutTimeE->setMaximum(1000000);
        TimeoutTimeE->setValue(10000);

        gridLayout_7->addWidget(TimeoutTimeE, 3, 4, 1, 1);

        SbasSatE = new QSpinBox(TabSheet8);
        SbasSatE->setObjectName(QStringLiteral("SbasSatE"));
        SbasSatE->setMaximum(65535);

        gridLayout_7->addWidget(SbasSatE, 10, 4, 1, 1);

        SvrCycleE = new QSpinBox(TabSheet8);
        SvrCycleE->setObjectName(QStringLiteral("SvrCycleE"));
        SvrCycleE->setMaximum(10000);
        SvrCycleE->setValue(10);

        gridLayout_7->addWidget(SvrCycleE, 1, 4, 1, 1);

        NmeaCycleE = new QSpinBox(TabSheet8);
        NmeaCycleE->setObjectName(QStringLiteral("NmeaCycleE"));
        NmeaCycleE->setMaximum(1000000);
        NmeaCycleE->setValue(5000);

        gridLayout_7->addWidget(NmeaCycleE, 5, 4, 1, 1);

        ReconTimeE = new QSpinBox(TabSheet8);
        ReconTimeE->setObjectName(QStringLiteral("ReconTimeE"));
        ReconTimeE->setMaximum(1000000);
        ReconTimeE->setValue(10000);

        gridLayout_7->addWidget(ReconTimeE, 3, 5, 1, 1);

        SvrBuffSizeE = new QSpinBox(TabSheet8);
        SvrBuffSizeE->setObjectName(QStringLiteral("SvrBuffSizeE"));
        SvrBuffSizeE->setMaximum(10000000);
        SvrBuffSizeE->setValue(32768);

        gridLayout_7->addWidget(SvrBuffSizeE, 1, 5, 1, 1);

        SolBuffSizeE = new QSpinBox(TabSheet8);
        SolBuffSizeE->setObjectName(QStringLiteral("SolBuffSizeE"));
        SolBuffSizeE->setMaximum(1000000);
        SolBuffSizeE->setValue(1000);

        gridLayout_7->addWidget(SolBuffSizeE, 7, 4, 1, 1);

        SavedSolE = new QSpinBox(TabSheet8);
        SavedSolE->setObjectName(QStringLiteral("SavedSolE"));
        SavedSolE->setMaximum(1000000);
        SavedSolE->setValue(100);

        gridLayout_7->addWidget(SavedSolE, 7, 5, 1, 1);

        FileSwapMarginE = new QSpinBox(TabSheet8);
        FileSwapMarginE->setObjectName(QStringLiteral("FileSwapMarginE"));
        FileSwapMarginE->setMaximum(10000);
        FileSwapMarginE->setValue(30);

        gridLayout_7->addWidget(FileSwapMarginE, 5, 5, 1, 1);

        MoniPortE = new QSpinBox(TabSheet8);
        MoniPortE->setObjectName(QStringLiteral("MoniPortE"));
        MoniPortE->setMaximum(65535);

        gridLayout_7->addWidget(MoniPortE, 10, 5, 1, 1);

        Label43 = new QLabel(TabSheet8);
        Label43->setObjectName(QStringLiteral("Label43"));
        Label43->setEnabled(true);

        gridLayout_7->addWidget(Label43, 13, 0, 1, 1);

        PanelStackE = new QComboBox(TabSheet8);
        PanelStackE->setObjectName(QStringLiteral("PanelStackE"));
        PanelStackE->setEnabled(true);

        gridLayout_7->addWidget(PanelStackE, 13, 1, 1, 2);

        Options->addTab(TabSheet8, QString());

        verticalLayout->addWidget(Options);

        widget = new QWidget(OptDialog);
        widget->setObjectName(QStringLiteral("widget"));
        horizontalLayout = new QHBoxLayout(widget);
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        Label47 = new QLabel(widget);
        Label47->setObjectName(QStringLiteral("Label47"));
        Label47->setEnabled(true);

        horizontalLayout->addWidget(Label47);

        BtnLoad = new QPushButton(widget);
        BtnLoad->setObjectName(QStringLiteral("BtnLoad"));
        BtnLoad->setEnabled(true);

        horizontalLayout->addWidget(BtnLoad);

        BtnSave = new QPushButton(widget);
        BtnSave->setObjectName(QStringLiteral("BtnSave"));
        BtnSave->setEnabled(true);

        horizontalLayout->addWidget(BtnSave);

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

        QWidget::setTabOrder(BtnOk, BtnCancel);
        QWidget::setTabOrder(BtnCancel, Options);
        QWidget::setTabOrder(Options, PosMode);
        QWidget::setTabOrder(PosMode, Freq);
        QWidget::setTabOrder(Freq, Solution);
        QWidget::setTabOrder(Solution, ElMask);
        QWidget::setTabOrder(ElMask, BtnSnrMask);
        QWidget::setTabOrder(BtnSnrMask, DynamicModel);
        QWidget::setTabOrder(DynamicModel, TideCorr);
        QWidget::setTabOrder(TideCorr, IonoOpt);
        QWidget::setTabOrder(IonoOpt, TropOpt);
        QWidget::setTabOrder(TropOpt, SatEphem);
        QWidget::setTabOrder(SatEphem, PosOpt1);
        QWidget::setTabOrder(PosOpt1, PosOpt2);
        QWidget::setTabOrder(PosOpt2, PosOpt3);
        QWidget::setTabOrder(PosOpt3, PosOpt4);
        QWidget::setTabOrder(PosOpt4, PosOpt5);
        QWidget::setTabOrder(PosOpt5, ExSatsE);
        QWidget::setTabOrder(ExSatsE, NavSys1);
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
        QWidget::setTabOrder(RejectThres, NumIter);
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
        QWidget::setTabOrder(SatClkStab, RovPosTypeP);
        QWidget::setTabOrder(RovPosTypeP, BtnRovPos);
        QWidget::setTabOrder(BtnRovPos, RovPos1);
        QWidget::setTabOrder(RovPos1, RovPos2);
        QWidget::setTabOrder(RovPos2, RovPos3);
        QWidget::setTabOrder(RovPos3, RovAntPcv);
        QWidget::setTabOrder(RovAntPcv, RovAnt);
        QWidget::setTabOrder(RovAnt, RovAntE);
        QWidget::setTabOrder(RovAntE, RovAntN);
        QWidget::setTabOrder(RovAntN, RovAntU);
        QWidget::setTabOrder(RovAntU, RefPosTypeP);
        QWidget::setTabOrder(RefPosTypeP, MaxAveEp);
        QWidget::setTabOrder(MaxAveEp, ChkInitRestart);
        QWidget::setTabOrder(ChkInitRestart, BtnRefPos);
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
        QWidget::setTabOrder(SatPcvFile, AntPcvFile);
        QWidget::setTabOrder(AntPcvFile, BtnAntPcvFile);
        QWidget::setTabOrder(BtnAntPcvFile, GeoidDataFile);
        QWidget::setTabOrder(GeoidDataFile, BtnGeoidDataFile);
        QWidget::setTabOrder(BtnGeoidDataFile, BtnDCBView);
        QWidget::setTabOrder(BtnDCBView, BtnEOPView);
        QWidget::setTabOrder(BtnEOPView, BtnOLFileView);
        QWidget::setTabOrder(BtnOLFileView, LocalDir);
        QWidget::setTabOrder(LocalDir, BtnLocalDir);
        QWidget::setTabOrder(BtnLocalDir, SvrCycleE);
        QWidget::setTabOrder(SvrCycleE, SvrBuffSizeE);
        QWidget::setTabOrder(SvrBuffSizeE, TimeoutTimeE);
        QWidget::setTabOrder(TimeoutTimeE, ReconTimeE);
        QWidget::setTabOrder(ReconTimeE, NmeaCycleE);
        QWidget::setTabOrder(NmeaCycleE, FileSwapMarginE);
        QWidget::setTabOrder(FileSwapMarginE, SolBuffSizeE);
        QWidget::setTabOrder(SolBuffSizeE, SavedSolE);
        QWidget::setTabOrder(SavedSolE, NavSelectS);
        QWidget::setTabOrder(NavSelectS, SbasSatE);
        QWidget::setTabOrder(SbasSatE, MoniPortE);
        QWidget::setTabOrder(MoniPortE, ProxyAddrE);
        QWidget::setTabOrder(ProxyAddrE, PanelStackE);
        QWidget::setTabOrder(PanelStackE, BtnFont);
        QWidget::setTabOrder(BtnFont, TLEFile);
        QWidget::setTabOrder(TLEFile, BtnTLEFile);
        QWidget::setTabOrder(BtnTLEFile, TLESatFile);
        QWidget::setTabOrder(TLESatFile, BtnTLESatFile);
        QWidget::setTabOrder(BtnTLESatFile, BtnLoad);
        QWidget::setTabOrder(BtnLoad, BtnSave);

        retranslateUi(OptDialog);

        Options->setCurrentIndex(0);
        BtnOk->setDefault(true);


        QMetaObject::connectSlotsByName(OptDialog);
    } // setupUi

    void retranslateUi(QWidget *OptDialog)
    {
        OptDialog->setWindowTitle(QApplication::translate("OptDialog", "Options", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        OptDialog->setToolTip(QString());
#endif // QT_NO_TOOLTIP
#ifndef QT_NO_TOOLTIP
        Options->setToolTip(QString());
#endif // QT_NO_TOOLTIP
#ifndef QT_NO_TOOLTIP
        TabSheet1->setToolTip(QString());
#endif // QT_NO_TOOLTIP
#ifndef QT_NO_TOOLTIP
        Label3->setToolTip(QString());
#endif // QT_NO_TOOLTIP
        Label3->setText(QApplication::translate("OptDialog", "Rec Dynamics / Earth Tides Correction", Q_NULLPTR));
        DynamicModel->clear();
        DynamicModel->insertItems(0, QStringList()
         << QApplication::translate("OptDialog", "OFF", Q_NULLPTR)
         << QApplication::translate("OptDialog", "ON", Q_NULLPTR)
        );
#ifndef QT_NO_TOOLTIP
        DynamicModel->setToolTip(QString());
#endif // QT_NO_TOOLTIP
        TideCorr->clear();
        TideCorr->insertItems(0, QStringList()
         << QApplication::translate("OptDialog", "OFF", Q_NULLPTR)
         << QApplication::translate("OptDialog", "Solid", Q_NULLPTR)
        );
#ifndef QT_NO_TOOLTIP
        TideCorr->setToolTip(QString());
#endif // QT_NO_TOOLTIP
#ifndef QT_NO_TOOLTIP
        Label8->setToolTip(QString());
#endif // QT_NO_TOOLTIP
        Label8->setText(QApplication::translate("OptDialog", "Ionosphere Correction", Q_NULLPTR));
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
        );
#ifndef QT_NO_TOOLTIP
        TropOpt->setToolTip(QString());
#endif // QT_NO_TOOLTIP
        Freq->clear();
        Freq->insertItems(0, QStringList()
         << QApplication::translate("OptDialog", "L1", Q_NULLPTR)
         << QApplication::translate("OptDialog", "L1+L2", Q_NULLPTR)
        );
#ifndef QT_NO_TOOLTIP
        Freq->setToolTip(QString());
#endif // QT_NO_TOOLTIP
        Solution->clear();
        Solution->insertItems(0, QStringList()
         << QApplication::translate("OptDialog", "Forward", Q_NULLPTR)
         << QApplication::translate("OptDialog", "Backward", Q_NULLPTR)
         << QApplication::translate("OptDialog", "Combined", Q_NULLPTR)
        );
#ifndef QT_NO_TOOLTIP
        Solution->setToolTip(QString());
#endif // QT_NO_TOOLTIP
#ifndef QT_NO_TOOLTIP
        LabelElMask->setToolTip(QString());
#endif // QT_NO_TOOLTIP
        LabelElMask->setText(QApplication::translate("OptDialog", "Elevation Mask (\302\260) / SNR Mask (dbHz)", Q_NULLPTR));
        IonoOpt->clear();
        IonoOpt->insertItems(0, QStringList()
         << QApplication::translate("OptDialog", "OFF", Q_NULLPTR)
         << QApplication::translate("OptDialog", "Broadcast", Q_NULLPTR)
         << QApplication::translate("OptDialog", "SBAS", Q_NULLPTR)
         << QApplication::translate("OptDialog", "Iono-Free LC", Q_NULLPTR)
         << QApplication::translate("OptDialog", "Estimate STEC", Q_NULLPTR)
         << QApplication::translate("OptDialog", "IONEX TEC", Q_NULLPTR)
         << QApplication::translate("OptDialog", "QZSS Broadcast", Q_NULLPTR)
         << QApplication::translate("OptDialog", "QZSS LEX", Q_NULLPTR)
        );
#ifndef QT_NO_TOOLTIP
        IonoOpt->setToolTip(QString());
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
        Label32->setToolTip(QString());
#endif // QT_NO_TOOLTIP
        Label32->setText(QApplication::translate("OptDialog", "Satellite Ephemeris/Clock", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        BtnSnrMask->setToolTip(QString());
#endif // QT_NO_TOOLTIP
        BtnSnrMask->setText(QApplication::translate("OptDialog", "...", Q_NULLPTR));
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
        );
#ifndef QT_NO_TOOLTIP
        PosMode->setToolTip(QString());
#endif // QT_NO_TOOLTIP
#ifndef QT_NO_TOOLTIP
        LabelFreq->setToolTip(QString());
#endif // QT_NO_TOOLTIP
        LabelFreq->setText(QApplication::translate("OptDialog", "Frequencies / Filter Type", Q_NULLPTR));
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
        PosOpt3->setText(QApplication::translate("OptDialog", "Ph-Windup", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        PosOpt4->setToolTip(QString());
#endif // QT_NO_TOOLTIP
        PosOpt4->setText(QApplication::translate("OptDialog", "Reject Ecl", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        PosOpt5->setToolTip(QString());
#endif // QT_NO_TOOLTIP
        PosOpt5->setText(QApplication::translate("OptDialog", "RAIM FDE", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        Label35->setToolTip(QString());
#endif // QT_NO_TOOLTIP
        Label35->setText(QApplication::translate("OptDialog", "Excluded Satellites (+PRN: Included)", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        LabelPosMode->setToolTip(QString());
#endif // QT_NO_TOOLTIP
        LabelPosMode->setText(QApplication::translate("OptDialog", "Positioning Mode", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        ExSatsE->setToolTip(QString());
#endif // QT_NO_TOOLTIP
        ExSatsE->setText(QString());
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
        Options->setTabText(Options->indexOf(TabSheet1), QApplication::translate("OptDialog", "Setting&1", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        TabSheet2->setToolTip(QString());
#endif // QT_NO_TOOLTIP
        BaselineSig->setSuffix(QApplication::translate("OptDialog", " m", Q_NULLPTR));
        BaselineLen->setSuffix(QApplication::translate("OptDialog", " m", Q_NULLPTR));
        ElMaskAR->setSuffix(QApplication::translate("OptDialog", "\302\260", Q_NULLPTR));
        ElMaskHold->setSuffix(QApplication::translate("OptDialog", "\302\260", Q_NULLPTR));
        MaxAgeDiff->setSuffix(QApplication::translate("OptDialog", " s", Q_NULLPTR));
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
        Label24->setToolTip(QString());
#endif // QT_NO_TOOLTIP
        Label24->setText(QApplication::translate("OptDialog", "Min Ratio to Fix Ambiguity", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        Label12->setToolTip(QString());
#endif // QT_NO_TOOLTIP
        Label12->setText(QApplication::translate("OptDialog", "Min Confidence / Max FCB to Fix Amb", Q_NULLPTR));
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
        );
#ifndef QT_NO_TOOLTIP
        SyncSol->setToolTip(QString());
#endif // QT_NO_TOOLTIP
#ifndef QT_NO_TOOLTIP
        Label11->setToolTip(QString());
#endif // QT_NO_TOOLTIP
        Label11->setText(QApplication::translate("OptDialog", "Reject Threshold of GDOP/Innov", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        Label37->setToolTip(QString());
#endif // QT_NO_TOOLTIP
        Label37->setText(QApplication::translate("OptDialog", "Number of Filter Iteration", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        BaselineConst->setToolTip(QString());
#endif // QT_NO_TOOLTIP
        BaselineConst->setText(QApplication::translate("OptDialog", "Baseline Length Constraint", Q_NULLPTR));
        RejectGdop->setSuffix(QApplication::translate("OptDialog", " m", Q_NULLPTR));
        RejectThres->setSuffix(QApplication::translate("OptDialog", " m", Q_NULLPTR));
        SlipThres->setSuffix(QApplication::translate("OptDialog", " m", Q_NULLPTR));
        Options->setTabText(Options->indexOf(TabSheet2), QApplication::translate("OptDialog", "Setting&2", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        TabSheet3->setToolTip(QString());
#endif // QT_NO_TOOLTIP
        NmeaIntv2->setSuffix(QApplication::translate("OptDialog", " s", Q_NULLPTR));
        NmeaIntv1->setSuffix(QApplication::translate("OptDialog", " s", Q_NULLPTR));
        DebugTrace->clear();
        DebugTrace->insertItems(0, QStringList()
         << QApplication::translate("OptDialog", "OFF", Q_NULLPTR)
         << QApplication::translate("OptDialog", "Level 1", Q_NULLPTR)
         << QApplication::translate("OptDialog", "Level 2", Q_NULLPTR)
         << QApplication::translate("OptDialog", "Level 3", Q_NULLPTR)
         << QApplication::translate("OptDialog", "Level 4", Q_NULLPTR)
         << QApplication::translate("OptDialog", "Level 5", Q_NULLPTR)
        );
#ifndef QT_NO_TOOLTIP
        DebugTrace->setToolTip(QString());
#endif // QT_NO_TOOLTIP
#ifndef QT_NO_TOOLTIP
        Label2->setToolTip(QString());
#endif // QT_NO_TOOLTIP
        Label2->setText(QApplication::translate("OptDialog", "Datum / Height", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        Label21->setToolTip(QString());
#endif // QT_NO_TOOLTIP
        Label21->setText(QApplication::translate("OptDialog", "Solution for Static Mode", Q_NULLPTR));
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
        Label36->setToolTip(QString());
#endif // QT_NO_TOOLTIP
        Label36->setText(QApplication::translate("OptDialog", "Output Solution Status / Output Debug Trace", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        Label20->setToolTip(QString());
#endif // QT_NO_TOOLTIP
        Label20->setText(QApplication::translate("OptDialog", "Output Header/Processing Options", Q_NULLPTR));
        OutputGeoid->clear();
        OutputGeoid->insertItems(0, QStringList()
         << QApplication::translate("OptDialog", "Internal", Q_NULLPTR)
         << QApplication::translate("OptDialog", "EGM96-BE 15\"", Q_NULLPTR)
         << QApplication::translate("OptDialog", "EGM2008-SE 2.5\"", Q_NULLPTR)
         << QApplication::translate("OptDialog", "EGM2008-SE 1\"", Q_NULLPTR)
         << QApplication::translate("OptDialog", "GSI2000 1x1.5\"", Q_NULLPTR)
        );
#ifndef QT_NO_TOOLTIP
        OutputGeoid->setToolTip(QString());
#endif // QT_NO_TOOLTIP
#ifndef QT_NO_TOOLTIP
        LabelFieldSep->setToolTip(QString());
#endif // QT_NO_TOOLTIP
        LabelFieldSep->setText(QApplication::translate("OptDialog", "Output Single if Sol Outage / Max Sol Std", Q_NULLPTR));
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
        Label18->setToolTip(QString());
#endif // QT_NO_TOOLTIP
        Label18->setText(QApplication::translate("OptDialog", "Geoid Model", Q_NULLPTR));
        SolStatic->clear();
        SolStatic->insertItems(0, QStringList()
         << QApplication::translate("OptDialog", "All", Q_NULLPTR)
         << QApplication::translate("OptDialog", "Single", Q_NULLPTR)
        );
#ifndef QT_NO_TOOLTIP
        SolStatic->setToolTip(QString());
#endif // QT_NO_TOOLTIP
        LatLonFormat->clear();
        LatLonFormat->insertItems(0, QStringList()
         << QApplication::translate("OptDialog", "ddd.ddddddd", Q_NULLPTR)
         << QApplication::translate("OptDialog", "ddd mm ss.sss", Q_NULLPTR)
        );
#ifndef QT_NO_TOOLTIP
        LatLonFormat->setToolTip(QString());
#endif // QT_NO_TOOLTIP
#ifndef QT_NO_TOOLTIP
        LabelLatLonFormat->setToolTip(QString());
#endif // QT_NO_TOOLTIP
        LabelLatLonFormat->setText(QApplication::translate("OptDialog", "Latitude Longitude Format / Field Separator", Q_NULLPTR));
        OutputDatum->clear();
        OutputDatum->insertItems(0, QStringList()
         << QApplication::translate("OptDialog", "WGS84", Q_NULLPTR)
        );
#ifndef QT_NO_TOOLTIP
        OutputDatum->setToolTip(QString());
#endif // QT_NO_TOOLTIP
#ifndef QT_NO_TOOLTIP
        LabelTimeFormat->setToolTip(QString());
#endif // QT_NO_TOOLTIP
        LabelTimeFormat->setText(QApplication::translate("OptDialog", "Time Format / # of Decimals", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        Label17->setToolTip(QString());
#endif // QT_NO_TOOLTIP
        Label17->setText(QApplication::translate("OptDialog", "NMEA Interval (s) RMC/GGA, GSA/GSV", Q_NULLPTR));
        OutputHead->clear();
        OutputHead->insertItems(0, QStringList()
         << QApplication::translate("OptDialog", "OFF", Q_NULLPTR)
         << QApplication::translate("OptDialog", "ON", Q_NULLPTR)
        );
#ifndef QT_NO_TOOLTIP
        OutputHead->setToolTip(QString());
#endif // QT_NO_TOOLTIP
#ifndef QT_NO_TOOLTIP
        LabelSolFormat->setToolTip(QString());
#endif // QT_NO_TOOLTIP
        LabelSolFormat->setText(QApplication::translate("OptDialog", "Solution Format", Q_NULLPTR));
        DebugStatus->clear();
        DebugStatus->insertItems(0, QStringList()
         << QApplication::translate("OptDialog", "OFF", Q_NULLPTR)
         << QApplication::translate("OptDialog", "States", Q_NULLPTR)
         << QApplication::translate("OptDialog", "Residuals", Q_NULLPTR)
        );
#ifndef QT_NO_TOOLTIP
        DebugStatus->setToolTip(QString());
#endif // QT_NO_TOOLTIP
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
        OutputOpt->clear();
        OutputOpt->insertItems(0, QStringList()
         << QApplication::translate("OptDialog", "OFF", Q_NULLPTR)
         << QApplication::translate("OptDialog", "ON", Q_NULLPTR)
        );
#ifndef QT_NO_TOOLTIP
        OutputOpt->setToolTip(QString());
#endif // QT_NO_TOOLTIP
        OutputHeight->clear();
        OutputHeight->insertItems(0, QStringList()
         << QApplication::translate("OptDialog", "Ellipsoidal", Q_NULLPTR)
         << QApplication::translate("OptDialog", "Geodetic", Q_NULLPTR)
        );
#ifndef QT_NO_TOOLTIP
        OutputHeight->setToolTip(QString());
#endif // QT_NO_TOOLTIP
        Options->setTabText(Options->indexOf(TabSheet3), QApplication::translate("OptDialog", "O&utput", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        TabSheet4->setToolTip(QString());
#endif // QT_NO_TOOLTIP
#ifndef QT_NO_TOOLTIP
        GroupBox4->setToolTip(QString());
#endif // QT_NO_TOOLTIP
        GroupBox4->setTitle(QApplication::translate("OptDialog", "Process Noises (1-sigma/sqrt(s))", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        Label33->setToolTip(QString());
#endif // QT_NO_TOOLTIP
        Label33->setText(QApplication::translate("OptDialog", "Receiver Accel Horiz/Vertical (m/s2)", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        PrNoise4->setToolTip(QString());
#endif // QT_NO_TOOLTIP
        PrNoise4->setText(QApplication::translate("OptDialog", "1.0E-04", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        PrNoise5->setToolTip(QString());
#endif // QT_NO_TOOLTIP
        PrNoise5->setText(QApplication::translate("OptDialog", "1.0E-04", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        Label26->setToolTip(QString());
#endif // QT_NO_TOOLTIP
        Label26->setText(QApplication::translate("OptDialog", "Carrier-Phase Bias (cycle)", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        PrNoise1->setToolTip(QString());
#endif // QT_NO_TOOLTIP
        PrNoise1->setText(QApplication::translate("OptDialog", "1.0E-04", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        Label27->setToolTip(QString());
#endif // QT_NO_TOOLTIP
        Label27->setText(QApplication::translate("OptDialog", "Vertical Ionospheric Delay (m/10km)", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        PrNoise2->setToolTip(QString());
#endif // QT_NO_TOOLTIP
        PrNoise2->setText(QApplication::translate("OptDialog", "1.0E-03", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        Label28->setToolTip(QString());
#endif // QT_NO_TOOLTIP
        Label28->setText(QApplication::translate("OptDialog", "Zenith Tropospheric Delay (m)", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        PrNoise3->setToolTip(QString());
#endif // QT_NO_TOOLTIP
        PrNoise3->setText(QApplication::translate("OptDialog", "1.0E-04", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        GroupBox3->setToolTip(QString());
#endif // QT_NO_TOOLTIP
        GroupBox3->setTitle(QApplication::translate("OptDialog", "Measurement Errors (1-sigma)", Q_NULLPTR));
        MeasErr4->setSuffix(QApplication::translate("OptDialog", " m/100km", Q_NULLPTR));
        MeasErr5->setSuffix(QApplication::translate("OptDialog", " Hz", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        Label6->setToolTip(QString());
#endif // QT_NO_TOOLTIP
        Label6->setText(QApplication::translate("OptDialog", "Code/Carrier-Phase Error Ratio L1/L2", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        Label7->setToolTip(QString());
#endif // QT_NO_TOOLTIP
        Label7->setText(QApplication::translate("OptDialog", "Carrier-Phase Error a+b/sinEl (m)", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        Label16->setToolTip(QString());
#endif // QT_NO_TOOLTIP
        Label16->setText(QApplication::translate("OptDialog", "Carrier-Phase Error/Baseline", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        Label10->setToolTip(QString());
#endif // QT_NO_TOOLTIP
        Label10->setText(QApplication::translate("OptDialog", "Doppler Frequency (Hz)", Q_NULLPTR));
        MeasErr3->setSuffix(QApplication::translate("OptDialog", " m", Q_NULLPTR));
        MeasErr2->setSuffix(QApplication::translate("OptDialog", " m", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        Label29->setToolTip(QString());
#endif // QT_NO_TOOLTIP
        Label29->setText(QApplication::translate("OptDialog", "Satellite Clock Stability (s/s)", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        SatClkStab->setToolTip(QString());
#endif // QT_NO_TOOLTIP
        SatClkStab->setText(QApplication::translate("OptDialog", "5.0E-12", Q_NULLPTR));
        Options->setTabText(Options->indexOf(TabSheet4), QApplication::translate("OptDialog", "S&tatistics", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        TabSheet5->setToolTip(QString());
#endif // QT_NO_TOOLTIP
#ifndef QT_NO_TOOLTIP
        BtnStaPosView->setToolTip(QString());
#endif // QT_NO_TOOLTIP
#ifndef QT_NO_TOOLTIP
        StaPosFile->setToolTip(QString());
#endif // QT_NO_TOOLTIP
        StaPosFile->setText(QString());
#ifndef QT_NO_TOOLTIP
        Label30->setToolTip(QString());
#endif // QT_NO_TOOLTIP
        Label30->setText(QApplication::translate("OptDialog", "Station Position File", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        BtnStaPosFile->setToolTip(QString());
#endif // QT_NO_TOOLTIP
        BtnStaPosFile->setText(QApplication::translate("OptDialog", "...", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        GroupRefAnt->setToolTip(QString());
#endif // QT_NO_TOOLTIP
        GroupRefAnt->setTitle(QApplication::translate("OptDialog", "Base Station", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        RefAntPcv->setToolTip(QString());
#endif // QT_NO_TOOLTIP
        RefAntPcv->setText(QApplication::translate("OptDialog", "Antenna Type (*: Auto)", Q_NULLPTR));
        ChkInitRestart->setText(QApplication::translate("OptDialog", "Init by Restart", Q_NULLPTR));
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
        RefPosTypeP->clear();
        RefPosTypeP->insertItems(0, QStringList()
         << QApplication::translate("OptDialog", "Lat/Lon/Height (deg/m)", Q_NULLPTR)
         << QApplication::translate("OptDialog", "Lat/Lon/Height (dms/m)", Q_NULLPTR)
         << QApplication::translate("OptDialog", "X/Y/Z-ECEF m", Q_NULLPTR)
         << QApplication::translate("OptDialog", "RTCM Antenna Position", Q_NULLPTR)
         << QApplication::translate("OptDialog", "Raw Antenna Position", Q_NULLPTR)
         << QApplication::translate("OptDialog", "Average of Single Position", Q_NULLPTR)
        );
#ifndef QT_NO_TOOLTIP
        RefPosTypeP->setToolTip(QString());
#endif // QT_NO_TOOLTIP
        LabelMaxAveEp->setText(QApplication::translate("OptDialog", "Max # Ave (ep)", Q_NULLPTR));
        RefAntU->setSuffix(QApplication::translate("OptDialog", " m", Q_NULLPTR));
        RefAntN->setSuffix(QApplication::translate("OptDialog", " m", Q_NULLPTR));
        RefAntE->setSuffix(QApplication::translate("OptDialog", " m", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        LabelRefAntD->setToolTip(QString());
#endif // QT_NO_TOOLTIP
        LabelRefAntD->setText(QApplication::translate("OptDialog", "Delta-E/N/U (m)", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        RefAnt->setToolTip(QString());
#endif // QT_NO_TOOLTIP
#ifndef QT_NO_TOOLTIP
        GroupRovAnt->setToolTip(QString());
#endif // QT_NO_TOOLTIP
        GroupRovAnt->setTitle(QApplication::translate("OptDialog", "Rover", Q_NULLPTR));
        RovPosTypeP->clear();
        RovPosTypeP->insertItems(0, QStringList()
         << QApplication::translate("OptDialog", "Lat/Lon/Height deg/m", Q_NULLPTR)
         << QApplication::translate("OptDialog", "Lat/Lon/Height dms/m", Q_NULLPTR)
         << QApplication::translate("OptDialog", "X/Y/Z-ECEF m", Q_NULLPTR)
        );
#ifndef QT_NO_TOOLTIP
        RovPosTypeP->setToolTip(QString());
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
        RovAntPcv->setToolTip(QString());
#endif // QT_NO_TOOLTIP
        RovAntPcv->setText(QApplication::translate("OptDialog", "Antenna Type (*: Auto)", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        LabelRovAntD->setToolTip(QString());
#endif // QT_NO_TOOLTIP
        LabelRovAntD->setText(QApplication::translate("OptDialog", "Delta-E/N/U", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        RovAnt->setToolTip(QString());
#endif // QT_NO_TOOLTIP
        RovAntE->setSuffix(QApplication::translate("OptDialog", " m", Q_NULLPTR));
        RovAntU->setSuffix(QApplication::translate("OptDialog", " m", Q_NULLPTR));
        RovAntN->setSuffix(QApplication::translate("OptDialog", " m", Q_NULLPTR));
        Options->setTabText(Options->indexOf(TabSheet5), QApplication::translate("OptDialog", "&Positions", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        TabSheet7->setToolTip(QString());
#endif // QT_NO_TOOLTIP
#ifndef QT_NO_TOOLTIP
        BtnSatPcvFile->setToolTip(QString());
#endif // QT_NO_TOOLTIP
        BtnSatPcvFile->setText(QApplication::translate("OptDialog", "...", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        OLFile->setToolTip(QString());
#endif // QT_NO_TOOLTIP
        OLFile->setText(QString());
#ifndef QT_NO_TOOLTIP
        DCBFile->setToolTip(QString());
#endif // QT_NO_TOOLTIP
        DCBFile->setText(QString());
#ifndef QT_NO_TOOLTIP
        Label31->setToolTip(QString());
#endif // QT_NO_TOOLTIP
        Label31->setText(QApplication::translate("OptDialog", "FTP/HTTP Local Directory", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        BtnSatPcvView->setToolTip(QString());
#endif // QT_NO_TOOLTIP
        BtnSatPcvView->setText(QString());
#ifndef QT_NO_TOOLTIP
        SatPcvFile->setToolTip(QString());
#endif // QT_NO_TOOLTIP
        SatPcvFile->setText(QString());
#ifndef QT_NO_TOOLTIP
        BtnAntPcvFile->setToolTip(QString());
#endif // QT_NO_TOOLTIP
        BtnAntPcvFile->setText(QApplication::translate("OptDialog", "...", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        AntPcvFile->setToolTip(QString());
#endif // QT_NO_TOOLTIP
        AntPcvFile->setText(QString());
#ifndef QT_NO_TOOLTIP
        GeoidDataFile->setToolTip(QString());
#endif // QT_NO_TOOLTIP
        GeoidDataFile->setText(QString());
#ifndef QT_NO_TOOLTIP
        BtnGeoidDataFile->setToolTip(QString());
#endif // QT_NO_TOOLTIP
        BtnGeoidDataFile->setText(QApplication::translate("OptDialog", "...", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        Label48->setToolTip(QString());
#endif // QT_NO_TOOLTIP
        Label48->setText(QApplication::translate("OptDialog", "Geoid Data File", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        LocalDir->setToolTip(QString());
#endif // QT_NO_TOOLTIP
        LocalDir->setText(QString());
#ifndef QT_NO_TOOLTIP
        BtnLocalDir->setToolTip(QString());
#endif // QT_NO_TOOLTIP
        BtnLocalDir->setText(QApplication::translate("OptDialog", "...", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        BtnDCBFile->setToolTip(QString());
#endif // QT_NO_TOOLTIP
        BtnDCBFile->setText(QApplication::translate("OptDialog", "...", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        BtnDCBView->setToolTip(QString());
#endif // QT_NO_TOOLTIP
        BtnDCBView->setText(QString());
#ifndef QT_NO_TOOLTIP
        BtnEOPView->setToolTip(QString());
#endif // QT_NO_TOOLTIP
        BtnEOPView->setText(QString());
#ifndef QT_NO_TOOLTIP
        BtnOLFileView->setToolTip(QString());
#endif // QT_NO_TOOLTIP
        BtnOLFileView->setText(QString());
#ifndef QT_NO_TOOLTIP
        BtnOLFile->setToolTip(QString());
#endif // QT_NO_TOOLTIP
        BtnOLFile->setText(QApplication::translate("OptDialog", "...", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        Label38->setToolTip(QString());
#endif // QT_NO_TOOLTIP
        Label38->setText(QApplication::translate("OptDialog", "Satellite/Receiver Antenna PCV File ANTEX/NGS PCV", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        BtnAntPcvView->setToolTip(QString());
#endif // QT_NO_TOOLTIP
        BtnAntPcvView->setText(QString());
#ifndef QT_NO_TOOLTIP
        BtnEOPFile->setToolTip(QString());
#endif // QT_NO_TOOLTIP
        BtnEOPFile->setText(QApplication::translate("OptDialog", "...", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        EOPFile->setToolTip(QString());
#endif // QT_NO_TOOLTIP
        EOPFile->setText(QString());
#ifndef QT_NO_TOOLTIP
        Label34->setToolTip(QString());
#endif // QT_NO_TOOLTIP
        Label34->setText(QApplication::translate("OptDialog", "Ocean Loading BLQ Format", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        Label23->setToolTip(QString());
#endif // QT_NO_TOOLTIP
        Label23->setText(QApplication::translate("OptDialog", "EOP Data File", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        Label1->setToolTip(QString());
#endif // QT_NO_TOOLTIP
        Label1->setText(QApplication::translate("OptDialog", "DCB Data File", Q_NULLPTR));
        Options->setTabText(Options->indexOf(TabSheet7), QApplication::translate("OptDialog", "&Files", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        TabSheet8->setToolTip(QString());
#endif // QT_NO_TOOLTIP
#ifndef QT_NO_TOOLTIP
        Label19->setToolTip(QString());
#endif // QT_NO_TOOLTIP
        Label19->setText(QApplication::translate("OptDialog", "Process Cycle / Buffer Size", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        Label44->setToolTip(QString());
#endif // QT_NO_TOOLTIP
        Label44->setText(QApplication::translate("OptDialog", "Timeout / Reconnect Interval", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        Label46->setToolTip(QString());
#endif // QT_NO_TOOLTIP
        Label46->setText(QApplication::translate("OptDialog", "NMEA Cycle / File Swap Margin", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        Label41->setToolTip(QString());
#endif // QT_NO_TOOLTIP
        Label41->setText(QApplication::translate("OptDialog", "Solution Buffer/ Log Size", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        Label42->setToolTip(QString());
#endif // QT_NO_TOOLTIP
        Label42->setText(QApplication::translate("OptDialog", "Navigation Message Selection", Q_NULLPTR));
        NavSelectS->clear();
        NavSelectS->insertItems(0, QStringList()
         << QApplication::translate("OptDialog", "All", Q_NULLPTR)
         << QApplication::translate("OptDialog", "1 Rover", Q_NULLPTR)
         << QApplication::translate("OptDialog", "2 Base Station", Q_NULLPTR)
         << QApplication::translate("OptDialog", "3 Correction", Q_NULLPTR)
        );
#ifndef QT_NO_TOOLTIP
        NavSelectS->setToolTip(QString());
#endif // QT_NO_TOOLTIP
#ifndef QT_NO_TOOLTIP
        Label5->setToolTip(QString());
#endif // QT_NO_TOOLTIP
        Label5->setText(QApplication::translate("OptDialog", "SBAS Sat Selection (0: all) / Monitor Port", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        Label45->setToolTip(QString());
#endif // QT_NO_TOOLTIP
        Label45->setText(QApplication::translate("OptDialog", "HTTP / NTRIP Proxy", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        ProxyAddrE->setToolTip(QString());
#endif // QT_NO_TOOLTIP
        ProxyAddrE->setText(QString());
#ifndef QT_NO_TOOLTIP
        Label40->setToolTip(QString());
#endif // QT_NO_TOOLTIP
        Label40->setText(QApplication::translate("OptDialog", "Sol Font", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        FontLabel->setToolTip(QString());
#endif // QT_NO_TOOLTIP
        FontLabel->setText(QApplication::translate("OptDialog", "Font Label", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        BtnFont->setToolTip(QString());
#endif // QT_NO_TOOLTIP
        BtnFont->setText(QApplication::translate("OptDialog", "...", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        Label15->setToolTip(QString());
#endif // QT_NO_TOOLTIP
        Label15->setText(QApplication::translate("OptDialog", "TLE Data", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        TLEFile->setToolTip(QString());
#endif // QT_NO_TOOLTIP
        TLEFile->setText(QString());
#ifndef QT_NO_TOOLTIP
        BtnTLEFile->setToolTip(QString());
#endif // QT_NO_TOOLTIP
        BtnTLEFile->setText(QApplication::translate("OptDialog", "...", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        Label39->setToolTip(QString());
#endif // QT_NO_TOOLTIP
        Label39->setText(QApplication::translate("OptDialog", "Sat No", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        TLESatFile->setToolTip(QString());
#endif // QT_NO_TOOLTIP
        TLESatFile->setText(QString());
#ifndef QT_NO_TOOLTIP
        BtnTLESatFile->setToolTip(QString());
#endif // QT_NO_TOOLTIP
        BtnTLESatFile->setText(QApplication::translate("OptDialog", "...", Q_NULLPTR));
        TimeoutTimeE->setSuffix(QApplication::translate("OptDialog", " ms", Q_NULLPTR));
        SvrCycleE->setSuffix(QApplication::translate("OptDialog", " ms", Q_NULLPTR));
        NmeaCycleE->setSuffix(QApplication::translate("OptDialog", " ms", Q_NULLPTR));
        ReconTimeE->setSuffix(QApplication::translate("OptDialog", " ms", Q_NULLPTR));
        SvrBuffSizeE->setSuffix(QApplication::translate("OptDialog", " bytes", Q_NULLPTR));
        SolBuffSizeE->setSuffix(QApplication::translate("OptDialog", " epochs", Q_NULLPTR));
        SavedSolE->setSuffix(QApplication::translate("OptDialog", " epochs", Q_NULLPTR));
        FileSwapMarginE->setSuffix(QApplication::translate("OptDialog", " s", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        Label43->setToolTip(QString());
#endif // QT_NO_TOOLTIP
        Label43->setText(QApplication::translate("OptDialog", "Layout", Q_NULLPTR));
        PanelStackE->clear();
        PanelStackE->insertItems(0, QStringList()
         << QApplication::translate("OptDialog", "Horizontal", Q_NULLPTR)
         << QApplication::translate("OptDialog", "Vertical", Q_NULLPTR)
        );
#ifndef QT_NO_TOOLTIP
        PanelStackE->setToolTip(QString());
#endif // QT_NO_TOOLTIP
        Options->setTabText(Options->indexOf(TabSheet8), QApplication::translate("OptDialog", "&Misc", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        Label47->setToolTip(QString());
#endif // QT_NO_TOOLTIP
        Label47->setText(QApplication::translate("OptDialog", "Station Position File", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        BtnLoad->setToolTip(QString());
#endif // QT_NO_TOOLTIP
        BtnLoad->setText(QApplication::translate("OptDialog", "&Load", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        BtnSave->setToolTip(QString());
#endif // QT_NO_TOOLTIP
        BtnSave->setText(QApplication::translate("OptDialog", "&Save", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        BtnOk->setToolTip(QString());
#endif // QT_NO_TOOLTIP
        BtnOk->setText(QApplication::translate("OptDialog", "&OK", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        BtnCancel->setToolTip(QString());
#endif // QT_NO_TOOLTIP
        BtnCancel->setText(QApplication::translate("OptDialog", "&Cancel", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class OptDialog: public Ui_OptDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_NAVIOPT_H
