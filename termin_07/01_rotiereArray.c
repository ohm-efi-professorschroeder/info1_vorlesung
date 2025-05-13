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

// TODO

void printArray(int array[], int length)
{
    for(int i = 0; i < length; i++)
    {
        printf("%d ", array[i]);
    }
}

void rotate(int array[], int length)
{
    for(int i = 0; i < length-1; i++)
    {
        int tmp = array[i+1];
        array[i+1] = array[i];
        array[i] = tmp;
    }
}

int main() 
{
    const int num_zahlen = 4;
    const int num_rot = 10;
    int zahlen[num_zahlen];

    for(int i = 0; i < num_zahlen; i++)
    {
        printf("\nGeben Sie die %d. Zahl ein: ", i+1);
        scanf("%d", &zahlen[i]);
    }

    for(int i = 0; i < num_rot; i++)
    {
        rotate(zahlen, num_zahlen);
        printf("\nNach der %d. Rotation: ", i+1);
        printArray(zahlen, num_zahlen);
    }
    
    // TODO 
    return 0;
}
