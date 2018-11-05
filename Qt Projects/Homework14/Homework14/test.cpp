#include "test.h"

void Test::settable(){
    emit iChanged(this);
}
