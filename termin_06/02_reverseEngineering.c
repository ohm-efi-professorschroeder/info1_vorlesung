/********************************************************************************************
 * Das folgende Programm liest drei ganze Zahlen ein und macht dann etwas damit.
 * 
 * 1) Überlegen Sie, was der Zweck des Programms ist und was es ausgibt (ohne es auszuführen).
 * 2) Benennen Sie die Variablen und Funktionen sinnvoll, um den Quelltext verständlicher zu
 *    machen.
 * 3) Probieren Sie das Programm aus und verifizieren Sie Ihre Vermutung.
 * 
 ********************************************************************************************/

#include <stdio.h>

void minmax(int a, int b, int* min, int* max)
{
    if(a > b) {
        *max = a;
        *min = b;
    }
    else {
        *max = b;
        *min = a;
    }
}

int main()
{
    int a, b, c, d, e;

    printf("Geben Sie drei ganze Zahlen ein: ");
    scanf("%d, %d, %d", &a, &b, &c);

    minmax(a, b, &d, &e);
    minmax(b, c, &d, &e);
    minmax(a, c, &d, &e);

    printf("Die Ausgabe ist %d, %d.\n", d, e);

    return 0;
}