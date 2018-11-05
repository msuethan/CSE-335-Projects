#include "cart.h"
#include<iostream>
#include<string>
void Cart::settable(QList<QTableWidgetItem *> row){
    QTableWidgetItem item=*row[0];
    this->setItem(0, 0, new QTableWidgetItem(QString::fromStdString(item.text().toStdString())) );
}
void Cart::settable2(){
    //std::string test = "test";
    this->insertRow(this->rowCount());
}
