/********************************************************************************************
 * Ascii-Tabelle
 * 
 * Schreiben Sie ein Programm, das zwei Zeichen abfragt und dann alle Zeichen der Ascii-
 * Tabelle ausgibt, die zwischen diesen zwei Zeichen liegen. Falls das Ende der Ascii-Tabelle 
 * erreicht wird, soll die Ausgabe wieder am Anfang beginnen! Geben Sie nur sichtbare Zeichen
 * aus, keine Kontrollzeichen (Hinweis: Sie können die Funktion iscntrl() aus ctype.h dafür 
 * verwenden).
 * 
 * 1. Beispiel:
 * >> Geben Sie ein einzelnes Zeichen ein: C
 * >> Geben Sie noch ein einzelnes Zeichen ein: c
 * Die folgenden Zeichen befinden sich in der Ascii-Tabelle zwischen 'c' und 'C':
 * DEFGHIJKLMNOPQRSTUVWXYZ[\]^_`ab
 * 
 * 2. Beispiel:
 * >> Geben Sie ein einzelnes Zeichen ein: c
 * >> Geben Sie noch ein einzelnes Zeichen ein: C
 * Die folgenden Zeichen befinden sich in der Ascii-Tabelle zwischen 'c' und 'C':
 * defghijklmnopqrstuvwxyz{|}~ !"#$%&'()*+,-./0123456789:;<=>?@AB
 *********************************************************************************************/

#include <stdio.h>
#include <ctype.h>

int main()
{
    char a,b;

    //scanf("%c", &a);
    //scanf("%c", &a);
    printf("Geben Sie ein Zeichen ein: ");
    a = getchar(); getchar();
    printf("Geben Sie noch ein Zeichen ein: ");
    b = getchar(); getchar();

    for( ;a != b; a = (a + 1) % 127)
    {
        if(iscntrl(a) == 0)
            printf("%c", a);
    }

    return 0;
}