/********************************************************************************
** Form generated from reading UI file 'markdlg.ui'
**
** Created by: Qt User Interface Compiler version 5.9.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MARKDLG_H
#define UI_MARKDLG_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QDoubleSpinBox>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QRadioButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MarkDialog
{
public:
    QGridLayout *gridLayout;
    QLabel *Label1;
    QRadioButton *RadioGo;
    QPushButton *BtnRepDlg;
    QRadioButton *RadioStop;
    QComboBox *MarkerName;
    QLabel *Label2;
    QLineEdit *MarkerComment;
    QLabel *LabelPosMode;
    QPushButton *BtnOk;
    QPushButton *BtnCancel;
    QCheckBox *ChkMarkerName;
    QLabel *LabelPos;
    QRadioButton *RadioFix;
    QDoubleSpinBox *EditLon;
    QDoubleSpinBox *EditLat;
    QDoubleSpinBox *EditHgt;
    QPushButton *BtnPos;

    void setupUi(QWidget *MarkDialog)
    {
        if (MarkDialog->objectName().isEmpty())
            MarkDialog->setObjectName(QStringLiteral("MarkDialog"));
        MarkDialog->resize(471, 276);
        gridLayout = new QGridLayout(MarkDialog);
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        Label1 = new QLabel(MarkDialog);
        Label1->setObjectName(QStringLiteral("Label1"));
        QSizePolicy sizePolicy(QSizePolicy::Preferred, QSizePolicy::Fixed);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(Label1->sizePolicy().hasHeightForWidth());
        Label1->setSizePolicy(sizePolicy);

        gridLayout->addWidget(Label1, 0, 4, 1, 1);

        RadioGo = new QRadioButton(MarkDialog);
        RadioGo->setObjectName(QStringLiteral("RadioGo"));
        RadioGo->setEnabled(true);
        RadioGo->setLayoutDirection(Qt::LeftToRight);
        RadioGo->setChecked(false);

        gridLayout->addWidget(RadioGo, 5, 0, 1, 1);

        BtnRepDlg = new QPushButton(MarkDialog);
        BtnRepDlg->setObjectName(QStringLiteral("BtnRepDlg"));
        BtnRepDlg->setFlat(true);

        gridLayout->addWidget(BtnRepDlg, 0, 3, 1, 1);

        RadioStop = new QRadioButton(MarkDialog);
        RadioStop->setObjectName(QStringLiteral("RadioStop"));
        RadioStop->setEnabled(true);
        RadioStop->setLayoutDirection(Qt::LeftToRight);
        RadioStop->setChecked(false);

        gridLayout->addWidget(RadioStop, 5, 1, 1, 1);

        MarkerName = new QComboBox(MarkDialog);
        MarkerName->setObjectName(QStringLiteral("MarkerName"));
        MarkerName->setEnabled(true);
        MarkerName->setEditable(true);

        gridLayout->addWidget(MarkerName, 1, 0, 1, 5);

        Label2 = new QLabel(MarkDialog);
        Label2->setObjectName(QStringLiteral("Label2"));
        Label2->setEnabled(true);
        sizePolicy.setHeightForWidth(Label2->sizePolicy().hasHeightForWidth());
        Label2->setSizePolicy(sizePolicy);

        gridLayout->addWidget(Label2, 2, 0, 1, 1);

        MarkerComment = new QLineEdit(MarkDialog);
        MarkerComment->setObjectName(QStringLiteral("MarkerComment"));
        MarkerComment->setEnabled(true);

        gridLayout->addWidget(MarkerComment, 3, 0, 1, 5);

        LabelPosMode = new QLabel(MarkDialog);
        LabelPosMode->setObjectName(QStringLiteral("LabelPosMode"));
        LabelPosMode->setEnabled(true);
        sizePolicy.setHeightForWidth(LabelPosMode->sizePolicy().hasHeightForWidth());
        LabelPosMode->setSizePolicy(sizePolicy);

        gridLayout->addWidget(LabelPosMode, 4, 0, 1, 2);

        BtnOk = new QPushButton(MarkDialog);
        BtnOk->setObjectName(QStringLiteral("BtnOk"));
        BtnOk->setEnabled(true);
        BtnOk->setAutoDefault(true);

        gridLayout->addWidget(BtnOk, 8, 1, 1, 2);

        BtnCancel = new QPushButton(MarkDialog);
        BtnCancel->setObjectName(QStringLiteral("BtnCancel"));
        BtnCancel->setEnabled(true);

        gridLayout->addWidget(BtnCancel, 8, 3, 1, 2);

        ChkMarkerName = new QCheckBox(MarkDialog);
        ChkMarkerName->setObjectName(QStringLiteral("ChkMarkerName"));
        ChkMarkerName->setChecked(false);

        gridLayout->addWidget(ChkMarkerName, 0, 0, 1, 1);

        LabelPos = new QLabel(MarkDialog);
        LabelPos->setObjectName(QStringLiteral("LabelPos"));

        gridLayout->addWidget(LabelPos, 6, 0, 1, 2);

        RadioFix = new QRadioButton(MarkDialog);
        RadioFix->setObjectName(QStringLiteral("RadioFix"));

        gridLayout->addWidget(RadioFix, 5, 3, 1, 1);

        EditLon = new QDoubleSpinBox(MarkDialog);
        EditLon->setObjectName(QStringLiteral("EditLon"));
        EditLon->setDecimals(8);

        gridLayout->addWidget(EditLon, 7, 1, 1, 1);

        EditLat = new QDoubleSpinBox(MarkDialog);
        EditLat->setObjectName(QStringLiteral("EditLat"));
        EditLat->setDecimals(8);

        gridLayout->addWidget(EditLat, 7, 0, 1, 1);

        EditHgt = new QDoubleSpinBox(MarkDialog);
        EditHgt->setObjectName(QStringLiteral("EditHgt"));
        EditHgt->setDecimals(4);

        gridLayout->addWidget(EditHgt, 7, 3, 1, 1);

        BtnPos = new QPushButton(MarkDialog);
        BtnPos->setObjectName(QStringLiteral("BtnPos"));

        gridLayout->addWidget(BtnPos, 7, 4, 1, 1);

        QWidget::setTabOrder(ChkMarkerName, MarkerName);
        QWidget::setTabOrder(MarkerName, MarkerComment);
        QWidget::setTabOrder(MarkerComment, BtnOk);
        QWidget::setTabOrder(BtnOk, BtnCancel);

        retranslateUi(MarkDialog);

        BtnOk->setDefault(true);


        QMetaObject::connectSlotsByName(MarkDialog);
    } // setupUi

    void retranslateUi(QWidget *MarkDialog)
    {
        MarkDialog->setWindowTitle(QApplication::translate("MarkDialog", "Add Mark", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        MarkDialog->setToolTip(QString());
#endif // QT_NO_TOOLTIP
        Label1->setText(QApplication::translate("MarkDialog", "%r=001", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        RadioGo->setToolTip(QString());
#endif // QT_NO_TOOLTIP
        RadioGo->setText(QApplication::translate("MarkDialog", "&GO (Kinematic)", Q_NULLPTR));
        BtnRepDlg->setText(QApplication::translate("MarkDialog", "?", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        RadioStop->setToolTip(QString());
#endif // QT_NO_TOOLTIP
        RadioStop->setText(QApplication::translate("MarkDialog", "STOP (Stati&c)", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        MarkerName->setToolTip(QString());
#endif // QT_NO_TOOLTIP
#ifndef QT_NO_TOOLTIP
        Label2->setToolTip(QString());
#endif // QT_NO_TOOLTIP
        Label2->setText(QApplication::translate("MarkDialog", "Comment", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        MarkerComment->setToolTip(QString());
#endif // QT_NO_TOOLTIP
        MarkerComment->setText(QString());
#ifndef QT_NO_TOOLTIP
        LabelPosMode->setToolTip(QString());
#endif // QT_NO_TOOLTIP
        LabelPosMode->setText(QApplication::translate("MarkDialog", "Switch Positioning Mode", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        BtnOk->setToolTip(QString());
#endif // QT_NO_TOOLTIP
        BtnOk->setText(QApplication::translate("MarkDialog", "&OK", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        BtnCancel->setToolTip(QString());
#endif // QT_NO_TOOLTIP
        BtnCancel->setText(QApplication::translate("MarkDialog", "&Cancel", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        ChkMarkerName->setToolTip(QString());
#endif // QT_NO_TOOLTIP
        ChkMarkerName->setText(QApplication::translate("MarkDialog", "Marker Name", Q_NULLPTR));
        LabelPos->setText(QApplication::translate("MarkDialog", "Lat/Lon/Height (deg/m)", Q_NULLPTR));
        RadioFix->setText(QApplication::translate("MarkDialog", "FIX (Fixed)", Q_NULLPTR));
        BtnPos->setText(QApplication::translate("MarkDialog", "...", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class MarkDialog: public Ui_MarkDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MARKDLG_H
