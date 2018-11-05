#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <QtGui>
#include <QMessageBox>
#include "ethanlabel.h"
#include "ethanlineedit.h"
#include "ethanslider.h"

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);

    ui->horizontalSlider->setMinimum(10);
    ui->horizontalSlider->setMaximum(40);
    ui->horizontalSlider->setValue(10);
    ui->horizontalSlider->setTickInterval(1);

    connect(ui->sizeComboBox,SIGNAL(currentTextChanged(QString)),ui->horizontalSlider,SLOT(sliderChange(QString)));
    connect(ui->sizeComboBox,SIGNAL(currentTextChanged(QString)),ui->labelFox,SLOT(modifyFontBySize(QString)));
    connect(ui->sizeComboBox,SIGNAL(currentTextChanged(QString)),ui->lineEditSize,SLOT(lineEditChange(QString)));

    connect(ui->horizontalSlider, SIGNAL(valueChanged(int)),ui->labelFox, SLOT(setSize(int)));

    connect(ui->RBarial,SIGNAL(clicked(bool)),ui->labelFox,SLOT(modifyFontByRBarial()));
    connect(ui->RBtnr,SIGNAL(clicked(bool)),ui->labelFox,SLOT(modifyFontByRBtnr()));
    connect(ui->RBcomicsans,SIGNAL(clicked(bool)),ui->labelFox,SLOT(modifyFontByRBcomicsans()));

    connect(ui->lineEditSize,SIGNAL(textChanged(QString)),ui->sizeComboBox,SLOT(setCurrentText(QString)));
    connect(ui->lineEditSize,SIGNAL(textChanged(QString)),ui->labelFox,SLOT(modifyFontBySize(QString)));
    connect(ui->lineEditSize,SIGNAL(textChanged(QString)),ui->horizontalSlider,SLOT(sliderChange(QString)));
}

MainWindow::~MainWindow()
{
    delete ui;
}
