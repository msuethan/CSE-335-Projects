#include "ethanslider.h"

void EthanSlider::slideChanged(int){
    emit iChanged(this);
}
