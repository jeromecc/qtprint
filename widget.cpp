#include <QMessageBox>
#include <QPrinterInfo>
#include "widget.h"
#include "ui_widget.h"

Widget::Widget(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::Widget)
{
    if (QPrinterInfo::availablePrinterNames().isEmpty()) {
            QMessageBox::critical(this, tr("Error"), tr("No printers found. The application will not display any useful information."));
        }
    ui->setupUi(this);
    ui->printerComboBox->addItems(QPrinterInfo::availablePrinterNames());

        // Update UI when selected printer is changed.
        connect(ui->printerComboBox,SIGNAL(currentIndexChanged(int)), SLOT(UpdateUI()));

        // Initially display information for first printer.
        UpdateUI();
}

Widget::~Widget()
{
    delete ui;
}

void Widget::UpdateUI() {

    // We get the currently selected printer's name from the combo box, then get the QPrinterInfo
    //object for that printer by calling the static method QPrinterInfo::printerInfo.
    QString name = ui->printerComboBox->currentText();
    QPrinterInfo info = QPrinterInfo::printerInfo(name);

    // It is good practice to make sure the object is valid, so we call isNull to do a sanity
    // check in case there is no printer info.
    if (info.isNull()) {
            return;
    }

    // We call various QPrinterInfo methods like description() and fill in the user interface.
    // Some of these methods are new in Qt 5.3
    ui->descriptionLabel->setText(info.description());
    ui->defaultPrinterLabel->setText(info.isDefault() ? tr("Yes") : tr("No"));
    ui->isNullLabel->setText(info.isNull() ? tr("Yes") : tr("No"));
    ui->isRemoteLabel->setText(info.isRemote() ? tr("Yes") : tr("No"));
    ui->locationLabel->setText(info.location());
    ui->makeAndModelLabel->setText(info.makeAndModel());

    // The method to return the printer state is new in Qt 5.3. We display it using suitable (localized) text.
    // Since this can changed dynamically, ideally it should be updated with a timer so that it reflects the current status when it
    // changes. This is simple to do, but I omitted it as it would obscure the clarity of the example code.
    switch (info.state()) {
        case QPrinter::Idle:
            ui->stateLabel->setText(tr("Idle"));
            break;
        case QPrinter::Active:
            ui->stateLabel->setText(tr("Active"));
            break;
        case QPrinter::Aborted:
            ui->stateLabel->setText(tr("Aborted"));
            break;
        case QPrinter::Error:
            ui->stateLabel->setText(tr("Error"));
            break;
        default:
            ui->stateLabel->setText(tr("Unknown"));
            break;
    }

    // All of the methods below are new in Qt 5.3.
    ui->defaultPageSizeLabel->setText(info.defaultPageSize().name());
    ui->minimumPageSizeLabel->setText(info.minimumPhysicalPageSize().name());
    ui->maximumPageSizeLabel->setText(info.maximumPhysicalPageSize().name());
    ui->customPageSizesLabel->setText(info.supportsCustomPageSizes() ? tr("Yes") : tr("No"));

    // We fill in the combox box with a description of the screen resolutions.
    ui->resolutionsComboBox->clear();
    foreach (int res, info.supportedResolutions()) {
        ui->resolutionsComboBox->addItem(QString::number(res) + tr(" dpi"));
    }

    // We do the same for the page sizes.
    ui->pageSizesComboBox->clear();
    foreach (QPageSize size, info.supportedPageSizes()) {
        ui->pageSizesComboBox-> addItem(size.name());
    }
}
