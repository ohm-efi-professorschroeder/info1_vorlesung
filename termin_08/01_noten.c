/**********************************************
 * Schreiben Sie ein Programm, das die Anzahl *
 * an Studierenden und Fächern erfragt,       *
 * entsprechend viele Noten einliest und am   *
 * Ende die Noten samt Durchschnitt ausgibt.  *
 *                                            *
 * Beispiel:                                  *
 *                                            *
 * >> Wie viele Studis (max. 20)? 4           *
 * >> Wie viele Faecher (max. 10)? 3          *
 * >> 1. Studi, 1. Fach: 1.0                  *
 * >> 1. Studi, 2. Fach: 1.3                  *
 * >> 1. Studi, 3. Fach: 1.7                  *
 * >> 2. Studi, 1. Fach: 3.0                  *
 * >> 2. Studi, 2. Fach: 3.3                  *
 * >> 2. Studi, 3. Fach: 1.3                  *
 * >> 3. Studi, 1. Fach: 5.0                  *
 * >> 3. Studi, 2. Fach: 4.0                  *
 * >> 3. Studi, 3. Fach: 1.7                  *
 * >> 4. Studi, 1. Fach: 2.7                  *
 * >> 4. Studi, 2. Fach: 2.3                  *
 * >> 4. Studi, 3. Fach: 1.0                  *
 *                                            *
 * Noten:                                     *
 * 1. Studi:   1.0   1.3   1.7 ->  1.33       *
 * 2. Studi:   3.0   3.3   1.3 ->  2.53       *
 * 3. Studi:   5.0   4.0   1.7 ->  3.57       *
 * 4. Studi:   2.7   2.3   1.0 ->  2.00       *
 *                                            *
 **********************************************/

#include <stdio.h>

#define MAX_STUDIS  20
#define MAX_FAECHER 10

float gibGanzeZahlEin(float min, float max);

// void printArray(int arr[][N], int m, int n)
// {
//     for(int i = 0; i < m; i++) {
//         for(int j = 0; j < n; j++) {
//             printf("%d ", arr[i][j]);
//         }
//         printf("\n");
//     }
// }

void notenEingabe(float arr[][MAX_FAECHER], int anzahlStudis, int anzahlFaecher)
{
    for(int i = 0; i < anzahlStudis; i++) {
        for(int j = 0; j < anzahlFaecher; j++) {
            printf("%d. Studi, %d. Fach: ", i+1, j+1);
            arr[i][j] = gibGanzeZahlEin(1.0, 5.0);
        }
    }
}

void notenAusgabe(float arr[][MAX_FAECHER], int anzahlStudis, int anzahlFaecher)
{
    for(int i = 0; i < anzahlStudis; i++) {
        printf("%d. Studi: ", i+1);
        float summe = 0.;
        for(int j = 0; j < anzahlFaecher; j++) {
            printf("%.1f ", arr[i][j]);
            summe += arr[i][j];
        }
        printf(" --> %.1f\n", summe / anzahlFaecher);
    }
}

int main()
{   
    float noten[MAX_STUDIS][MAX_FAECHER] = {{0.0}};

    printf("Wie viele Studis (max. %d)? ", MAX_STUDIS);
    int anzahlStudis = (int)gibGanzeZahlEin(1., MAX_STUDIS);

    printf("\nWie viele Faecher (max. %d)? ", MAX_FAECHER);
    int anzahlFaecher = (int)gibGanzeZahlEin(1., MAX_FAECHER);

    notenEingabe(noten, anzahlStudis, anzahlFaecher);
    notenAusgabe(noten, anzahlStudis, anzahlFaecher);
    return 0;
}

float gibGanzeZahlEin(float min, float max)
{
    float zahl;
    int geleseneWerte;

    do
    {
        geleseneWerte = scanf("%f", &zahl);
        while(getchar() != '\n') {}

        if(geleseneWerte != 1 || zahl < min || zahl > max)
            printf("Fehler! Erneute Eingabe: ");

    } while(geleseneWerte != 1 || zahl < min || zahl > max);

    return zahl;
}
 