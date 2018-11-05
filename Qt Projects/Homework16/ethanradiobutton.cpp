#include "ethanradiobutton.h"

void EthanRadioButton::myStateChanged(){
    emit iChanged(this);
}
