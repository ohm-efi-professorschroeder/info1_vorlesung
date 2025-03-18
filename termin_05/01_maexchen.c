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

// TODO

int main()
{
    // TODO

    return 0;
}
