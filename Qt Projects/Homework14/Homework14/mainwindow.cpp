#include "mainwindow.h"
#include "ui_mainwindow.h"
#include "ui_observerdialog.h"
#include "observerdialog.h"

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    ui->horizontalSlider->setMinimum(0);
    ui->horizontalSlider->setMaximum(100);
    ui->horizontalSlider->setValue(0);
    connect(ui->test, SIGNAL(clicked(bool)), ui->pushButton, SLOT(setEnabled(bool)));
    ui->testtable->setItem(0, 0,  new QTableWidgetItem(QString::fromStdString("name")));
    ui->testtable->setItem(0, 1,  new QTableWidgetItem(QString::fromStdString("type")));
    ui->testtable->insertColumn(ui->testtable->columnCount());
    ui->testtable->setItem(0, 2,  new QTableWidgetItem(QString::fromStdString("type")));
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::on_CreateButton_clicked()
{
    QList<QTableWidgetItem *> row = ui->testtable->selectedItems();
    ObserverDialog* newListener = new ObserverDialog(this);
    listeners.push_back(newListener);
    newListener->show();

    connect(ui->horizontalSlider, SIGNAL(valueChanged(int)),newListener->getUi()->ProgressLabel, SLOT(setNum(int)));
    connect(newListener->getUi()->Reset, SIGNAL(clicked(bool)), this, SLOT(reset()));
    newListener->getUi()->ProgressLabel->setNum(ui->horizontalSlider->value());
    newListener->getUi()->cart->settable(row);
    connect(ui->test, SIGNAL(clicked(bool)), newListener->getUi()->cart, SLOT(settable2()));
    //connect(ui->test,SIGNAL(iChanged(QObject*)),newListener,SLOT(actByYourChange(QObject*)));
}

void MainWindow::on_DeleteButton_clicked()
{
    if(listeners.size()>0){
        ObserverDialog* lastListener = listeners.back();
        lastListener->close();
        listeners.pop_back();
    }
}

void MainWindow::reset()
{
    ui->horizontalSlider->setValue(0);
}
