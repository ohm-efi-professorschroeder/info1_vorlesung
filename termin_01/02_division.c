/********************************************************************************
 * Aufgabe                                                                      *
 * Welche Ausgabe liefert folgendes Programm? Erst ueberlegen, dann ausfuehren! *
 ********************************************************************************/

#include <stdio.h>

int main()
{
    int zahl1 = 1, zahl2 = 2;
    double erg;

    erg = zahl1 / zahl2;
    // Vermutung 1: erg=0.5
    // Vermutung 2: erg=1
    printf("%d / %d = %lf", zahl1, zahl2, erg);

    return 0;
}