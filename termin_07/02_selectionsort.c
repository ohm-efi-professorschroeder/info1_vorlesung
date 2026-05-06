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

void selectionSort(int array[], int len)
{
    for(int i = 0; i < len; i++) {
        int minIndex = i;
        for(int j = i; j < len; j++) {
            if(array[j] < array[minIndex])
                minIndex = j;
        }
        tausche(&array[minIndex], &array[i]);
    }
}

int main()
{
    int array[MAX_ZAHLEN];

    // printf("Wieviele Zahlen willst du eingeben? ");
    // int numZahlen = liesZahlEin(1, MAX_ZAHLEN);

    // for(int i = 0; i < numZahlen; i++) {
    //     printf("Gib die %d. Zahl ein: ", i+1);
    //     array[i] = liesZahlEin(-99999, 99999);
    // }
    int numZahlen = 4;
    array[0] = 2;
    array[1] = 8;
    array[2] = 0;
    array[3] = 1;
    

    printf("Unsortiert: ");
    printArray(array, numZahlen);
    
    selectionSort(array, numZahlen);
    printf("\nSortiert: ");
    printArray(array, numZahlen);
    
    return 0;
 }