/********************************************************************************************
 * Schreiben Sie ein Programm, das zwei ganze Zahlen einliest und das Ergebnis der
 * ganzzahligen Division der beiden Zahlen sowie den Rest ausgibt. Schreiben Sie eine Funktion,
 * die beide Ergebnisse (Division + Rest) zurückgibt. Das Programm soll, wie gehabt, solange
 * nach einer Eingabe fragen, bis diese gültig ist.
 * 
 * Beispielablauf:
 * Dividend
 *      Geben Sie eine Zahl ein: qwert
 *      Fehler! Keine Zahl!
 *      Geben Sie eine Zahl ein: 32
 * Divisor
 *      Geben Sie eine Zahl ein: 0
 *      Fehler! Die Zahl darf nicht 0 sein!
 *      Geben Sie eine Zahl ein: 5
 * Ergebnis: 32 / 5 ist 6 mit Rest 2.
 ********************************************************************************************/ 

#include <stdio.h>

// TODO

int liesZahlEin()
{
    int zahl = 0;
    int eingelesen = scanf("%d", &zahl);
    while (eingelesen != 1)
    {
        while(getchar() != '\n'); // Eingabepuffer leeren!
        printf("Ungueltige Eingabe, bitte wiederholen!\n");
        eingelesen = scanf("%d", &zahl);
    }
    return zahl;
}

void divisionMitRest(int a, int b, int* ergebnis, int* rest)
{
    *ergebnis = a / b;
    *rest = a % b;
}

int main()
{

    printf("Gib zahl 1 ein: ");
    int zahl1 = liesZahlEin();
    printf("Gib zahl 2 ein: ");
    int zahl2 = liesZahlEin();

    int ergebnis, rest;
    divisionMitRest(zahl1, zahl2, &ergebnis, &rest);

    printf("Ergebnis: %d, Rest: %d\n", ergebnis, rest);
    return 0;
}