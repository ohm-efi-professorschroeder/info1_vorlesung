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
    int zahl1;
    int zahl2;
    char operator;

    printf("Erste Zahl:");
    scanf("%d", &zahl1);
    printf("Zweite Zahl:");
    scanf("%d", &zahl2);
    printf("Operator (+,-,*,/):");
    scanf("%c", &operator);

    float ergebnis = 0.0;
    switch(operator)
    {
        case '+':
            ergebnis = zahl1 + zahl2;
            break;            
        case '-':
            ergebnis = zahl1 - zahl2;
            break;
        case '*':
            ergebnis = zahl1 * zahl2;
            break;
        case '/':
            if(zahl2 != 0)
                ergebnis = zahl1 / zahl2;
            else
                printf("Divison durch Null!\n");
        default:
            printf("Ungueltiger Operator!\n");

    }
    printf("Ergebnis: %f\n", ergebnis);

    return 0;
}