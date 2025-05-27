#include "sortierung.h"

void tausche(int *zahl1, int *zahl2)
{
    int tmp = *zahl1;
    *zahl1 = *zahl2;
    *zahl2 = tmp;
}

void selectionsort(int array[], int anzahl)
{
    for (int i = 0; i < anzahl - 1; i++)
    {
        int minIndex = i;
        for (int j = i; j < anzahl; j++)
        {
            if (array[j] < array[minIndex])
                minIndex = j;
        }
        tausche(&array[minIndex], &array[i]);
    }
}


void bubblesort(int array[], int num_zahlen)
{
    for(int j = 0; j < num_zahlen-1; j++)
    {
        for(int i = 0; i < num_zahlen-j-1; i++)
        {
            if(array[i] > array[i+1])
                tausche(&array[i], &array[i+1]);
        }
    }
}

void insertionsort(int array[], int num_zahlen)
{
    for(int i = 1; i < num_zahlen; i++) {
        int zahl = array[i];
        int j = i;
        for(; j > 0; j--) {
            array[j] = array[j-1];
            if(zahl > array[j-1])
                break;
        }
        array[j] = zahl;
    }
}