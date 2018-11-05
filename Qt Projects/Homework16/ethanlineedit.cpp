#include "ethanlineedit.h"

void EthanLineEdit::myEditingFinished(){
    emit iChanged(this);
}
