/********************************************************************************************
 * Das folgende Programm basiert auf dem Programm "rotiere" aus dem vorigen Termin.
 * Es liest eine Folge aus vier ganzen Zahlen sowie eine Anzahl n ein und und soll die
 * Zahlenfolge n mal rotieren. Dabei soll die Zahlenfolge nach jeder Rotation ausgegeben
 * werden. 
 * 
 * Aufgabe 1): Implementieren Sie das Programm. Nutzen Sie dieses Mal zu Speicherung der Zahlen
 * ein Array! Implementieren Sie die Rotation als eigene Funktion, die Arrays beliebiger
 * Länge rotiert. Implementieren Sie Ihre Ausgabe des Arrays als eigene Funktion, 
 * die Arrays beliebiger Länge ausgibt.
 * 
 * Aufgabe 2): Ändern Sie nun die Rotationsreihenfolge (wenn Sie in Aufgabe 1 nach links
 * rotiert haben, rotieren Sie nun nach rechts und umgekehrt).
 * 
 ********************************************************************************************/

#include <stdio.h>

int liesZahlEin(int min, int max) 
{
    int zahl = 0;
    int eingelesen = 0;

    int eingabeFalsch = 0;
    do {
        eingelesen = scanf("%d", &zahl);
        while(getchar() != '\n');
        eingabeFalsch = eingelesen != 1 || zahl < min || zahl > max;
        if(eingabeFalsch)
            printf("Zahl muss zwischen %d und %d sein: ", min, max);
    } while (eingabeFalsch);

    return zahl;
}

// TODO
#define N 8

void printArray(int array[], int len)
{
    for(int i = 0; i < len; i++) {
        printf("%d ", array[i]);
    }
}

void tausche(int *a, int *b)
{
    int temp = *a;
    *a = *b;
    *b = temp;
}

void rotateArray(int array[], int len)
{
    tausche(&array[0], &array[len-1]);
    // tausche(&array[0], &array[1]);
    // tausche(&array[1], &array[2]);
    // ...
    for(int i = 0; i < len-1; i++) {
        tausche(&array[i], &array[i+1]);
    }
}

int main() 
{
    int zahl[N];
    const int numRot = 10;

    for(int i = 0; i < N; i++) {
        printf("Gib die %d. Zahl ein: ", i+1);
        zahl[i] = liesZahlEin(-100, 100);
    }

    for(int i = 0; i < numRot; i++) {
        rotateArray(zahl, N);
        printf("Nach der %d. Rotation: ", i+1);
        printArray(zahl, N);
        printf("\n");
    }
    
    return 0;
}
