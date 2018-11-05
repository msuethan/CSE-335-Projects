#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <QtGui>
#include <QMessageBox>
#include "ethanlineedit.h"
#include "ethanradiobutton.h"
#include "ethansizecombobox.h"
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

    connect(ui->horizontalSlider,SIGNAL(valueChanged(int)),ui->horizontalSlider,SLOT(slideChanged(int)));
    connect(ui->horizontalSlider,SIGNAL(iChanged(QObject*)),this,SLOT(actByYourChange(QObject*)));

    connect(ui->sizeComboBox,SIGNAL(currentTextChanged(QString)),ui->sizeComboBox,SLOT(myCurrentSizeChanged(QString)));
    connect(ui->sizeComboBox,SIGNAL(iChanged(QObject*)),this,SLOT(actByYourChange(QObject*)));

    connect(ui->RBarial,SIGNAL(clicked(bool)),ui->RBarial,SLOT(myStateChanged()));
    connect(ui->RBarial,SIGNAL(iChanged(QObject*)),this,SLOT(actByYourChange(QObject*)));

    connect(ui->RBtnr,SIGNAL(clicked(bool)),ui->RBtnr,SLOT(myStateChanged()));
    connect(ui->RBtnr,SIGNAL(iChanged(QObject*)),this,SLOT(actByYourChange(QObject*)));

    connect(ui->RBcomicsans,SIGNAL(clicked(bool)),ui->RBcomicsans,SLOT(myStateChanged()));
    connect(ui->RBcomicsans,SIGNAL(iChanged(QObject*)),this,SLOT(actByYourChange(QObject*)));

    connect(ui->lineEditSize,SIGNAL(textChanged(QString)),ui->lineEditSize,SLOT(myEditingFinished()));
    connect(ui->lineEditSize,SIGNAL(iChanged(QObject*)),this,SLOT(actByYourChange(QObject*)));
}
void MainWindow::actByYourChange(QObject* senderObj){
    int i = ui->horizontalSlider->value();
    if(senderObj==ui->horizontalSlider){
        QFont font=ui->labelFox->font();
        font.setPixelSize(i);
        ui->labelFox->setFont(font);
    }
    else if(senderObj==ui->sizeComboBox){
        QString sizeString = ui->sizeComboBox->currentText();
        QFont font=ui->labelFox->font();
        if(sizeString=="small"){
            font.setPixelSize(10);
            ui->horizontalSlider->setValue(10);
            ui->lineEditSize->setText(sizeString);
        }
        else if(sizeString=="medium"){
            font.setPixelSize(20);
            ui->horizontalSlider->setValue(20);
            ui->lineEditSize->setText(sizeString);
        }
        else if(sizeString=="big"){
            font.setPixelSize(40);
            ui->horizontalSlider->setValue(40);
            ui->lineEditSize->setText(sizeString);
        ui->labelFox->setFont(font);
        }
    }
    else if(senderObj==ui->RBarial){
        QFont font=ui->labelFox->font();
        int size = font.pixelSize();
        QFont font2 = QFont("arial");
        font2.setPixelSize(size);
        ui->labelFox->setFont(font2);
    }
    else if(senderObj==ui->RBtnr){
        QFont font=ui->labelFox->font();
        int size = font.pixelSize();
        QFont font2 = QFont("times new roman");
        font2.setPixelSize(size);
        ui->labelFox->setFont(font2);
    }
    else if(senderObj==ui->RBcomicsans){
        QFont font=ui->labelFox->font();
        int size = font.pixelSize();
        QFont font2 = QFont("comic sans ms");
        font2.setPixelSize(size);
        ui->labelFox->setFont(font2);
    }
    else if(senderObj==ui->lineEditSize){
        QString sizeString = ui->lineEditSize->text();
        QFont font=ui->labelFox->font();
        if(sizeString=="small"){
            font.setPixelSize(10);
            ui->horizontalSlider->setValue(10);
            ui->sizeComboBox->setCurrentText(sizeString);
        }
        else if(sizeString=="medium"){
            font.setPixelSize(20);
            ui->horizontalSlider->setValue(20);
            ui->sizeComboBox->setCurrentText(sizeString);
        }
        else if(sizeString=="big"){
            font.setPixelSize(40);
            ui->horizontalSlider->setValue(40);
            ui->sizeComboBox->setCurrentText(sizeString);
        ui->labelFox->setFont(font);
        }
    }
}

MainWindow::~MainWindow()
{
    delete ui;
}
