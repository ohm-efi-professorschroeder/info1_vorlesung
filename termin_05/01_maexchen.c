/***********************************************************************************************************************************************
 * Schreiben Sie ein Programm, dass das Würfelspiel Mäxchen simuliert. Dabei würfeln mehrere Spieler nach einander mit zwei Würfeln.           *
 * Jeder Spieler muss ein höheres Ergebnis erzielen als der Spieler zuvor, ansonsten endet das Spiel und der aktuelle Spieler verliert.        *
 * Das Ergebnis ist wird immer durch Kombination der größeren und der kleineren Augenzahl gebildet, also z.B. 3 und 5 ergibt 53. Ein Pasch ist *
 * höher als ungleiche Ergebnisse, also höher als 65. Wird wieder ein Pasch gewürfelt, so muss dieser mit höheren Augenzahlen erzielt werden   *
 * als zuvor. Das höchste Ergebnis ist 21. Normalerweise sieht nur der aktuelle Spieler sein Ergebnis und kann gegebenenfalls lügen. Der       *
 * nächste Spieler muss entscheiden, ob er das Ergebnis glaubt oder nicht. Tut er dies, geht das Spiel mit dem Ergebnis ganz normal weiter.    *
 * Glaubt er das Ergebnis nicht, wird aufgedeckt. Wurde gelogen, verliert der Lügner. Wurde nicht gelogen, verliert der Spieler, der           *
 * sehen wollte.                                                                                                                               *
 *                                                                                                                                             *
 * Implementieren Sie das Spiel mit zwei Spielern, dem Computer und Ihnen. Der Computer beginnt immer. In dieser ersten Version verzichten     *
 * wir darauf, zu lügen.                                                                                                                       *
 *                                                                                                                                             *
 * 1. beispielhafter Ablauf:                                                                                                                   *
 * Der Computer wuerfelt 3 und 5.                                                                                                              *
 * Der Spieler wuerfelt 1 und 1.                                                                                                               *
 * Der Computer wuerfelt 1 und 6.                                                                                                              *
 * Das Spiel ist vorbei! Sie gewinnen!                                                                                                         *
 *                                                                                                                                             *
 * 2. beispielhafter Ablauf:                                                                                                                   *
 * Der Computer wuerfelt 2 und 3.                                                                                                              *
 * Der Spieler wuerfelt 5 und 3.                                                                                                               *
 * Der Computer wuerfelt 2 und 6.                                                                                                              *
 * Der Spieler wuerfelt 1 und 5.                                                                                                               *
 * Das Spiel ist vorbei! Sie verlieren!                                                                                                        *
 *                                                                                                                                             *
 ***********************************************************************************************************************************************/

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define MIN(x,y) ((x) < (y) ? (x) : (y))
#define MAX(x,y) ((x) < (y) ? (y) : (x))

int wuerfeln(int wuerfelseiten);
int berechnePunkte(int z1, int z2);

int main()
{
    srand(time(0));
    // solange neuePunkte > altePunkte
        // 1. wuerfeln -> Funktion
        // 2. punkte berechnen -> Funktion
        // 3. punkte vergleichen -> keine Funktion
        // 4. gewinner/verlierer bestimmen -> keine Funktion
    int altePunkte = -1, neuePunkte = 0;
    unsigned int runde = 0;

    do {
        altePunkte = neuePunkte;
        int z1 = wuerfeln(6);
        int z2 = wuerfeln(6);
        neuePunkte = berechnePunkte(z1, z2);
        runde++;

        if(runde % 2 == 1)
            printf("Der Computer wuerfelt %d\n", neuePunkte);
        else
            printf("Der Spieler wuerfelt %d\n", neuePunkte);

    }
    while(altePunkte < neuePunkte);

    if(runde % 2 == 0)
        printf("Der Computer hat gewonnen!\n");
    else
        printf("Der Spieler hat gewonnen!\n");


    return 0;
}

// Funktion: <Rueckgabetyp> <Namen> (<Parameter1>, <Parameter2>,...)
int wuerfeln(int wuerfelseiten)
{
    int zahl = rand() % wuerfelseiten + 1;
    return zahl;
}

int berechnePunkte(int z1, int z2)
{
    int punkte = 0;
    // Variante 1: if
    // if(z1 < z2)
    //     punkte = z2 * 10 + z1;
    // else 
    //     punkte = z1 * 10 + z2;
    // Variante 2: Makrofunktion
    int zMin = MIN(z1,z2); // (z1 < z2 ? z1 : z2)
    int zMax = MAX(z1,z2);
    punkte = zMax * 10 + zMin;
    
    // Pasch
    if(z1 == z2)
        punkte += 100;

    // 21
    if(punkte == 21)
        punkte += 1000;

    return punkte;
}