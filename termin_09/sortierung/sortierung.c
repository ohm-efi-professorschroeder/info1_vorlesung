#include "sortierung.h"

void tausche(int *zahl1, int *zahl2)
{
    int tmp = *zahl1;
    *zahl1 = *zahl2;
    *zahl2 = tmp;
}
