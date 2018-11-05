#include "observerdialog.h"
#include "ui_observerdialog.h"

ObserverDialog::ObserverDialog(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::ObserverDialog)
{
    ui->setupUi(this);
}

ObserverDialog::~ObserverDialog()
{
    delete ui;
}

