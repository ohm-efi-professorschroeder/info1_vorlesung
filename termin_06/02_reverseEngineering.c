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

void mystery(int a, int b, int* c, int* d)
{
    if(a > b) {
        *d = a;
        *c = b;
    }
    else {
        *d = b;
        *c = a;
    }
}

int main()
{
    int a, b, c, d, e;

    printf("Geben Sie drei ganze Zahlen ein: ");
    scanf("%d, %d, %d", &a, &b, &c);

    mystery(a, b, &d, &e);
    mystery(b, c, &d, &e);
    mystery(a, c, &d, &e);

    printf("Die Ausgabe ist %d, %d.\n", d, e);

    return 0;
}