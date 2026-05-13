/**************************************************************************************************************
 * Schreiben Sie ein Programm, das einen Text einliest, diesen dabei zeilenweise in einer Tabelle speichert   *
 * und anschließend codiert ausgibt, indem es ihn spaltenweise ausliest. Die Zeilen- und Spaltenzahlen sind   *
 * vom Benutzer festzulegen. Überschüssige Zeichen in der Tabelle werden zufällig mit Kleinbuchstaben belegt. *
 * Überlegen Sie sich, wie Sie einen codierten Text decodieren könnten, wenn Sie die Zeilen- und Spaltenzahl  *
 * der Codierung kennen.                                                                                      *
 *                                                                                                            *
 * 1. Hinweis:                                                                                                *
 * Die Aufgabe ist ohne scanf und Strings zu lösen.                                                           *
 *                                                                                                            *
 * 2. Hinweis:                                                                                                *
 * Im untenstehenden Beispiel wird der Text "Das ist ein Text." folgendermaßen in einer Tabelle mit vier      *
 * Zeilen und fünf Spalten abgelegt:                                                                          *
 * |D|a|s| |i|                                                                                                *
 * |s|t| |e|i|                                                                                                *
 * |n| |T|e|x|                                                                                                *
 * |t|.|?|?|?|                                                                                                *
 *                                                                                                            *
 * Die Stellen mit Fragezeichen sind überschüssig und werden mit zufälligen Kleinbuchstaben belegt.           *
 *                                                                                                            *
 * Beispielhafter Ablauf:                                                                                     *
 *                                                                                                            *
 * Die maximale Laenge der Nachricht ergibt sich aus dem Produkt der beiden Codes.                            *
 *                                                                                                            *
 * >> Geben Sie die Anzahl an Zeilen ein: 4                                                                   *
 * >> Geben Sie die Anzahl an Spalten ein: 5                                                                  *
 * >> Geben Sie Ihren Text ein (max. 20 Zeichen): Das ist ein Text.                                           *
 * Der umgeformte Text lautet: Dsntat .s Tr eekiixq                                                           *
 *                                                                                                            *
 **************************************************************************************************************/

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define MAX_ZEILEN  10
#define MAX_SPALTEN 10

int gibZahlEin(int min, int max);

void textEingabe(char array[][MAX_SPALTEN], int anzahlZeilen, int anzahlSpalten)
{
    printf("Geben Sie Ihren Text ein (max. %d Zeichen): ", anzahlZeilen*anzahlSpalten);
    
    char zeichen = 0;
    // int i = 0, j = 0;
    // do {
    //     zeichen = getchar();
    //     if(zeichen != '\n')
    //         array[i][j] = zeichen;
    //     if(j < anzahlSpalten)
    //         j++;
    //     else {
    //         i++;
    //         j=0;
    //     }
    // } while(zeichen != '\n' && i < anzahlZeilen && j < anzahlSpalten)
    
    int i = 0;
    do {
        zeichen = getchar();
        if(zeichen != '\n')
            *(array[0] + i) = zeichen;
        i++;
    } while(zeichen != '\n' && i < anzahlZeilen * anzahlSpalten);

    for(int rest = i; rest < anzahlZeilen * anzahlSpalten; rest++) {
        *(&(array[0][0]) + rest) = (rand() % ('~'-'!'))+'!';
    }
}

void codeAusgabe(char array[][MAX_SPALTEN], int anzahlZeilen, int anzahlSpalten)
{        
    for(int j = 0; j < anzahlSpalten; j++) {
        for(int i = 0; i < anzahlZeilen; i++) {
            putchar(array[i][j]);
        }
    }
}

int main()
{
    srand(time(0));
    char text[MAX_ZEILEN][MAX_SPALTEN];
    printf("Anzahl Zeilen: ");
    int anzahlZeilen = gibZahlEin(1, MAX_ZEILEN);
    printf("Anzahl Spalten: ");
    int anzahlSpalten = gibZahlEin(1, MAX_SPALTEN);

    textEingabe(text, anzahlZeilen, anzahlSpalten);
    codeAusgabe(text, anzahlZeilen, anzahlSpalten);
    return 0;
}

int gibZahlEin(int min, int max)
{
    int zahl, geleseneWerte;

    do
    {
        geleseneWerte = scanf("%d", &zahl);
        while(getchar() != '\n') {}

        if(geleseneWerte != 1)
            printf("Keine Zahl! Erneute Eingabe: ");
        else if(zahl < min)
            printf("Zahl zu klein! Erneute Eingabe: ");
        else if(zahl > max)
            printf("Zahl zu gross! Erneute Eingabe: ");

    } while(geleseneWerte != 1 || zahl < min || zahl > max);

    return zahl;
}
