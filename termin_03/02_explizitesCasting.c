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
    float preis = 0.0;

    printf("Geben Sie einen Preis in Euro ein: ");
    int eingelesen = scanf("%f", &preis);
    getchar();

    if(eingelesen != 1) {
        printf("Ungueltige Eingabe!\n");
    }
    else {
        int euro = (int)preis;
        int cents = ((preis - euro) * 100) + 0.001;
        printf("Der Preis ist %d Euro und %d Cents.\n", euro, cents);
    }

    return 0;
}