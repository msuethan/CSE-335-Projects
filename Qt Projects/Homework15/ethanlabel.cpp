#include "ethanlabel.h"
#include <QFont>

void EthanLabel::setSize(int i){
    QFont font=this->font();
    font.setPixelSize(i);
    this->setFont(font);
}

void EthanLabel::modifyFontByRBarial(){
    QFont font=this->font();
    int size = font.pixelSize();
    QFont font2 = QFont("arial");
    font2.setPixelSize(size);
    this->setFont(font2);
}
void EthanLabel::modifyFontByRBtnr(){
    QFont font=this->font();
    int size = font.pixelSize();
    QFont font2 = QFont("times new roman");
    font2.setPixelSize(size);
    this->setFont(font2);
}
void EthanLabel::modifyFontByRBcomicsans(){
    QFont font=this->font();
    int size = font.pixelSize();
    QFont font2 = QFont("comic sans ms");
    font2.setPixelSize(size);
    this->setFont(font2);
}

void EthanLabel::modifyFontBySize(QString sizeString){
    QFont font=this->font();
    if(sizeString=="small")
        font.setPixelSize(10);
    else if(sizeString=="medium")
        font.setPixelSize(20);
    else if(sizeString=="big")
        font.setPixelSize(40);
    this->setFont(font);
}
