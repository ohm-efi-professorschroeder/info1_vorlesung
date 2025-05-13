/*****************************************************************
 * Schreiben Sie ein Programm, das vom Benutzer abfragt,         *
 * wie viele Zahlen eingelesen werden sollen und diese           *
 * dann mittels SelectionSort sortiert. SelectionSort            *
 * geht eine Liste von Zahlen von links nach rechts durch,       *
 * ermittelt das Minimum der Zahlen, die rechts der aktuellen    *
 * Position liegen inklusive der Zahl der aktuellen Position,    *
 * und tauscht das Minimum mit der Zahl auf die aktuelle         *
 * Position. Alle Zahlen bis zu dieser Position inklusive gelten *
 * dann als sortiert. Diese Prozedur wird für jede Position von  *
 * links nach rechts durchgeführt, bis alle Zahlen sortiert sind.*
 *                                                               *
 * Beispiel für Sortierung einer Liste 5 3 0 2:                  *
 * Setze Minimum der Restliste an 1. Position: 0 3 5 2           *
 * Setze Minimum der Restliste an 2. Position: 0 2 5 3           *
 * Setze Minimum der Restliste an 3. Position: 0 2 3 5           *
 *                                                               *
 * Beispielhafte Ausgabe:                                        *
 * >> Wie viele Zahlen (max. 100)? fsdf                          *
 * >> Fehler! Erneute Eingabe: -1                                *
 * >> Fehler! Erneute Eingabe: 101                               *
 * >> Fehler! Erneute Eingabe: 5                                 *
 * >> Geben Sie die 1. Zahl ein: dsf                             *
 * >> Fehler! Erneute Eingabe: 45                                *
 * >> Geben Sie die 2. Zahl ein: 1                               *
 * >> Geben Sie die 3. Zahl ein: 0                               *
 * >> Geben Sie die 4. Zahl ein: -4                              *
 * >> Geben Sie die 5. Zahl ein: 1423                            *
 * Sortierte Zahlen: -4 0 1 45 1423                              *
 *                                                               *
 *****************************************************************/

#include <stdio.h>

#define MAX_ZAHLEN 100

void tausche(int *zeiger1, int *zeiger2)
{
    int zahl1 = *zeiger1;
    *zeiger1 = *zeiger2;
    *zeiger2 = zahl1;
}

void printArray(int array[], int length)
{
    for (int i = 0; i < length; i++)
    {
        printf("%d ", array[i]);
    }
}

int main()
{
    int zahlen[MAX_ZAHLEN];
    int num_zahlen = 0;

    printf("Wieviele Zahlen sollen sortiert werden? ");
    while (scanf("%d", &num_zahlen) != 1 || num_zahlen <= 0 || num_zahlen > MAX_ZAHLEN)
    {
        while (getchar() != '\n')
            ;
        printf("Fehlerhafte Eingabe!\n");
    }

    for (int i = 0; i < num_zahlen; i++)
    {
        printf("\nGeben Sie die %d. Zahl ein: ", i + 1);
        while (scanf("%d", &zahlen[i]) != 1)
        {
            while (getchar() != '\n')
                ;
            printf("Fehlerhafte Eingabe!\n");
        }
    }

    printf("Vor der Sortierung: ");
    printArray(zahlen, num_zahlen);
    for (int i = 0; i < num_zahlen - 1; i++)
    {
        int minIndex = i;
        for (int j = i; j < num_zahlen; j++)
        {
            if (zahlen[j] < zahlen[minIndex])
                minIndex = j;
        }
        tausche(&zahlen[minIndex], &zahlen[i]);
    }
    printf("\nNach der Sortierung: ");
    printArray(zahlen, num_zahlen);

    return 0;
}