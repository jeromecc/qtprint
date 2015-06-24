/********************************************************************************
** Form generated from reading UI file 'widget.ui'
**
** Created by: Qt User Interface Compiler version 5.3.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_WIDGET_H
#define UI_WIDGET_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Widget
{
public:
    QComboBox *printerComboBox;
    QLabel *descriptionLabel;
    QLabel *defaultPrinterLabel;
    QLabel *isNullLabel;
    QLabel *isRemoteLabel;
    QLabel *locationLabel;
    QLabel *makeAndModelLabel;
    QLabel *stateLabel;
    QLabel *defaultPageSizeLabel;
    QComboBox *resolutionsComboBox;
    QComboBox *pageSizesComboBox;
    QLabel *minimumPageSizeLabel;
    QLabel *maximumPageSizeLabel;
    QLabel *customPageSizesLabel;
    QLabel *customPageSizesLabel_2;

    void setupUi(QWidget *Widget)
    {
        if (Widget->objectName().isEmpty())
            Widget->setObjectName(QStringLiteral("Widget"));
        Widget->resize(400, 441);
        printerComboBox = new QComboBox(Widget);
        printerComboBox->setObjectName(QStringLiteral("printerComboBox"));
        printerComboBox->setGeometry(QRect(220, 10, 86, 29));
        descriptionLabel = new QLabel(Widget);
        descriptionLabel->setObjectName(QStringLiteral("descriptionLabel"));
        descriptionLabel->setGeometry(QRect(220, 50, 81, 21));
        defaultPrinterLabel = new QLabel(Widget);
        defaultPrinterLabel->setObjectName(QStringLiteral("defaultPrinterLabel"));
        defaultPrinterLabel->setGeometry(QRect(220, 130, 121, 21));
        isNullLabel = new QLabel(Widget);
        isNullLabel->setObjectName(QStringLiteral("isNullLabel"));
        isNullLabel->setGeometry(QRect(220, 70, 101, 21));
        isRemoteLabel = new QLabel(Widget);
        isRemoteLabel->setObjectName(QStringLiteral("isRemoteLabel"));
        isRemoteLabel->setGeometry(QRect(220, 100, 101, 21));
        locationLabel = new QLabel(Widget);
        locationLabel->setObjectName(QStringLiteral("locationLabel"));
        locationLabel->setGeometry(QRect(220, 150, 101, 21));
        makeAndModelLabel = new QLabel(Widget);
        makeAndModelLabel->setObjectName(QStringLiteral("makeAndModelLabel"));
        makeAndModelLabel->setGeometry(QRect(220, 170, 151, 21));
        stateLabel = new QLabel(Widget);
        stateLabel->setObjectName(QStringLiteral("stateLabel"));
        stateLabel->setGeometry(QRect(220, 190, 111, 21));
        defaultPageSizeLabel = new QLabel(Widget);
        defaultPageSizeLabel->setObjectName(QStringLiteral("defaultPageSizeLabel"));
        defaultPageSizeLabel->setGeometry(QRect(220, 210, 161, 21));
        resolutionsComboBox = new QComboBox(Widget);
        resolutionsComboBox->setObjectName(QStringLiteral("resolutionsComboBox"));
        resolutionsComboBox->setGeometry(QRect(220, 320, 86, 29));
        pageSizesComboBox = new QComboBox(Widget);
        pageSizesComboBox->setObjectName(QStringLiteral("pageSizesComboBox"));
        pageSizesComboBox->setGeometry(QRect(220, 360, 86, 29));
        minimumPageSizeLabel = new QLabel(Widget);
        minimumPageSizeLabel->setObjectName(QStringLiteral("minimumPageSizeLabel"));
        minimumPageSizeLabel->setGeometry(QRect(220, 230, 161, 21));
        maximumPageSizeLabel = new QLabel(Widget);
        maximumPageSizeLabel->setObjectName(QStringLiteral("maximumPageSizeLabel"));
        maximumPageSizeLabel->setGeometry(QRect(220, 250, 171, 21));
        customPageSizesLabel = new QLabel(Widget);
        customPageSizesLabel->setObjectName(QStringLiteral("customPageSizesLabel"));
        customPageSizesLabel->setGeometry(QRect(220, 270, 161, 21));
        customPageSizesLabel_2 = new QLabel(Widget);
        customPageSizesLabel_2->setObjectName(QStringLiteral("customPageSizesLabel_2"));
        customPageSizesLabel_2->setGeometry(QRect(220, 290, 171, 21));

        retranslateUi(Widget);

        QMetaObject::connectSlotsByName(Widget);
    } // setupUi

    void retranslateUi(QWidget *Widget)
    {
        Widget->setWindowTitle(QApplication::translate("Widget", "Widget", 0));
        descriptionLabel->setText(QApplication::translate("Widget", "Description", 0));
        defaultPrinterLabel->setText(QApplication::translate("Widget", "Default printer?", 0));
        isNullLabel->setText(QApplication::translate("Widget", "isNullLabel", 0));
        isRemoteLabel->setText(QApplication::translate("Widget", "isRemoteLabel", 0));
        locationLabel->setText(QApplication::translate("Widget", "locationLabel", 0));
        makeAndModelLabel->setText(QApplication::translate("Widget", "makeAndModelLabel", 0));
        stateLabel->setText(QApplication::translate("Widget", "stateLabel", 0));
        defaultPageSizeLabel->setText(QApplication::translate("Widget", "defaultPageSizeLabel", 0));
        minimumPageSizeLabel->setText(QApplication::translate("Widget", "minimumPageSizeLabel", 0));
        maximumPageSizeLabel->setText(QApplication::translate("Widget", "maximumPageSizeLabel", 0));
        customPageSizesLabel->setText(QApplication::translate("Widget", "customPageSizesLabel", 0));
        customPageSizesLabel_2->setText(QApplication::translate("Widget", "customPageSizesLabel", 0));
    } // retranslateUi

};

namespace Ui {
    class Widget: public Ui_Widget {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_WIDGET_H
