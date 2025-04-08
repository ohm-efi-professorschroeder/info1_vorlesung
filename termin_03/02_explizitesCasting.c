/********************************************************************************************
 * Schreiben Sie ein Programm, das einen Preis in Euro als Kommazahl vom Benutzer abfragt 
 * und diesen dann mittels explizitem casting in Euros und Cents zerlegt und ausgibt.
 * Brechen Sie die Ausführung des Programms ab, wenn der Benutzer eine falsche Eingabe 
 * (z.B. keine gültige Zahl) gemacht hat.       
 * 
 * 1. Beispiel:
 * >> Geben Sie einen Preis in Euro ein: 12.53
 * Der Preis ist 12 Euro und 53 Cents.
 * 
 * 2. Beispiel:
 * >> Geben Sie einen Preis in Euro ein: abc
 * Ungültige Eingabe!
 ********************************************************************************************/

#include <stdio.h>

int main()
{
    float preis = 0.;
    printf("Geben Sie einen Preis in Euro ein: ");

    if(scanf("%f", &preis) != 1 || preis < 0.0)
    {
        printf("Fehlerhafte Eingabe!\n");
        return -1;
    }

    int euro = (int) preis;
    int cent = (preis - euro) * 100 + 0.5; 
    
    printf("Der Preis ist %d Euros und %d Cents!\n", euro, cent);

    return 0;
}