/********************************************************************************
** Form generated from reading UI file 'navimain.ui'
**
** Created by: Qt User Interface Compiler version 5.9.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_NAVIMAIN_H
#define UI_NAVIMAIN_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QScrollBar>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QSplitter>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainForm
{
public:
    QVBoxLayout *verticalLayout_2;
    QWidget *Panel1;
    QHBoxLayout *horizontalLayout_8;
    QPushButton *BtnPanel;
    QPushButton *BtnTimeSys;
    QLabel *LabelTime;
    QSpacerItem *horizontalSpacer;
    QWidget *Panel12;
    QHBoxLayout *horizontalLayout_7;
    QPushButton *BtnInputStr;
    QWidget *widget;
    QHBoxLayout *horizontalLayout_10;
    QLabel *Str1;
    QLabel *Str2;
    QLabel *Str3;
    QLabel *Image1;
    QLabel *Svr;
    QLabel *Image2;
    QLabel *Str4;
    QLabel *Str5;
    QLabel *Str6;
    QLabel *Str7;
    QLabel *Str8;
    QPushButton *BtnOutputStr;
    QPushButton *BtnLogStr;
    QWidget *Panel5;
    QHBoxLayout *horizontalLayout;
    QLabel *IndQ;
    QLabel *SolS;
    QLabel *SolQ;
    QPushButton *BtnSolType2;
    QWidget *Panel2;
    QHBoxLayout *horizontalLayout_9;
    QSplitter *splitter;
    QWidget *Panel21;
    QGridLayout *gridLayout_4;
    QWidget *Panel212;
    QHBoxLayout *horizontalLayout_6;
    QLabel *Plabel0;
    QLabel *IndSol;
    QWidget *Panel211;
    QGridLayout *gridLayout;
    QLabel *PlabelA;
    QLabel *Solution;
    QLabel *Plabel1;
    QLabel *Pos1;
    QLabel *Plabel2;
    QLabel *Pos2;
    QLabel *Plabel3;
    QLabel *Pos3;
    QLabel *LabelStd;
    QLabel *LabelNSat;
    QPushButton *BtnSolType;
    QWidget *Panel213;
    QHBoxLayout *horizontalLayout_5;
    QScrollBar *ScbSol;
    QPushButton *BtnSave;
    QWidget *Panel22;
    QGridLayout *gridLayout_2;
    QLabel *Disp1;
    QPushButton *BtnPlotType1;
    QPushButton *BtnFreqType1;
    QPushButton *BtnExpand1;
    QPushButton *BtnShrink1;
    QWidget *Panel23;
    QGridLayout *gridLayout_3;
    QLabel *Disp2;
    QPushButton *BtnExpand2;
    QPushButton *BtnFreqType2;
    QPushButton *BtnPlotType2;
    QPushButton *BtnShrink2;
    QWidget *Panel24;
    QGridLayout *gridLayout_5;
    QLabel *Disp3;
    QPushButton *BtnExpand3;
    QPushButton *BtnFreqType3;
    QPushButton *BtnPlotType3;
    QPushButton *BtnShrink3;
    QWidget *Panel25;
    QGridLayout *gridLayout_6;
    QLabel *Disp4;
    QPushButton *BtnExpand4;
    QPushButton *BtnFreqType4;
    QPushButton *BtnPlotType4;
    QPushButton *BtnShrink4;
    QWidget *Panel3;
    QHBoxLayout *horizontalLayout_4;
    QPushButton *BtnMonitor;
    QLabel *Message;
    QWidget *Panel33;
    QHBoxLayout *horizontalLayout_3;
    QPushButton *BtnTaskTray;
    QPushButton *BtnAbout;
    QWidget *Panel4;
    QHBoxLayout *horizontalLayout_2;
    QPushButton *BtnStart;
    QPushButton *BtnStop;
    QPushButton *BtnMark;
    QPushButton *BtnPlot;
    QPushButton *BtnOpt;
    QPushButton *BtnExit;

    void setupUi(QWidget *MainForm)
    {
        if (MainForm->objectName().isEmpty())
            MainForm->setObjectName(QStringLiteral("MainForm"));
        MainForm->resize(740, 438);
        verticalLayout_2 = new QVBoxLayout(MainForm);
        verticalLayout_2->setSpacing(0);
        verticalLayout_2->setObjectName(QStringLiteral("verticalLayout_2"));
        verticalLayout_2->setContentsMargins(0, 0, 0, 0);
        Panel1 = new QWidget(MainForm);
        Panel1->setObjectName(QStringLiteral("Panel1"));
        Panel1->setEnabled(true);
        QSizePolicy sizePolicy(QSizePolicy::Preferred, QSizePolicy::Fixed);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(Panel1->sizePolicy().hasHeightForWidth());
        Panel1->setSizePolicy(sizePolicy);
        horizontalLayout_8 = new QHBoxLayout(Panel1);
        horizontalLayout_8->setObjectName(QStringLiteral("horizontalLayout_8"));
        horizontalLayout_8->setContentsMargins(0, 0, 0, 0);
        BtnPanel = new QPushButton(Panel1);
        BtnPanel->setObjectName(QStringLiteral("BtnPanel"));
        BtnPanel->setEnabled(true);
        QSizePolicy sizePolicy1(QSizePolicy::Fixed, QSizePolicy::Fixed);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(BtnPanel->sizePolicy().hasHeightForWidth());
        BtnPanel->setSizePolicy(sizePolicy1);
        QIcon icon;
        icon.addFile(QStringLiteral(":/buttons/sqr.bmp"), QSize(), QIcon::Normal, QIcon::Off);
        BtnPanel->setIcon(icon);
        BtnPanel->setFlat(true);

        horizontalLayout_8->addWidget(BtnPanel);

        BtnTimeSys = new QPushButton(Panel1);
        BtnTimeSys->setObjectName(QStringLiteral("BtnTimeSys"));
        BtnTimeSys->setEnabled(true);
        BtnTimeSys->setFlat(true);

        horizontalLayout_8->addWidget(BtnTimeSys);

        LabelTime = new QLabel(Panel1);
        LabelTime->setObjectName(QStringLiteral("LabelTime"));
        LabelTime->setEnabled(true);

        horizontalLayout_8->addWidget(LabelTime);

        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_8->addItem(horizontalSpacer);

        Panel12 = new QWidget(Panel1);
        Panel12->setObjectName(QStringLiteral("Panel12"));
        Panel12->setEnabled(true);
        QSizePolicy sizePolicy2(QSizePolicy::Minimum, QSizePolicy::Preferred);
        sizePolicy2.setHorizontalStretch(0);
        sizePolicy2.setVerticalStretch(0);
        sizePolicy2.setHeightForWidth(Panel12->sizePolicy().hasHeightForWidth());
        Panel12->setSizePolicy(sizePolicy2);
        Panel12->setLayoutDirection(Qt::LeftToRight);
        horizontalLayout_7 = new QHBoxLayout(Panel12);
        horizontalLayout_7->setObjectName(QStringLiteral("horizontalLayout_7"));
        horizontalLayout_7->setContentsMargins(0, 0, 0, 0);
        BtnInputStr = new QPushButton(Panel12);
        BtnInputStr->setObjectName(QStringLiteral("BtnInputStr"));
        BtnInputStr->setEnabled(true);
        sizePolicy1.setHeightForWidth(BtnInputStr->sizePolicy().hasHeightForWidth());
        BtnInputStr->setSizePolicy(sizePolicy1);
        BtnInputStr->setMaximumSize(QSize(16777215, 16777215));

        horizontalLayout_7->addWidget(BtnInputStr);

        widget = new QWidget(Panel12);
        widget->setObjectName(QStringLiteral("widget"));
        horizontalLayout_10 = new QHBoxLayout(widget);
        horizontalLayout_10->setSpacing(0);
        horizontalLayout_10->setObjectName(QStringLiteral("horizontalLayout_10"));
        horizontalLayout_10->setContentsMargins(0, 0, 0, 0);
        Str1 = new QLabel(widget);
        Str1->setObjectName(QStringLiteral("Str1"));
        Str1->setEnabled(true);
        Str1->setMaximumSize(QSize(16777215, 20));
        Str1->setFrameShape(QFrame::Box);

        horizontalLayout_10->addWidget(Str1);

        Str2 = new QLabel(widget);
        Str2->setObjectName(QStringLiteral("Str2"));
        Str2->setEnabled(true);
        Str2->setMaximumSize(QSize(16777215, 20));
        Str2->setFrameShape(QFrame::Box);

        horizontalLayout_10->addWidget(Str2);

        Str3 = new QLabel(widget);
        Str3->setObjectName(QStringLiteral("Str3"));
        Str3->setEnabled(true);
        Str3->setMaximumSize(QSize(16777215, 20));
        Str3->setFrameShape(QFrame::Box);

        horizontalLayout_10->addWidget(Str3);

        Image1 = new QLabel(widget);
        Image1->setObjectName(QStringLiteral("Image1"));
        Image1->setEnabled(true);
        QSizePolicy sizePolicy3(QSizePolicy::Fixed, QSizePolicy::Ignored);
        sizePolicy3.setHorizontalStretch(0);
        sizePolicy3.setVerticalStretch(0);
        sizePolicy3.setHeightForWidth(Image1->sizePolicy().hasHeightForWidth());
        Image1->setSizePolicy(sizePolicy3);
        Image1->setMaximumSize(QSize(16777215, 20));
        Image1->setPixmap(QPixmap(QString::fromUtf8(":/buttons/rarrow.bmp")));

        horizontalLayout_10->addWidget(Image1);

        Svr = new QLabel(widget);
        Svr->setObjectName(QStringLiteral("Svr"));
        Svr->setEnabled(true);
        Svr->setMaximumSize(QSize(16777215, 20));
        Svr->setFrameShape(QFrame::Box);

        horizontalLayout_10->addWidget(Svr);

        Image2 = new QLabel(widget);
        Image2->setObjectName(QStringLiteral("Image2"));
        Image2->setEnabled(true);
        sizePolicy3.setHeightForWidth(Image2->sizePolicy().hasHeightForWidth());
        Image2->setSizePolicy(sizePolicy3);
        Image2->setMaximumSize(QSize(16777215, 20));
        Image2->setPixmap(QPixmap(QString::fromUtf8(":/buttons/rarrow.bmp")));

        horizontalLayout_10->addWidget(Image2);

        Str4 = new QLabel(widget);
        Str4->setObjectName(QStringLiteral("Str4"));
        Str4->setEnabled(true);
        Str4->setMaximumSize(QSize(16777215, 20));
        Str4->setFrameShape(QFrame::Box);

        horizontalLayout_10->addWidget(Str4);

        Str5 = new QLabel(widget);
        Str5->setObjectName(QStringLiteral("Str5"));
        Str5->setEnabled(true);
        Str5->setMaximumSize(QSize(16777215, 20));
        Str5->setFrameShape(QFrame::Box);

        horizontalLayout_10->addWidget(Str5);

        Str6 = new QLabel(widget);
        Str6->setObjectName(QStringLiteral("Str6"));
        Str6->setEnabled(true);
        Str6->setMaximumSize(QSize(16777215, 20));
        Str6->setFrameShape(QFrame::Box);

        horizontalLayout_10->addWidget(Str6);

        Str7 = new QLabel(widget);
        Str7->setObjectName(QStringLiteral("Str7"));
        Str7->setEnabled(true);
        Str7->setMaximumSize(QSize(16777215, 20));
        Str7->setFrameShape(QFrame::Box);

        horizontalLayout_10->addWidget(Str7);

        Str8 = new QLabel(widget);
        Str8->setObjectName(QStringLiteral("Str8"));
        Str8->setEnabled(true);
        Str8->setMaximumSize(QSize(16777215, 20));
        Str8->setFrameShape(QFrame::Box);

        horizontalLayout_10->addWidget(Str8);


        horizontalLayout_7->addWidget(widget);

        BtnOutputStr = new QPushButton(Panel12);
        BtnOutputStr->setObjectName(QStringLiteral("BtnOutputStr"));
        BtnOutputStr->setEnabled(true);
        sizePolicy1.setHeightForWidth(BtnOutputStr->sizePolicy().hasHeightForWidth());
        BtnOutputStr->setSizePolicy(sizePolicy1);

        horizontalLayout_7->addWidget(BtnOutputStr);

        BtnLogStr = new QPushButton(Panel12);
        BtnLogStr->setObjectName(QStringLiteral("BtnLogStr"));
        BtnLogStr->setEnabled(true);
        sizePolicy1.setHeightForWidth(BtnLogStr->sizePolicy().hasHeightForWidth());
        BtnLogStr->setSizePolicy(sizePolicy1);

        horizontalLayout_7->addWidget(BtnLogStr);


        horizontalLayout_8->addWidget(Panel12);


        verticalLayout_2->addWidget(Panel1);

        Panel5 = new QWidget(MainForm);
        Panel5->setObjectName(QStringLiteral("Panel5"));
        Panel5->setEnabled(true);
        sizePolicy.setHeightForWidth(Panel5->sizePolicy().hasHeightForWidth());
        Panel5->setSizePolicy(sizePolicy);
        horizontalLayout = new QHBoxLayout(Panel5);
        horizontalLayout->setSpacing(0);
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        horizontalLayout->setContentsMargins(0, 0, 0, 0);
        IndQ = new QLabel(Panel5);
        IndQ->setObjectName(QStringLiteral("IndQ"));
        IndQ->setEnabled(true);
        IndQ->setFrameShape(QFrame::Box);
        IndQ->setFrameShadow(QFrame::Sunken);

        horizontalLayout->addWidget(IndQ);

        SolS = new QLabel(Panel5);
        SolS->setObjectName(QStringLiteral("SolS"));
        SolS->setEnabled(true);

        horizontalLayout->addWidget(SolS);

        SolQ = new QLabel(Panel5);
        SolQ->setObjectName(QStringLiteral("SolQ"));
        SolQ->setEnabled(true);

        horizontalLayout->addWidget(SolQ);

        BtnSolType2 = new QPushButton(Panel5);
        BtnSolType2->setObjectName(QStringLiteral("BtnSolType2"));
        BtnSolType2->setEnabled(true);
        sizePolicy1.setHeightForWidth(BtnSolType2->sizePolicy().hasHeightForWidth());
        BtnSolType2->setSizePolicy(sizePolicy1);
        QIcon icon1;
        icon1.addFile(QStringLiteral(":/buttons/down.bmp"), QSize(), QIcon::Normal, QIcon::Off);
        BtnSolType2->setIcon(icon1);
        BtnSolType2->setFlat(true);

        horizontalLayout->addWidget(BtnSolType2);


        verticalLayout_2->addWidget(Panel5);

        Panel2 = new QWidget(MainForm);
        Panel2->setObjectName(QStringLiteral("Panel2"));
        Panel2->setEnabled(true);
        horizontalLayout_9 = new QHBoxLayout(Panel2);
        horizontalLayout_9->setObjectName(QStringLiteral("horizontalLayout_9"));
        splitter = new QSplitter(Panel2);
        splitter->setObjectName(QStringLiteral("splitter"));
        splitter->setOrientation(Qt::Horizontal);
        Panel21 = new QWidget(splitter);
        Panel21->setObjectName(QStringLiteral("Panel21"));
        Panel21->setEnabled(true);
        gridLayout_4 = new QGridLayout(Panel21);
        gridLayout_4->setSpacing(0);
        gridLayout_4->setObjectName(QStringLiteral("gridLayout_4"));
        gridLayout_4->setContentsMargins(0, 0, 0, 0);
        Panel212 = new QWidget(Panel21);
        Panel212->setObjectName(QStringLiteral("Panel212"));
        Panel212->setEnabled(true);
        sizePolicy.setHeightForWidth(Panel212->sizePolicy().hasHeightForWidth());
        Panel212->setSizePolicy(sizePolicy);
        horizontalLayout_6 = new QHBoxLayout(Panel212);
        horizontalLayout_6->setSpacing(0);
        horizontalLayout_6->setObjectName(QStringLiteral("horizontalLayout_6"));
        horizontalLayout_6->setContentsMargins(0, 0, 0, 0);
        Plabel0 = new QLabel(Panel212);
        Plabel0->setObjectName(QStringLiteral("Plabel0"));
        Plabel0->setEnabled(true);
        QPalette palette;
        QBrush brush(QColor(128, 128, 128, 255));
        brush.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Active, QPalette::WindowText, brush);
        palette.setBrush(QPalette::Inactive, QPalette::WindowText, brush);
        palette.setBrush(QPalette::Disabled, QPalette::WindowText, brush);
        Plabel0->setPalette(palette);

        horizontalLayout_6->addWidget(Plabel0);


        gridLayout_4->addWidget(Panel212, 0, 0, 1, 1);

        IndSol = new QLabel(Panel21);
        IndSol->setObjectName(QStringLiteral("IndSol"));
        IndSol->setEnabled(true);
        sizePolicy1.setHeightForWidth(IndSol->sizePolicy().hasHeightForWidth());
        IndSol->setSizePolicy(sizePolicy1);
        IndSol->setMaximumSize(QSize(20, 20));
        IndSol->setFrameShape(QFrame::Box);

        gridLayout_4->addWidget(IndSol, 0, 2, 1, 1);

        Panel211 = new QWidget(Panel21);
        Panel211->setObjectName(QStringLiteral("Panel211"));
        Panel211->setEnabled(true);
        Panel211->setLayoutDirection(Qt::LeftToRight);
        gridLayout = new QGridLayout(Panel211);
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        PlabelA = new QLabel(Panel211);
        PlabelA->setObjectName(QStringLiteral("PlabelA"));
        PlabelA->setEnabled(true);
        QPalette palette1;
        QBrush brush1(QColor(192, 192, 192, 255));
        brush1.setStyle(Qt::SolidPattern);
        palette1.setBrush(QPalette::Active, QPalette::WindowText, brush1);
        palette1.setBrush(QPalette::Inactive, QPalette::WindowText, brush1);
        palette1.setBrush(QPalette::Disabled, QPalette::WindowText, brush1);
        PlabelA->setPalette(palette1);

        gridLayout->addWidget(PlabelA, 0, 0, 1, 1);

        Solution = new QLabel(Panel211);
        Solution->setObjectName(QStringLiteral("Solution"));
        Solution->setEnabled(true);
        QPalette palette2;
        palette2.setBrush(QPalette::Active, QPalette::WindowText, brush);
        palette2.setBrush(QPalette::Inactive, QPalette::WindowText, brush);
        palette2.setBrush(QPalette::Disabled, QPalette::WindowText, brush);
        Solution->setPalette(palette2);

        gridLayout->addWidget(Solution, 0, 1, 1, 1);

        Plabel1 = new QLabel(Panel211);
        Plabel1->setObjectName(QStringLiteral("Plabel1"));
        Plabel1->setEnabled(true);
        QPalette palette3;
        QBrush brush2(QColor(0, 0, 0, 255));
        brush2.setStyle(Qt::SolidPattern);
        palette3.setBrush(QPalette::Active, QPalette::WindowText, brush2);
        palette3.setBrush(QPalette::Inactive, QPalette::WindowText, brush2);
        palette3.setBrush(QPalette::Disabled, QPalette::WindowText, brush2);
        Plabel1->setPalette(palette3);

        gridLayout->addWidget(Plabel1, 1, 0, 1, 1);

        Pos1 = new QLabel(Panel211);
        Pos1->setObjectName(QStringLiteral("Pos1"));
        Pos1->setEnabled(true);
        QPalette palette4;
        palette4.setBrush(QPalette::Active, QPalette::WindowText, brush2);
        palette4.setBrush(QPalette::Inactive, QPalette::WindowText, brush2);
        palette4.setBrush(QPalette::Disabled, QPalette::WindowText, brush2);
        Pos1->setPalette(palette4);

        gridLayout->addWidget(Pos1, 1, 1, 1, 2);

        Plabel2 = new QLabel(Panel211);
        Plabel2->setObjectName(QStringLiteral("Plabel2"));
        Plabel2->setEnabled(true);
        QPalette palette5;
        palette5.setBrush(QPalette::Active, QPalette::WindowText, brush2);
        palette5.setBrush(QPalette::Inactive, QPalette::WindowText, brush2);
        palette5.setBrush(QPalette::Disabled, QPalette::WindowText, brush2);
        Plabel2->setPalette(palette5);

        gridLayout->addWidget(Plabel2, 2, 0, 1, 1);

        Pos2 = new QLabel(Panel211);
        Pos2->setObjectName(QStringLiteral("Pos2"));
        Pos2->setEnabled(true);
        QPalette palette6;
        palette6.setBrush(QPalette::Active, QPalette::WindowText, brush2);
        palette6.setBrush(QPalette::Inactive, QPalette::WindowText, brush2);
        palette6.setBrush(QPalette::Disabled, QPalette::WindowText, brush2);
        Pos2->setPalette(palette6);

        gridLayout->addWidget(Pos2, 2, 1, 1, 2);

        Plabel3 = new QLabel(Panel211);
        Plabel3->setObjectName(QStringLiteral("Plabel3"));
        Plabel3->setEnabled(true);
        QPalette palette7;
        palette7.setBrush(QPalette::Active, QPalette::WindowText, brush2);
        palette7.setBrush(QPalette::Inactive, QPalette::WindowText, brush2);
        palette7.setBrush(QPalette::Disabled, QPalette::WindowText, brush2);
        Plabel3->setPalette(palette7);

        gridLayout->addWidget(Plabel3, 3, 0, 1, 1);

        Pos3 = new QLabel(Panel211);
        Pos3->setObjectName(QStringLiteral("Pos3"));
        Pos3->setEnabled(true);
        QPalette palette8;
        palette8.setBrush(QPalette::Active, QPalette::WindowText, brush2);
        palette8.setBrush(QPalette::Inactive, QPalette::WindowText, brush2);
        palette8.setBrush(QPalette::Disabled, QPalette::WindowText, brush2);
        Pos3->setPalette(palette8);

        gridLayout->addWidget(Pos3, 3, 1, 1, 2);

        LabelStd = new QLabel(Panel211);
        LabelStd->setObjectName(QStringLiteral("LabelStd"));
        LabelStd->setEnabled(true);
        QPalette palette9;
        palette9.setBrush(QPalette::Active, QPalette::WindowText, brush);
        palette9.setBrush(QPalette::Inactive, QPalette::WindowText, brush);
        palette9.setBrush(QPalette::Disabled, QPalette::WindowText, brush);
        LabelStd->setPalette(palette9);

        gridLayout->addWidget(LabelStd, 4, 0, 1, 3);

        LabelNSat = new QLabel(Panel211);
        LabelNSat->setObjectName(QStringLiteral("LabelNSat"));
        LabelNSat->setEnabled(true);
        QPalette palette10;
        palette10.setBrush(QPalette::Active, QPalette::WindowText, brush);
        palette10.setBrush(QPalette::Inactive, QPalette::WindowText, brush);
        palette10.setBrush(QPalette::Disabled, QPalette::WindowText, brush);
        LabelNSat->setPalette(palette10);

        gridLayout->addWidget(LabelNSat, 5, 0, 1, 3);


        gridLayout_4->addWidget(Panel211, 1, 0, 1, 3);

        BtnSolType = new QPushButton(Panel21);
        BtnSolType->setObjectName(QStringLiteral("BtnSolType"));
        BtnSolType->setEnabled(true);
        sizePolicy1.setHeightForWidth(BtnSolType->sizePolicy().hasHeightForWidth());
        BtnSolType->setSizePolicy(sizePolicy1);
        BtnSolType->setIcon(icon1);
        BtnSolType->setFlat(true);

        gridLayout_4->addWidget(BtnSolType, 0, 1, 1, 1);

        Panel213 = new QWidget(Panel21);
        Panel213->setObjectName(QStringLiteral("Panel213"));
        Panel213->setEnabled(true);
        sizePolicy.setHeightForWidth(Panel213->sizePolicy().hasHeightForWidth());
        Panel213->setSizePolicy(sizePolicy);
        horizontalLayout_5 = new QHBoxLayout(Panel213);
        horizontalLayout_5->setObjectName(QStringLiteral("horizontalLayout_5"));
        horizontalLayout_5->setContentsMargins(0, 0, 0, 0);
        ScbSol = new QScrollBar(Panel213);
        ScbSol->setObjectName(QStringLiteral("ScbSol"));
        ScbSol->setEnabled(true);
        QSizePolicy sizePolicy4(QSizePolicy::Expanding, QSizePolicy::Fixed);
        sizePolicy4.setHorizontalStretch(0);
        sizePolicy4.setVerticalStretch(0);
        sizePolicy4.setHeightForWidth(ScbSol->sizePolicy().hasHeightForWidth());
        ScbSol->setSizePolicy(sizePolicy4);
        ScbSol->setMinimum(0);
        ScbSol->setMaximum(0);
        ScbSol->setSingleStep(1);
        ScbSol->setValue(0);
        ScbSol->setOrientation(Qt::Horizontal);

        horizontalLayout_5->addWidget(ScbSol);

        BtnSave = new QPushButton(Panel213);
        BtnSave->setObjectName(QStringLiteral("BtnSave"));
        BtnSave->setEnabled(true);
        sizePolicy1.setHeightForWidth(BtnSave->sizePolicy().hasHeightForWidth());
        BtnSave->setSizePolicy(sizePolicy1);

        horizontalLayout_5->addWidget(BtnSave);


        gridLayout_4->addWidget(Panel213, 3, 0, 1, 3);

        splitter->addWidget(Panel21);
        Panel22 = new QWidget(splitter);
        Panel22->setObjectName(QStringLiteral("Panel22"));
        Panel22->setEnabled(true);
        gridLayout_2 = new QGridLayout(Panel22);
        gridLayout_2->setSpacing(0);
        gridLayout_2->setObjectName(QStringLiteral("gridLayout_2"));
        gridLayout_2->setContentsMargins(0, 0, 0, 0);
        Disp1 = new QLabel(Panel22);
        Disp1->setObjectName(QStringLiteral("Disp1"));
        Disp1->setEnabled(true);
        QSizePolicy sizePolicy5(QSizePolicy::Ignored, QSizePolicy::Ignored);
        sizePolicy5.setHorizontalStretch(0);
        sizePolicy5.setVerticalStretch(0);
        sizePolicy5.setHeightForWidth(Disp1->sizePolicy().hasHeightForWidth());
        Disp1->setSizePolicy(sizePolicy5);

        gridLayout_2->addWidget(Disp1, 1, 0, 1, 5);

        BtnPlotType1 = new QPushButton(Panel22);
        BtnPlotType1->setObjectName(QStringLiteral("BtnPlotType1"));
        BtnPlotType1->setEnabled(true);
        sizePolicy1.setHeightForWidth(BtnPlotType1->sizePolicy().hasHeightForWidth());
        BtnPlotType1->setSizePolicy(sizePolicy1);
        BtnPlotType1->setIcon(icon1);
        BtnPlotType1->setFlat(true);

        gridLayout_2->addWidget(BtnPlotType1, 0, 4, 1, 1);

        BtnFreqType1 = new QPushButton(Panel22);
        BtnFreqType1->setObjectName(QStringLiteral("BtnFreqType1"));
        BtnFreqType1->setEnabled(true);
        sizePolicy1.setHeightForWidth(BtnFreqType1->sizePolicy().hasHeightForWidth());
        BtnFreqType1->setSizePolicy(sizePolicy1);
        BtnFreqType1->setIcon(icon1);
        BtnFreqType1->setFlat(true);

        gridLayout_2->addWidget(BtnFreqType1, 0, 3, 1, 1);

        BtnExpand1 = new QPushButton(Panel22);
        BtnExpand1->setObjectName(QStringLiteral("BtnExpand1"));
        sizePolicy1.setHeightForWidth(BtnExpand1->sizePolicy().hasHeightForWidth());
        BtnExpand1->setSizePolicy(sizePolicy1);
        QIcon icon2;
        icon2.addFile(QStringLiteral(":/buttons/expand.bmp"), QSize(), QIcon::Normal, QIcon::Off);
        BtnExpand1->setIcon(icon2);
        BtnExpand1->setFlat(true);

        gridLayout_2->addWidget(BtnExpand1, 0, 0, 1, 1);

        BtnShrink1 = new QPushButton(Panel22);
        BtnShrink1->setObjectName(QStringLiteral("BtnShrink1"));
        sizePolicy1.setHeightForWidth(BtnShrink1->sizePolicy().hasHeightForWidth());
        BtnShrink1->setSizePolicy(sizePolicy1);
        QIcon icon3;
        icon3.addFile(QStringLiteral(":/buttons/shrink.bmp"), QSize(), QIcon::Normal, QIcon::Off);
        BtnShrink1->setIcon(icon3);
        BtnShrink1->setFlat(true);

        gridLayout_2->addWidget(BtnShrink1, 0, 1, 1, 1);

        splitter->addWidget(Panel22);
        Panel23 = new QWidget(splitter);
        Panel23->setObjectName(QStringLiteral("Panel23"));
        Panel23->setEnabled(true);
        gridLayout_3 = new QGridLayout(Panel23);
        gridLayout_3->setSpacing(0);
        gridLayout_3->setObjectName(QStringLiteral("gridLayout_3"));
        gridLayout_3->setContentsMargins(0, 0, 0, 0);
        Disp2 = new QLabel(Panel23);
        Disp2->setObjectName(QStringLiteral("Disp2"));
        Disp2->setEnabled(true);
        sizePolicy5.setHeightForWidth(Disp2->sizePolicy().hasHeightForWidth());
        Disp2->setSizePolicy(sizePolicy5);

        gridLayout_3->addWidget(Disp2, 2, 0, 1, 5);

        BtnExpand2 = new QPushButton(Panel23);
        BtnExpand2->setObjectName(QStringLiteral("BtnExpand2"));
        sizePolicy1.setHeightForWidth(BtnExpand2->sizePolicy().hasHeightForWidth());
        BtnExpand2->setSizePolicy(sizePolicy1);
        BtnExpand2->setIcon(icon2);
        BtnExpand2->setFlat(true);

        gridLayout_3->addWidget(BtnExpand2, 0, 0, 1, 1);

        BtnFreqType2 = new QPushButton(Panel23);
        BtnFreqType2->setObjectName(QStringLiteral("BtnFreqType2"));
        BtnFreqType2->setEnabled(true);
        sizePolicy1.setHeightForWidth(BtnFreqType2->sizePolicy().hasHeightForWidth());
        BtnFreqType2->setSizePolicy(sizePolicy1);
        BtnFreqType2->setIcon(icon1);
        BtnFreqType2->setFlat(true);

        gridLayout_3->addWidget(BtnFreqType2, 0, 3, 1, 1);

        BtnPlotType2 = new QPushButton(Panel23);
        BtnPlotType2->setObjectName(QStringLiteral("BtnPlotType2"));
        BtnPlotType2->setEnabled(true);
        sizePolicy1.setHeightForWidth(BtnPlotType2->sizePolicy().hasHeightForWidth());
        BtnPlotType2->setSizePolicy(sizePolicy1);
        BtnPlotType2->setIcon(icon1);
        BtnPlotType2->setFlat(true);

        gridLayout_3->addWidget(BtnPlotType2, 0, 4, 1, 1);

        BtnShrink2 = new QPushButton(Panel23);
        BtnShrink2->setObjectName(QStringLiteral("BtnShrink2"));
        sizePolicy1.setHeightForWidth(BtnShrink2->sizePolicy().hasHeightForWidth());
        BtnShrink2->setSizePolicy(sizePolicy1);
        BtnShrink2->setIcon(icon3);
        BtnShrink2->setFlat(true);

        gridLayout_3->addWidget(BtnShrink2, 0, 1, 1, 1);

        splitter->addWidget(Panel23);
        Panel24 = new QWidget(splitter);
        Panel24->setObjectName(QStringLiteral("Panel24"));
        Panel24->setEnabled(true);
        gridLayout_5 = new QGridLayout(Panel24);
        gridLayout_5->setSpacing(0);
        gridLayout_5->setObjectName(QStringLiteral("gridLayout_5"));
        gridLayout_5->setContentsMargins(0, 0, 0, 0);
        Disp3 = new QLabel(Panel24);
        Disp3->setObjectName(QStringLiteral("Disp3"));
        Disp3->setEnabled(true);
        sizePolicy5.setHeightForWidth(Disp3->sizePolicy().hasHeightForWidth());
        Disp3->setSizePolicy(sizePolicy5);

        gridLayout_5->addWidget(Disp3, 2, 0, 1, 5);

        BtnExpand3 = new QPushButton(Panel24);
        BtnExpand3->setObjectName(QStringLiteral("BtnExpand3"));
        sizePolicy1.setHeightForWidth(BtnExpand3->sizePolicy().hasHeightForWidth());
        BtnExpand3->setSizePolicy(sizePolicy1);
        BtnExpand3->setIcon(icon2);
        BtnExpand3->setFlat(true);

        gridLayout_5->addWidget(BtnExpand3, 0, 0, 1, 1);

        BtnFreqType3 = new QPushButton(Panel24);
        BtnFreqType3->setObjectName(QStringLiteral("BtnFreqType3"));
        BtnFreqType3->setEnabled(true);
        sizePolicy1.setHeightForWidth(BtnFreqType3->sizePolicy().hasHeightForWidth());
        BtnFreqType3->setSizePolicy(sizePolicy1);
        BtnFreqType3->setIcon(icon1);
        BtnFreqType3->setFlat(true);

        gridLayout_5->addWidget(BtnFreqType3, 0, 3, 1, 1);

        BtnPlotType3 = new QPushButton(Panel24);
        BtnPlotType3->setObjectName(QStringLiteral("BtnPlotType3"));
        BtnPlotType3->setEnabled(true);
        sizePolicy1.setHeightForWidth(BtnPlotType3->sizePolicy().hasHeightForWidth());
        BtnPlotType3->setSizePolicy(sizePolicy1);
        BtnPlotType3->setIcon(icon1);
        BtnPlotType3->setFlat(true);

        gridLayout_5->addWidget(BtnPlotType3, 0, 4, 1, 1);

        BtnShrink3 = new QPushButton(Panel24);
        BtnShrink3->setObjectName(QStringLiteral("BtnShrink3"));
        sizePolicy1.setHeightForWidth(BtnShrink3->sizePolicy().hasHeightForWidth());
        BtnShrink3->setSizePolicy(sizePolicy1);
        BtnShrink3->setIcon(icon3);
        BtnShrink3->setFlat(true);

        gridLayout_5->addWidget(BtnShrink3, 0, 1, 1, 1);

        splitter->addWidget(Panel24);
        Panel25 = new QWidget(splitter);
        Panel25->setObjectName(QStringLiteral("Panel25"));
        Panel25->setEnabled(true);
        gridLayout_6 = new QGridLayout(Panel25);
        gridLayout_6->setSpacing(0);
        gridLayout_6->setObjectName(QStringLiteral("gridLayout_6"));
        gridLayout_6->setContentsMargins(0, 0, 0, 0);
        Disp4 = new QLabel(Panel25);
        Disp4->setObjectName(QStringLiteral("Disp4"));
        Disp4->setEnabled(true);
        sizePolicy5.setHeightForWidth(Disp4->sizePolicy().hasHeightForWidth());
        Disp4->setSizePolicy(sizePolicy5);

        gridLayout_6->addWidget(Disp4, 2, 0, 1, 5);

        BtnExpand4 = new QPushButton(Panel25);
        BtnExpand4->setObjectName(QStringLiteral("BtnExpand4"));
        sizePolicy1.setHeightForWidth(BtnExpand4->sizePolicy().hasHeightForWidth());
        BtnExpand4->setSizePolicy(sizePolicy1);
        BtnExpand4->setIcon(icon2);
        BtnExpand4->setFlat(true);

        gridLayout_6->addWidget(BtnExpand4, 0, 0, 1, 1);

        BtnFreqType4 = new QPushButton(Panel25);
        BtnFreqType4->setObjectName(QStringLiteral("BtnFreqType4"));
        BtnFreqType4->setEnabled(true);
        sizePolicy1.setHeightForWidth(BtnFreqType4->sizePolicy().hasHeightForWidth());
        BtnFreqType4->setSizePolicy(sizePolicy1);
        BtnFreqType4->setIcon(icon1);
        BtnFreqType4->setFlat(true);

        gridLayout_6->addWidget(BtnFreqType4, 0, 3, 1, 1);

        BtnPlotType4 = new QPushButton(Panel25);
        BtnPlotType4->setObjectName(QStringLiteral("BtnPlotType4"));
        BtnPlotType4->setEnabled(true);
        sizePolicy1.setHeightForWidth(BtnPlotType4->sizePolicy().hasHeightForWidth());
        BtnPlotType4->setSizePolicy(sizePolicy1);
        BtnPlotType4->setIcon(icon1);
        BtnPlotType4->setFlat(true);

        gridLayout_6->addWidget(BtnPlotType4, 0, 4, 1, 1);

        BtnShrink4 = new QPushButton(Panel25);
        BtnShrink4->setObjectName(QStringLiteral("BtnShrink4"));
        sizePolicy1.setHeightForWidth(BtnShrink4->sizePolicy().hasHeightForWidth());
        BtnShrink4->setSizePolicy(sizePolicy1);
        BtnShrink4->setIcon(icon3);
        BtnShrink4->setFlat(true);

        gridLayout_6->addWidget(BtnShrink4, 0, 1, 1, 1);

        splitter->addWidget(Panel25);

        horizontalLayout_9->addWidget(splitter);


        verticalLayout_2->addWidget(Panel2);

        Panel3 = new QWidget(MainForm);
        Panel3->setObjectName(QStringLiteral("Panel3"));
        Panel3->setEnabled(true);
        sizePolicy.setHeightForWidth(Panel3->sizePolicy().hasHeightForWidth());
        Panel3->setSizePolicy(sizePolicy);
        horizontalLayout_4 = new QHBoxLayout(Panel3);
        horizontalLayout_4->setSpacing(0);
        horizontalLayout_4->setObjectName(QStringLiteral("horizontalLayout_4"));
        horizontalLayout_4->setContentsMargins(0, 0, 0, 0);
        BtnMonitor = new QPushButton(Panel3);
        BtnMonitor->setObjectName(QStringLiteral("BtnMonitor"));
        BtnMonitor->setEnabled(true);
        BtnMonitor->setIcon(icon);
        BtnMonitor->setFlat(true);

        horizontalLayout_4->addWidget(BtnMonitor);

        Message = new QLabel(Panel3);
        Message->setObjectName(QStringLiteral("Message"));
        Message->setEnabled(true);
        QSizePolicy sizePolicy6(QSizePolicy::Expanding, QSizePolicy::Minimum);
        sizePolicy6.setHorizontalStretch(0);
        sizePolicy6.setVerticalStretch(0);
        sizePolicy6.setHeightForWidth(Message->sizePolicy().hasHeightForWidth());
        Message->setSizePolicy(sizePolicy6);

        horizontalLayout_4->addWidget(Message);

        Panel33 = new QWidget(Panel3);
        Panel33->setObjectName(QStringLiteral("Panel33"));
        Panel33->setEnabled(true);
        horizontalLayout_3 = new QHBoxLayout(Panel33);
        horizontalLayout_3->setSpacing(0);
        horizontalLayout_3->setObjectName(QStringLiteral("horizontalLayout_3"));
        horizontalLayout_3->setContentsMargins(0, 0, 0, 0);
        BtnTaskTray = new QPushButton(Panel33);
        BtnTaskTray->setObjectName(QStringLiteral("BtnTaskTray"));
        BtnTaskTray->setEnabled(true);
        QSizePolicy sizePolicy7(QSizePolicy::Minimum, QSizePolicy::Ignored);
        sizePolicy7.setHorizontalStretch(0);
        sizePolicy7.setVerticalStretch(0);
        sizePolicy7.setHeightForWidth(BtnTaskTray->sizePolicy().hasHeightForWidth());
        BtnTaskTray->setSizePolicy(sizePolicy7);
        QIcon icon4;
        icon4.addFile(QStringLiteral(":/buttons/ttray.bmp"), QSize(), QIcon::Normal, QIcon::Off);
        BtnTaskTray->setIcon(icon4);
        BtnTaskTray->setFlat(true);

        horizontalLayout_3->addWidget(BtnTaskTray);

        BtnAbout = new QPushButton(Panel33);
        BtnAbout->setObjectName(QStringLiteral("BtnAbout"));
        BtnAbout->setEnabled(true);
        sizePolicy3.setHeightForWidth(BtnAbout->sizePolicy().hasHeightForWidth());
        BtnAbout->setSizePolicy(sizePolicy3);
        BtnAbout->setFlat(true);

        horizontalLayout_3->addWidget(BtnAbout);


        horizontalLayout_4->addWidget(Panel33);


        verticalLayout_2->addWidget(Panel3);

        Panel4 = new QWidget(MainForm);
        Panel4->setObjectName(QStringLiteral("Panel4"));
        Panel4->setEnabled(true);
        sizePolicy.setHeightForWidth(Panel4->sizePolicy().hasHeightForWidth());
        Panel4->setSizePolicy(sizePolicy);
        horizontalLayout_2 = new QHBoxLayout(Panel4);
        horizontalLayout_2->setObjectName(QStringLiteral("horizontalLayout_2"));
        horizontalLayout_2->setContentsMargins(0, 0, 0, 0);
        BtnStart = new QPushButton(Panel4);
        BtnStart->setObjectName(QStringLiteral("BtnStart"));
        BtnStart->setEnabled(true);
        QIcon icon5;
        icon5.addFile(QStringLiteral(":/buttons/start.bmp"), QSize(), QIcon::Normal, QIcon::Off);
        BtnStart->setIcon(icon5);

        horizontalLayout_2->addWidget(BtnStart);

        BtnStop = new QPushButton(Panel4);
        BtnStop->setObjectName(QStringLiteral("BtnStop"));
        QIcon icon6;
        icon6.addFile(QStringLiteral(":/buttons/stop2.bmp"), QSize(), QIcon::Normal, QIcon::Off);
        BtnStop->setIcon(icon6);

        horizontalLayout_2->addWidget(BtnStop);

        BtnMark = new QPushButton(Panel4);
        BtnMark->setObjectName(QStringLiteral("BtnMark"));
        QIcon icon7;
        icon7.addFile(QStringLiteral(":/buttons/point.bmp"), QSize(), QIcon::Normal, QIcon::Off);
        BtnMark->setIcon(icon7);

        horizontalLayout_2->addWidget(BtnMark);

        BtnPlot = new QPushButton(Panel4);
        BtnPlot->setObjectName(QStringLiteral("BtnPlot"));
        BtnPlot->setEnabled(true);
        QIcon icon8;
        icon8.addFile(QStringLiteral(":/buttons/chart.bmp"), QSize(), QIcon::Normal, QIcon::Off);
        BtnPlot->setIcon(icon8);

        horizontalLayout_2->addWidget(BtnPlot);

        BtnOpt = new QPushButton(Panel4);
        BtnOpt->setObjectName(QStringLiteral("BtnOpt"));
        BtnOpt->setEnabled(true);
        QIcon icon9;
        icon9.addFile(QStringLiteral(":/buttons/toolbmp"), QSize(), QIcon::Normal, QIcon::Off);
        BtnOpt->setIcon(icon9);

        horizontalLayout_2->addWidget(BtnOpt);

        BtnExit = new QPushButton(Panel4);
        BtnExit->setObjectName(QStringLiteral("BtnExit"));
        BtnExit->setEnabled(true);
        BtnExit->setAutoDefault(true);

        horizontalLayout_2->addWidget(BtnExit);


        verticalLayout_2->addWidget(Panel4);


        retranslateUi(MainForm);

        BtnExit->setDefault(true);


        QMetaObject::connectSlotsByName(MainForm);
    } // setupUi

    void retranslateUi(QWidget *MainForm)
    {
        MainForm->setWindowTitle(QApplication::translate("MainForm", "RTKNAVI", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        MainForm->setToolTip(QString());
#endif // QT_NO_TOOLTIP
#ifndef QT_NO_TOOLTIP
        Panel1->setToolTip(QString());
#endif // QT_NO_TOOLTIP
        Panel1->setProperty("text", QVariant(QString()));
#ifndef QT_NO_TOOLTIP
        BtnPanel->setToolTip(QString());
#endif // QT_NO_TOOLTIP
#ifndef QT_NO_TOOLTIP
        BtnTimeSys->setToolTip(QString());
#endif // QT_NO_TOOLTIP
        BtnTimeSys->setText(QApplication::translate("MainForm", "GPST", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        LabelTime->setToolTip(QString());
#endif // QT_NO_TOOLTIP
        LabelTime->setText(QApplication::translate("MainForm", "2000/01/01 00:00:00.0", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        Panel12->setToolTip(QString());
#endif // QT_NO_TOOLTIP
        Panel12->setProperty("text", QVariant(QString()));
#ifndef QT_NO_TOOLTIP
        BtnInputStr->setToolTip(QApplication::translate("MainForm", "Input Streams", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
        BtnInputStr->setText(QApplication::translate("MainForm", "I", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        Str1->setToolTip(QString());
#endif // QT_NO_TOOLTIP
#ifndef QT_NO_TOOLTIP
        Str2->setToolTip(QString());
#endif // QT_NO_TOOLTIP
#ifndef QT_NO_TOOLTIP
        Str3->setToolTip(QString());
#endif // QT_NO_TOOLTIP
#ifndef QT_NO_TOOLTIP
        Image1->setToolTip(QString());
#endif // QT_NO_TOOLTIP
#ifndef QT_NO_TOOLTIP
        Svr->setToolTip(QString());
#endif // QT_NO_TOOLTIP
#ifndef QT_NO_TOOLTIP
        Image2->setToolTip(QString());
#endif // QT_NO_TOOLTIP
#ifndef QT_NO_TOOLTIP
        Str4->setToolTip(QString());
#endif // QT_NO_TOOLTIP
#ifndef QT_NO_TOOLTIP
        Str5->setToolTip(QString());
#endif // QT_NO_TOOLTIP
#ifndef QT_NO_TOOLTIP
        Str6->setToolTip(QString());
#endif // QT_NO_TOOLTIP
#ifndef QT_NO_TOOLTIP
        Str7->setToolTip(QString());
#endif // QT_NO_TOOLTIP
#ifndef QT_NO_TOOLTIP
        Str8->setToolTip(QString());
#endif // QT_NO_TOOLTIP
#ifndef QT_NO_TOOLTIP
        BtnOutputStr->setToolTip(QApplication::translate("MainForm", "Output Streams", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
        BtnOutputStr->setText(QApplication::translate("MainForm", "O", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        BtnLogStr->setToolTip(QApplication::translate("MainForm", "Log Streams", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
        BtnLogStr->setText(QApplication::translate("MainForm", "L", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        Panel5->setToolTip(QString());
#endif // QT_NO_TOOLTIP
        Panel5->setProperty("text", QVariant(QString()));
#ifndef QT_NO_TOOLTIP
        IndQ->setToolTip(QString());
#endif // QT_NO_TOOLTIP
        IndQ->setText(QString());
#ifndef QT_NO_TOOLTIP
        SolS->setToolTip(QString());
#endif // QT_NO_TOOLTIP
        SolS->setText(QApplication::translate("MainForm", "----", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        SolQ->setToolTip(QString());
#endif // QT_NO_TOOLTIP
        SolQ->setText(QApplication::translate("MainForm", "Solution", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        BtnSolType2->setToolTip(QString());
#endif // QT_NO_TOOLTIP
        BtnSolType2->setText(QString());
#ifndef QT_NO_TOOLTIP
        Panel2->setToolTip(QString());
#endif // QT_NO_TOOLTIP
        Panel2->setProperty("text", QVariant(QString()));
#ifndef QT_NO_TOOLTIP
        Panel21->setToolTip(QString());
#endif // QT_NO_TOOLTIP
        Panel21->setProperty("text", QVariant(QString()));
#ifndef QT_NO_TOOLTIP
        Panel212->setToolTip(QString());
#endif // QT_NO_TOOLTIP
        Panel212->setProperty("text", QVariant(QString()));
#ifndef QT_NO_TOOLTIP
        Plabel0->setToolTip(QString());
#endif // QT_NO_TOOLTIP
        Plabel0->setText(QApplication::translate("MainForm", "Lat/Lon/Height", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        IndSol->setToolTip(QString());
#endif // QT_NO_TOOLTIP
#ifndef QT_NO_TOOLTIP
        Panel211->setToolTip(QString());
#endif // QT_NO_TOOLTIP
        Panel211->setProperty("text", QVariant(QString()));
#ifndef QT_NO_TOOLTIP
        PlabelA->setToolTip(QString());
#endif // QT_NO_TOOLTIP
        PlabelA->setText(QApplication::translate("MainForm", "Solution:", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        Solution->setToolTip(QString());
#endif // QT_NO_TOOLTIP
        Solution->setText(QApplication::translate("MainForm", "----", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        Plabel1->setToolTip(QString());
#endif // QT_NO_TOOLTIP
        Plabel1->setText(QApplication::translate("MainForm", "N:", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        Pos1->setToolTip(QString());
#endif // QT_NO_TOOLTIP
        Pos1->setText(QApplication::translate("MainForm", "0 00' 00.0000\"", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        Plabel2->setToolTip(QString());
#endif // QT_NO_TOOLTIP
        Plabel2->setText(QApplication::translate("MainForm", "E:", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        Pos2->setToolTip(QString());
#endif // QT_NO_TOOLTIP
        Pos2->setText(QApplication::translate("MainForm", "0 00' 00.0000\"", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        Plabel3->setToolTip(QString());
#endif // QT_NO_TOOLTIP
        Plabel3->setText(QApplication::translate("MainForm", "H:", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        Pos3->setToolTip(QString());
#endif // QT_NO_TOOLTIP
        Pos3->setText(QApplication::translate("MainForm", "0.000 m", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        LabelStd->setToolTip(QString());
#endif // QT_NO_TOOLTIP
        LabelStd->setText(QApplication::translate("MainForm", "E: 0.000 N: 0.000 U: 0.000 m", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        LabelNSat->setToolTip(QString());
#endif // QT_NO_TOOLTIP
        LabelNSat->setText(QApplication::translate("MainForm", "Age: 0.0 s Ratio: 0.0 NSAT: 0", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        BtnSolType->setToolTip(QString());
#endif // QT_NO_TOOLTIP
#ifndef QT_NO_TOOLTIP
        Panel213->setToolTip(QString());
#endif // QT_NO_TOOLTIP
        Panel213->setProperty("text", QVariant(QString()));
#ifndef QT_NO_TOOLTIP
        ScbSol->setToolTip(QString());
#endif // QT_NO_TOOLTIP
#ifndef QT_NO_TOOLTIP
        BtnSave->setToolTip(QString());
#endif // QT_NO_TOOLTIP
        BtnSave->setText(QApplication::translate("MainForm", "...", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        Panel22->setToolTip(QString());
#endif // QT_NO_TOOLTIP
        Panel22->setProperty("text", QVariant(QString()));
#ifndef QT_NO_TOOLTIP
        Disp1->setToolTip(QString());
#endif // QT_NO_TOOLTIP
#ifndef QT_NO_TOOLTIP
        BtnPlotType1->setToolTip(QString());
#endif // QT_NO_TOOLTIP
#ifndef QT_NO_TOOLTIP
        BtnFreqType1->setToolTip(QString());
#endif // QT_NO_TOOLTIP
        BtnExpand1->setText(QString());
        BtnShrink1->setText(QString());
#ifndef QT_NO_TOOLTIP
        Panel23->setToolTip(QString());
#endif // QT_NO_TOOLTIP
        Panel23->setProperty("text", QVariant(QString()));
#ifndef QT_NO_TOOLTIP
        Disp2->setToolTip(QString());
#endif // QT_NO_TOOLTIP
        BtnExpand2->setText(QString());
#ifndef QT_NO_TOOLTIP
        BtnFreqType2->setToolTip(QString());
#endif // QT_NO_TOOLTIP
#ifndef QT_NO_TOOLTIP
        BtnPlotType2->setToolTip(QString());
#endif // QT_NO_TOOLTIP
        BtnShrink2->setText(QString());
#ifndef QT_NO_TOOLTIP
        Panel24->setToolTip(QString());
#endif // QT_NO_TOOLTIP
        Panel24->setProperty("text", QVariant(QString()));
#ifndef QT_NO_TOOLTIP
        Disp3->setToolTip(QString());
#endif // QT_NO_TOOLTIP
        BtnExpand3->setText(QString());
#ifndef QT_NO_TOOLTIP
        BtnFreqType3->setToolTip(QString());
#endif // QT_NO_TOOLTIP
#ifndef QT_NO_TOOLTIP
        BtnPlotType3->setToolTip(QString());
#endif // QT_NO_TOOLTIP
        BtnShrink3->setText(QString());
#ifndef QT_NO_TOOLTIP
        Panel25->setToolTip(QString());
#endif // QT_NO_TOOLTIP
        Panel25->setProperty("text", QVariant(QString()));
#ifndef QT_NO_TOOLTIP
        Disp4->setToolTip(QString());
#endif // QT_NO_TOOLTIP
        BtnExpand4->setText(QString());
#ifndef QT_NO_TOOLTIP
        BtnFreqType4->setToolTip(QString());
#endif // QT_NO_TOOLTIP
#ifndef QT_NO_TOOLTIP
        BtnPlotType4->setToolTip(QString());
#endif // QT_NO_TOOLTIP
        BtnShrink4->setText(QString());
#ifndef QT_NO_TOOLTIP
        Panel3->setToolTip(QString());
#endif // QT_NO_TOOLTIP
        Panel3->setProperty("text", QVariant(QString()));
#ifndef QT_NO_TOOLTIP
        BtnMonitor->setToolTip(QApplication::translate("MainForm", "RTK Monitor", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
#ifndef QT_NO_TOOLTIP
        Message->setToolTip(QString());
#endif // QT_NO_TOOLTIP
        Message->setText(QString());
#ifndef QT_NO_TOOLTIP
        Panel33->setToolTip(QString());
#endif // QT_NO_TOOLTIP
        Panel33->setProperty("text", QVariant(QString()));
#ifndef QT_NO_TOOLTIP
        BtnTaskTray->setToolTip(QApplication::translate("MainForm", "Hide", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
#ifndef QT_NO_TOOLTIP
        BtnAbout->setToolTip(QApplication::translate("MainForm", "About", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
        BtnAbout->setText(QApplication::translate("MainForm", "?", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        Panel4->setToolTip(QString());
#endif // QT_NO_TOOLTIP
        Panel4->setProperty("text", QVariant(QString()));
#ifndef QT_NO_TOOLTIP
        BtnStart->setToolTip(QString());
#endif // QT_NO_TOOLTIP
        BtnStart->setText(QApplication::translate("MainForm", "&Start", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        BtnStop->setToolTip(QString());
#endif // QT_NO_TOOLTIP
        BtnStop->setText(QApplication::translate("MainForm", "S&top", Q_NULLPTR));
        BtnMark->setText(QApplication::translate("MainForm", "Mark...", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        BtnPlot->setToolTip(QString());
#endif // QT_NO_TOOLTIP
        BtnPlot->setText(QApplication::translate("MainForm", "&Plot...", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        BtnOpt->setToolTip(QString());
#endif // QT_NO_TOOLTIP
        BtnOpt->setText(QApplication::translate("MainForm", "&Options...", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        BtnExit->setToolTip(QString());
#endif // QT_NO_TOOLTIP
        BtnExit->setText(QApplication::translate("MainForm", "&Exit", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class MainForm: public Ui_MainForm {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_NAVIMAIN_H
