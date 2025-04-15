/********************************************************************************************
 * Eingabeprüfung
 * 
 * Schreiben Sie ein Programm, das einen Preis in Euro als Kommazahl vom Benutzer abfragt 
 * und diesen dann mittels explizitem casting in Euros und Cents zerlegt und ausgibt.
 * Falls eine ungültige Eingabe gemacht wird (z.B. eine negative Zahl oder Buchstaben), 
 * geben Sie eine entsprechende Meldung aus und wiederholen sie die Eingabeabfrage solange,
 * bis eine gültige Eingabe erfolgt ist.
 * 
 * 1. Beispiel:
 * >> Geben Sie einen Preis in Euro ein: 12.53
 * Der Preis ist 12 Euro und 53 Cents.
 * 
 * 2. Beispiel:
 * >> Geben Sie einen Preis in Euro ein: abc
 * Eingabe ungueltig. Geben Sie eine positive Zahl ein!
 * >> Geben Sie einen Preis in Euro ein: 32.12
 * Der Preis ist 32 Euro und 12 Cents.
 *********************************************************************************************/

#include <stdio.h>

int main()
{
    float preis = 0.;
    printf("Geben Sie einen Preis in Euro ein: ");

    while(scanf("%f", &preis) != 1 || preis < 0.0)
    {
        while(getchar() != '\n');
        printf("Fehlerhafte Eingabe!\n");
        printf("Geben Sie einen Preis in Euro ein: ");
    }

    int euro = (int) preis;
    int cent = (preis - euro) * 100 + 0.5; 
    
    printf("Der Preis ist %d Euros und %d Cents!\n", euro, cent);

    return 0;
}