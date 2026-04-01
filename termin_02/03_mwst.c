/***************************************************************************************************************
 * Schreiben Sie ein Programm, das vom Benutzer einen Nettopreis in Euro einliest und dazu den Bruttopreis     *
 * ausgibt. Verwenden Sie fuer die Mehrwertsteuer eine symbolische Konstante und lagern Sie diese in eine      *
 * separate Header-Datei aus. Die Mehrwertsteuer betraegt derzeit 19 % (Buecher und Lebensmittel ausgenommen). *
 *                                                                                                             *
 * Beispiel:                                                                                                   *
 * >> Geben Sie einen Nettopreis in Euro ein: 10                                                               *
 * Der Bruttopreis betraegt 11.90 Euro                                                                         *
 ***************************************************************************************************************/

#include <stdio.h>
#include "konstanten.h"

int main()
{
    float preis = 0;

    printf("Bitte gib einen Nettopreis ein: ");
    scanf("%f", &preis);

    float bruttoPreis = preis * MWST;
    printf("Der Bruttopreis bei einer MWST von %.2f ist:\n %.2f Euro.\n", MWST, bruttoPreis);

    return 0;
}