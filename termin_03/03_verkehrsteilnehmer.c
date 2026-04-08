/********************************************************************************************
 * Verkehrsteilnehmer
 * 
 * In einer Verkehrssimulation gibt es Fußgänger, Fahrräder, PKW, LKW/Bus und Motorräder.
 * Schreiben Sie ein Programm, dass die Merkmale "Anzahl Räder" und "motorisiert" vom
 * Benutzer abfragt und einen Verkehrsteilnehmer anhand dieser Merkmale identifiziert. 
 * Hinweise: Fußgänger haben 0 Räder, LKW/Bus haben eine gerade Anzahl Räder > 4.
 * Für eine nicht existierende Merkmalskombination geben Sie eine entsprechende 
 * Meldung aus!
 * 
 * 1. Beispiel
 * >> Wieviele Räder? 2
 * >> Motorisiert? 0
 * Es handelt sich um ein Fahrrad.
 * 
 * 2. Beispiel
 * >> Wieviele Räder? 0
 * >> Motorisiert? 1
 * Es handelt sich um ein unbekannten Verkehrsteilnehmer.
 * 
 * 3. Beispiel
 * >> Wieviele Räder? 6
 * >> Motorisiert? 1
 * Es handelt sich um einen Bus oder LKW.
 * 
 ********************************************************************************************/

#include <stdio.h>

int main()
{
    int anzahlRaeder = 0;
    int motorisiert = 0;
    printf("Anzahl Raeder? ");
    int eingelesen = scanf("%f", &anzahlRaeder);
    if(eingelesen != 1)
        return -1;

    printf("Motorisiert? ");
    int eingelesen = scanf("%f", &motorisiert);
    if(eingelesen != 1)
        return -1; 
        
    
    if(motorisiert == 0) {
        if(anzahlRaeder == 2) {
            printf("Fahrrad!\n");
        }
        else if(anzahlRaeder == 0) {
            printf("Fussgaenger!\n");
        }
        else {
            printf("Unbekanntes Objekt!\n");
        }
    }
    else if (motorisiert == 1) {
        if(anzahlRaeder == 2) {
            printf("Motorrad!\n");
        }
        if(anzahlRaeder == 4) {
            printf("PKW!\n");
        }
        else if(anzahlRaeder > 4 && anzahlRaeder % 2 == 0) {
            printf("LKW/BUS");
        }
        else {
            printf("Unbekanntes Objekt!\n");
        }
    }
    else {
        printf("Unbekanntes Objekt");
    }

    return 0;
}