// TODO: Beginn

#include <stdlib.h>
#include "suche.h"

int *binsucheZgr(int suchElem, int *startZgr, int *endZgr)
{
    while(startZgr <= endZgr) {
        int *mitte = startZgr + (endZgr - startZgr) / 2;

        if (*mitte == suchElem)
            return mitte;
        else if (suchElem < *mitte)
            endZgr = mitte-1;
        else 
            startZgr = mitte+1;
    }
    return NULL;
}

int *binsuche(int suchElem, int array[], int anzahl)
{
    return binsucheZgr(suchElem, array, array + anzahl - 1);
}
