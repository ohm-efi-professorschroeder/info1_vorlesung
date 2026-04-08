/*************************************************************
 * Schreiben Sie ein Programm, das zwei positive Zahlen vom  *
 * Benutzer einliest sowie einen Rechenoperator und          *
 * anschliessend das Ergebnis ausgibt. Bei falschen Eingaben *
 * soll das Programm kontrolliert beendet werden.            *
 *                                                           *
 * 1. Beispiel:                                              *
 * >> Geben Sie eine positive, ganze Zahl ein: 50            *
 * >> Geben Sie noch eine positive, ganze Zahl ein: 20       *
 * >> Geben Sie einen Rechenoperator ein (+, -, *, /): -     *
 * 50 - 20 = 30                                              *
 *                                                           *
 * 2. Beispiel:                                              *
 * >> Geben Sie eine positive, ganze Zahl ein: 50            *
 * >> Geben Sie noch eine positive, ganze Zahl ein: 20       *
 * >> Geben Sie einen Rechenoperator ein (+, -, *, /): +     *
 * 50 + 20 = 70                                              *
 *                                                           *
 * 3. Beispiel:                                              *
 * >> Geben Sie eine positive, ganze Zahl ein: -50           *
 * Falsche Eingabe!                                          *
 *                                                           *
 * 4. Beispiel:                                              *
 * >> Geben Sie eine positive, ganze Zahl ein: 50            *
 * >> Geben Sie noch eine positive, ganze Zahl ein: -20      *
 * Falsche Eingabe!                                          *
 *                                                           *
 * 5. Beispiel:                                              *
 * >> Geben Sie eine positive, ganze Zahl ein: 50            *
 * >> Geben Sie noch eine positive, ganze Zahl ein: 20       *
 * >> Geben Sie einen Rechenoperator ein (+, -, *, /): dfgfd *
 * Unbekannter Rechenoperator d                              *
 *************************************************************/

#include <stdio.h>

int main()
{
    unsigned int x = 42;
    unsigned int y = 56;
    char operator = '*';
    double ergebnis = 0.0;
    // TODO Eingabe implementieren

    switch(operator) {
        case '+':
            ergebnis = x + y;
            break;
        case '-':
            ergebnis = x - y;
            break;
        case '*':
            ergebnis = x * y;
            break;
        case '/':
            ergebnis = (double)x / y;
            break;
        default:
            printf("Fehlerhafter Operator!\n");
            ergebnis = 0.0;
    }

    printf("Ergebnis = %lf\n", ergebnis);


    int ergebnisNegativ = ergebnis < 0 ? 1 : 0; 

    
    return 0;
}