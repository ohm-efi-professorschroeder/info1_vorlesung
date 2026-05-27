#include "sortierung.h"

void tausche(int *zahl1, int *zahl2)
{
    int tmp = *zahl1;
    *zahl1 = *zahl2;
    *zahl2 = tmp;
}

void selectionsort(int array[], int len)
{
    for(int i = 0; i < len; i++) {
        int minIndex = i;
        for(int j = i; j < len; j++) {
            if(array[j] < array[minIndex])
                minIndex = j;
        }
        tausche(&array[minIndex], &array[i]);
    }
}

void bubblesort(int array[], int len)
{
    for(int i = 0; i < len; i++) {
        for(int j = 0; j < len - 1 - i; j++) {
            if(array[j] > array[j+1])
                tausche(&array[j], &array[j+1]);
        }
    }
}

void insertionsort(int array[], int len)
{
    for(int i = 1; i < len; i++) {
        for(int j = i-1; j >= 0; j--) {
            if(array[j] < array[i]) {
                tausche(&array[i], &array[j]);
            }
        }
    }
}