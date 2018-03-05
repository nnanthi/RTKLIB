/********************************************************************************
** Form generated from reading UI file 'kmzconv.ui'
**
** Created by: Qt User Interface Compiler version 5.9.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_KMZCONV_H
#define UI_KMZCONV_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QDateTimeEdit>
#include <QtWidgets/QDoubleSpinBox>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QRadioButton>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_ConvDialog
{
public:
    QVBoxLayout *verticalLayout;
    QWidget *Panel1;
    QGridLayout *gridLayout;
    QPushButton *BtnGoogleEarthFile;
    QCheckBox *TimeIntF;
    QCheckBox *Compress;
    QLabel *Message;
    QLineEdit *OutputFile;
    QComboBox *QFlags;
    QComboBox *OutputAlt;
    QLabel *Label4;
    QLineEdit *InputFile;
    QLabel *Label3;
    QLineEdit *GoogleEarthFile;
    QComboBox *OutputTime;
    QPushButton *BtnInputFile;
    QCheckBox *AddOffset;
    QLabel *label;
    QRadioButton *FormatKML;
    QRadioButton *FormatGPX;
    QDateTimeEdit *dateTime1;
    QCheckBox *TimeSpan;
    QComboBox *TrackColor;
    QLabel *Label5;
    QLabel *Label2;
    QLabel *Label1;
    QComboBox *PointColor;
    QLabel *Label7;
    QDateTimeEdit *dateTime2;
    QDoubleSpinBox *TimeInt;
    QDoubleSpinBox *Offset1;
    QDoubleSpinBox *Offset2;
    QDoubleSpinBox *Offset3;
    QWidget *widget;
    QHBoxLayout *horizontalLayout;
    QPushButton *BtnView;
    QPushButton *BtnConvert;
    QPushButton *BtnClose;

    void setupUi(QWidget *ConvDialog)
    {
        if (ConvDialog->objectName().isEmpty())
            ConvDialog->setObjectName(QStringLiteral("ConvDialog"));
        ConvDialog->resize(637, 414);
        verticalLayout = new QVBoxLayout(ConvDialog);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        Panel1 = new QWidget(ConvDialog);
        Panel1->setObjectName(QStringLiteral("Panel1"));
        Panel1->setEnabled(true);
        Panel1->setLayoutDirection(Qt::LeftToRight);
        gridLayout = new QGridLayout(Panel1);
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        gridLayout->setContentsMargins(0, 0, 0, 0);
        BtnGoogleEarthFile = new QPushButton(Panel1);
        BtnGoogleEarthFile->setObjectName(QStringLiteral("BtnGoogleEarthFile"));
        BtnGoogleEarthFile->setEnabled(true);
        QPalette palette;
        QBrush brush(QColor(0, 0, 0, 255));
        brush.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Active, QPalette::WindowText, brush);
        palette.setBrush(QPalette::Inactive, QPalette::WindowText, brush);
        palette.setBrush(QPalette::Disabled, QPalette::WindowText, brush);
        BtnGoogleEarthFile->setPalette(palette);
        BtnGoogleEarthFile->setFlat(false);

        gridLayout->addWidget(BtnGoogleEarthFile, 11, 8, 1, 1);

        TimeIntF = new QCheckBox(Panel1);
        TimeIntF->setObjectName(QStringLiteral("TimeIntF"));
        TimeIntF->setChecked(false);

        gridLayout->addWidget(TimeIntF, 4, 0, 1, 2);

        Compress = new QCheckBox(Panel1);
        Compress->setObjectName(QStringLiteral("Compress"));
        Compress->setChecked(false);

        gridLayout->addWidget(Compress, 8, 7, 1, 1);

        Message = new QLabel(Panel1);
        Message->setObjectName(QStringLiteral("Message"));
        Message->setEnabled(true);
        QSizePolicy sizePolicy(QSizePolicy::Preferred, QSizePolicy::Fixed);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(Message->sizePolicy().hasHeightForWidth());
        Message->setSizePolicy(sizePolicy);
        Message->setLayoutDirection(Qt::LeftToRight);
        Message->setFrameShape(QFrame::Box);
        Message->setFrameShadow(QFrame::Sunken);
        Message->setAlignment(Qt::AlignCenter);

        gridLayout->addWidget(Message, 12, 0, 1, 9);

        OutputFile = new QLineEdit(Panel1);
        OutputFile->setObjectName(QStringLiteral("OutputFile"));
        OutputFile->setEnabled(true);

        gridLayout->addWidget(OutputFile, 10, 0, 1, 9);

        QFlags = new QComboBox(Panel1);
        QFlags->setObjectName(QStringLiteral("QFlags"));
        QFlags->setEnabled(true);

        gridLayout->addWidget(QFlags, 4, 6, 1, 3);

        OutputAlt = new QComboBox(Panel1);
        OutputAlt->setObjectName(QStringLiteral("OutputAlt"));
        OutputAlt->setEnabled(true);

        gridLayout->addWidget(OutputAlt, 5, 6, 1, 3);

        Label4 = new QLabel(Panel1);
        Label4->setObjectName(QStringLiteral("Label4"));
        Label4->setEnabled(true);

        gridLayout->addWidget(Label4, 6, 4, 1, 2);

        InputFile = new QLineEdit(Panel1);
        InputFile->setObjectName(QStringLiteral("InputFile"));
        InputFile->setEnabled(true);

        gridLayout->addWidget(InputFile, 9, 0, 1, 9);

        Label3 = new QLabel(Panel1);
        Label3->setObjectName(QStringLiteral("Label3"));
        Label3->setEnabled(true);

        gridLayout->addWidget(Label3, 5, 4, 1, 2);

        GoogleEarthFile = new QLineEdit(Panel1);
        GoogleEarthFile->setObjectName(QStringLiteral("GoogleEarthFile"));
        GoogleEarthFile->setEnabled(true);

        gridLayout->addWidget(GoogleEarthFile, 11, 0, 1, 8);

        OutputTime = new QComboBox(Panel1);
        OutputTime->setObjectName(QStringLiteral("OutputTime"));
        OutputTime->setEnabled(true);

        gridLayout->addWidget(OutputTime, 6, 6, 1, 3);

        BtnInputFile = new QPushButton(Panel1);
        BtnInputFile->setObjectName(QStringLiteral("BtnInputFile"));
        BtnInputFile->setEnabled(true);
        QPalette palette1;
        palette1.setBrush(QPalette::Active, QPalette::WindowText, brush);
        palette1.setBrush(QPalette::Inactive, QPalette::WindowText, brush);
        palette1.setBrush(QPalette::Disabled, QPalette::WindowText, brush);
        BtnInputFile->setPalette(palette1);
        BtnInputFile->setFlat(false);

        gridLayout->addWidget(BtnInputFile, 8, 8, 1, 1);

        AddOffset = new QCheckBox(Panel1);
        AddOffset->setObjectName(QStringLiteral("AddOffset"));
        AddOffset->setChecked(false);

        gridLayout->addWidget(AddOffset, 7, 0, 1, 3);

        label = new QLabel(Panel1);
        label->setObjectName(QStringLiteral("label"));

        gridLayout->addWidget(label, 0, 0, 1, 1);

        FormatKML = new QRadioButton(Panel1);
        FormatKML->setObjectName(QStringLiteral("FormatKML"));

        gridLayout->addWidget(FormatKML, 0, 2, 1, 2);

        FormatGPX = new QRadioButton(Panel1);
        FormatGPX->setObjectName(QStringLiteral("FormatGPX"));

        gridLayout->addWidget(FormatGPX, 0, 5, 1, 2);

        dateTime1 = new QDateTimeEdit(Panel1);
        dateTime1->setObjectName(QStringLiteral("dateTime1"));
        dateTime1->setCalendarPopup(true);
        dateTime1->setTimeSpec(Qt::LocalTime);

        gridLayout->addWidget(dateTime1, 2, 2, 1, 3);

        TimeSpan = new QCheckBox(Panel1);
        TimeSpan->setObjectName(QStringLiteral("TimeSpan"));
        TimeSpan->setChecked(false);

        gridLayout->addWidget(TimeSpan, 2, 0, 1, 1);

        TrackColor = new QComboBox(Panel1);
        TrackColor->setObjectName(QStringLiteral("TrackColor"));
        TrackColor->setEnabled(true);

        gridLayout->addWidget(TrackColor, 5, 2, 1, 2);

        Label5 = new QLabel(Panel1);
        Label5->setObjectName(QStringLiteral("Label5"));
        Label5->setEnabled(true);

        gridLayout->addWidget(Label5, 4, 4, 1, 2);

        Label2 = new QLabel(Panel1);
        Label2->setObjectName(QStringLiteral("Label2"));
        Label2->setEnabled(true);

        gridLayout->addWidget(Label2, 6, 0, 1, 1);

        Label1 = new QLabel(Panel1);
        Label1->setObjectName(QStringLiteral("Label1"));
        Label1->setEnabled(true);

        gridLayout->addWidget(Label1, 5, 0, 1, 1);

        PointColor = new QComboBox(Panel1);
        PointColor->setObjectName(QStringLiteral("PointColor"));
        PointColor->setEnabled(true);

        gridLayout->addWidget(PointColor, 6, 2, 1, 2);

        Label7 = new QLabel(Panel1);
        Label7->setObjectName(QStringLiteral("Label7"));
        Label7->setEnabled(true);

        gridLayout->addWidget(Label7, 8, 0, 1, 3);

        dateTime2 = new QDateTimeEdit(Panel1);
        dateTime2->setObjectName(QStringLiteral("dateTime2"));
        dateTime2->setCalendarPopup(true);
        dateTime2->setTimeSpec(Qt::LocalTime);

        gridLayout->addWidget(dateTime2, 2, 5, 1, 4);

        TimeInt = new QDoubleSpinBox(Panel1);
        TimeInt->setObjectName(QStringLiteral("TimeInt"));
        TimeInt->setDecimals(1);
        TimeInt->setMaximum(100000);
        TimeInt->setValue(1);

        gridLayout->addWidget(TimeInt, 4, 2, 1, 2);

        Offset1 = new QDoubleSpinBox(Panel1);
        Offset1->setObjectName(QStringLiteral("Offset1"));
        Offset1->setDecimals(4);
        Offset1->setMaximum(1000);

        gridLayout->addWidget(Offset1, 7, 3, 1, 2);

        Offset2 = new QDoubleSpinBox(Panel1);
        Offset2->setObjectName(QStringLiteral("Offset2"));
        Offset2->setDecimals(4);
        Offset2->setMaximum(10000);

        gridLayout->addWidget(Offset2, 7, 5, 1, 2);

        Offset3 = new QDoubleSpinBox(Panel1);
        Offset3->setObjectName(QStringLiteral("Offset3"));
        Offset3->setDecimals(4);
        Offset3->setMaximum(10000);

        gridLayout->addWidget(Offset3, 7, 7, 1, 2);


        verticalLayout->addWidget(Panel1);

        widget = new QWidget(ConvDialog);
        widget->setObjectName(QStringLiteral("widget"));
        sizePolicy.setHeightForWidth(widget->sizePolicy().hasHeightForWidth());
        widget->setSizePolicy(sizePolicy);
        horizontalLayout = new QHBoxLayout(widget);
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        horizontalLayout->setContentsMargins(0, 0, 0, 0);
        BtnView = new QPushButton(widget);
        BtnView->setObjectName(QStringLiteral("BtnView"));
        QIcon icon;
        icon.addFile(QStringLiteral(":/buttons/doc.bmp"), QSize(), QIcon::Normal, QIcon::Off);
        BtnView->setIcon(icon);

        horizontalLayout->addWidget(BtnView);

        BtnConvert = new QPushButton(widget);
        BtnConvert->setObjectName(QStringLiteral("BtnConvert"));
        BtnConvert->setEnabled(true);
        BtnConvert->setAutoDefault(true);

        horizontalLayout->addWidget(BtnConvert);

        BtnClose = new QPushButton(widget);
        BtnClose->setObjectName(QStringLiteral("BtnClose"));
        BtnClose->setEnabled(true);

        horizontalLayout->addWidget(BtnClose);


        verticalLayout->addWidget(widget);

        QWidget::setTabOrder(BtnConvert, BtnClose);
        QWidget::setTabOrder(BtnClose, FormatKML);
        QWidget::setTabOrder(FormatKML, FormatGPX);
        QWidget::setTabOrder(FormatGPX, TimeSpan);
        QWidget::setTabOrder(TimeSpan, dateTime1);
        QWidget::setTabOrder(dateTime1, dateTime2);
        QWidget::setTabOrder(dateTime2, TimeIntF);
        QWidget::setTabOrder(TimeIntF, TimeInt);
        QWidget::setTabOrder(TimeInt, QFlags);
        QWidget::setTabOrder(QFlags, TrackColor);
        QWidget::setTabOrder(TrackColor, OutputAlt);
        QWidget::setTabOrder(OutputAlt, PointColor);
        QWidget::setTabOrder(PointColor, OutputTime);
        QWidget::setTabOrder(OutputTime, AddOffset);
        QWidget::setTabOrder(AddOffset, Offset1);
        QWidget::setTabOrder(Offset1, Offset2);
        QWidget::setTabOrder(Offset2, Offset3);
        QWidget::setTabOrder(Offset3, Compress);
        QWidget::setTabOrder(Compress, BtnInputFile);
        QWidget::setTabOrder(BtnInputFile, InputFile);
        QWidget::setTabOrder(InputFile, OutputFile);
        QWidget::setTabOrder(OutputFile, GoogleEarthFile);
        QWidget::setTabOrder(GoogleEarthFile, BtnGoogleEarthFile);
        QWidget::setTabOrder(BtnGoogleEarthFile, BtnView);

        retranslateUi(ConvDialog);

        BtnConvert->setDefault(true);


        QMetaObject::connectSlotsByName(ConvDialog);
    } // setupUi

    void retranslateUi(QWidget *ConvDialog)
    {
        ConvDialog->setWindowTitle(QApplication::translate("ConvDialog", "KML/GPX Converter", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        ConvDialog->setToolTip(QString());
#endif // QT_NO_TOOLTIP
#ifndef QT_NO_TOOLTIP
        Panel1->setToolTip(QString());
#endif // QT_NO_TOOLTIP
        Panel1->setProperty("text", QVariant(QString()));
#ifndef QT_NO_TOOLTIP
        BtnGoogleEarthFile->setToolTip(QString());
#endif // QT_NO_TOOLTIP
        BtnGoogleEarthFile->setText(QApplication::translate("ConvDialog", "...", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        TimeIntF->setToolTip(QString());
#endif // QT_NO_TOOLTIP
        TimeIntF->setText(QApplication::translate("ConvDialog", "Interval", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        Compress->setToolTip(QString());
#endif // QT_NO_TOOLTIP
        Compress->setText(QApplication::translate("ConvDialog", ".kmz", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        Message->setToolTip(QString());
#endif // QT_NO_TOOLTIP
        Message->setText(QString());
#ifndef QT_NO_TOOLTIP
        OutputFile->setToolTip(QString());
#endif // QT_NO_TOOLTIP
        OutputFile->setText(QString());
        QFlags->clear();
        QFlags->insertItems(0, QStringList()
         << QApplication::translate("ConvDialog", "ALL", Q_NULLPTR)
         << QApplication::translate("ConvDialog", "Q=1", Q_NULLPTR)
         << QApplication::translate("ConvDialog", "Q=2", Q_NULLPTR)
         << QApplication::translate("ConvDialog", "Q=3", Q_NULLPTR)
         << QApplication::translate("ConvDialog", "Q=4", Q_NULLPTR)
         << QApplication::translate("ConvDialog", "Q=5", Q_NULLPTR)
         << QApplication::translate("ConvDialog", "Q=6", Q_NULLPTR)
        );
#ifndef QT_NO_TOOLTIP
        QFlags->setToolTip(QString());
#endif // QT_NO_TOOLTIP
        OutputAlt->clear();
        OutputAlt->insertItems(0, QStringList()
         << QApplication::translate("ConvDialog", "OFF", Q_NULLPTR)
         << QApplication::translate("ConvDialog", "Ellipsoidal", Q_NULLPTR)
         << QApplication::translate("ConvDialog", "Geodetic", Q_NULLPTR)
        );
#ifndef QT_NO_TOOLTIP
        OutputAlt->setToolTip(QString());
#endif // QT_NO_TOOLTIP
#ifndef QT_NO_TOOLTIP
        Label4->setToolTip(QString());
#endif // QT_NO_TOOLTIP
        Label4->setText(QApplication::translate("ConvDialog", "Output Time", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        InputFile->setToolTip(QString());
#endif // QT_NO_TOOLTIP
        InputFile->setText(QString());
#ifndef QT_NO_TOOLTIP
        Label3->setToolTip(QString());
#endif // QT_NO_TOOLTIP
        Label3->setText(QApplication::translate("ConvDialog", "Output Altitude", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        GoogleEarthFile->setToolTip(QString());
#endif // QT_NO_TOOLTIP
        GoogleEarthFile->setText(QString());
        OutputTime->clear();
        OutputTime->insertItems(0, QStringList()
         << QApplication::translate("ConvDialog", "OFF", Q_NULLPTR)
         << QApplication::translate("ConvDialog", "GPST", Q_NULLPTR)
         << QApplication::translate("ConvDialog", "UTC", Q_NULLPTR)
         << QApplication::translate("ConvDialog", "JST", Q_NULLPTR)
        );
#ifndef QT_NO_TOOLTIP
        OutputTime->setToolTip(QString());
#endif // QT_NO_TOOLTIP
#ifndef QT_NO_TOOLTIP
        BtnInputFile->setToolTip(QString());
#endif // QT_NO_TOOLTIP
        BtnInputFile->setText(QApplication::translate("ConvDialog", "...", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        AddOffset->setToolTip(QString());
#endif // QT_NO_TOOLTIP
        AddOffset->setText(QApplication::translate("ConvDialog", "Add Offset E/N/U", Q_NULLPTR));
        label->setText(QApplication::translate("ConvDialog", "Output Format", Q_NULLPTR));
        FormatKML->setText(QApplication::translate("ConvDialog", "Google &Earth KML", Q_NULLPTR));
        FormatGPX->setText(QApplication::translate("ConvDialog", "GP&X", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        TimeSpan->setToolTip(QString());
#endif // QT_NO_TOOLTIP
        TimeSpan->setText(QApplication::translate("ConvDialog", "Time Span", Q_NULLPTR));
        TrackColor->clear();
        TrackColor->insertItems(0, QStringList()
         << QApplication::translate("ConvDialog", "OFF", Q_NULLPTR)
         << QApplication::translate("ConvDialog", "White", Q_NULLPTR)
         << QApplication::translate("ConvDialog", "Green", Q_NULLPTR)
         << QApplication::translate("ConvDialog", "Orange", Q_NULLPTR)
         << QApplication::translate("ConvDialog", "Red", Q_NULLPTR)
         << QApplication::translate("ConvDialog", "Yellow", Q_NULLPTR)
        );
#ifndef QT_NO_TOOLTIP
        TrackColor->setToolTip(QString());
#endif // QT_NO_TOOLTIP
#ifndef QT_NO_TOOLTIP
        Label5->setToolTip(QString());
#endif // QT_NO_TOOLTIP
        Label5->setText(QApplication::translate("ConvDialog", "Q-Flags", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        Label2->setToolTip(QString());
#endif // QT_NO_TOOLTIP
        Label2->setText(QApplication::translate("ConvDialog", "Output Waypoint", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        Label1->setToolTip(QString());
#endif // QT_NO_TOOLTIP
        Label1->setText(QApplication::translate("ConvDialog", "Output Track", Q_NULLPTR));
        PointColor->clear();
        PointColor->insertItems(0, QStringList()
         << QApplication::translate("ConvDialog", "OFF", Q_NULLPTR)
         << QApplication::translate("ConvDialog", "White", Q_NULLPTR)
         << QApplication::translate("ConvDialog", "Green", Q_NULLPTR)
         << QApplication::translate("ConvDialog", "Orange", Q_NULLPTR)
         << QApplication::translate("ConvDialog", "Red", Q_NULLPTR)
         << QApplication::translate("ConvDialog", "By Q-Flag", Q_NULLPTR)
        );
#ifndef QT_NO_TOOLTIP
        PointColor->setToolTip(QString());
#endif // QT_NO_TOOLTIP
#ifndef QT_NO_TOOLTIP
        Label7->setToolTip(QString());
#endif // QT_NO_TOOLTIP
        Label7->setText(QApplication::translate("ConvDialog", "Input/Output/GE Exe File", Q_NULLPTR));
        TimeInt->setSuffix(QApplication::translate("ConvDialog", " s", Q_NULLPTR));
        Offset1->setSuffix(QApplication::translate("ConvDialog", " m", Q_NULLPTR));
        Offset2->setSuffix(QApplication::translate("ConvDialog", " m", Q_NULLPTR));
        Offset3->setSuffix(QApplication::translate("ConvDialog", " m", Q_NULLPTR));
        BtnView->setText(QApplication::translate("ConvDialog", "&View....", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        BtnConvert->setToolTip(QString());
#endif // QT_NO_TOOLTIP
        BtnConvert->setText(QApplication::translate("ConvDialog", "Con&vert", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        BtnClose->setToolTip(QString());
#endif // QT_NO_TOOLTIP
        BtnClose->setText(QApplication::translate("ConvDialog", "&Close", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class ConvDialog: public Ui_ConvDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_KMZCONV_H
