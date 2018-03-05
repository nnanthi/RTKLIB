/********************************************************************************
** Form generated from reading UI file 'geview.ui'
**
** Created by: Qt User Interface Compiler version 5.9.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_GEVIEW_H
#define UI_GEVIEW_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QToolBar>
#include <QtWidgets/QToolButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_GoogleEarthView
{
public:
    QWidget *centralwidget;
    QToolButton *BtnExpand;
    QToolButton *BtnHeading;
    QToolButton *BtnFixCent;
    QToolButton *BtnGETilt;
    QToolButton *BtnOpt;
    QToolButton *BtnGENorm;
    QToolButton *BtnRotL;
    QToolButton *BtnEnaAlt;
    QToolButton *BtnShrink;
    QToolButton *BtnRotR;
    QLabel *Debug;
    QLabel *Panel3;
    QWidget *Panel5;
    QHBoxLayout *horizontalLayout_2;
    QPushButton *BtnClose;
    QWidget *Panel8;
    QHBoxLayout *horizontalLayout;
    QToolButton *BtnOpt1;
    QToolButton *BtnOpt2;
    QToolButton *BtnOpt3;
    QToolButton *BtnOpt4;
    QToolButton *BtnOpt5;
    QToolButton *BtnOpt6;
    QToolButton *BtnOpt7;
    QToolButton *BtnOpt8;
    QToolButton *BtnOpt9;
    QStatusBar *statusbar;
    QToolBar *toolBar;
    QToolBar *toolBar_2;

    void setupUi(QMainWindow *GoogleEarthView)
    {
        if (GoogleEarthView->objectName().isEmpty())
            GoogleEarthView->setObjectName(QStringLiteral("GoogleEarthView"));
        GoogleEarthView->resize(800, 600);
        centralwidget = new QWidget(GoogleEarthView);
        centralwidget->setObjectName(QStringLiteral("centralwidget"));
        BtnExpand = new QToolButton(centralwidget);
        BtnExpand->setObjectName(QStringLiteral("BtnExpand"));
        BtnExpand->setEnabled(true);
        BtnExpand->setGeometry(QRect(190, 40, 30, 32));
        QIcon icon;
        icon.addFile(QStringLiteral(":/buttons/expand.bmp"), QSize(), QIcon::Normal, QIcon::Off);
        BtnExpand->setIcon(icon);
        BtnExpand->setProperty("flat", QVariant(true));
        BtnHeading = new QToolButton(centralwidget);
        BtnHeading->setObjectName(QStringLiteral("BtnHeading"));
        BtnHeading->setEnabled(true);
        BtnHeading->setGeometry(QRect(293, 0, 30, 32));
        QIcon icon1;
        icon1.addFile(QStringLiteral(":/buttons/headup.bmp"), QSize(), QIcon::Normal, QIcon::Off);
        BtnHeading->setIcon(icon1);
        BtnHeading->setCheckable(true);
        BtnHeading->setProperty("flat", QVariant(true));
        BtnFixCent = new QToolButton(centralwidget);
        BtnFixCent->setObjectName(QStringLiteral("BtnFixCent"));
        BtnFixCent->setEnabled(false);
        BtnFixCent->setGeometry(QRect(39, 0, 30, 32));
        QIcon icon2;
        icon2.addFile(QStringLiteral(":/buttons/point.bmp"), QSize(), QIcon::Normal, QIcon::Off);
        BtnFixCent->setIcon(icon2);
        BtnFixCent->setProperty("flat", QVariant(true));
        BtnGETilt = new QToolButton(centralwidget);
        BtnGETilt->setObjectName(QStringLiteral("BtnGETilt"));
        BtnGETilt->setEnabled(true);
        BtnGETilt->setGeometry(QRect(136, 0, 30, 32));
        QIcon icon3;
        icon3.addFile(QStringLiteral(":/buttons/tilt.bmp"), QSize(), QIcon::Normal, QIcon::Off);
        BtnGETilt->setIcon(icon3);
        BtnGETilt->setProperty("flat", QVariant(true));
        BtnOpt = new QToolButton(centralwidget);
        BtnOpt->setObjectName(QStringLiteral("BtnOpt"));
        BtnOpt->setEnabled(true);
        BtnOpt->setGeometry(QRect(0, 0, 30, 32));
        QIcon icon4;
        icon4.addFile(QStringLiteral(":/buttons/navctr.bmp"), QSize(), QIcon::Normal, QIcon::Off);
        BtnOpt->setIcon(icon4);
        BtnOpt->setProperty("flat", QVariant(true));
        BtnGENorm = new QToolButton(centralwidget);
        BtnGENorm->setObjectName(QStringLiteral("BtnGENorm"));
        BtnGENorm->setEnabled(true);
        BtnGENorm->setGeometry(QRect(106, 0, 30, 32));
        QIcon icon5;
        icon5.addFile(QStringLiteral(":/buttons/norm.bmp"), QSize(), QIcon::Normal, QIcon::Off);
        BtnGENorm->setIcon(icon5);
        BtnGENorm->setProperty("flat", QVariant(true));
        BtnRotL = new QToolButton(centralwidget);
        BtnRotL->setObjectName(QStringLiteral("BtnRotL"));
        BtnRotL->setEnabled(true);
        BtnRotL->setGeometry(QRect(233, 0, 30, 32));
        QIcon icon6;
        icon6.addFile(QStringLiteral(":/buttons/rotl.bmp"), QSize(), QIcon::Normal, QIcon::Off);
        BtnRotL->setIcon(icon6);
        BtnRotL->setProperty("flat", QVariant(true));
        BtnEnaAlt = new QToolButton(centralwidget);
        BtnEnaAlt->setObjectName(QStringLiteral("BtnEnaAlt"));
        BtnEnaAlt->setEnabled(false);
        BtnEnaAlt->setGeometry(QRect(69, 0, 30, 32));
        QIcon icon7;
        icon7.addFile(QStringLiteral(":/buttons/alt.bmp"), QSize(), QIcon::Normal, QIcon::Off);
        BtnEnaAlt->setIcon(icon7);
        BtnEnaAlt->setCheckable(true);
        BtnEnaAlt->setProperty("flat", QVariant(true));
        BtnShrink = new QToolButton(centralwidget);
        BtnShrink->setObjectName(QStringLiteral("BtnShrink"));
        BtnShrink->setEnabled(true);
        BtnShrink->setGeometry(QRect(166, 0, 30, 32));
        QIcon icon8;
        icon8.addFile(QStringLiteral(":/buttons/shrink.bmp"), QSize(), QIcon::Normal, QIcon::Off);
        BtnShrink->setIcon(icon8);
        BtnShrink->setProperty("flat", QVariant(true));
        BtnRotR = new QToolButton(centralwidget);
        BtnRotR->setObjectName(QStringLiteral("BtnRotR"));
        BtnRotR->setEnabled(true);
        BtnRotR->setGeometry(QRect(270, 80, 30, 32));
        QIcon icon9;
        icon9.addFile(QStringLiteral(":/buttons/rotr.bmp"), QSize(), QIcon::Normal, QIcon::Off);
        BtnRotR->setIcon(icon9);
        BtnRotR->setProperty("flat", QVariant(true));
        Debug = new QLabel(centralwidget);
        Debug->setObjectName(QStringLiteral("Debug"));
        Debug->setEnabled(true);
        Debug->setGeometry(QRect(293, 0, 120, 45));
        Panel3 = new QLabel(centralwidget);
        Panel3->setObjectName(QStringLiteral("Panel3"));
        Panel3->setEnabled(true);
        Panel3->setGeometry(QRect(0, 0, 9, 45));
        QSizePolicy sizePolicy(QSizePolicy::Fixed, QSizePolicy::Preferred);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(Panel3->sizePolicy().hasHeightForWidth());
        Panel3->setSizePolicy(sizePolicy);
        Panel3->setLayoutDirection(Qt::LeftToRight);
        Panel3->setFrameShape(QFrame::Panel);
        Panel3->setFrameShadow(QFrame::Sunken);
        Panel3->setAlignment(Qt::AlignCenter);
        Panel5 = new QWidget(centralwidget);
        Panel5->setObjectName(QStringLiteral("Panel5"));
        Panel5->setEnabled(true);
        Panel5->setGeometry(QRect(30, 170, 119, 45));
        Panel5->setLayoutDirection(Qt::LeftToRight);
        horizontalLayout_2 = new QHBoxLayout(Panel5);
        horizontalLayout_2->setObjectName(QStringLiteral("horizontalLayout_2"));
        BtnClose = new QPushButton(centralwidget);
        BtnClose->setObjectName(QStringLiteral("BtnClose"));
        BtnClose->setEnabled(true);
        BtnClose->setGeometry(QRect(420, 110, 101, 27));
        BtnClose->setFlat(false);
        Panel8 = new QWidget(centralwidget);
        Panel8->setObjectName(QStringLiteral("Panel8"));
        Panel8->setGeometry(QRect(410, 310, 348, 44));
        horizontalLayout = new QHBoxLayout(Panel8);
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        BtnOpt1 = new QToolButton(Panel8);
        BtnOpt1->setObjectName(QStringLiteral("BtnOpt1"));
        BtnOpt1->setEnabled(true);
        BtnOpt1->setIcon(icon4);
        BtnOpt1->setProperty("flat", QVariant(true));

        horizontalLayout->addWidget(BtnOpt1);

        BtnOpt2 = new QToolButton(Panel8);
        BtnOpt2->setObjectName(QStringLiteral("BtnOpt2"));
        BtnOpt2->setEnabled(true);
        QIcon icon10;
        icon10.addFile(QStringLiteral(":/buttons/grid.bmp"), QSize(), QIcon::Normal, QIcon::Off);
        BtnOpt2->setIcon(icon10);
        BtnOpt2->setProperty("flat", QVariant(true));

        horizontalLayout->addWidget(BtnOpt2);

        BtnOpt3 = new QToolButton(Panel8);
        BtnOpt3->setObjectName(QStringLiteral("BtnOpt3"));
        BtnOpt3->setEnabled(true);
        QIcon icon11;
        icon11.addFile(QStringLiteral(":/buttons/scale.bmp"), QSize(), QIcon::Normal, QIcon::Off);
        BtnOpt3->setIcon(icon11);
        BtnOpt3->setProperty("flat", QVariant(true));

        horizontalLayout->addWidget(BtnOpt3);

        BtnOpt4 = new QToolButton(Panel8);
        BtnOpt4->setObjectName(QStringLiteral("BtnOpt4"));
        BtnOpt4->setEnabled(true);
        QIcon icon12;
        icon12.addFile(QStringLiteral(":/buttons/vmap.bmp"), QSize(), QIcon::Normal, QIcon::Off);
        BtnOpt4->setIcon(icon12);
        BtnOpt4->setProperty("flat", QVariant(true));

        horizontalLayout->addWidget(BtnOpt4);

        BtnOpt5 = new QToolButton(Panel8);
        BtnOpt5->setObjectName(QStringLiteral("BtnOpt5"));
        BtnOpt5->setEnabled(true);
        QIcon icon13;
        icon13.addFile(QStringLiteral(":/buttons/status.bmp"), QSize(), QIcon::Normal, QIcon::Off);
        BtnOpt5->setIcon(icon13);
        BtnOpt5->setProperty("flat", QVariant(true));

        horizontalLayout->addWidget(BtnOpt5);

        BtnOpt6 = new QToolButton(Panel8);
        BtnOpt6->setObjectName(QStringLiteral("BtnOpt6"));
        BtnOpt6->setEnabled(true);
        QIcon icon14;
        icon14.addFile(QStringLiteral(":/buttons/undu.bmp"), QSize(), QIcon::Normal, QIcon::Off);
        BtnOpt6->setIcon(icon14);
        BtnOpt6->setProperty("flat", QVariant(true));

        horizontalLayout->addWidget(BtnOpt6);

        BtnOpt7 = new QToolButton(Panel8);
        BtnOpt7->setObjectName(QStringLiteral("BtnOpt7"));
        BtnOpt7->setEnabled(true);
        QIcon icon15;
        icon15.addFile(QStringLiteral(":/buttons/road.bmp"), QSize(), QIcon::Normal, QIcon::Off);
        BtnOpt7->setIcon(icon15);
        BtnOpt7->setProperty("flat", QVariant(true));

        horizontalLayout->addWidget(BtnOpt7);

        BtnOpt8 = new QToolButton(Panel8);
        BtnOpt8->setObjectName(QStringLiteral("BtnOpt8"));
        BtnOpt8->setEnabled(true);
        QIcon icon16;
        icon16.addFile(QStringLiteral(":/buttons/building.bmp"), QSize(), QIcon::Normal, QIcon::Off);
        BtnOpt8->setIcon(icon16);
        BtnOpt8->setProperty("flat", QVariant(true));

        horizontalLayout->addWidget(BtnOpt8);

        BtnOpt9 = new QToolButton(Panel8);
        BtnOpt9->setObjectName(QStringLiteral("BtnOpt9"));
        BtnOpt9->setEnabled(true);
        QIcon icon17;
        icon17.addFile(QStringLiteral(":/buttons/border.bmp"), QSize(), QIcon::Normal, QIcon::Off);
        BtnOpt9->setIcon(icon17);
        BtnOpt9->setProperty("flat", QVariant(true));

        horizontalLayout->addWidget(BtnOpt9);

        GoogleEarthView->setCentralWidget(centralwidget);
        statusbar = new QStatusBar(GoogleEarthView);
        statusbar->setObjectName(QStringLiteral("statusbar"));
        GoogleEarthView->setStatusBar(statusbar);
        toolBar = new QToolBar(GoogleEarthView);
        toolBar->setObjectName(QStringLiteral("toolBar"));
        GoogleEarthView->addToolBar(Qt::TopToolBarArea, toolBar);
        toolBar_2 = new QToolBar(GoogleEarthView);
        toolBar_2->setObjectName(QStringLiteral("toolBar_2"));
        GoogleEarthView->addToolBar(Qt::TopToolBarArea, toolBar_2);
        QWidget::setTabOrder(BtnOpt, BtnFixCent);
        QWidget::setTabOrder(BtnFixCent, BtnEnaAlt);
        QWidget::setTabOrder(BtnEnaAlt, BtnGENorm);
        QWidget::setTabOrder(BtnGENorm, BtnGETilt);
        QWidget::setTabOrder(BtnGETilt, BtnShrink);
        QWidget::setTabOrder(BtnShrink, BtnExpand);
        QWidget::setTabOrder(BtnExpand, BtnRotL);
        QWidget::setTabOrder(BtnRotL, BtnHeading);
        QWidget::setTabOrder(BtnHeading, BtnRotR);
        QWidget::setTabOrder(BtnRotR, BtnClose);
        QWidget::setTabOrder(BtnClose, BtnOpt1);
        QWidget::setTabOrder(BtnOpt1, BtnOpt2);
        QWidget::setTabOrder(BtnOpt2, BtnOpt3);
        QWidget::setTabOrder(BtnOpt3, BtnOpt4);
        QWidget::setTabOrder(BtnOpt4, BtnOpt5);
        QWidget::setTabOrder(BtnOpt5, BtnOpt6);
        QWidget::setTabOrder(BtnOpt6, BtnOpt7);
        QWidget::setTabOrder(BtnOpt7, BtnOpt8);
        QWidget::setTabOrder(BtnOpt8, BtnOpt9);

        toolBar->addSeparator();

        retranslateUi(GoogleEarthView);

        QMetaObject::connectSlotsByName(GoogleEarthView);
    } // setupUi

    void retranslateUi(QMainWindow *GoogleEarthView)
    {
        GoogleEarthView->setWindowTitle(QApplication::translate("GoogleEarthView", "MainWindow", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        BtnExpand->setToolTip(QApplication::translate("GoogleEarthView", "Zoom In", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
        BtnExpand->setText(QString());
#ifndef QT_NO_TOOLTIP
        BtnHeading->setToolTip(QApplication::translate("GoogleEarthView", "Heading Up", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
        BtnHeading->setText(QString());
#ifndef QT_NO_TOOLTIP
        BtnFixCent->setToolTip(QApplication::translate("GoogleEarthView", "Fix Plot Center", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
        BtnFixCent->setText(QString());
#ifndef QT_NO_TOOLTIP
        BtnGETilt->setToolTip(QApplication::translate("GoogleEarthView", "Perspective View", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
        BtnGETilt->setText(QString());
#ifndef QT_NO_TOOLTIP
        BtnOpt->setToolTip(QApplication::translate("GoogleEarthView", "Show Objects", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
        BtnOpt->setText(QString());
#ifndef QT_NO_TOOLTIP
        BtnGENorm->setToolTip(QApplication::translate("GoogleEarthView", "Objective View", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
        BtnGENorm->setText(QString());
#ifndef QT_NO_TOOLTIP
        BtnRotL->setToolTip(QApplication::translate("GoogleEarthView", "Rotate Left", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
        BtnRotL->setText(QString());
#ifndef QT_NO_TOOLTIP
        BtnEnaAlt->setToolTip(QApplication::translate("GoogleEarthView", "Enable Altitude", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
        BtnEnaAlt->setText(QString());
#ifndef QT_NO_TOOLTIP
        BtnShrink->setToolTip(QApplication::translate("GoogleEarthView", "Zoom Out", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
        BtnShrink->setText(QString());
#ifndef QT_NO_TOOLTIP
        BtnRotR->setToolTip(QApplication::translate("GoogleEarthView", "Rotate Right", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
        BtnRotR->setText(QString());
#ifndef QT_NO_TOOLTIP
        Debug->setToolTip(QString());
#endif // QT_NO_TOOLTIP
        Debug->setText(QString());
#ifndef QT_NO_TOOLTIP
        Panel3->setToolTip(QString());
#endif // QT_NO_TOOLTIP
        Panel3->setText(QString());
#ifndef QT_NO_TOOLTIP
        Panel5->setToolTip(QString());
#endif // QT_NO_TOOLTIP
        Panel5->setProperty("text", QVariant(QApplication::translate("GoogleEarthView", "Panel5", Q_NULLPTR)));
#ifndef QT_NO_TOOLTIP
        BtnClose->setToolTip(QString());
#endif // QT_NO_TOOLTIP
        BtnClose->setText(QApplication::translate("GoogleEarthView", "Close", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        BtnOpt1->setToolTip(QApplication::translate("GoogleEarthView", "Layer Borders", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
        BtnOpt1->setText(QString());
#ifndef QT_NO_TOOLTIP
        BtnOpt2->setToolTip(QApplication::translate("GoogleEarthView", "Show Navigation Control", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
        BtnOpt2->setText(QString());
#ifndef QT_NO_TOOLTIP
        BtnOpt3->setToolTip(QApplication::translate("GoogleEarthView", "Show Scale Legend", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
        BtnOpt3->setText(QString());
#ifndef QT_NO_TOOLTIP
        BtnOpt4->setToolTip(QApplication::translate("GoogleEarthView", "Show Overview Map", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
        BtnOpt4->setText(QString());
#ifndef QT_NO_TOOLTIP
        BtnOpt5->setToolTip(QApplication::translate("GoogleEarthView", "Show Lat/Long Grid", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
        BtnOpt5->setText(QString());
#ifndef QT_NO_TOOLTIP
        BtnOpt6->setToolTip(QApplication::translate("GoogleEarthView", "Show Status Bar", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
        BtnOpt6->setText(QString());
#ifndef QT_NO_TOOLTIP
        BtnOpt7->setToolTip(QApplication::translate("GoogleEarthView", "Layer Terrain", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
        BtnOpt7->setText(QString());
#ifndef QT_NO_TOOLTIP
        BtnOpt8->setToolTip(QApplication::translate("GoogleEarthView", "Layer Loads", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
        BtnOpt8->setText(QString());
#ifndef QT_NO_TOOLTIP
        BtnOpt9->setToolTip(QApplication::translate("GoogleEarthView", "Layer Buildings", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
        BtnOpt9->setText(QString());
        toolBar->setWindowTitle(QApplication::translate("GoogleEarthView", "toolBar", Q_NULLPTR));
        toolBar_2->setWindowTitle(QApplication::translate("GoogleEarthView", "toolBar_2", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class GoogleEarthView: public Ui_GoogleEarthView {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_GEVIEW_H
