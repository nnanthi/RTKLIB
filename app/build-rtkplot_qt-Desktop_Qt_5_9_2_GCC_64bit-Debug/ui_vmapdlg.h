/********************************************************************************
** Form generated from reading UI file 'vmapdlg.ui'
**
** Created by: Qt User Interface Compiler version 5.9.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_VMAPDLG_H
#define UI_VMAPDLG_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QFrame>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QRadioButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_VecMapDialog
{
public:
    QGridLayout *gridLayout;
    QFrame *Panel1;
    QGridLayout *gridLayout_2;
    QLabel *Label3;
    QLabel *Label1;
    QLabel *Label2;
    QFrame *Panel21;
    QVBoxLayout *verticalLayout;
    QFrame *Panel11;
    QHBoxLayout *horizontalLayout;
    QCheckBox *Vis1;
    QRadioButton *Layer1;
    QFrame *Color1;
    QPushButton *BtnColor1;
    QFrame *Panel12;
    QHBoxLayout *horizontalLayout_2;
    QCheckBox *Vis2;
    QRadioButton *Layer2;
    QFrame *Color2;
    QPushButton *BtnColor2;
    QFrame *Panel13;
    QHBoxLayout *horizontalLayout_3;
    QCheckBox *Vis3;
    QRadioButton *Layer3;
    QFrame *Color3;
    QPushButton *BtnColor3;
    QFrame *Panel14;
    QHBoxLayout *horizontalLayout_4;
    QCheckBox *Vis4;
    QRadioButton *Layer4;
    QFrame *Color4;
    QPushButton *BtnColor4;
    QFrame *Panel15;
    QHBoxLayout *horizontalLayout_5;
    QCheckBox *Vis5;
    QRadioButton *Layer5;
    QFrame *Color5;
    QPushButton *BtnColor5;
    QFrame *Panel16;
    QHBoxLayout *horizontalLayout_6;
    QCheckBox *Vis6;
    QRadioButton *Layer6;
    QFrame *Color6;
    QPushButton *BtnColor6;
    QFrame *Panel17;
    QHBoxLayout *horizontalLayout_7;
    QCheckBox *Vis7;
    QRadioButton *Layer7;
    QFrame *Color7;
    QPushButton *BtnColor7;
    QFrame *Panel18;
    QHBoxLayout *horizontalLayout_8;
    QCheckBox *Vis8;
    QRadioButton *Layer8;
    QFrame *Color8;
    QPushButton *BtnColor8;
    QFrame *Panel19;
    QHBoxLayout *horizontalLayout_9;
    QCheckBox *Vis9;
    QRadioButton *Layer9;
    QFrame *Color9;
    QPushButton *BtnColor9;
    QFrame *Panel1A;
    QHBoxLayout *horizontalLayout_10;
    QCheckBox *Vis10;
    QRadioButton *Layer10;
    QFrame *Color10;
    QPushButton *BtnColor10;
    QFrame *Panel1B;
    QHBoxLayout *horizontalLayout_11;
    QCheckBox *Vis11;
    QRadioButton *Layer11;
    QFrame *Color11;
    QPushButton *BtnColor11;
    QFrame *Panel22;
    QHBoxLayout *horizontalLayout_12;
    QCheckBox *Vis12;
    QRadioButton *Layer12;
    QFrame *Color12;
    QPushButton *BtnColor12;
    QPushButton *BtnUp;
    QPushButton *BtnDown;
    QPushButton *BtnOk;
    QPushButton *BtnCancel;
    QSpacerItem *horizontalSpacer;

    void setupUi(QWidget *VecMapDialog)
    {
        if (VecMapDialog->objectName().isEmpty())
            VecMapDialog->setObjectName(QStringLiteral("VecMapDialog"));
        VecMapDialog->resize(430, 665);
        gridLayout = new QGridLayout(VecMapDialog);
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        Panel1 = new QFrame(VecMapDialog);
        Panel1->setObjectName(QStringLiteral("Panel1"));
        Panel1->setEnabled(true);
        Panel1->setLayoutDirection(Qt::LeftToRight);
        Panel1->setFrameShape(QFrame::NoFrame);
        gridLayout_2 = new QGridLayout(Panel1);
        gridLayout_2->setObjectName(QStringLiteral("gridLayout_2"));
        Label3 = new QLabel(Panel1);
        Label3->setObjectName(QStringLiteral("Label3"));
        Label3->setEnabled(true);
        QSizePolicy sizePolicy(QSizePolicy::Preferred, QSizePolicy::Fixed);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(Label3->sizePolicy().hasHeightForWidth());
        Label3->setSizePolicy(sizePolicy);

        gridLayout_2->addWidget(Label3, 0, 0, 1, 1);

        Label1 = new QLabel(Panel1);
        Label1->setObjectName(QStringLiteral("Label1"));
        Label1->setEnabled(true);
        sizePolicy.setHeightForWidth(Label1->sizePolicy().hasHeightForWidth());
        Label1->setSizePolicy(sizePolicy);

        gridLayout_2->addWidget(Label1, 0, 1, 1, 1);

        Label2 = new QLabel(Panel1);
        Label2->setObjectName(QStringLiteral("Label2"));
        Label2->setEnabled(true);
        sizePolicy.setHeightForWidth(Label2->sizePolicy().hasHeightForWidth());
        Label2->setSizePolicy(sizePolicy);

        gridLayout_2->addWidget(Label2, 0, 2, 1, 1);

        Panel21 = new QFrame(Panel1);
        Panel21->setObjectName(QStringLiteral("Panel21"));
        Panel21->setEnabled(true);
        Panel21->setLayoutDirection(Qt::LeftToRight);
        Panel21->setFrameShape(QFrame::Box);
        Panel21->setFrameShadow(QFrame::Sunken);
        verticalLayout = new QVBoxLayout(Panel21);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        Panel11 = new QFrame(Panel21);
        Panel11->setObjectName(QStringLiteral("Panel11"));
        Panel11->setEnabled(true);
        Panel11->setLayoutDirection(Qt::LeftToRight);
        Panel11->setFrameShape(QFrame::NoFrame);
        horizontalLayout = new QHBoxLayout(Panel11);
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        Vis1 = new QCheckBox(Panel11);
        Vis1->setObjectName(QStringLiteral("Vis1"));
        Vis1->setChecked(false);

        horizontalLayout->addWidget(Vis1);

        Layer1 = new QRadioButton(Panel11);
        Layer1->setObjectName(QStringLiteral("Layer1"));
        Layer1->setEnabled(true);
        QSizePolicy sizePolicy1(QSizePolicy::MinimumExpanding, QSizePolicy::Fixed);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(Layer1->sizePolicy().hasHeightForWidth());
        Layer1->setSizePolicy(sizePolicy1);
        Layer1->setLayoutDirection(Qt::LeftToRight);
        Layer1->setChecked(false);

        horizontalLayout->addWidget(Layer1);

        Color1 = new QFrame(Panel11);
        Color1->setObjectName(QStringLiteral("Color1"));
        Color1->setEnabled(true);
        Color1->setMinimumSize(QSize(50, 0));
        Color1->setLayoutDirection(Qt::LeftToRight);
        Color1->setFrameShape(QFrame::Box);
        Color1->setFrameShadow(QFrame::Sunken);

        horizontalLayout->addWidget(Color1);

        BtnColor1 = new QPushButton(Panel11);
        BtnColor1->setObjectName(QStringLiteral("BtnColor1"));
        BtnColor1->setEnabled(true);
        BtnColor1->setFlat(false);

        horizontalLayout->addWidget(BtnColor1);


        verticalLayout->addWidget(Panel11);

        Panel12 = new QFrame(Panel21);
        Panel12->setObjectName(QStringLiteral("Panel12"));
        Panel12->setEnabled(true);
        Panel12->setLayoutDirection(Qt::LeftToRight);
        Panel12->setFrameShape(QFrame::NoFrame);
        horizontalLayout_2 = new QHBoxLayout(Panel12);
        horizontalLayout_2->setObjectName(QStringLiteral("horizontalLayout_2"));
        Vis2 = new QCheckBox(Panel12);
        Vis2->setObjectName(QStringLiteral("Vis2"));
        Vis2->setChecked(false);

        horizontalLayout_2->addWidget(Vis2);

        Layer2 = new QRadioButton(Panel12);
        Layer2->setObjectName(QStringLiteral("Layer2"));
        Layer2->setEnabled(true);
        sizePolicy1.setHeightForWidth(Layer2->sizePolicy().hasHeightForWidth());
        Layer2->setSizePolicy(sizePolicy1);
        Layer2->setLayoutDirection(Qt::LeftToRight);
        Layer2->setChecked(false);

        horizontalLayout_2->addWidget(Layer2);

        Color2 = new QFrame(Panel12);
        Color2->setObjectName(QStringLiteral("Color2"));
        Color2->setEnabled(true);
        Color2->setMinimumSize(QSize(50, 0));
        Color2->setLayoutDirection(Qt::LeftToRight);
        Color2->setFrameShape(QFrame::Box);
        Color2->setFrameShadow(QFrame::Sunken);

        horizontalLayout_2->addWidget(Color2);

        BtnColor2 = new QPushButton(Panel12);
        BtnColor2->setObjectName(QStringLiteral("BtnColor2"));
        BtnColor2->setEnabled(true);
        BtnColor2->setFlat(false);

        horizontalLayout_2->addWidget(BtnColor2);


        verticalLayout->addWidget(Panel12);

        Panel13 = new QFrame(Panel21);
        Panel13->setObjectName(QStringLiteral("Panel13"));
        Panel13->setEnabled(true);
        Panel13->setLayoutDirection(Qt::LeftToRight);
        Panel13->setFrameShape(QFrame::NoFrame);
        horizontalLayout_3 = new QHBoxLayout(Panel13);
        horizontalLayout_3->setObjectName(QStringLiteral("horizontalLayout_3"));
        Vis3 = new QCheckBox(Panel13);
        Vis3->setObjectName(QStringLiteral("Vis3"));
        Vis3->setChecked(false);

        horizontalLayout_3->addWidget(Vis3);

        Layer3 = new QRadioButton(Panel13);
        Layer3->setObjectName(QStringLiteral("Layer3"));
        Layer3->setEnabled(true);
        sizePolicy1.setHeightForWidth(Layer3->sizePolicy().hasHeightForWidth());
        Layer3->setSizePolicy(sizePolicy1);
        Layer3->setLayoutDirection(Qt::LeftToRight);
        Layer3->setChecked(false);

        horizontalLayout_3->addWidget(Layer3);

        Color3 = new QFrame(Panel13);
        Color3->setObjectName(QStringLiteral("Color3"));
        Color3->setEnabled(true);
        Color3->setMinimumSize(QSize(50, 0));
        Color3->setLayoutDirection(Qt::LeftToRight);
        Color3->setFrameShape(QFrame::Box);
        Color3->setFrameShadow(QFrame::Sunken);

        horizontalLayout_3->addWidget(Color3);

        BtnColor3 = new QPushButton(Panel13);
        BtnColor3->setObjectName(QStringLiteral("BtnColor3"));
        BtnColor3->setEnabled(true);
        BtnColor3->setFlat(false);

        horizontalLayout_3->addWidget(BtnColor3);


        verticalLayout->addWidget(Panel13);

        Panel14 = new QFrame(Panel21);
        Panel14->setObjectName(QStringLiteral("Panel14"));
        Panel14->setEnabled(true);
        Panel14->setLayoutDirection(Qt::LeftToRight);
        Panel14->setFrameShape(QFrame::NoFrame);
        horizontalLayout_4 = new QHBoxLayout(Panel14);
        horizontalLayout_4->setObjectName(QStringLiteral("horizontalLayout_4"));
        Vis4 = new QCheckBox(Panel14);
        Vis4->setObjectName(QStringLiteral("Vis4"));
        Vis4->setChecked(false);

        horizontalLayout_4->addWidget(Vis4);

        Layer4 = new QRadioButton(Panel14);
        Layer4->setObjectName(QStringLiteral("Layer4"));
        Layer4->setEnabled(true);
        sizePolicy1.setHeightForWidth(Layer4->sizePolicy().hasHeightForWidth());
        Layer4->setSizePolicy(sizePolicy1);
        Layer4->setLayoutDirection(Qt::LeftToRight);
        Layer4->setChecked(false);

        horizontalLayout_4->addWidget(Layer4);

        Color4 = new QFrame(Panel14);
        Color4->setObjectName(QStringLiteral("Color4"));
        Color4->setEnabled(true);
        Color4->setMinimumSize(QSize(50, 0));
        Color4->setLayoutDirection(Qt::LeftToRight);
        Color4->setFrameShape(QFrame::Box);
        Color4->setFrameShadow(QFrame::Sunken);

        horizontalLayout_4->addWidget(Color4);

        BtnColor4 = new QPushButton(Panel14);
        BtnColor4->setObjectName(QStringLiteral("BtnColor4"));
        BtnColor4->setEnabled(true);
        BtnColor4->setFlat(false);

        horizontalLayout_4->addWidget(BtnColor4);


        verticalLayout->addWidget(Panel14);

        Panel15 = new QFrame(Panel21);
        Panel15->setObjectName(QStringLiteral("Panel15"));
        Panel15->setEnabled(true);
        Panel15->setLayoutDirection(Qt::LeftToRight);
        Panel15->setFrameShape(QFrame::NoFrame);
        horizontalLayout_5 = new QHBoxLayout(Panel15);
        horizontalLayout_5->setObjectName(QStringLiteral("horizontalLayout_5"));
        Vis5 = new QCheckBox(Panel15);
        Vis5->setObjectName(QStringLiteral("Vis5"));
        Vis5->setChecked(false);

        horizontalLayout_5->addWidget(Vis5);

        Layer5 = new QRadioButton(Panel15);
        Layer5->setObjectName(QStringLiteral("Layer5"));
        Layer5->setEnabled(true);
        sizePolicy1.setHeightForWidth(Layer5->sizePolicy().hasHeightForWidth());
        Layer5->setSizePolicy(sizePolicy1);
        Layer5->setLayoutDirection(Qt::LeftToRight);
        Layer5->setChecked(false);

        horizontalLayout_5->addWidget(Layer5);

        Color5 = new QFrame(Panel15);
        Color5->setObjectName(QStringLiteral("Color5"));
        Color5->setEnabled(true);
        Color5->setMinimumSize(QSize(50, 0));
        Color5->setLayoutDirection(Qt::LeftToRight);
        Color5->setFrameShape(QFrame::Box);
        Color5->setFrameShadow(QFrame::Sunken);

        horizontalLayout_5->addWidget(Color5);

        BtnColor5 = new QPushButton(Panel15);
        BtnColor5->setObjectName(QStringLiteral("BtnColor5"));
        BtnColor5->setEnabled(true);
        BtnColor5->setFlat(false);

        horizontalLayout_5->addWidget(BtnColor5);


        verticalLayout->addWidget(Panel15);

        Panel16 = new QFrame(Panel21);
        Panel16->setObjectName(QStringLiteral("Panel16"));
        Panel16->setEnabled(true);
        Panel16->setLayoutDirection(Qt::LeftToRight);
        Panel16->setFrameShape(QFrame::NoFrame);
        horizontalLayout_6 = new QHBoxLayout(Panel16);
        horizontalLayout_6->setObjectName(QStringLiteral("horizontalLayout_6"));
        Vis6 = new QCheckBox(Panel16);
        Vis6->setObjectName(QStringLiteral("Vis6"));
        Vis6->setChecked(false);

        horizontalLayout_6->addWidget(Vis6);

        Layer6 = new QRadioButton(Panel16);
        Layer6->setObjectName(QStringLiteral("Layer6"));
        Layer6->setEnabled(true);
        sizePolicy1.setHeightForWidth(Layer6->sizePolicy().hasHeightForWidth());
        Layer6->setSizePolicy(sizePolicy1);
        Layer6->setLayoutDirection(Qt::LeftToRight);
        Layer6->setChecked(false);

        horizontalLayout_6->addWidget(Layer6);

        Color6 = new QFrame(Panel16);
        Color6->setObjectName(QStringLiteral("Color6"));
        Color6->setEnabled(true);
        Color6->setMinimumSize(QSize(50, 0));
        Color6->setLayoutDirection(Qt::LeftToRight);
        Color6->setFrameShape(QFrame::Box);
        Color6->setFrameShadow(QFrame::Sunken);

        horizontalLayout_6->addWidget(Color6);

        BtnColor6 = new QPushButton(Panel16);
        BtnColor6->setObjectName(QStringLiteral("BtnColor6"));
        BtnColor6->setEnabled(true);
        BtnColor6->setFlat(false);

        horizontalLayout_6->addWidget(BtnColor6);


        verticalLayout->addWidget(Panel16);

        Panel17 = new QFrame(Panel21);
        Panel17->setObjectName(QStringLiteral("Panel17"));
        Panel17->setEnabled(true);
        Panel17->setLayoutDirection(Qt::LeftToRight);
        Panel17->setFrameShape(QFrame::NoFrame);
        horizontalLayout_7 = new QHBoxLayout(Panel17);
        horizontalLayout_7->setObjectName(QStringLiteral("horizontalLayout_7"));
        Vis7 = new QCheckBox(Panel17);
        Vis7->setObjectName(QStringLiteral("Vis7"));
        Vis7->setChecked(false);

        horizontalLayout_7->addWidget(Vis7);

        Layer7 = new QRadioButton(Panel17);
        Layer7->setObjectName(QStringLiteral("Layer7"));
        Layer7->setEnabled(true);
        sizePolicy1.setHeightForWidth(Layer7->sizePolicy().hasHeightForWidth());
        Layer7->setSizePolicy(sizePolicy1);
        Layer7->setLayoutDirection(Qt::LeftToRight);
        Layer7->setChecked(false);

        horizontalLayout_7->addWidget(Layer7);

        Color7 = new QFrame(Panel17);
        Color7->setObjectName(QStringLiteral("Color7"));
        Color7->setEnabled(true);
        Color7->setMinimumSize(QSize(50, 0));
        Color7->setLayoutDirection(Qt::LeftToRight);
        Color7->setFrameShape(QFrame::Box);
        Color7->setFrameShadow(QFrame::Sunken);

        horizontalLayout_7->addWidget(Color7);

        BtnColor7 = new QPushButton(Panel17);
        BtnColor7->setObjectName(QStringLiteral("BtnColor7"));
        BtnColor7->setEnabled(true);
        BtnColor7->setFlat(false);

        horizontalLayout_7->addWidget(BtnColor7);


        verticalLayout->addWidget(Panel17);

        Panel18 = new QFrame(Panel21);
        Panel18->setObjectName(QStringLiteral("Panel18"));
        Panel18->setEnabled(true);
        Panel18->setLayoutDirection(Qt::LeftToRight);
        Panel18->setFrameShape(QFrame::NoFrame);
        horizontalLayout_8 = new QHBoxLayout(Panel18);
        horizontalLayout_8->setObjectName(QStringLiteral("horizontalLayout_8"));
        Vis8 = new QCheckBox(Panel18);
        Vis8->setObjectName(QStringLiteral("Vis8"));
        Vis8->setChecked(false);

        horizontalLayout_8->addWidget(Vis8);

        Layer8 = new QRadioButton(Panel18);
        Layer8->setObjectName(QStringLiteral("Layer8"));
        Layer8->setEnabled(true);
        sizePolicy1.setHeightForWidth(Layer8->sizePolicy().hasHeightForWidth());
        Layer8->setSizePolicy(sizePolicy1);
        Layer8->setLayoutDirection(Qt::LeftToRight);
        Layer8->setChecked(false);

        horizontalLayout_8->addWidget(Layer8);

        Color8 = new QFrame(Panel18);
        Color8->setObjectName(QStringLiteral("Color8"));
        Color8->setEnabled(true);
        Color8->setMinimumSize(QSize(50, 0));
        Color8->setLayoutDirection(Qt::LeftToRight);
        Color8->setFrameShape(QFrame::Box);
        Color8->setFrameShadow(QFrame::Sunken);

        horizontalLayout_8->addWidget(Color8);

        BtnColor8 = new QPushButton(Panel18);
        BtnColor8->setObjectName(QStringLiteral("BtnColor8"));
        BtnColor8->setEnabled(true);
        BtnColor8->setFlat(false);

        horizontalLayout_8->addWidget(BtnColor8);


        verticalLayout->addWidget(Panel18);

        Panel19 = new QFrame(Panel21);
        Panel19->setObjectName(QStringLiteral("Panel19"));
        Panel19->setEnabled(true);
        Panel19->setLayoutDirection(Qt::LeftToRight);
        Panel19->setFrameShape(QFrame::NoFrame);
        horizontalLayout_9 = new QHBoxLayout(Panel19);
        horizontalLayout_9->setObjectName(QStringLiteral("horizontalLayout_9"));
        Vis9 = new QCheckBox(Panel19);
        Vis9->setObjectName(QStringLiteral("Vis9"));
        Vis9->setChecked(false);

        horizontalLayout_9->addWidget(Vis9);

        Layer9 = new QRadioButton(Panel19);
        Layer9->setObjectName(QStringLiteral("Layer9"));
        Layer9->setEnabled(true);
        sizePolicy1.setHeightForWidth(Layer9->sizePolicy().hasHeightForWidth());
        Layer9->setSizePolicy(sizePolicy1);
        Layer9->setLayoutDirection(Qt::LeftToRight);
        Layer9->setChecked(false);

        horizontalLayout_9->addWidget(Layer9);

        Color9 = new QFrame(Panel19);
        Color9->setObjectName(QStringLiteral("Color9"));
        Color9->setEnabled(true);
        Color9->setMinimumSize(QSize(50, 0));
        Color9->setLayoutDirection(Qt::LeftToRight);
        Color9->setFrameShape(QFrame::Box);
        Color9->setFrameShadow(QFrame::Sunken);

        horizontalLayout_9->addWidget(Color9);

        BtnColor9 = new QPushButton(Panel19);
        BtnColor9->setObjectName(QStringLiteral("BtnColor9"));
        BtnColor9->setEnabled(true);
        BtnColor9->setFlat(false);

        horizontalLayout_9->addWidget(BtnColor9);


        verticalLayout->addWidget(Panel19);

        Panel1A = new QFrame(Panel21);
        Panel1A->setObjectName(QStringLiteral("Panel1A"));
        Panel1A->setEnabled(true);
        Panel1A->setLayoutDirection(Qt::LeftToRight);
        Panel1A->setFrameShape(QFrame::NoFrame);
        horizontalLayout_10 = new QHBoxLayout(Panel1A);
        horizontalLayout_10->setObjectName(QStringLiteral("horizontalLayout_10"));
        Vis10 = new QCheckBox(Panel1A);
        Vis10->setObjectName(QStringLiteral("Vis10"));
        Vis10->setChecked(false);

        horizontalLayout_10->addWidget(Vis10);

        Layer10 = new QRadioButton(Panel1A);
        Layer10->setObjectName(QStringLiteral("Layer10"));
        Layer10->setEnabled(true);
        sizePolicy1.setHeightForWidth(Layer10->sizePolicy().hasHeightForWidth());
        Layer10->setSizePolicy(sizePolicy1);
        Layer10->setLayoutDirection(Qt::LeftToRight);
        Layer10->setChecked(false);

        horizontalLayout_10->addWidget(Layer10);

        Color10 = new QFrame(Panel1A);
        Color10->setObjectName(QStringLiteral("Color10"));
        Color10->setEnabled(true);
        Color10->setMinimumSize(QSize(50, 0));
        Color10->setLayoutDirection(Qt::LeftToRight);
        Color10->setFrameShape(QFrame::Box);
        Color10->setFrameShadow(QFrame::Sunken);

        horizontalLayout_10->addWidget(Color10);

        BtnColor10 = new QPushButton(Panel1A);
        BtnColor10->setObjectName(QStringLiteral("BtnColor10"));
        BtnColor10->setEnabled(true);
        BtnColor10->setFlat(false);

        horizontalLayout_10->addWidget(BtnColor10);


        verticalLayout->addWidget(Panel1A);

        Panel1B = new QFrame(Panel21);
        Panel1B->setObjectName(QStringLiteral("Panel1B"));
        Panel1B->setEnabled(true);
        Panel1B->setLayoutDirection(Qt::LeftToRight);
        Panel1B->setFrameShape(QFrame::NoFrame);
        horizontalLayout_11 = new QHBoxLayout(Panel1B);
        horizontalLayout_11->setObjectName(QStringLiteral("horizontalLayout_11"));
        Vis11 = new QCheckBox(Panel1B);
        Vis11->setObjectName(QStringLiteral("Vis11"));
        Vis11->setChecked(false);

        horizontalLayout_11->addWidget(Vis11);

        Layer11 = new QRadioButton(Panel1B);
        Layer11->setObjectName(QStringLiteral("Layer11"));
        Layer11->setEnabled(true);
        sizePolicy1.setHeightForWidth(Layer11->sizePolicy().hasHeightForWidth());
        Layer11->setSizePolicy(sizePolicy1);
        Layer11->setLayoutDirection(Qt::LeftToRight);
        Layer11->setChecked(false);

        horizontalLayout_11->addWidget(Layer11);

        Color11 = new QFrame(Panel1B);
        Color11->setObjectName(QStringLiteral("Color11"));
        Color11->setEnabled(true);
        Color11->setMinimumSize(QSize(50, 0));
        Color11->setLayoutDirection(Qt::LeftToRight);
        Color11->setFrameShape(QFrame::Box);
        Color11->setFrameShadow(QFrame::Sunken);

        horizontalLayout_11->addWidget(Color11);

        BtnColor11 = new QPushButton(Panel1B);
        BtnColor11->setObjectName(QStringLiteral("BtnColor11"));
        BtnColor11->setEnabled(true);
        BtnColor11->setFlat(false);

        horizontalLayout_11->addWidget(BtnColor11);


        verticalLayout->addWidget(Panel1B);

        Panel22 = new QFrame(Panel21);
        Panel22->setObjectName(QStringLiteral("Panel22"));
        Panel22->setEnabled(true);
        Panel22->setLayoutDirection(Qt::LeftToRight);
        Panel22->setFrameShape(QFrame::NoFrame);
        horizontalLayout_12 = new QHBoxLayout(Panel22);
        horizontalLayout_12->setObjectName(QStringLiteral("horizontalLayout_12"));
        Vis12 = new QCheckBox(Panel22);
        Vis12->setObjectName(QStringLiteral("Vis12"));
        Vis12->setChecked(false);

        horizontalLayout_12->addWidget(Vis12);

        Layer12 = new QRadioButton(Panel22);
        Layer12->setObjectName(QStringLiteral("Layer12"));
        Layer12->setEnabled(true);
        sizePolicy1.setHeightForWidth(Layer12->sizePolicy().hasHeightForWidth());
        Layer12->setSizePolicy(sizePolicy1);
        Layer12->setLayoutDirection(Qt::LeftToRight);
        Layer12->setChecked(false);

        horizontalLayout_12->addWidget(Layer12);

        Color12 = new QFrame(Panel22);
        Color12->setObjectName(QStringLiteral("Color12"));
        Color12->setEnabled(true);
        Color12->setMinimumSize(QSize(50, 0));
        Color12->setLayoutDirection(Qt::LeftToRight);
        Color12->setFrameShape(QFrame::Box);
        Color12->setFrameShadow(QFrame::Sunken);

        horizontalLayout_12->addWidget(Color12);

        BtnColor12 = new QPushButton(Panel22);
        BtnColor12->setObjectName(QStringLiteral("BtnColor12"));
        BtnColor12->setEnabled(true);
        BtnColor12->setFlat(false);

        horizontalLayout_12->addWidget(BtnColor12);


        verticalLayout->addWidget(Panel22);


        gridLayout_2->addWidget(Panel21, 1, 0, 1, 3);


        gridLayout->addWidget(Panel1, 0, 0, 2, 6);

        BtnUp = new QPushButton(VecMapDialog);
        BtnUp->setObjectName(QStringLiteral("BtnUp"));
        BtnUp->setEnabled(true);
        QIcon icon;
        icon.addFile(QStringLiteral(":/buttons/up2.bmp"), QSize(), QIcon::Normal, QIcon::Off);
        BtnUp->setIcon(icon);

        gridLayout->addWidget(BtnUp, 2, 0, 1, 1);

        BtnDown = new QPushButton(VecMapDialog);
        BtnDown->setObjectName(QStringLiteral("BtnDown"));
        BtnDown->setEnabled(true);
        QIcon icon1;
        icon1.addFile(QStringLiteral(":/buttons/down.bmp"), QSize(), QIcon::Normal, QIcon::Off);
        BtnDown->setIcon(icon1);

        gridLayout->addWidget(BtnDown, 2, 1, 1, 2);

        BtnOk = new QPushButton(VecMapDialog);
        BtnOk->setObjectName(QStringLiteral("BtnOk"));
        BtnOk->setEnabled(true);
        BtnOk->setAutoDefault(true);

        gridLayout->addWidget(BtnOk, 2, 4, 1, 1);

        BtnCancel = new QPushButton(VecMapDialog);
        BtnCancel->setObjectName(QStringLiteral("BtnCancel"));
        BtnCancel->setEnabled(true);

        gridLayout->addWidget(BtnCancel, 2, 5, 1, 1);

        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout->addItem(horizontalSpacer, 2, 3, 1, 1);


        retranslateUi(VecMapDialog);

        BtnOk->setDefault(true);


        QMetaObject::connectSlotsByName(VecMapDialog);
    } // setupUi

    void retranslateUi(QWidget *VecMapDialog)
    {
        VecMapDialog->setWindowTitle(QApplication::translate("VecMapDialog", "Map Layer", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        VecMapDialog->setToolTip(QString());
#endif // QT_NO_TOOLTIP
#ifndef QT_NO_TOOLTIP
        Panel1->setToolTip(QString());
#endif // QT_NO_TOOLTIP
        Panel1->setProperty("text", QVariant(QString()));
#ifndef QT_NO_TOOLTIP
        Label3->setToolTip(QString());
#endif // QT_NO_TOOLTIP
        Label3->setText(QApplication::translate("VecMapDialog", "Show", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        Label1->setToolTip(QString());
#endif // QT_NO_TOOLTIP
        Label1->setText(QApplication::translate("VecMapDialog", "Layer", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        Label2->setToolTip(QString());
#endif // QT_NO_TOOLTIP
        Label2->setText(QApplication::translate("VecMapDialog", "Color", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        Panel21->setToolTip(QString());
#endif // QT_NO_TOOLTIP
        Panel21->setProperty("text", QVariant(QApplication::translate("VecMapDialog", "Panel21", Q_NULLPTR)));
#ifndef QT_NO_TOOLTIP
        Panel11->setToolTip(QString());
#endif // QT_NO_TOOLTIP
        Panel11->setProperty("text", QVariant(QString()));
#ifndef QT_NO_TOOLTIP
        Vis1->setToolTip(QString());
#endif // QT_NO_TOOLTIP
        Vis1->setText(QString());
#ifndef QT_NO_TOOLTIP
        Layer1->setToolTip(QString());
#endif // QT_NO_TOOLTIP
        Layer1->setText(QString());
#ifndef QT_NO_TOOLTIP
        Color1->setToolTip(QString());
#endif // QT_NO_TOOLTIP
        Color1->setProperty("text", QVariant(QString()));
#ifndef QT_NO_TOOLTIP
        BtnColor1->setToolTip(QString());
#endif // QT_NO_TOOLTIP
        BtnColor1->setText(QApplication::translate("VecMapDialog", "...", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        Panel12->setToolTip(QString());
#endif // QT_NO_TOOLTIP
        Panel12->setProperty("text", QVariant(QString()));
#ifndef QT_NO_TOOLTIP
        Vis2->setToolTip(QString());
#endif // QT_NO_TOOLTIP
        Vis2->setText(QString());
#ifndef QT_NO_TOOLTIP
        Layer2->setToolTip(QString());
#endif // QT_NO_TOOLTIP
        Layer2->setText(QString());
#ifndef QT_NO_TOOLTIP
        Color2->setToolTip(QString());
#endif // QT_NO_TOOLTIP
        Color2->setProperty("text", QVariant(QString()));
#ifndef QT_NO_TOOLTIP
        BtnColor2->setToolTip(QString());
#endif // QT_NO_TOOLTIP
        BtnColor2->setText(QApplication::translate("VecMapDialog", "...", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        Panel13->setToolTip(QString());
#endif // QT_NO_TOOLTIP
        Panel13->setProperty("text", QVariant(QString()));
#ifndef QT_NO_TOOLTIP
        Vis3->setToolTip(QString());
#endif // QT_NO_TOOLTIP
        Vis3->setText(QString());
#ifndef QT_NO_TOOLTIP
        Layer3->setToolTip(QString());
#endif // QT_NO_TOOLTIP
        Layer3->setText(QString());
#ifndef QT_NO_TOOLTIP
        Color3->setToolTip(QString());
#endif // QT_NO_TOOLTIP
        Color3->setProperty("text", QVariant(QString()));
#ifndef QT_NO_TOOLTIP
        BtnColor3->setToolTip(QString());
#endif // QT_NO_TOOLTIP
        BtnColor3->setText(QApplication::translate("VecMapDialog", "...", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        Panel14->setToolTip(QString());
#endif // QT_NO_TOOLTIP
        Panel14->setProperty("text", QVariant(QString()));
#ifndef QT_NO_TOOLTIP
        Vis4->setToolTip(QString());
#endif // QT_NO_TOOLTIP
        Vis4->setText(QString());
#ifndef QT_NO_TOOLTIP
        Layer4->setToolTip(QString());
#endif // QT_NO_TOOLTIP
        Layer4->setText(QString());
#ifndef QT_NO_TOOLTIP
        Color4->setToolTip(QString());
#endif // QT_NO_TOOLTIP
        Color4->setProperty("text", QVariant(QString()));
#ifndef QT_NO_TOOLTIP
        BtnColor4->setToolTip(QString());
#endif // QT_NO_TOOLTIP
        BtnColor4->setText(QApplication::translate("VecMapDialog", "...", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        Panel15->setToolTip(QString());
#endif // QT_NO_TOOLTIP
        Panel15->setProperty("text", QVariant(QString()));
#ifndef QT_NO_TOOLTIP
        Vis5->setToolTip(QString());
#endif // QT_NO_TOOLTIP
        Vis5->setText(QString());
#ifndef QT_NO_TOOLTIP
        Layer5->setToolTip(QString());
#endif // QT_NO_TOOLTIP
        Layer5->setText(QString());
#ifndef QT_NO_TOOLTIP
        Color5->setToolTip(QString());
#endif // QT_NO_TOOLTIP
        Color5->setProperty("text", QVariant(QString()));
#ifndef QT_NO_TOOLTIP
        BtnColor5->setToolTip(QString());
#endif // QT_NO_TOOLTIP
        BtnColor5->setText(QApplication::translate("VecMapDialog", "...", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        Panel16->setToolTip(QString());
#endif // QT_NO_TOOLTIP
        Panel16->setProperty("text", QVariant(QString()));
#ifndef QT_NO_TOOLTIP
        Vis6->setToolTip(QString());
#endif // QT_NO_TOOLTIP
        Vis6->setText(QString());
#ifndef QT_NO_TOOLTIP
        Layer6->setToolTip(QString());
#endif // QT_NO_TOOLTIP
        Layer6->setText(QString());
#ifndef QT_NO_TOOLTIP
        Color6->setToolTip(QString());
#endif // QT_NO_TOOLTIP
        Color6->setProperty("text", QVariant(QString()));
#ifndef QT_NO_TOOLTIP
        BtnColor6->setToolTip(QString());
#endif // QT_NO_TOOLTIP
        BtnColor6->setText(QApplication::translate("VecMapDialog", "...", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        Panel17->setToolTip(QString());
#endif // QT_NO_TOOLTIP
        Panel17->setProperty("text", QVariant(QString()));
#ifndef QT_NO_TOOLTIP
        Vis7->setToolTip(QString());
#endif // QT_NO_TOOLTIP
        Vis7->setText(QString());
#ifndef QT_NO_TOOLTIP
        Layer7->setToolTip(QString());
#endif // QT_NO_TOOLTIP
        Layer7->setText(QString());
#ifndef QT_NO_TOOLTIP
        Color7->setToolTip(QString());
#endif // QT_NO_TOOLTIP
        Color7->setProperty("text", QVariant(QString()));
#ifndef QT_NO_TOOLTIP
        BtnColor7->setToolTip(QString());
#endif // QT_NO_TOOLTIP
        BtnColor7->setText(QApplication::translate("VecMapDialog", "...", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        Panel18->setToolTip(QString());
#endif // QT_NO_TOOLTIP
        Panel18->setProperty("text", QVariant(QString()));
#ifndef QT_NO_TOOLTIP
        Vis8->setToolTip(QString());
#endif // QT_NO_TOOLTIP
        Vis8->setText(QString());
#ifndef QT_NO_TOOLTIP
        Layer8->setToolTip(QString());
#endif // QT_NO_TOOLTIP
        Layer8->setText(QString());
#ifndef QT_NO_TOOLTIP
        Color8->setToolTip(QString());
#endif // QT_NO_TOOLTIP
        Color8->setProperty("text", QVariant(QString()));
#ifndef QT_NO_TOOLTIP
        BtnColor8->setToolTip(QString());
#endif // QT_NO_TOOLTIP
        BtnColor8->setText(QApplication::translate("VecMapDialog", "...", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        Panel19->setToolTip(QString());
#endif // QT_NO_TOOLTIP
        Panel19->setProperty("text", QVariant(QString()));
#ifndef QT_NO_TOOLTIP
        Vis9->setToolTip(QString());
#endif // QT_NO_TOOLTIP
        Vis9->setText(QString());
#ifndef QT_NO_TOOLTIP
        Layer9->setToolTip(QString());
#endif // QT_NO_TOOLTIP
        Layer9->setText(QString());
#ifndef QT_NO_TOOLTIP
        Color9->setToolTip(QString());
#endif // QT_NO_TOOLTIP
        Color9->setProperty("text", QVariant(QString()));
#ifndef QT_NO_TOOLTIP
        BtnColor9->setToolTip(QString());
#endif // QT_NO_TOOLTIP
        BtnColor9->setText(QApplication::translate("VecMapDialog", "...", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        Panel1A->setToolTip(QString());
#endif // QT_NO_TOOLTIP
        Panel1A->setProperty("text", QVariant(QString()));
#ifndef QT_NO_TOOLTIP
        Vis10->setToolTip(QString());
#endif // QT_NO_TOOLTIP
        Vis10->setText(QString());
#ifndef QT_NO_TOOLTIP
        Layer10->setToolTip(QString());
#endif // QT_NO_TOOLTIP
        Layer10->setText(QString());
#ifndef QT_NO_TOOLTIP
        Color10->setToolTip(QString());
#endif // QT_NO_TOOLTIP
        Color10->setProperty("text", QVariant(QString()));
#ifndef QT_NO_TOOLTIP
        BtnColor10->setToolTip(QString());
#endif // QT_NO_TOOLTIP
        BtnColor10->setText(QApplication::translate("VecMapDialog", "...", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        Panel1B->setToolTip(QString());
#endif // QT_NO_TOOLTIP
        Panel1B->setProperty("text", QVariant(QString()));
#ifndef QT_NO_TOOLTIP
        Vis11->setToolTip(QString());
#endif // QT_NO_TOOLTIP
        Vis11->setText(QString());
#ifndef QT_NO_TOOLTIP
        Layer11->setToolTip(QString());
#endif // QT_NO_TOOLTIP
        Layer11->setText(QString());
#ifndef QT_NO_TOOLTIP
        Color11->setToolTip(QString());
#endif // QT_NO_TOOLTIP
        Color11->setProperty("text", QVariant(QString()));
#ifndef QT_NO_TOOLTIP
        BtnColor11->setToolTip(QString());
#endif // QT_NO_TOOLTIP
        BtnColor11->setText(QApplication::translate("VecMapDialog", "...", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        Panel22->setToolTip(QString());
#endif // QT_NO_TOOLTIP
        Panel22->setProperty("text", QVariant(QString()));
#ifndef QT_NO_TOOLTIP
        Vis12->setToolTip(QString());
#endif // QT_NO_TOOLTIP
        Vis12->setText(QString());
#ifndef QT_NO_TOOLTIP
        Layer12->setToolTip(QString());
#endif // QT_NO_TOOLTIP
        Layer12->setText(QString());
#ifndef QT_NO_TOOLTIP
        Color12->setToolTip(QString());
#endif // QT_NO_TOOLTIP
        Color12->setProperty("text", QVariant(QString()));
#ifndef QT_NO_TOOLTIP
        BtnColor12->setToolTip(QString());
#endif // QT_NO_TOOLTIP
        BtnColor12->setText(QApplication::translate("VecMapDialog", "...", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        BtnUp->setToolTip(QString());
#endif // QT_NO_TOOLTIP
        BtnUp->setText(QApplication::translate("VecMapDialog", "&Up", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        BtnDown->setToolTip(QString());
#endif // QT_NO_TOOLTIP
        BtnDown->setText(QApplication::translate("VecMapDialog", "&Down", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        BtnOk->setToolTip(QString());
#endif // QT_NO_TOOLTIP
        BtnOk->setText(QApplication::translate("VecMapDialog", "&OK", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        BtnCancel->setToolTip(QString());
#endif // QT_NO_TOOLTIP
        BtnCancel->setText(QApplication::translate("VecMapDialog", "&Cancel", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class VecMapDialog: public Ui_VecMapDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_VMAPDLG_H
