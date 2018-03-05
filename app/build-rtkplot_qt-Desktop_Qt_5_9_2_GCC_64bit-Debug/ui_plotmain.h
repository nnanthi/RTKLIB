/********************************************************************************
** Form generated from reading UI file 'plotmain.ui'
**
** Created by: Qt User Interface Compiler version 5.9.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_PLOTMAIN_H
#define UI_PLOTMAIN_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QListView>
#include <QtWidgets/QListWidget>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenu>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QScrollBar>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QSplitter>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QToolBar>
#include <QtWidgets/QToolButton>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Plot
{
public:
    QAction *MenuOpenSol1;
    QAction *MenuOpenSol2;
    QAction *MenuOpenMapImage;
    QAction *MenuOpenShape;
    QAction *MenuOpenSkyImage;
    QAction *MenuFileSel;
    QAction *MenuOpenObs;
    QAction *MenuOpenNav;
    QAction *MenuOpenElevMask;
    QAction *MenuVisAna;
    QAction *MenuSaveImage;
    QAction *MenuSaveDop;
    QAction *MenuSaveSnrMp;
    QAction *MenuSaveElMask;
    QAction *MenuConnect;
    QAction *MenuDisconnect;
    QAction *MenuPort;
    QAction *MenuReload;
    QAction *MenuClear;
    QAction *MenuQuit;
    QAction *MenuTime;
    QAction *MenuMapImg;
    QAction *MenuSkyImg;
    QAction *MenuWaypnt;
    QAction *MenuSrcSol;
    QAction *MenuSrcObs;
    QAction *MenuQcObs;
    QAction *MenyCopy;
    QAction *MenuOptions;
    QAction *MenuToolBar;
    QAction *MenuStatusBar;
    QAction *MenuGE;
    QAction *MenuGM;
    QAction *MenuMonitor1;
    QAction *MenuMonitor2;
    QAction *MenuCenterOri;
    QAction *MenuFitHoriz;
    QAction *MenuFitVert;
    QAction *MenuShowTrack;
    QAction *MenuFixCent;
    QAction *MenuFixHoriz;
    QAction *MenuFixVert;
    QAction *MenuShowSkyplot;
    QAction *MenuShowImg;
    QAction *MenuShowMap;
    QAction *MenuAnimStart;
    QAction *MenuAnimStop;
    QAction *MenuOverlap;
    QAction *MenuMax;
    QAction *MenuPlotGE;
    QAction *MenuPlotGM;
    QAction *MenuPlotGEGM;
    QAction *MenuAbout;
    QAction *MenuOpenWaypoint;
    QAction *MenuSaveWaypoint;
    QAction *MenuMapLayer;
    QAction *MenuBrowse;
    QAction *MenuShowGrid;
    QWidget *centralwidget;
    QGridLayout *gridLayout;
    QWidget *widget_2;
    QHBoxLayout *horizontalLayout_10;
    QSplitter *BrowseSplitter;
    QWidget *mainWidget;
    QVBoxLayout *verticalLayout_3;
    QWidget *Panel1;
    QHBoxLayout *horizontalLayout_8;
    QWidget *Panel10;
    QHBoxLayout *horizontalLayout;
    QToolButton *BtnConnect;
    QToolButton *BtnSol1;
    QToolButton *BtnSol2;
    QToolButton *BtnSol12;
    QWidget *Panel101;
    QHBoxLayout *horizontalLayout_2;
    QComboBox *PlotTypeS;
    QWidget *Panel102;
    QVBoxLayout *verticalLayout;
    QPushButton *BtnOn1;
    QPushButton *BtnOn2;
    QPushButton *BtnOn3;
    QWidget *Panel103;
    QHBoxLayout *horizontalLayout_3;
    QComboBox *QFlag;
    QComboBox *ObsType2;
    QComboBox *ObsType;
    QComboBox *FrqType;
    QComboBox *DopType;
    QWidget *Panel104;
    QHBoxLayout *horizontalLayout_4;
    QToolButton *BtnCenterOri;
    QToolButton *BtnRangeList;
    QComboBox *SatList;
    QToolButton *BtnFitHoriz;
    QToolButton *BtnFitVert;
    QToolButton *BtnShowTrack;
    QToolButton *BtnShowSkyplot;
    QToolButton *BtnShowGrid;
    QToolButton *BtnShowImg;
    QToolButton *BtnFixCent;
    QToolButton *BtnFixHoriz;
    QToolButton *BtnFixVert;
    QToolButton *BtnShowMap;
    QToolButton *BtnGE;
    QToolButton *BtnGM;
    QWidget *Panel12;
    QHBoxLayout *horizontalLayout_7;
    QToolButton *BtnAnimate;
    QScrollBar *TimeScroll;
    QWidget *Panel11;
    QHBoxLayout *horizontalLayout_6;
    QSpacerItem *horizontalSpacer_2;
    QLabel *ConnectMsg;
    QToolButton *BtnClear;
    QToolButton *BtnReload;
    QWidget *StrStatus;
    QHBoxLayout *horizontalLayout_5;
    QLabel *StrStatus1;
    QLabel *StrStatus2;
    QToolButton *BtnOptions;
    QLabel *Disp;
    QListWidget *RangeList;
    QWidget *PanelBrowse;
    QVBoxLayout *verticalLayout1;
    QWidget *Panel13;
    QHBoxLayout *horizontalLayout_51;
    QComboBox *DriveSel;
    QWidget *Panel2;
    QVBoxLayout *verticalLayout_21;
    QWidget *Panel5;
    QHBoxLayout *horizontalLayout1;
    QLabel *DirSelected;
    QToolButton *BtnDirSel;
    QListView *FileList;
    QWidget *Panel3;
    QHBoxLayout *horizontalLayout_21;
    QComboBox *Filter;
    QMenuBar *menubar;
    QMenu *MenuFile;
    QMenu *MenuEdit;
    QMenu *MenuView;
    QMenu *Windows1;
    QMenu *MenuHelp;
    QStatusBar *statusbar;
    QWidget *Panel21;
    QHBoxLayout *horizontalLayout_9;
    QLabel *Message1;
    QLabel *QL1;
    QLabel *QL2;
    QLabel *QL3;
    QLabel *QL4;
    QLabel *QL5;
    QLabel *QL6;
    QLabel *QL7;
    QSpacerItem *horizontalSpacer;
    QLabel *Message2;
    QToolButton *BtnMessage2;
    QToolBar *toolBar;

    void setupUi(QMainWindow *Plot)
    {
        if (Plot->objectName().isEmpty())
            Plot->setObjectName(QStringLiteral("Plot"));
        Plot->resize(1596, 664);
        MenuOpenSol1 = new QAction(Plot);
        MenuOpenSol1->setObjectName(QStringLiteral("MenuOpenSol1"));
        QIcon icon;
        icon.addFile(QStringLiteral(":/buttons/data1.bmp"), QSize(), QIcon::Normal, QIcon::Off);
        MenuOpenSol1->setIcon(icon);
        MenuOpenSol2 = new QAction(Plot);
        MenuOpenSol2->setObjectName(QStringLiteral("MenuOpenSol2"));
        QIcon icon1;
        icon1.addFile(QStringLiteral(":/buttons/data2.bmp"), QSize(), QIcon::Normal, QIcon::Off);
        MenuOpenSol2->setIcon(icon1);
        MenuOpenMapImage = new QAction(Plot);
        MenuOpenMapImage->setObjectName(QStringLiteral("MenuOpenMapImage"));
        MenuOpenShape = new QAction(Plot);
        MenuOpenShape->setObjectName(QStringLiteral("MenuOpenShape"));
        MenuOpenSkyImage = new QAction(Plot);
        MenuOpenSkyImage->setObjectName(QStringLiteral("MenuOpenSkyImage"));
        MenuFileSel = new QAction(Plot);
        MenuFileSel->setObjectName(QStringLiteral("MenuFileSel"));
        MenuOpenObs = new QAction(Plot);
        MenuOpenObs->setObjectName(QStringLiteral("MenuOpenObs"));
        MenuOpenNav = new QAction(Plot);
        MenuOpenNav->setObjectName(QStringLiteral("MenuOpenNav"));
        MenuOpenElevMask = new QAction(Plot);
        MenuOpenElevMask->setObjectName(QStringLiteral("MenuOpenElevMask"));
        MenuVisAna = new QAction(Plot);
        MenuVisAna->setObjectName(QStringLiteral("MenuVisAna"));
        MenuSaveImage = new QAction(Plot);
        MenuSaveImage->setObjectName(QStringLiteral("MenuSaveImage"));
        MenuSaveDop = new QAction(Plot);
        MenuSaveDop->setObjectName(QStringLiteral("MenuSaveDop"));
        MenuSaveSnrMp = new QAction(Plot);
        MenuSaveSnrMp->setObjectName(QStringLiteral("MenuSaveSnrMp"));
        MenuSaveElMask = new QAction(Plot);
        MenuSaveElMask->setObjectName(QStringLiteral("MenuSaveElMask"));
        MenuConnect = new QAction(Plot);
        MenuConnect->setObjectName(QStringLiteral("MenuConnect"));
        QIcon icon2;
        icon2.addFile(QStringLiteral(":/buttons/connect1.bmp"), QSize(), QIcon::Normal, QIcon::Off);
        MenuConnect->setIcon(icon2);
        MenuDisconnect = new QAction(Plot);
        MenuDisconnect->setObjectName(QStringLiteral("MenuDisconnect"));
        QIcon icon3;
        icon3.addFile(QStringLiteral(":/buttons/connect2.bmp"), QSize(), QIcon::Normal, QIcon::Off);
        MenuDisconnect->setIcon(icon3);
        MenuPort = new QAction(Plot);
        MenuPort->setObjectName(QStringLiteral("MenuPort"));
        MenuReload = new QAction(Plot);
        MenuReload->setObjectName(QStringLiteral("MenuReload"));
        QIcon icon4;
        icon4.addFile(QStringLiteral(":/buttons/reload.bmp"), QSize(), QIcon::Normal, QIcon::Off);
        MenuReload->setIcon(icon4);
        MenuClear = new QAction(Plot);
        MenuClear->setObjectName(QStringLiteral("MenuClear"));
        QIcon icon5;
        icon5.addFile(QStringLiteral(":/buttons/del.bmp"), QSize(), QIcon::Normal, QIcon::Off);
        MenuClear->setIcon(icon5);
        MenuQuit = new QAction(Plot);
        MenuQuit->setObjectName(QStringLiteral("MenuQuit"));
        MenuTime = new QAction(Plot);
        MenuTime->setObjectName(QStringLiteral("MenuTime"));
        MenuMapImg = new QAction(Plot);
        MenuMapImg->setObjectName(QStringLiteral("MenuMapImg"));
        QIcon icon6;
        icon6.addFile(QStringLiteral(":/buttons/map.bmp"), QSize(), QIcon::Normal, QIcon::Off);
        MenuMapImg->setIcon(icon6);
        MenuSkyImg = new QAction(Plot);
        MenuSkyImg->setObjectName(QStringLiteral("MenuSkyImg"));
        MenuWaypnt = new QAction(Plot);
        MenuWaypnt->setObjectName(QStringLiteral("MenuWaypnt"));
        MenuSrcSol = new QAction(Plot);
        MenuSrcSol->setObjectName(QStringLiteral("MenuSrcSol"));
        MenuSrcObs = new QAction(Plot);
        MenuSrcObs->setObjectName(QStringLiteral("MenuSrcObs"));
        MenuQcObs = new QAction(Plot);
        MenuQcObs->setObjectName(QStringLiteral("MenuQcObs"));
        MenyCopy = new QAction(Plot);
        MenyCopy->setObjectName(QStringLiteral("MenyCopy"));
        MenuOptions = new QAction(Plot);
        MenuOptions->setObjectName(QStringLiteral("MenuOptions"));
        QIcon icon7;
        icon7.addFile(QStringLiteral(":/buttons/toolbmp"), QSize(), QIcon::Normal, QIcon::Off);
        MenuOptions->setIcon(icon7);
        MenuToolBar = new QAction(Plot);
        MenuToolBar->setObjectName(QStringLiteral("MenuToolBar"));
        MenuToolBar->setCheckable(true);
        MenuToolBar->setChecked(true);
        MenuStatusBar = new QAction(Plot);
        MenuStatusBar->setObjectName(QStringLiteral("MenuStatusBar"));
        MenuStatusBar->setCheckable(true);
        MenuStatusBar->setChecked(true);
        MenuGE = new QAction(Plot);
        MenuGE->setObjectName(QStringLiteral("MenuGE"));
        QIcon icon8;
        icon8.addFile(QStringLiteral(":/buttons/ge.bmp"), QSize(), QIcon::Normal, QIcon::Off);
        MenuGE->setIcon(icon8);
        MenuGM = new QAction(Plot);
        MenuGM->setObjectName(QStringLiteral("MenuGM"));
        QIcon icon9;
        icon9.addFile(QStringLiteral(":/buttons/gm.bmp"), QSize(), QIcon::Normal, QIcon::Off);
        MenuGM->setIcon(icon9);
        MenuMonitor1 = new QAction(Plot);
        MenuMonitor1->setObjectName(QStringLiteral("MenuMonitor1"));
        MenuMonitor2 = new QAction(Plot);
        MenuMonitor2->setObjectName(QStringLiteral("MenuMonitor2"));
        MenuCenterOri = new QAction(Plot);
        MenuCenterOri->setObjectName(QStringLiteral("MenuCenterOri"));
        QIcon icon10;
        icon10.addFile(QStringLiteral(":/buttons/ori.bmp"), QSize(), QIcon::Normal, QIcon::Off);
        MenuCenterOri->setIcon(icon10);
        MenuFitHoriz = new QAction(Plot);
        MenuFitHoriz->setObjectName(QStringLiteral("MenuFitHoriz"));
        QIcon icon11;
        icon11.addFile(QStringLiteral(":/buttons/fith.bmp"), QSize(), QIcon::Normal, QIcon::Off);
        MenuFitHoriz->setIcon(icon11);
        MenuFitVert = new QAction(Plot);
        MenuFitVert->setObjectName(QStringLiteral("MenuFitVert"));
        QIcon icon12;
        icon12.addFile(QStringLiteral(":/buttons/fitv.bmp"), QSize(), QIcon::Normal, QIcon::Off);
        MenuFitVert->setIcon(icon12);
        MenuShowTrack = new QAction(Plot);
        MenuShowTrack->setObjectName(QStringLiteral("MenuShowTrack"));
        MenuShowTrack->setCheckable(true);
        QIcon icon13;
        icon13.addFile(QStringLiteral(":/buttons/point.bmp"), QSize(), QIcon::Normal, QIcon::Off);
        MenuShowTrack->setIcon(icon13);
        MenuFixCent = new QAction(Plot);
        MenuFixCent->setObjectName(QStringLiteral("MenuFixCent"));
        MenuFixCent->setCheckable(true);
        QIcon icon14;
        icon14.addFile(QStringLiteral(":/buttons/trackc.bmp"), QSize(), QIcon::Normal, QIcon::Off);
        MenuFixCent->setIcon(icon14);
        MenuFixHoriz = new QAction(Plot);
        MenuFixHoriz->setObjectName(QStringLiteral("MenuFixHoriz"));
        MenuFixHoriz->setCheckable(true);
        QIcon icon15;
        icon15.addFile(QStringLiteral(":/buttons/track.bmp"), QSize(), QIcon::Normal, QIcon::Off);
        MenuFixHoriz->setIcon(icon15);
        MenuFixVert = new QAction(Plot);
        MenuFixVert->setObjectName(QStringLiteral("MenuFixVert"));
        MenuFixVert->setCheckable(true);
        QIcon icon16;
        icon16.addFile(QStringLiteral(":/buttons/trackl.bmp"), QSize(), QIcon::Normal, QIcon::Off);
        MenuFixVert->setIcon(icon16);
        MenuShowSkyplot = new QAction(Plot);
        MenuShowSkyplot->setObjectName(QStringLiteral("MenuShowSkyplot"));
        MenuShowSkyplot->setCheckable(true);
        QIcon icon17;
        icon17.addFile(QStringLiteral(":/buttons/graph.bmp"), QSize(), QIcon::Normal, QIcon::Off);
        MenuShowSkyplot->setIcon(icon17);
        MenuShowImg = new QAction(Plot);
        MenuShowImg->setObjectName(QStringLiteral("MenuShowImg"));
        MenuShowImg->setCheckable(true);
        MenuShowImg->setIcon(icon6);
        MenuShowMap = new QAction(Plot);
        MenuShowMap->setObjectName(QStringLiteral("MenuShowMap"));
        MenuShowMap->setCheckable(true);
        QIcon icon18;
        icon18.addFile(QStringLiteral(":/buttons/showp.bmp"), QSize(), QIcon::Normal, QIcon::Off);
        MenuShowMap->setIcon(icon18);
        MenuAnimStart = new QAction(Plot);
        MenuAnimStart->setObjectName(QStringLiteral("MenuAnimStart"));
        QIcon icon19;
        icon19.addFile(QStringLiteral(":/buttons/anim1.bmp"), QSize(), QIcon::Normal, QIcon::Off);
        MenuAnimStart->setIcon(icon19);
        MenuAnimStop = new QAction(Plot);
        MenuAnimStop->setObjectName(QStringLiteral("MenuAnimStop"));
        QIcon icon20;
        icon20.addFile(QStringLiteral(":/buttons/anim2.bmp"), QSize(), QIcon::Normal, QIcon::Off);
        MenuAnimStop->setIcon(icon20);
        MenuOverlap = new QAction(Plot);
        MenuOverlap->setObjectName(QStringLiteral("MenuOverlap"));
        MenuMax = new QAction(Plot);
        MenuMax->setObjectName(QStringLiteral("MenuMax"));
        MenuPlotGE = new QAction(Plot);
        MenuPlotGE->setObjectName(QStringLiteral("MenuPlotGE"));
        MenuPlotGM = new QAction(Plot);
        MenuPlotGM->setObjectName(QStringLiteral("MenuPlotGM"));
        MenuPlotGEGM = new QAction(Plot);
        MenuPlotGEGM->setObjectName(QStringLiteral("MenuPlotGEGM"));
        MenuAbout = new QAction(Plot);
        MenuAbout->setObjectName(QStringLiteral("MenuAbout"));
        MenuOpenWaypoint = new QAction(Plot);
        MenuOpenWaypoint->setObjectName(QStringLiteral("MenuOpenWaypoint"));
        MenuSaveWaypoint = new QAction(Plot);
        MenuSaveWaypoint->setObjectName(QStringLiteral("MenuSaveWaypoint"));
        MenuMapLayer = new QAction(Plot);
        MenuMapLayer->setObjectName(QStringLiteral("MenuMapLayer"));
        MenuBrowse = new QAction(Plot);
        MenuBrowse->setObjectName(QStringLiteral("MenuBrowse"));
        MenuBrowse->setCheckable(true);
        MenuShowGrid = new QAction(Plot);
        MenuShowGrid->setObjectName(QStringLiteral("MenuShowGrid"));
        MenuShowGrid->setCheckable(true);
        QIcon icon21;
        icon21.addFile(QStringLiteral(":/buttons/grid.bmp"), QSize(), QIcon::Normal, QIcon::Off);
        MenuShowGrid->setIcon(icon21);
        centralwidget = new QWidget(Plot);
        centralwidget->setObjectName(QStringLiteral("centralwidget"));
        gridLayout = new QGridLayout(centralwidget);
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        widget_2 = new QWidget(centralwidget);
        widget_2->setObjectName(QStringLiteral("widget_2"));
        horizontalLayout_10 = new QHBoxLayout(widget_2);
        horizontalLayout_10->setObjectName(QStringLiteral("horizontalLayout_10"));
        BrowseSplitter = new QSplitter(widget_2);
        BrowseSplitter->setObjectName(QStringLiteral("BrowseSplitter"));
        BrowseSplitter->setOrientation(Qt::Horizontal);
        mainWidget = new QWidget(BrowseSplitter);
        mainWidget->setObjectName(QStringLiteral("mainWidget"));
        QSizePolicy sizePolicy(QSizePolicy::MinimumExpanding, QSizePolicy::MinimumExpanding);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(mainWidget->sizePolicy().hasHeightForWidth());
        mainWidget->setSizePolicy(sizePolicy);
        verticalLayout_3 = new QVBoxLayout(mainWidget);
        verticalLayout_3->setSpacing(0);
        verticalLayout_3->setObjectName(QStringLiteral("verticalLayout_3"));
        verticalLayout_3->setContentsMargins(0, 0, 0, 0);
        Panel1 = new QWidget(mainWidget);
        Panel1->setObjectName(QStringLiteral("Panel1"));
        Panel1->setEnabled(true);
        QSizePolicy sizePolicy1(QSizePolicy::Preferred, QSizePolicy::Fixed);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(Panel1->sizePolicy().hasHeightForWidth());
        Panel1->setSizePolicy(sizePolicy1);
        horizontalLayout_8 = new QHBoxLayout(Panel1);
        horizontalLayout_8->setSpacing(0);
        horizontalLayout_8->setObjectName(QStringLiteral("horizontalLayout_8"));
        horizontalLayout_8->setContentsMargins(0, 0, 0, 0);
        Panel10 = new QWidget(Panel1);
        Panel10->setObjectName(QStringLiteral("Panel10"));
        Panel10->setEnabled(true);
        sizePolicy1.setHeightForWidth(Panel10->sizePolicy().hasHeightForWidth());
        Panel10->setSizePolicy(sizePolicy1);
        horizontalLayout = new QHBoxLayout(Panel10);
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        horizontalLayout->setContentsMargins(0, 0, 0, 0);
        BtnConnect = new QToolButton(Panel10);
        BtnConnect->setObjectName(QStringLiteral("BtnConnect"));
        BtnConnect->setEnabled(true);
        BtnConnect->setMaximumSize(QSize(25, 25));
        QIcon icon22;
        icon22.addFile(QStringLiteral(":/buttons/connect1.bmp"), QSize(), QIcon::Normal, QIcon::Off);
        icon22.addFile(QStringLiteral(":/buttons/connect2.bmp"), QSize(), QIcon::Normal, QIcon::On);
        BtnConnect->setIcon(icon22);
        BtnConnect->setCheckable(true);

        horizontalLayout->addWidget(BtnConnect);

        BtnSol1 = new QToolButton(Panel10);
        BtnSol1->setObjectName(QStringLiteral("BtnSol1"));
        BtnSol1->setEnabled(true);
        BtnSol1->setMaximumSize(QSize(25, 25));
        BtnSol1->setIcon(icon);
        BtnSol1->setCheckable(true);

        horizontalLayout->addWidget(BtnSol1);

        BtnSol2 = new QToolButton(Panel10);
        BtnSol2->setObjectName(QStringLiteral("BtnSol2"));
        BtnSol2->setEnabled(true);
        BtnSol2->setMaximumSize(QSize(25, 25));
        BtnSol2->setIcon(icon1);
        BtnSol2->setCheckable(true);

        horizontalLayout->addWidget(BtnSol2);

        BtnSol12 = new QToolButton(Panel10);
        BtnSol12->setObjectName(QStringLiteral("BtnSol12"));
        BtnSol12->setEnabled(true);
        BtnSol12->setMaximumSize(QSize(25, 25));
        QIcon icon23;
        icon23.addFile(QStringLiteral(":/buttons/data12.bmp"), QSize(), QIcon::Normal, QIcon::Off);
        BtnSol12->setIcon(icon23);
        BtnSol12->setCheckable(true);

        horizontalLayout->addWidget(BtnSol12);

        Panel101 = new QWidget(Panel10);
        Panel101->setObjectName(QStringLiteral("Panel101"));
        Panel101->setEnabled(true);
        horizontalLayout_2 = new QHBoxLayout(Panel101);
        horizontalLayout_2->setObjectName(QStringLiteral("horizontalLayout_2"));
        horizontalLayout_2->setContentsMargins(0, 0, 0, 0);
        PlotTypeS = new QComboBox(Panel101);
        PlotTypeS->setObjectName(QStringLiteral("PlotTypeS"));
        PlotTypeS->setEnabled(true);
        QSizePolicy sizePolicy2(QSizePolicy::Minimum, QSizePolicy::Fixed);
        sizePolicy2.setHorizontalStretch(0);
        sizePolicy2.setVerticalStretch(0);
        sizePolicy2.setHeightForWidth(PlotTypeS->sizePolicy().hasHeightForWidth());
        PlotTypeS->setSizePolicy(sizePolicy2);

        horizontalLayout_2->addWidget(PlotTypeS);


        horizontalLayout->addWidget(Panel101);

        Panel102 = new QWidget(Panel10);
        Panel102->setObjectName(QStringLiteral("Panel102"));
        Panel102->setEnabled(true);
        sizePolicy1.setHeightForWidth(Panel102->sizePolicy().hasHeightForWidth());
        Panel102->setSizePolicy(sizePolicy1);
        Panel102->setMaximumSize(QSize(30, 30));
        verticalLayout = new QVBoxLayout(Panel102);
        verticalLayout->setSpacing(0);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        BtnOn1 = new QPushButton(Panel102);
        BtnOn1->setObjectName(QStringLiteral("BtnOn1"));
        BtnOn1->setEnabled(true);
        BtnOn1->setCheckable(true);
        BtnOn1->setChecked(true);

        verticalLayout->addWidget(BtnOn1);

        BtnOn2 = new QPushButton(Panel102);
        BtnOn2->setObjectName(QStringLiteral("BtnOn2"));
        BtnOn2->setEnabled(true);
        BtnOn2->setCheckable(true);
        BtnOn2->setChecked(true);

        verticalLayout->addWidget(BtnOn2);

        BtnOn3 = new QPushButton(Panel102);
        BtnOn3->setObjectName(QStringLiteral("BtnOn3"));
        BtnOn3->setEnabled(true);
        QSizePolicy sizePolicy3(QSizePolicy::Fixed, QSizePolicy::Preferred);
        sizePolicy3.setHorizontalStretch(0);
        sizePolicy3.setVerticalStretch(0);
        sizePolicy3.setHeightForWidth(BtnOn3->sizePolicy().hasHeightForWidth());
        BtnOn3->setSizePolicy(sizePolicy3);
        BtnOn3->setCheckable(true);
        BtnOn3->setChecked(true);

        verticalLayout->addWidget(BtnOn3);


        horizontalLayout->addWidget(Panel102);

        Panel103 = new QWidget(Panel10);
        Panel103->setObjectName(QStringLiteral("Panel103"));
        Panel103->setEnabled(true);
        horizontalLayout_3 = new QHBoxLayout(Panel103);
        horizontalLayout_3->setObjectName(QStringLiteral("horizontalLayout_3"));
        horizontalLayout_3->setContentsMargins(0, 0, 0, 0);
        QFlag = new QComboBox(Panel103);
        QFlag->setObjectName(QStringLiteral("QFlag"));
        QFlag->setEnabled(true);
        sizePolicy2.setHeightForWidth(QFlag->sizePolicy().hasHeightForWidth());
        QFlag->setSizePolicy(sizePolicy2);

        horizontalLayout_3->addWidget(QFlag);

        ObsType2 = new QComboBox(Panel103);
        ObsType2->setObjectName(QStringLiteral("ObsType2"));
        ObsType2->setEnabled(true);
        sizePolicy2.setHeightForWidth(ObsType2->sizePolicy().hasHeightForWidth());
        ObsType2->setSizePolicy(sizePolicy2);

        horizontalLayout_3->addWidget(ObsType2);

        ObsType = new QComboBox(Panel103);
        ObsType->setObjectName(QStringLiteral("ObsType"));
        ObsType->setEnabled(true);
        sizePolicy2.setHeightForWidth(ObsType->sizePolicy().hasHeightForWidth());
        ObsType->setSizePolicy(sizePolicy2);

        horizontalLayout_3->addWidget(ObsType);

        FrqType = new QComboBox(Panel103);
        FrqType->setObjectName(QStringLiteral("FrqType"));
        FrqType->setEnabled(true);
        sizePolicy2.setHeightForWidth(FrqType->sizePolicy().hasHeightForWidth());
        FrqType->setSizePolicy(sizePolicy2);

        horizontalLayout_3->addWidget(FrqType);

        DopType = new QComboBox(Panel103);
        DopType->setObjectName(QStringLiteral("DopType"));
        DopType->setEnabled(true);
        sizePolicy2.setHeightForWidth(DopType->sizePolicy().hasHeightForWidth());
        DopType->setSizePolicy(sizePolicy2);

        horizontalLayout_3->addWidget(DopType);


        horizontalLayout->addWidget(Panel103);

        Panel104 = new QWidget(Panel10);
        Panel104->setObjectName(QStringLiteral("Panel104"));
        Panel104->setEnabled(true);
        horizontalLayout_4 = new QHBoxLayout(Panel104);
        horizontalLayout_4->setObjectName(QStringLiteral("horizontalLayout_4"));
        horizontalLayout_4->setContentsMargins(0, 0, 0, 0);
        BtnCenterOri = new QToolButton(Panel104);
        BtnCenterOri->setObjectName(QStringLiteral("BtnCenterOri"));
        BtnCenterOri->setEnabled(true);
        BtnCenterOri->setMaximumSize(QSize(25, 25));
        BtnCenterOri->setIcon(icon14);

        horizontalLayout_4->addWidget(BtnCenterOri);

        BtnRangeList = new QToolButton(Panel104);
        BtnRangeList->setObjectName(QStringLiteral("BtnRangeList"));
        BtnRangeList->setEnabled(true);
        BtnRangeList->setMaximumSize(QSize(25, 25));
        QIcon icon24;
        icon24.addFile(QStringLiteral(":/buttons/down.bmp"), QSize(), QIcon::Normal, QIcon::Off);
        BtnRangeList->setIcon(icon24);

        horizontalLayout_4->addWidget(BtnRangeList);

        SatList = new QComboBox(Panel104);
        SatList->setObjectName(QStringLiteral("SatList"));
        SatList->setEnabled(true);
        QSizePolicy sizePolicy4(QSizePolicy::MinimumExpanding, QSizePolicy::Fixed);
        sizePolicy4.setHorizontalStretch(0);
        sizePolicy4.setVerticalStretch(0);
        sizePolicy4.setHeightForWidth(SatList->sizePolicy().hasHeightForWidth());
        SatList->setSizePolicy(sizePolicy4);

        horizontalLayout_4->addWidget(SatList);


        horizontalLayout->addWidget(Panel104);

        BtnFitHoriz = new QToolButton(Panel10);
        BtnFitHoriz->setObjectName(QStringLiteral("BtnFitHoriz"));
        BtnFitHoriz->setEnabled(true);
        BtnFitHoriz->setMaximumSize(QSize(25, 25));
        BtnFitHoriz->setIcon(icon11);

        horizontalLayout->addWidget(BtnFitHoriz);

        BtnFitVert = new QToolButton(Panel10);
        BtnFitVert->setObjectName(QStringLiteral("BtnFitVert"));
        BtnFitVert->setEnabled(true);
        BtnFitVert->setMaximumSize(QSize(25, 25));
        BtnFitVert->setIcon(icon12);

        horizontalLayout->addWidget(BtnFitVert);

        BtnShowTrack = new QToolButton(Panel10);
        BtnShowTrack->setObjectName(QStringLiteral("BtnShowTrack"));
        BtnShowTrack->setEnabled(true);
        BtnShowTrack->setMaximumSize(QSize(25, 25));
        BtnShowTrack->setIcon(icon13);
        BtnShowTrack->setCheckable(true);

        horizontalLayout->addWidget(BtnShowTrack);

        BtnShowSkyplot = new QToolButton(Panel10);
        BtnShowSkyplot->setObjectName(QStringLiteral("BtnShowSkyplot"));
        BtnShowSkyplot->setEnabled(true);
        BtnShowSkyplot->setMaximumSize(QSize(25, 25));
        BtnShowSkyplot->setIcon(icon14);
        BtnShowSkyplot->setCheckable(true);
        BtnShowSkyplot->setChecked(true);

        horizontalLayout->addWidget(BtnShowSkyplot);

        BtnShowGrid = new QToolButton(Panel10);
        BtnShowGrid->setObjectName(QStringLiteral("BtnShowGrid"));
        BtnShowGrid->setMinimumSize(QSize(25, 25));
        BtnShowGrid->setIcon(icon21);
        BtnShowGrid->setCheckable(true);
        BtnShowGrid->setChecked(true);

        horizontalLayout->addWidget(BtnShowGrid);

        BtnShowImg = new QToolButton(Panel10);
        BtnShowImg->setObjectName(QStringLiteral("BtnShowImg"));
        BtnShowImg->setEnabled(true);
        BtnShowImg->setMaximumSize(QSize(25, 25));
        BtnShowImg->setIcon(icon6);
        BtnShowImg->setCheckable(true);

        horizontalLayout->addWidget(BtnShowImg);

        BtnFixCent = new QToolButton(Panel10);
        BtnFixCent->setObjectName(QStringLiteral("BtnFixCent"));
        BtnFixCent->setEnabled(true);
        BtnFixCent->setMaximumSize(QSize(25, 25));
        BtnFixCent->setIcon(icon14);
        BtnFixCent->setCheckable(true);

        horizontalLayout->addWidget(BtnFixCent);

        BtnFixHoriz = new QToolButton(Panel10);
        BtnFixHoriz->setObjectName(QStringLiteral("BtnFixHoriz"));
        BtnFixHoriz->setEnabled(true);
        BtnFixHoriz->setMaximumSize(QSize(25, 25));
        BtnFixHoriz->setIcon(icon15);
        BtnFixHoriz->setCheckable(true);

        horizontalLayout->addWidget(BtnFixHoriz);

        BtnFixVert = new QToolButton(Panel10);
        BtnFixVert->setObjectName(QStringLiteral("BtnFixVert"));
        BtnFixVert->setEnabled(true);
        BtnFixVert->setMaximumSize(QSize(25, 25));
        BtnFixVert->setIcon(icon15);
        BtnFixVert->setCheckable(true);

        horizontalLayout->addWidget(BtnFixVert);

        BtnShowMap = new QToolButton(Panel10);
        BtnShowMap->setObjectName(QStringLiteral("BtnShowMap"));
        BtnShowMap->setEnabled(true);
        BtnShowMap->setMaximumSize(QSize(25, 25));
        BtnShowMap->setIcon(icon18);
        BtnShowMap->setCheckable(true);

        horizontalLayout->addWidget(BtnShowMap);

        BtnGE = new QToolButton(Panel10);
        BtnGE->setObjectName(QStringLiteral("BtnGE"));
        BtnGE->setEnabled(true);
        BtnGE->setMaximumSize(QSize(25, 25));
        BtnGE->setIcon(icon8);

        horizontalLayout->addWidget(BtnGE);

        BtnGM = new QToolButton(Panel10);
        BtnGM->setObjectName(QStringLiteral("BtnGM"));
        BtnGM->setEnabled(true);
        BtnGM->setMaximumSize(QSize(25, 25));
        BtnGM->setIcon(icon9);

        horizontalLayout->addWidget(BtnGM);


        horizontalLayout_8->addWidget(Panel10);

        Panel12 = new QWidget(Panel1);
        Panel12->setObjectName(QStringLiteral("Panel12"));
        Panel12->setEnabled(true);
        sizePolicy1.setHeightForWidth(Panel12->sizePolicy().hasHeightForWidth());
        Panel12->setSizePolicy(sizePolicy1);
        horizontalLayout_7 = new QHBoxLayout(Panel12);
        horizontalLayout_7->setObjectName(QStringLiteral("horizontalLayout_7"));
        horizontalLayout_7->setContentsMargins(0, 0, 0, 0);
        BtnAnimate = new QToolButton(Panel12);
        BtnAnimate->setObjectName(QStringLiteral("BtnAnimate"));
        BtnAnimate->setEnabled(true);
        BtnAnimate->setMaximumSize(QSize(25, 25));
        QIcon icon25;
        icon25.addFile(QStringLiteral(":/buttons/anim1.bmp"), QSize(), QIcon::Normal, QIcon::Off);
        icon25.addFile(QStringLiteral(":/buttons/anim2.bmp"), QSize(), QIcon::Normal, QIcon::On);
        BtnAnimate->setIcon(icon25);
        BtnAnimate->setCheckable(true);
        BtnAnimate->setProperty("flat", QVariant(true));

        horizontalLayout_7->addWidget(BtnAnimate);

        TimeScroll = new QScrollBar(Panel12);
        TimeScroll->setObjectName(QStringLiteral("TimeScroll"));
        TimeScroll->setEnabled(true);
        sizePolicy4.setHeightForWidth(TimeScroll->sizePolicy().hasHeightForWidth());
        TimeScroll->setSizePolicy(sizePolicy4);
        TimeScroll->setMinimum(0);
        TimeScroll->setMaximum(0);
        TimeScroll->setSingleStep(1);
        TimeScroll->setValue(0);
        TimeScroll->setOrientation(Qt::Horizontal);

        horizontalLayout_7->addWidget(TimeScroll);

        Panel11 = new QWidget(Panel12);
        Panel11->setObjectName(QStringLiteral("Panel11"));
        Panel11->setEnabled(true);
        sizePolicy1.setHeightForWidth(Panel11->sizePolicy().hasHeightForWidth());
        Panel11->setSizePolicy(sizePolicy1);
        horizontalLayout_6 = new QHBoxLayout(Panel11);
        horizontalLayout_6->setObjectName(QStringLiteral("horizontalLayout_6"));
        horizontalLayout_6->setContentsMargins(0, 0, 0, 0);
        horizontalSpacer_2 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_6->addItem(horizontalSpacer_2);

        ConnectMsg = new QLabel(Panel11);
        ConnectMsg->setObjectName(QStringLiteral("ConnectMsg"));
        ConnectMsg->setEnabled(true);

        horizontalLayout_6->addWidget(ConnectMsg);

        BtnClear = new QToolButton(Panel11);
        BtnClear->setObjectName(QStringLiteral("BtnClear"));
        BtnClear->setEnabled(true);
        BtnClear->setMaximumSize(QSize(25, 25));
        BtnClear->setIcon(icon5);

        horizontalLayout_6->addWidget(BtnClear);

        BtnReload = new QToolButton(Panel11);
        BtnReload->setObjectName(QStringLiteral("BtnReload"));
        BtnReload->setEnabled(true);
        BtnReload->setMaximumSize(QSize(25, 25));
        BtnReload->setIcon(icon4);

        horizontalLayout_6->addWidget(BtnReload);

        StrStatus = new QWidget(Panel11);
        StrStatus->setObjectName(QStringLiteral("StrStatus"));
        horizontalLayout_5 = new QHBoxLayout(StrStatus);
        horizontalLayout_5->setObjectName(QStringLiteral("horizontalLayout_5"));
        StrStatus1 = new QLabel(StrStatus);
        StrStatus1->setObjectName(QStringLiteral("StrStatus1"));
        StrStatus1->setEnabled(true);
        StrStatus1->setMaximumSize(QSize(25, 25));
        StrStatus1->setFrameShape(QFrame::Box);
        StrStatus1->setFrameShadow(QFrame::Sunken);

        horizontalLayout_5->addWidget(StrStatus1);

        StrStatus2 = new QLabel(StrStatus);
        StrStatus2->setObjectName(QStringLiteral("StrStatus2"));
        StrStatus2->setEnabled(true);
        StrStatus2->setMaximumSize(QSize(25, 25));
        StrStatus2->setFrameShape(QFrame::Box);
        StrStatus2->setFrameShadow(QFrame::Sunken);

        horizontalLayout_5->addWidget(StrStatus2);


        horizontalLayout_6->addWidget(StrStatus);

        BtnOptions = new QToolButton(Panel11);
        BtnOptions->setObjectName(QStringLiteral("BtnOptions"));
        BtnOptions->setEnabled(true);
        BtnOptions->setMaximumSize(QSize(25, 25));
        BtnOptions->setIcon(icon7);

        horizontalLayout_6->addWidget(BtnOptions);


        horizontalLayout_7->addWidget(Panel11);


        horizontalLayout_8->addWidget(Panel12);


        verticalLayout_3->addWidget(Panel1);

        Disp = new QLabel(mainWidget);
        Disp->setObjectName(QStringLiteral("Disp"));
        QSizePolicy sizePolicy5(QSizePolicy::Ignored, QSizePolicy::Ignored);
        sizePolicy5.setHorizontalStretch(0);
        sizePolicy5.setVerticalStretch(0);
        sizePolicy5.setHeightForWidth(Disp->sizePolicy().hasHeightForWidth());
        Disp->setSizePolicy(sizePolicy5);
        Disp->setAlignment(Qt::AlignCenter);

        verticalLayout_3->addWidget(Disp);

        RangeList = new QListWidget(mainWidget);
        new QListWidgetItem(RangeList);
        new QListWidgetItem(RangeList);
        new QListWidgetItem(RangeList);
        new QListWidgetItem(RangeList);
        new QListWidgetItem(RangeList);
        new QListWidgetItem(RangeList);
        new QListWidgetItem(RangeList);
        new QListWidgetItem(RangeList);
        new QListWidgetItem(RangeList);
        new QListWidgetItem(RangeList);
        new QListWidgetItem(RangeList);
        new QListWidgetItem(RangeList);
        new QListWidgetItem(RangeList);
        new QListWidgetItem(RangeList);
        new QListWidgetItem(RangeList);
        new QListWidgetItem(RangeList);
        new QListWidgetItem(RangeList);
        new QListWidgetItem(RangeList);
        new QListWidgetItem(RangeList);
        RangeList->setObjectName(QStringLiteral("RangeList"));
        RangeList->setEnabled(true);
        QSizePolicy sizePolicy6(QSizePolicy::Expanding, QSizePolicy::Fixed);
        sizePolicy6.setHorizontalStretch(0);
        sizePolicy6.setVerticalStretch(0);
        sizePolicy6.setHeightForWidth(RangeList->sizePolicy().hasHeightForWidth());
        RangeList->setSizePolicy(sizePolicy6);

        verticalLayout_3->addWidget(RangeList);

        BrowseSplitter->addWidget(mainWidget);
        PanelBrowse = new QWidget(BrowseSplitter);
        PanelBrowse->setObjectName(QStringLiteral("PanelBrowse"));
        verticalLayout1 = new QVBoxLayout(PanelBrowse);
        verticalLayout1->setObjectName(QStringLiteral("verticalLayout1"));
        Panel13 = new QWidget(PanelBrowse);
        Panel13->setObjectName(QStringLiteral("Panel13"));
        Panel13->setEnabled(true);
        sizePolicy1.setHeightForWidth(Panel13->sizePolicy().hasHeightForWidth());
        Panel13->setSizePolicy(sizePolicy1);
        Panel13->setLayoutDirection(Qt::LeftToRight);
        horizontalLayout_51 = new QHBoxLayout(Panel13);
        horizontalLayout_51->setSpacing(0);
        horizontalLayout_51->setObjectName(QStringLiteral("horizontalLayout_51"));
        horizontalLayout_51->setContentsMargins(0, 0, 0, 0);
        DriveSel = new QComboBox(Panel13);
        DriveSel->setObjectName(QStringLiteral("DriveSel"));

        horizontalLayout_51->addWidget(DriveSel);


        verticalLayout1->addWidget(Panel13);

        Panel2 = new QWidget(PanelBrowse);
        Panel2->setObjectName(QStringLiteral("Panel2"));
        Panel2->setEnabled(true);
        sizePolicy1.setHeightForWidth(Panel2->sizePolicy().hasHeightForWidth());
        Panel2->setSizePolicy(sizePolicy1);
        Panel2->setLayoutDirection(Qt::LeftToRight);
        verticalLayout_21 = new QVBoxLayout(Panel2);
        verticalLayout_21->setSpacing(0);
        verticalLayout_21->setObjectName(QStringLiteral("verticalLayout_21"));
        verticalLayout_21->setContentsMargins(0, 0, 0, -1);
        Panel5 = new QWidget(Panel2);
        Panel5->setObjectName(QStringLiteral("Panel5"));
        Panel5->setEnabled(true);
        Panel5->setLayoutDirection(Qt::LeftToRight);
        Panel5->setProperty("editable", QVariant(true));
        horizontalLayout1 = new QHBoxLayout(Panel5);
        horizontalLayout1->setSpacing(0);
        horizontalLayout1->setObjectName(QStringLiteral("horizontalLayout1"));
        horizontalLayout1->setContentsMargins(0, 0, 0, 0);
        DirSelected = new QLabel(Panel5);
        DirSelected->setObjectName(QStringLiteral("DirSelected"));

        horizontalLayout1->addWidget(DirSelected);

        BtnDirSel = new QToolButton(Panel5);
        BtnDirSel->setObjectName(QStringLiteral("BtnDirSel"));

        horizontalLayout1->addWidget(BtnDirSel);


        verticalLayout_21->addWidget(Panel5);


        verticalLayout1->addWidget(Panel2);

        FileList = new QListView(PanelBrowse);
        FileList->setObjectName(QStringLiteral("FileList"));
        FileList->setFrameShape(QFrame::StyledPanel);

        verticalLayout1->addWidget(FileList);

        Panel3 = new QWidget(PanelBrowse);
        Panel3->setObjectName(QStringLiteral("Panel3"));
        Panel3->setEnabled(true);
        sizePolicy1.setHeightForWidth(Panel3->sizePolicy().hasHeightForWidth());
        Panel3->setSizePolicy(sizePolicy1);
        Panel3->setLayoutDirection(Qt::LeftToRight);
        horizontalLayout_21 = new QHBoxLayout(Panel3);
        horizontalLayout_21->setSpacing(0);
        horizontalLayout_21->setObjectName(QStringLiteral("horizontalLayout_21"));
        horizontalLayout_21->setContentsMargins(0, 0, 0, 0);
        Filter = new QComboBox(Panel3);
        Filter->setObjectName(QStringLiteral("Filter"));

        horizontalLayout_21->addWidget(Filter);


        verticalLayout1->addWidget(Panel3);

        BrowseSplitter->addWidget(PanelBrowse);

        horizontalLayout_10->addWidget(BrowseSplitter);


        gridLayout->addWidget(widget_2, 0, 0, 1, 1);

        Plot->setCentralWidget(centralwidget);
        menubar = new QMenuBar(Plot);
        menubar->setObjectName(QStringLiteral("menubar"));
        menubar->setGeometry(QRect(0, 0, 1596, 27));
        MenuFile = new QMenu(menubar);
        MenuFile->setObjectName(QStringLiteral("MenuFile"));
        MenuFile->setEnabled(true);
        MenuEdit = new QMenu(menubar);
        MenuEdit->setObjectName(QStringLiteral("MenuEdit"));
        MenuEdit->setEnabled(true);
        MenuView = new QMenu(menubar);
        MenuView->setObjectName(QStringLiteral("MenuView"));
        MenuView->setEnabled(true);
        Windows1 = new QMenu(menubar);
        Windows1->setObjectName(QStringLiteral("Windows1"));
        Windows1->setEnabled(true);
        MenuHelp = new QMenu(menubar);
        MenuHelp->setObjectName(QStringLiteral("MenuHelp"));
        MenuHelp->setEnabled(true);
        Plot->setMenuBar(menubar);
        statusbar = new QStatusBar(Plot);
        statusbar->setObjectName(QStringLiteral("statusbar"));
        QSizePolicy sizePolicy7(QSizePolicy::MinimumExpanding, QSizePolicy::Preferred);
        sizePolicy7.setHorizontalStretch(0);
        sizePolicy7.setVerticalStretch(0);
        sizePolicy7.setHeightForWidth(statusbar->sizePolicy().hasHeightForWidth());
        statusbar->setSizePolicy(sizePolicy7);
        Panel21 = new QWidget(statusbar);
        Panel21->setObjectName(QStringLiteral("Panel21"));
        Panel21->setEnabled(true);
        Panel21->setGeometry(QRect(0, 0, 1081, 16));
        sizePolicy4.setHeightForWidth(Panel21->sizePolicy().hasHeightForWidth());
        Panel21->setSizePolicy(sizePolicy4);
        horizontalLayout_9 = new QHBoxLayout(Panel21);
        horizontalLayout_9->setSpacing(0);
        horizontalLayout_9->setObjectName(QStringLiteral("horizontalLayout_9"));
        horizontalLayout_9->setContentsMargins(0, 0, 0, 0);
        Message1 = new QLabel(Panel21);
        Message1->setObjectName(QStringLiteral("Message1"));
        Message1->setEnabled(true);
        sizePolicy3.setHeightForWidth(Message1->sizePolicy().hasHeightForWidth());
        Message1->setSizePolicy(sizePolicy3);

        horizontalLayout_9->addWidget(Message1);

        QL1 = new QLabel(Panel21);
        QL1->setObjectName(QStringLiteral("QL1"));
        QL1->setEnabled(true);
        sizePolicy3.setHeightForWidth(QL1->sizePolicy().hasHeightForWidth());
        QL1->setSizePolicy(sizePolicy3);

        horizontalLayout_9->addWidget(QL1);

        QL2 = new QLabel(Panel21);
        QL2->setObjectName(QStringLiteral("QL2"));
        QL2->setEnabled(true);
        sizePolicy3.setHeightForWidth(QL2->sizePolicy().hasHeightForWidth());
        QL2->setSizePolicy(sizePolicy3);

        horizontalLayout_9->addWidget(QL2);

        QL3 = new QLabel(Panel21);
        QL3->setObjectName(QStringLiteral("QL3"));
        QL3->setEnabled(true);
        sizePolicy3.setHeightForWidth(QL3->sizePolicy().hasHeightForWidth());
        QL3->setSizePolicy(sizePolicy3);

        horizontalLayout_9->addWidget(QL3);

        QL4 = new QLabel(Panel21);
        QL4->setObjectName(QStringLiteral("QL4"));
        QL4->setEnabled(true);
        sizePolicy3.setHeightForWidth(QL4->sizePolicy().hasHeightForWidth());
        QL4->setSizePolicy(sizePolicy3);

        horizontalLayout_9->addWidget(QL4);

        QL5 = new QLabel(Panel21);
        QL5->setObjectName(QStringLiteral("QL5"));
        QL5->setEnabled(true);
        sizePolicy3.setHeightForWidth(QL5->sizePolicy().hasHeightForWidth());
        QL5->setSizePolicy(sizePolicy3);

        horizontalLayout_9->addWidget(QL5);

        QL6 = new QLabel(Panel21);
        QL6->setObjectName(QStringLiteral("QL6"));
        QL6->setEnabled(true);
        sizePolicy3.setHeightForWidth(QL6->sizePolicy().hasHeightForWidth());
        QL6->setSizePolicy(sizePolicy3);

        horizontalLayout_9->addWidget(QL6);

        QL7 = new QLabel(Panel21);
        QL7->setObjectName(QStringLiteral("QL7"));
        QL7->setEnabled(true);
        sizePolicy3.setHeightForWidth(QL7->sizePolicy().hasHeightForWidth());
        QL7->setSizePolicy(sizePolicy3);

        horizontalLayout_9->addWidget(QL7);

        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_9->addItem(horizontalSpacer);

        Message2 = new QLabel(Panel21);
        Message2->setObjectName(QStringLiteral("Message2"));
        Message2->setEnabled(true);
        sizePolicy3.setHeightForWidth(Message2->sizePolicy().hasHeightForWidth());
        Message2->setSizePolicy(sizePolicy3);

        horizontalLayout_9->addWidget(Message2);

        BtnMessage2 = new QToolButton(Panel21);
        BtnMessage2->setObjectName(QStringLiteral("BtnMessage2"));
        BtnMessage2->setEnabled(true);
        BtnMessage2->setMaximumSize(QSize(16, 16));
        BtnMessage2->setIcon(icon18);

        horizontalLayout_9->addWidget(BtnMessage2);

        Plot->setStatusBar(statusbar);
        toolBar = new QToolBar(Plot);
        toolBar->setObjectName(QStringLiteral("toolBar"));
        Plot->addToolBar(Qt::TopToolBarArea, toolBar);

        menubar->addAction(MenuFile->menuAction());
        menubar->addAction(MenuEdit->menuAction());
        menubar->addAction(MenuView->menuAction());
        menubar->addAction(Windows1->menuAction());
        menubar->addAction(MenuHelp->menuAction());
        MenuFile->addAction(MenuOpenSol1);
        MenuFile->addAction(MenuOpenSol2);
        MenuFile->addAction(MenuOpenMapImage);
        MenuFile->addAction(MenuOpenSkyImage);
        MenuFile->addAction(MenuOpenShape);
        MenuFile->addAction(MenuOpenWaypoint);
        MenuFile->addSeparator();
        MenuFile->addAction(MenuOpenObs);
        MenuFile->addAction(MenuOpenNav);
        MenuFile->addAction(MenuOpenElevMask);
        MenuFile->addSeparator();
        MenuFile->addAction(MenuVisAna);
        MenuFile->addSeparator();
        MenuFile->addAction(MenuSaveImage);
        MenuFile->addAction(MenuSaveWaypoint);
        MenuFile->addAction(MenuSaveDop);
        MenuFile->addAction(MenuSaveSnrMp);
        MenuFile->addAction(MenuSaveElMask);
        MenuFile->addSeparator();
        MenuFile->addAction(MenuConnect);
        MenuFile->addAction(MenuDisconnect);
        MenuFile->addAction(MenuPort);
        MenuFile->addSeparator();
        MenuFile->addAction(MenuReload);
        MenuFile->addAction(MenuClear);
        MenuFile->addSeparator();
        MenuFile->addAction(MenuQuit);
        MenuEdit->addAction(MenuTime);
        MenuEdit->addAction(MenuMapImg);
        MenuEdit->addAction(MenuSkyImg);
        MenuEdit->addAction(MenuMapLayer);
        MenuEdit->addAction(MenuWaypnt);
        MenuEdit->addSeparator();
        MenuEdit->addAction(MenuSrcSol);
        MenuEdit->addAction(MenuSrcObs);
        MenuEdit->addAction(MenuQcObs);
        MenuEdit->addSeparator();
        MenuEdit->addAction(MenyCopy);
        MenuEdit->addSeparator();
        MenuEdit->addAction(MenuOptions);
        MenuView->addAction(MenuToolBar);
        MenuView->addAction(MenuStatusBar);
        MenuView->addAction(MenuBrowse);
        MenuView->addSeparator();
        MenuView->addAction(MenuGE);
        MenuView->addAction(MenuGM);
        MenuView->addSeparator();
        MenuView->addAction(MenuMonitor1);
        MenuView->addAction(MenuMonitor2);
        MenuView->addSeparator();
        MenuView->addAction(MenuCenterOri);
        MenuView->addAction(MenuFitHoriz);
        MenuView->addAction(MenuFitVert);
        MenuView->addSeparator();
        MenuView->addAction(MenuShowTrack);
        MenuView->addAction(MenuFixCent);
        MenuView->addAction(MenuFixHoriz);
        MenuView->addAction(MenuFixVert);
        MenuView->addSeparator();
        MenuView->addAction(MenuShowSkyplot);
        MenuView->addAction(MenuShowGrid);
        MenuView->addAction(MenuShowImg);
        MenuView->addAction(MenuShowMap);
        MenuView->addSeparator();
        MenuView->addAction(MenuAnimStart);
        MenuView->addAction(MenuAnimStop);
        Windows1->addAction(MenuMax);
        Windows1->addSeparator();
        Windows1->addAction(MenuPlotGE);
        Windows1->addAction(MenuPlotGM);
        Windows1->addAction(MenuPlotGEGM);
        MenuHelp->addAction(MenuAbout);

        retranslateUi(Plot);

        QMetaObject::connectSlotsByName(Plot);
    } // setupUi

    void retranslateUi(QMainWindow *Plot)
    {
        Plot->setWindowTitle(QApplication::translate("Plot", "Plot", Q_NULLPTR));
        MenuOpenSol1->setText(QApplication::translate("Plot", "Open Solution-&1...", Q_NULLPTR));
#ifndef QT_NO_SHORTCUT
        MenuOpenSol1->setShortcut(QApplication::translate("Plot", "Ctrl+S", Q_NULLPTR));
#endif // QT_NO_SHORTCUT
        MenuOpenSol2->setText(QApplication::translate("Plot", "Open Solution-&2...", Q_NULLPTR));
#ifndef QT_NO_SHORTCUT
        MenuOpenSol2->setShortcut(QApplication::translate("Plot", "Ctrl+Alt+S", Q_NULLPTR));
#endif // QT_NO_SHORTCUT
        MenuOpenMapImage->setText(QApplication::translate("Plot", "Open &Map Image...", Q_NULLPTR));
        MenuOpenShape->setText(QApplication::translate("Plot", "Open &Shapefile", Q_NULLPTR));
        MenuOpenSkyImage->setText(QApplication::translate("Plot", "Open S&ky Image...", Q_NULLPTR));
        MenuFileSel->setText(QApplication::translate("Plot", "&Browse Solutions...", Q_NULLPTR));
#ifndef QT_NO_SHORTCUT
        MenuFileSel->setShortcut(QApplication::translate("Plot", "Ctrl+B", Q_NULLPTR));
#endif // QT_NO_SHORTCUT
        MenuOpenObs->setText(QApplication::translate("Plot", "Open &Obs Data...", Q_NULLPTR));
#ifndef QT_NO_SHORTCUT
        MenuOpenObs->setShortcut(QApplication::translate("Plot", "Ctrl+O", Q_NULLPTR));
#endif // QT_NO_SHORTCUT
        MenuOpenNav->setText(QApplication::translate("Plot", "Open &Nav Data...", Q_NULLPTR));
#ifndef QT_NO_SHORTCUT
        MenuOpenNav->setShortcut(QApplication::translate("Plot", "Ctrl+N", Q_NULLPTR));
#endif // QT_NO_SHORTCUT
        MenuOpenElevMask->setText(QApplication::translate("Plot", "O&pen Elev Mask...", Q_NULLPTR));
        MenuVisAna->setText(QApplication::translate("Plot", "&Visibility Analysis...", Q_NULLPTR));
        MenuSaveImage->setText(QApplication::translate("Plot", "Save &Image...", Q_NULLPTR));
        MenuSaveDop->setText(QApplication::translate("Plot", "Save # o&f Sats/DOP...", Q_NULLPTR));
        MenuSaveSnrMp->setText(QApplication::translate("Plot", "Save A&Z/EL/SNR/MP...", Q_NULLPTR));
        MenuSaveElMask->setText(QApplication::translate("Plot", "S&ave Elev Mask...", Q_NULLPTR));
        MenuConnect->setText(QApplication::translate("Plot", "&Connect", Q_NULLPTR));
#ifndef QT_NO_SHORTCUT
        MenuConnect->setShortcut(QApplication::translate("Plot", "Ctrl+T", Q_NULLPTR));
#endif // QT_NO_SHORTCUT
        MenuDisconnect->setText(QApplication::translate("Plot", "&Disconnect", Q_NULLPTR));
        MenuPort->setText(QApplication::translate("Plot", "Connection Settin&gs...", Q_NULLPTR));
        MenuReload->setText(QApplication::translate("Plot", "&Reload", Q_NULLPTR));
#ifndef QT_NO_SHORTCUT
        MenuReload->setShortcut(QApplication::translate("Plot", "Ctrl+R", Q_NULLPTR));
#endif // QT_NO_SHORTCUT
        MenuClear->setText(QApplication::translate("Plot", "C&lear", Q_NULLPTR));
        MenuQuit->setText(QApplication::translate("Plot", "&Exit", Q_NULLPTR));
#ifndef QT_NO_SHORTCUT
        MenuQuit->setShortcut(QApplication::translate("Plot", "Ctrl+Q", Q_NULLPTR));
#endif // QT_NO_SHORTCUT
        MenuTime->setText(QApplication::translate("Plot", "&Time Span/Interval...", Q_NULLPTR));
#ifndef QT_NO_SHORTCUT
        MenuTime->setShortcut(QApplication::translate("Plot", "Ctrl+W", Q_NULLPTR));
#endif // QT_NO_SHORTCUT
        MenuMapImg->setText(QApplication::translate("Plot", "&Map Image...", Q_NULLPTR));
        MenuSkyImg->setText(QApplication::translate("Plot", "&Sky Image...", Q_NULLPTR));
        MenuWaypnt->setText(QApplication::translate("Plot", "&Waypoint...", Q_NULLPTR));
#ifndef QT_NO_SHORTCUT
        MenuWaypnt->setShortcut(QApplication::translate("Plot", "Ctrl+W", Q_NULLPTR));
#endif // QT_NO_SHORTCUT
        MenuSrcSol->setText(QApplication::translate("Plot", "So&lution Source...", Q_NULLPTR));
        MenuSrcObs->setText(QApplication::translate("Plot", "Obs &Data Source...", Q_NULLPTR));
        MenuQcObs->setText(QApplication::translate("Plot", "Obs Data &QC...", Q_NULLPTR));
        MenyCopy->setText(QApplication::translate("Plot", "&Copy To Clipboard", Q_NULLPTR));
#ifndef QT_NO_SHORTCUT
        MenyCopy->setShortcut(QApplication::translate("Plot", "Ctrl+C", Q_NULLPTR));
#endif // QT_NO_SHORTCUT
        MenuOptions->setText(QApplication::translate("Plot", "&Options...", Q_NULLPTR));
#ifndef QT_NO_SHORTCUT
        MenuOptions->setShortcut(QApplication::translate("Plot", "Ctrl+O", Q_NULLPTR));
#endif // QT_NO_SHORTCUT
        MenuToolBar->setText(QApplication::translate("Plot", "Show &Tool Bar", Q_NULLPTR));
        MenuStatusBar->setText(QApplication::translate("Plot", "Show &Status Bar", Q_NULLPTR));
        MenuGE->setText(QApplication::translate("Plot", "&Google Earth View...", Q_NULLPTR));
        MenuGM->setText(QApplication::translate("Plot", "Google &Map View...", Q_NULLPTR));
        MenuMonitor1->setText(QApplication::translate("Plot", "Input Monitor &1...", Q_NULLPTR));
        MenuMonitor2->setText(QApplication::translate("Plot", "Input Monitor &2...", Q_NULLPTR));
        MenuCenterOri->setText(QApplication::translate("Plot", "&Center Origin", Q_NULLPTR));
        MenuFitHoriz->setText(QApplication::translate("Plot", "Fit &Horizontal", Q_NULLPTR));
#ifndef QT_NO_SHORTCUT
        MenuFitHoriz->setShortcut(QApplication::translate("Plot", "Ctrl+H", Q_NULLPTR));
#endif // QT_NO_SHORTCUT
        MenuFitVert->setText(QApplication::translate("Plot", "Fit &Vertical", Q_NULLPTR));
#ifndef QT_NO_SHORTCUT
        MenuFitVert->setShortcut(QApplication::translate("Plot", "Ctrl+V", Q_NULLPTR));
#endif // QT_NO_SHORTCUT
        MenuShowTrack->setText(QApplication::translate("Plot", "Show Track &Point", Q_NULLPTR));
        MenuFixCent->setText(QApplication::translate("Plot", "&Fix Track Center", Q_NULLPTR));
        MenuFixHoriz->setText(QApplication::translate("Plot", "Fi&x Track Horizontal", Q_NULLPTR));
#ifndef QT_NO_SHORTCUT
        MenuFixHoriz->setShortcut(QApplication::translate("Plot", "Ctrl+V", Q_NULLPTR));
#endif // QT_NO_SHORTCUT
        MenuFixVert->setText(QApplication::translate("Plot", "Fix T&rack Vertical", Q_NULLPTR));
        MenuShowSkyplot->setText(QApplication::translate("Plot", "Sh&ow Skyplot", Q_NULLPTR));
        MenuShowImg->setText(QApplication::translate("Plot", "Show &Image", Q_NULLPTR));
        MenuShowMap->setText(QApplication::translate("Plot", "Show Map/&Waypoint", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        MenuShowMap->setToolTip(QApplication::translate("Plot", "Show Map/Waypoint", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
        MenuAnimStart->setText(QApplication::translate("Plot", "&Animation Start", Q_NULLPTR));
        MenuAnimStop->setText(QApplication::translate("Plot", "A&nimation Stop", Q_NULLPTR));
        MenuOverlap->setText(QApplication::translate("Plot", "&Overlapped", Q_NULLPTR));
        MenuMax->setText(QApplication::translate("Plot", "&Maximized", Q_NULLPTR));
        MenuPlotGE->setText(QApplication::translate("Plot", "Plot - &GE View Horizontal", Q_NULLPTR));
        MenuPlotGM->setText(QApplication::translate("Plot", "Plot - GM &View Horizontal", Q_NULLPTR));
        MenuPlotGEGM->setText(QApplication::translate("Plot", "Plot - GE/GM Views &Horizontal", Q_NULLPTR));
        MenuAbout->setText(QApplication::translate("Plot", "&About...", Q_NULLPTR));
        MenuOpenWaypoint->setText(QApplication::translate("Plot", "Open &Waypoint...", Q_NULLPTR));
        MenuSaveWaypoint->setText(QApplication::translate("Plot", "Save Wa&ypoint...", Q_NULLPTR));
        MenuMapLayer->setText(QApplication::translate("Plot", "Ma&p Layer...", Q_NULLPTR));
        MenuBrowse->setText(QApplication::translate("Plot", "Show &Browse Panel", Q_NULLPTR));
        MenuShowGrid->setText(QApplication::translate("Plot", "Show Gri&d", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        MenuShowGrid->setToolTip(QApplication::translate("Plot", "Show Grid", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
#ifndef QT_NO_TOOLTIP
        Panel1->setToolTip(QString());
#endif // QT_NO_TOOLTIP
        Panel1->setProperty("text", QVariant(QString()));
#ifndef QT_NO_TOOLTIP
        Panel10->setToolTip(QString());
#endif // QT_NO_TOOLTIP
        Panel10->setProperty("text", QVariant(QString()));
#ifndef QT_NO_TOOLTIP
        BtnConnect->setToolTip(QApplication::translate("Plot", "Connect/Disconnect", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
        BtnConnect->setText(QString());
#ifndef QT_NO_TOOLTIP
        BtnSol1->setToolTip(QApplication::translate("Plot", "Data 1", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
        BtnSol1->setText(QString());
#ifndef QT_NO_TOOLTIP
        BtnSol2->setToolTip(QApplication::translate("Plot", "Data 2", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
        BtnSol2->setText(QString());
#ifndef QT_NO_TOOLTIP
        BtnSol12->setToolTip(QApplication::translate("Plot", "Data 1-2", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
        BtnSol12->setText(QString());
#ifndef QT_NO_TOOLTIP
        Panel101->setToolTip(QString());
#endif // QT_NO_TOOLTIP
        Panel101->setProperty("text", QVariant(QString()));
#ifndef QT_NO_TOOLTIP
        PlotTypeS->setToolTip(QString());
#endif // QT_NO_TOOLTIP
#ifndef QT_NO_TOOLTIP
        Panel102->setToolTip(QString());
#endif // QT_NO_TOOLTIP
        Panel102->setProperty("text", QVariant(QString()));
#ifndef QT_NO_TOOLTIP
        BtnOn1->setToolTip(QApplication::translate("Plot", "Plot1", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
        BtnOn1->setText(QString());
#ifndef QT_NO_TOOLTIP
        BtnOn2->setToolTip(QApplication::translate("Plot", "Plot2", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
        BtnOn2->setText(QString());
#ifndef QT_NO_TOOLTIP
        BtnOn3->setToolTip(QApplication::translate("Plot", "Plot3", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
        BtnOn3->setText(QString());
#ifndef QT_NO_TOOLTIP
        Panel103->setToolTip(QString());
#endif // QT_NO_TOOLTIP
        Panel103->setProperty("text", QVariant(QString()));
        QFlag->clear();
        QFlag->insertItems(0, QStringList()
         << QApplication::translate("Plot", "ALL", Q_NULLPTR)
         << QApplication::translate("Plot", "Q=1", Q_NULLPTR)
         << QApplication::translate("Plot", "Q=2", Q_NULLPTR)
         << QApplication::translate("Plot", "Q=3", Q_NULLPTR)
         << QApplication::translate("Plot", "Q=4", Q_NULLPTR)
         << QApplication::translate("Plot", "Q=5", Q_NULLPTR)
         << QApplication::translate("Plot", "Q=6", Q_NULLPTR)
        );
#ifndef QT_NO_TOOLTIP
        QFlag->setToolTip(QApplication::translate("Plot", "Quality Flag", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
        ObsType2->clear();
        ObsType2->insertItems(0, QStringList()
         << QApplication::translate("Plot", "L1", Q_NULLPTR)
         << QApplication::translate("Plot", "L2", Q_NULLPTR)
        );
#ifndef QT_NO_TOOLTIP
        ObsType2->setToolTip(QApplication::translate("Plot", "Freq Type", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
#ifndef QT_NO_TOOLTIP
        ObsType->setToolTip(QApplication::translate("Plot", "Obs Type", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
        FrqType->clear();
        FrqType->insertItems(0, QStringList()
         << QApplication::translate("Plot", "L1", Q_NULLPTR)
         << QApplication::translate("Plot", "L2", Q_NULLPTR)
        );
#ifndef QT_NO_TOOLTIP
        FrqType->setToolTip(QApplication::translate("Plot", "Freq Type", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
        DopType->clear();
        DopType->insertItems(0, QStringList()
         << QApplication::translate("Plot", "ALL", Q_NULLPTR)
         << QApplication::translate("Plot", "NSAT", Q_NULLPTR)
         << QApplication::translate("Plot", "GDOP", Q_NULLPTR)
         << QApplication::translate("Plot", "PDOP", Q_NULLPTR)
         << QApplication::translate("Plot", "HDOP", Q_NULLPTR)
         << QApplication::translate("Plot", "VDOP", Q_NULLPTR)
        );
#ifndef QT_NO_TOOLTIP
        DopType->setToolTip(QApplication::translate("Plot", "Dop Type", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
#ifndef QT_NO_TOOLTIP
        Panel104->setToolTip(QString());
#endif // QT_NO_TOOLTIP
        Panel104->setProperty("text", QVariant(QString()));
#ifndef QT_NO_TOOLTIP
        BtnCenterOri->setToolTip(QApplication::translate("Plot", "Center Origin", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
        BtnCenterOri->setText(QString());
#ifndef QT_NO_TOOLTIP
        BtnRangeList->setToolTip(QString());
#endif // QT_NO_TOOLTIP
        BtnRangeList->setText(QString());
        SatList->clear();
        SatList->insertItems(0, QStringList()
         << QApplication::translate("Plot", "ALL", Q_NULLPTR)
        );
#ifndef QT_NO_TOOLTIP
        SatList->setToolTip(QApplication::translate("Plot", "Satllite List", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
#ifndef QT_NO_TOOLTIP
        BtnFitHoriz->setToolTip(QApplication::translate("Plot", "Fit Horizontal", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
        BtnFitHoriz->setText(QString());
#ifndef QT_NO_TOOLTIP
        BtnFitVert->setToolTip(QApplication::translate("Plot", "Fit Vertical", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
        BtnFitVert->setText(QString());
#ifndef QT_NO_TOOLTIP
        BtnShowTrack->setToolTip(QApplication::translate("Plot", "Show Track Point", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
        BtnShowTrack->setText(QString());
#ifndef QT_NO_TOOLTIP
        BtnShowSkyplot->setToolTip(QApplication::translate("Plot", "Show Skyplot", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
        BtnShowSkyplot->setText(QString());
#ifndef QT_NO_TOOLTIP
        BtnShowGrid->setToolTip(QApplication::translate("Plot", "Show Grid", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
        BtnShowGrid->setText(QApplication::translate("Plot", "...", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        BtnShowImg->setToolTip(QApplication::translate("Plot", "Map/Sky Image", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
        BtnShowImg->setText(QString());
#ifndef QT_NO_TOOLTIP
        BtnFixCent->setToolTip(QApplication::translate("Plot", "Fix Track Center", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
        BtnFixCent->setText(QString());
#ifndef QT_NO_TOOLTIP
        BtnFixHoriz->setToolTip(QApplication::translate("Plot", "Fix Track Horizotal", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
        BtnFixHoriz->setText(QString());
#ifndef QT_NO_TOOLTIP
        BtnFixVert->setToolTip(QApplication::translate("Plot", "Fix Track Vertical", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
        BtnFixVert->setText(QString());
#ifndef QT_NO_TOOLTIP
        BtnShowMap->setToolTip(QApplication::translate("Plot", "Show Map/Waypoint", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
        BtnShowMap->setText(QString());
#ifndef QT_NO_TOOLTIP
        BtnGE->setToolTip(QApplication::translate("Plot", "Google Earth View", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
        BtnGE->setText(QString());
#ifndef QT_NO_TOOLTIP
        BtnGM->setToolTip(QApplication::translate("Plot", "Google Map View", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
        BtnGM->setText(QString());
#ifndef QT_NO_TOOLTIP
        Panel12->setToolTip(QString());
#endif // QT_NO_TOOLTIP
        Panel12->setProperty("text", QVariant(QString()));
#ifndef QT_NO_TOOLTIP
        BtnAnimate->setToolTip(QApplication::translate("Plot", "Animation", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
        BtnAnimate->setText(QString());
#ifndef QT_NO_TOOLTIP
        TimeScroll->setToolTip(QApplication::translate("Plot", "Time Scroll", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
#ifndef QT_NO_TOOLTIP
        Panel11->setToolTip(QString());
#endif // QT_NO_TOOLTIP
        Panel11->setProperty("text", QVariant(QString()));
#ifndef QT_NO_TOOLTIP
        ConnectMsg->setToolTip(QString());
#endif // QT_NO_TOOLTIP
        ConnectMsg->setText(QString());
#ifndef QT_NO_TOOLTIP
        BtnClear->setToolTip(QApplication::translate("Plot", "Clear", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
        BtnClear->setText(QString());
#ifndef QT_NO_TOOLTIP
        BtnReload->setToolTip(QApplication::translate("Plot", "Reload", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
        BtnReload->setText(QString());
#ifndef QT_NO_TOOLTIP
        StrStatus1->setToolTip(QString());
#endif // QT_NO_TOOLTIP
        StrStatus1->setText(QString());
#ifndef QT_NO_TOOLTIP
        StrStatus2->setToolTip(QString());
#endif // QT_NO_TOOLTIP
        StrStatus2->setText(QString());
#ifndef QT_NO_TOOLTIP
        BtnOptions->setToolTip(QApplication::translate("Plot", "Options", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
        BtnOptions->setText(QString());

        const bool __sortingEnabled = RangeList->isSortingEnabled();
        RangeList->setSortingEnabled(false);
        QListWidgetItem *___qlistwidgetitem = RangeList->item(0);
        ___qlistwidgetitem->setText(QApplication::translate("Plot", "0.05", Q_NULLPTR));
        QListWidgetItem *___qlistwidgetitem1 = RangeList->item(1);
        ___qlistwidgetitem1->setText(QApplication::translate("Plot", "0.1", Q_NULLPTR));
        QListWidgetItem *___qlistwidgetitem2 = RangeList->item(2);
        ___qlistwidgetitem2->setText(QApplication::translate("Plot", "0.2", Q_NULLPTR));
        QListWidgetItem *___qlistwidgetitem3 = RangeList->item(3);
        ___qlistwidgetitem3->setText(QApplication::translate("Plot", "0.5", Q_NULLPTR));
        QListWidgetItem *___qlistwidgetitem4 = RangeList->item(4);
        ___qlistwidgetitem4->setText(QApplication::translate("Plot", "1", Q_NULLPTR));
        QListWidgetItem *___qlistwidgetitem5 = RangeList->item(5);
        ___qlistwidgetitem5->setText(QApplication::translate("Plot", "2", Q_NULLPTR));
        QListWidgetItem *___qlistwidgetitem6 = RangeList->item(6);
        ___qlistwidgetitem6->setText(QApplication::translate("Plot", "5", Q_NULLPTR));
        QListWidgetItem *___qlistwidgetitem7 = RangeList->item(7);
        ___qlistwidgetitem7->setText(QApplication::translate("Plot", "10", Q_NULLPTR));
        QListWidgetItem *___qlistwidgetitem8 = RangeList->item(8);
        ___qlistwidgetitem8->setText(QApplication::translate("Plot", "20", Q_NULLPTR));
        QListWidgetItem *___qlistwidgetitem9 = RangeList->item(9);
        ___qlistwidgetitem9->setText(QApplication::translate("Plot", "50", Q_NULLPTR));
        QListWidgetItem *___qlistwidgetitem10 = RangeList->item(10);
        ___qlistwidgetitem10->setText(QApplication::translate("Plot", "100", Q_NULLPTR));
        QListWidgetItem *___qlistwidgetitem11 = RangeList->item(11);
        ___qlistwidgetitem11->setText(QApplication::translate("Plot", "200", Q_NULLPTR));
        QListWidgetItem *___qlistwidgetitem12 = RangeList->item(12);
        ___qlistwidgetitem12->setText(QApplication::translate("Plot", "500", Q_NULLPTR));
        QListWidgetItem *___qlistwidgetitem13 = RangeList->item(13);
        ___qlistwidgetitem13->setText(QApplication::translate("Plot", "1000", Q_NULLPTR));
        QListWidgetItem *___qlistwidgetitem14 = RangeList->item(14);
        ___qlistwidgetitem14->setText(QApplication::translate("Plot", "2000", Q_NULLPTR));
        QListWidgetItem *___qlistwidgetitem15 = RangeList->item(15);
        ___qlistwidgetitem15->setText(QApplication::translate("Plot", "5000", Q_NULLPTR));
        QListWidgetItem *___qlistwidgetitem16 = RangeList->item(16);
        ___qlistwidgetitem16->setText(QApplication::translate("Plot", "10000", Q_NULLPTR));
        QListWidgetItem *___qlistwidgetitem17 = RangeList->item(17);
        ___qlistwidgetitem17->setText(QApplication::translate("Plot", "50000", Q_NULLPTR));
        QListWidgetItem *___qlistwidgetitem18 = RangeList->item(18);
        ___qlistwidgetitem18->setText(QApplication::translate("Plot", "100000", Q_NULLPTR));
        RangeList->setSortingEnabled(__sortingEnabled);

#ifndef QT_NO_TOOLTIP
        RangeList->setToolTip(QString());
#endif // QT_NO_TOOLTIP
#ifndef QT_NO_TOOLTIP
        Panel13->setToolTip(QString());
#endif // QT_NO_TOOLTIP
        Panel13->setProperty("text", QVariant(QString()));
#ifndef QT_NO_TOOLTIP
        Panel2->setToolTip(QString());
#endif // QT_NO_TOOLTIP
        Panel2->setProperty("text", QVariant(QString()));
#ifndef QT_NO_TOOLTIP
        Panel5->setToolTip(QString());
#endif // QT_NO_TOOLTIP
        Panel5->setProperty("text", QVariant(QString()));
        DirSelected->setText(QApplication::translate("Plot", "TextLabel", Q_NULLPTR));
        BtnDirSel->setText(QApplication::translate("Plot", "...", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        Panel3->setToolTip(QString());
#endif // QT_NO_TOOLTIP
        Panel3->setProperty("text", QVariant(QApplication::translate("Plot", "Panel3", Q_NULLPTR)));
        Filter->clear();
        Filter->insertItems(0, QStringList()
         << QApplication::translate("Plot", "Position File (*.pos *.nmea)", Q_NULLPTR)
         << QApplication::translate("Plot", "All (*.*)", Q_NULLPTR)
        );
#ifndef QT_NO_TOOLTIP
        MenuFile->setToolTip(QString());
#endif // QT_NO_TOOLTIP
        MenuFile->setTitle(QApplication::translate("Plot", "&File", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        MenuEdit->setToolTip(QString());
#endif // QT_NO_TOOLTIP
        MenuEdit->setTitle(QApplication::translate("Plot", "&Edit", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        MenuView->setToolTip(QString());
#endif // QT_NO_TOOLTIP
        MenuView->setTitle(QApplication::translate("Plot", "&View", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        Windows1->setToolTip(QString());
#endif // QT_NO_TOOLTIP
        Windows1->setTitle(QApplication::translate("Plot", "Wi&ndows", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        MenuHelp->setToolTip(QString());
#endif // QT_NO_TOOLTIP
        MenuHelp->setTitle(QApplication::translate("Plot", "&Help", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        Panel21->setToolTip(QString());
#endif // QT_NO_TOOLTIP
        Panel21->setProperty("text", QVariant(QString()));
#ifndef QT_NO_TOOLTIP
        Message1->setToolTip(QString());
#endif // QT_NO_TOOLTIP
        Message1->setText(QString());
#ifndef QT_NO_TOOLTIP
        QL1->setToolTip(QString());
#endif // QT_NO_TOOLTIP
        QL1->setText(QString());
#ifndef QT_NO_TOOLTIP
        QL2->setToolTip(QString());
#endif // QT_NO_TOOLTIP
        QL2->setText(QString());
#ifndef QT_NO_TOOLTIP
        QL3->setToolTip(QString());
#endif // QT_NO_TOOLTIP
        QL3->setText(QString());
#ifndef QT_NO_TOOLTIP
        QL4->setToolTip(QString());
#endif // QT_NO_TOOLTIP
        QL4->setText(QString());
#ifndef QT_NO_TOOLTIP
        QL5->setToolTip(QString());
#endif // QT_NO_TOOLTIP
        QL5->setText(QString());
#ifndef QT_NO_TOOLTIP
        QL6->setToolTip(QString());
#endif // QT_NO_TOOLTIP
        QL6->setText(QString());
#ifndef QT_NO_TOOLTIP
        QL7->setToolTip(QString());
#endif // QT_NO_TOOLTIP
        QL7->setText(QString());
#ifndef QT_NO_TOOLTIP
        Message2->setToolTip(QString());
#endif // QT_NO_TOOLTIP
        Message2->setText(QString());
        BtnMessage2->setText(QApplication::translate("Plot", "...", Q_NULLPTR));
        toolBar->setWindowTitle(QApplication::translate("Plot", "toolBar", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class Plot: public Ui_Plot {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_PLOTMAIN_H
