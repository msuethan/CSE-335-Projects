#include "ethansizecombobox.h"

void EthanSizeComboBox::myCurrentSizeChanged(const QString&){
    emit iChanged(this);
}
