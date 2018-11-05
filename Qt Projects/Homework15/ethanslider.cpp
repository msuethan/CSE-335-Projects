#include "ethanslider.h"

void EthanSlider::sliderChange(QString test){
    if(test == "small")
        this->setValue(10);
    if(test == "medium")
        this->setValue(20);
    if(test == "big")
        this->setValue(40);
}
