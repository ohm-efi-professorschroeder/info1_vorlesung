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

int gibGanzeZahlEin(int min, int max);

void gibStudiEin(int studiIndex, int anzahlFaecher, int noten[][MAX_FAECHER])
{
    for(int i = 0; i < anzahlFaecher; i++)
    {
        printf("%d. Studi, %d. Fach: ", studiIndex+1, i+1);
        noten[studiIndex][i] = gibGanzeZahlEin(1, 5);
    }
}

void gibNotenAus(int noten[][MAX_FAECHER], int anzahlFaecher, int anzahlStudis)
{
    for(int i = 0; i < anzahlStudis; i++)
    {
        float note = 0.0f;
        printf("%d. Studi: ", i+1);
        for(int j = 0; j < anzahlFaecher; j++)
        {
            printf(" %d ", noten[i][j]);
            note += noten[i][j];
        }
        printf(" -> %.2f\n", note / anzahlFaecher);
    }
}

int main()
{   
    int noten[MAX_STUDIS][MAX_FAECHER];

    printf("Wieviele Studis? (Max. %d) ", MAX_STUDIS);
    int anzahlStudis = gibGanzeZahlEin(1, MAX_STUDIS);
    printf("Wieviele Fächer? (Max. %d) ", MAX_FAECHER);
    int anzahlFaecher = gibGanzeZahlEin(1, MAX_FAECHER);
    
    for(int i = 0; i < anzahlStudis; i++)
    {
        gibStudiEin(i, anzahlFaecher, noten);
    }

    printf("Noten:\n");
    gibNotenAus(noten, anzahlFaecher, anzahlStudis);

#if 0
    m[0][2] = 12;
    // m + 2 * sizeof(int) = 12

    m[2][3] = 42;
    // m + 2 * sizeof(int)*MAX_FAECHER + 3 * sizeof(int)
#endif

    return 0;
}

int gibGanzeZahlEin(int min, int max)
{
    int zahl, geleseneWerte;

    do
    {
        geleseneWerte = scanf("%d", &zahl);
        while(getchar() != '\n') {}

        if(geleseneWerte != 1 || zahl < min || zahl > max)
            printf("Fehler! Erneute Eingabe: ");

    } while(geleseneWerte != 1 || zahl < min || zahl > max);

    return zahl;
}
 