/********************************************************************************
** Form generated from reading UI file 'mondlg.ui'
**
** Created by: Qt User Interface Compiler version 5.9.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MONDLG_H
#define UI_MONDLG_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QTableWidget>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MonitorDialog
{
public:
    QVBoxLayout *verticalLayout;
    QWidget *Panel1;
    QHBoxLayout *horizontalLayout;
    QComboBox *Type;
    QComboBox *SelObs;
    QComboBox *SelIon;
    QComboBox *SelSat;
    QPushButton *BtnClose;
    QSpacerItem *horizontalSpacer;
    QComboBox *SelStr;
    QPushButton *BtnClear;
    QPushButton *BtnPause;
    QPushButton *BtnDown;
    QComboBox *SelEph;
    QComboBox *SelFmt;
    QLabel *Label;
    QTableWidget *Console;

    void setupUi(QWidget *MonitorDialog)
    {
        if (MonitorDialog->objectName().isEmpty())
            MonitorDialog->setObjectName(QStringLiteral("MonitorDialog"));
        MonitorDialog->resize(1035, 502);
        verticalLayout = new QVBoxLayout(MonitorDialog);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        Panel1 = new QWidget(MonitorDialog);
        Panel1->setObjectName(QStringLiteral("Panel1"));
        Panel1->setEnabled(true);
        QSizePolicy sizePolicy(QSizePolicy::Fixed, QSizePolicy::Maximum);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(Panel1->sizePolicy().hasHeightForWidth());
        Panel1->setSizePolicy(sizePolicy);
        horizontalLayout = new QHBoxLayout(Panel1);
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        horizontalLayout->setContentsMargins(0, 0, 0, 0);
        Type = new QComboBox(Panel1);
        Type->setObjectName(QStringLiteral("Type"));
        Type->setEnabled(true);
        Type->setMaxVisibleItems(35);

        horizontalLayout->addWidget(Type);

        SelObs = new QComboBox(Panel1);
        SelObs->setObjectName(QStringLiteral("SelObs"));
        SelObs->setEnabled(true);

        horizontalLayout->addWidget(SelObs);

        SelIon = new QComboBox(Panel1);
        SelIon->setObjectName(QStringLiteral("SelIon"));
        SelIon->setEnabled(true);

        horizontalLayout->addWidget(SelIon);

        SelSat = new QComboBox(Panel1);
        SelSat->setObjectName(QStringLiteral("SelSat"));
        SelSat->setEnabled(true);

        horizontalLayout->addWidget(SelSat);

        BtnClose = new QPushButton(Panel1);
        BtnClose->setObjectName(QStringLiteral("BtnClose"));
        BtnClose->setEnabled(true);
        BtnClose->setAutoDefault(true);

        horizontalLayout->addWidget(BtnClose);

        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer);

        SelStr = new QComboBox(Panel1);
        SelStr->setObjectName(QStringLiteral("SelStr"));
        SelStr->setEnabled(true);

        horizontalLayout->addWidget(SelStr);

        BtnClear = new QPushButton(Panel1);
        BtnClear->setObjectName(QStringLiteral("BtnClear"));
        BtnClear->setEnabled(true);
        QIcon icon;
        icon.addFile(QStringLiteral(":/buttons/del.bmp"), QSize(), QIcon::Normal, QIcon::Off);
        BtnClear->setIcon(icon);
        BtnClear->setFlat(true);

        horizontalLayout->addWidget(BtnClear);

        BtnPause = new QPushButton(Panel1);
        BtnPause->setObjectName(QStringLiteral("BtnPause"));
        BtnPause->setEnabled(true);
        QIcon icon1;
        icon1.addFile(QStringLiteral(":/buttons/pause.bmp"), QSize(), QIcon::Normal, QIcon::Off);
        BtnPause->setIcon(icon1);
        BtnPause->setCheckable(true);
        BtnPause->setFlat(true);

        horizontalLayout->addWidget(BtnPause);

        BtnDown = new QPushButton(Panel1);
        BtnDown->setObjectName(QStringLiteral("BtnDown"));
        BtnDown->setEnabled(true);
        QIcon icon2;
        icon2.addFile(QStringLiteral(":/buttons/fitd.bmp"), QSize(), QIcon::Normal, QIcon::Off);
        BtnDown->setIcon(icon2);
        BtnDown->setCheckable(true);
        BtnDown->setChecked(true);
        BtnDown->setFlat(true);

        horizontalLayout->addWidget(BtnDown);

        SelEph = new QComboBox(Panel1);
        SelEph->setObjectName(QStringLiteral("SelEph"));
        SelEph->setEnabled(true);

        horizontalLayout->addWidget(SelEph);

        SelFmt = new QComboBox(Panel1);
        SelFmt->setObjectName(QStringLiteral("SelFmt"));
        SelFmt->setEnabled(true);

        horizontalLayout->addWidget(SelFmt);

        Label = new QLabel(Panel1);
        Label->setObjectName(QStringLiteral("Label"));
        Label->setEnabled(true);

        horizontalLayout->addWidget(Label);


        verticalLayout->addWidget(Panel1);

        Console = new QTableWidget(MonitorDialog);
        Console->setObjectName(QStringLiteral("Console"));

        verticalLayout->addWidget(Console);


        retranslateUi(MonitorDialog);

        BtnClose->setDefault(true);


        QMetaObject::connectSlotsByName(MonitorDialog);
    } // setupUi

    void retranslateUi(QWidget *MonitorDialog)
    {
        MonitorDialog->setWindowTitle(QApplication::translate("MonitorDialog", "RTK Monitor", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        MonitorDialog->setToolTip(QString());
#endif // QT_NO_TOOLTIP
#ifndef QT_NO_TOOLTIP
        Panel1->setToolTip(QString());
#endif // QT_NO_TOOLTIP
        Panel1->setProperty("text", QVariant(QString()));
        Type->clear();
        Type->insertItems(0, QStringList()
         << QApplication::translate("MonitorDialog", "RTK", Q_NULLPTR)
         << QApplication::translate("MonitorDialog", "Obs Data", Q_NULLPTR)
         << QApplication::translate("MonitorDialog", "Nav GPS", Q_NULLPTR)
         << QApplication::translate("MonitorDialog", "Nav GLONASS", Q_NULLPTR)
         << QApplication::translate("MonitorDialog", "Nav Galileo", Q_NULLPTR)
         << QApplication::translate("MonitorDialog", "Nav QZSS", Q_NULLPTR)
         << QApplication::translate("MonitorDialog", "Nav BeiDou", Q_NULLPTR)
         << QApplication::translate("MonitorDialog", "Nav GEO", Q_NULLPTR)
         << QApplication::translate("MonitorDialog", "Time/Iono", Q_NULLPTR)
         << QApplication::translate("MonitorDialog", "Streams", Q_NULLPTR)
         << QApplication::translate("MonitorDialog", "Sat GPS", Q_NULLPTR)
         << QApplication::translate("MonitorDialog", "Sat GLONASS", Q_NULLPTR)
         << QApplication::translate("MonitorDialog", "Sat Galileo", Q_NULLPTR)
         << QApplication::translate("MonitorDialog", "Sat QZSS", Q_NULLPTR)
         << QApplication::translate("MonitorDialog", "Sat BeiDou", Q_NULLPTR)
         << QApplication::translate("MonitorDialog", "Sat GEO", Q_NULLPTR)
         << QApplication::translate("MonitorDialog", "States", Q_NULLPTR)
         << QApplication::translate("MonitorDialog", "Covariance", Q_NULLPTR)
         << QApplication::translate("MonitorDialog", "SBAS Msgs", Q_NULLPTR)
         << QApplication::translate("MonitorDialog", "SBAS Long", Q_NULLPTR)
         << QApplication::translate("MonitorDialog", "SBAS Iono", Q_NULLPTR)
         << QApplication::translate("MonitorDialog", "SBAS Fast", Q_NULLPTR)
         << QApplication::translate("MonitorDialog", "RTCM Msgs", Q_NULLPTR)
         << QApplication::translate("MonitorDialog", "RTCM DGPS", Q_NULLPTR)
         << QApplication::translate("MonitorDialog", "RTCM SSR", Q_NULLPTR)
         << QApplication::translate("MonitorDialog", "LEX Msgs", Q_NULLPTR)
         << QApplication::translate("MonitorDialog", "LEX Eph/Clock", Q_NULLPTR)
         << QApplication::translate("MonitorDialog", "LEX Iono", Q_NULLPTR)
         << QApplication::translate("MonitorDialog", "Iono Correction", Q_NULLPTR)
         << QApplication::translate("MonitorDialog", "1 Rover", Q_NULLPTR)
         << QApplication::translate("MonitorDialog", "2 Base Station", Q_NULLPTR)
         << QApplication::translate("MonitorDialog", "3 Correction", Q_NULLPTR)
         << QApplication::translate("MonitorDialog", "4 Solution1", Q_NULLPTR)
         << QApplication::translate("MonitorDialog", "5 Solution2", Q_NULLPTR)
         << QApplication::translate("MonitorDialog", "Error/Warning", Q_NULLPTR)
        );
#ifndef QT_NO_TOOLTIP
        Type->setToolTip(QString());
#endif // QT_NO_TOOLTIP
        SelObs->clear();
        SelObs->insertItems(0, QStringList()
         << QApplication::translate("MonitorDialog", "Normal", Q_NULLPTR)
         << QApplication::translate("MonitorDialog", "Extended", Q_NULLPTR)
        );
#ifndef QT_NO_TOOLTIP
        SelObs->setToolTip(QApplication::translate("MonitorDialog", "Stream", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
        SelIon->clear();
        SelIon->insertItems(0, QStringList()
         << QApplication::translate("MonitorDialog", "OFF", Q_NULLPTR)
         << QApplication::translate("MonitorDialog", "Broadcast", Q_NULLPTR)
         << QApplication::translate("MonitorDialog", "SBAS", Q_NULLPTR)
         << QApplication::translate("MonitorDialog", "Dual-Freq", Q_NULLPTR)
         << QApplication::translate("MonitorDialog", "Estimate STEC", Q_NULLPTR)
         << QApplication::translate("MonitorDialog", "IONEX TEC", Q_NULLPTR)
         << QApplication::translate("MonitorDialog", "QZS Broadcast", Q_NULLPTR)
         << QApplication::translate("MonitorDialog", "QZS LEX", Q_NULLPTR)
        );
#ifndef QT_NO_TOOLTIP
        SelIon->setToolTip(QApplication::translate("MonitorDialog", "Stream", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
        SelSat->clear();
        SelSat->insertItems(0, QStringList()
         << QApplication::translate("MonitorDialog", "All", Q_NULLPTR)
         << QApplication::translate("MonitorDialog", "Only OK", Q_NULLPTR)
        );
#ifndef QT_NO_TOOLTIP
        SelSat->setToolTip(QApplication::translate("MonitorDialog", "Stream", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
#ifndef QT_NO_TOOLTIP
        BtnClose->setToolTip(QString());
#endif // QT_NO_TOOLTIP
        BtnClose->setText(QApplication::translate("MonitorDialog", "&Close", Q_NULLPTR));
        SelStr->clear();
        SelStr->insertItems(0, QStringList()
         << QApplication::translate("MonitorDialog", "1 Rover", Q_NULLPTR)
         << QApplication::translate("MonitorDialog", "2 Base Station", Q_NULLPTR)
         << QApplication::translate("MonitorDialog", "3 Correction", Q_NULLPTR)
         << QApplication::translate("MonitorDialog", "0 Combined", Q_NULLPTR)
        );
#ifndef QT_NO_TOOLTIP
        SelStr->setToolTip(QApplication::translate("MonitorDialog", "Stream", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
#ifndef QT_NO_TOOLTIP
        BtnClear->setToolTip(QApplication::translate("MonitorDialog", "Clear", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
        BtnClear->setText(QString());
#ifndef QT_NO_TOOLTIP
        BtnPause->setToolTip(QApplication::translate("MonitorDialog", "Pause", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
        BtnPause->setText(QString());
#ifndef QT_NO_TOOLTIP
        BtnDown->setToolTip(QApplication::translate("MonitorDialog", "Scroll Down", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
        BtnDown->setText(QString());
        SelEph->clear();
        SelEph->insertItems(0, QStringList()
         << QApplication::translate("MonitorDialog", "Current", Q_NULLPTR)
         << QApplication::translate("MonitorDialog", "Previous", Q_NULLPTR)
        );
#ifndef QT_NO_TOOLTIP
        SelEph->setToolTip(QApplication::translate("MonitorDialog", "Stream", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
        SelFmt->clear();
        SelFmt->insertItems(0, QStringList()
         << QApplication::translate("MonitorDialog", "HEX", Q_NULLPTR)
         << QApplication::translate("MonitorDialog", "ASCII", Q_NULLPTR)
        );
#ifndef QT_NO_TOOLTIP
        SelFmt->setToolTip(QApplication::translate("MonitorDialog", "Stream", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
#ifndef QT_NO_TOOLTIP
        Label->setToolTip(QString());
#endif // QT_NO_TOOLTIP
        Label->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class MonitorDialog: public Ui_MonitorDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MONDLG_H
