/****************************************************************************************
 * Schreiben Sie ein Programm, das die Laenge und Breite eines Platzes einliest und     *
 * ausgibt, wie viele quadratische Platten benoetigt werden, um die Flaeche komplett    *
 * zu bedecken. Dabei sollen so wenig Platten wie möglich verwendet werden.             *
 *                                                                                      *
 * Beispiel:                                                                            *
 * Geben Sie die Laenge des Platzes ein.                                                *
 * >> Geben Sie eine positive, ganze Zahl ein: gfdgfd                                   *
 * >> Geben Sie eine positive, ganze Zahl ein: -5                                       *
 * >> Geben Sie eine positive, ganze Zahl ein: 55                                       *
 * Geben Sie die Breite des Platzes ein.                                                *
 * >> Geben Sie eine positive, ganze Zahl ein: 0                                        *
 * >> Geben Sie eine positive, ganze Zahl ein: rtre                                     *
 * >> Geben Sie eine positive, ganze Zahl ein: 100                                      *
 * Sie benoetigen 220 Platten der Groesse 5x5.                                          *
 ****************************************************************************************/

#include <stdio.h>

int liesPositiveZahlEin() 
{
    int zahl = 0;
    int eingelesen = 0;

    do {
        printf("Gib eine ganze, positive Zahl ein: ");
        eingelesen = scanf("%d");
        while(getchar() != '\n');
    } while (eingelesen != 1 || zahl < 0);

    return zahl;
}

int main()
{
    int zahl = liesPositiveZahlEin();
    
    return 0;
}