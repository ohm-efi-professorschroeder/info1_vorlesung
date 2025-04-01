/****************************************************************************************************
 * Aufgaben
 * 1. Begeben Sie sich zunaechst ohne Compiler auf Fehlersuche. Welche Fehler können Sie entdecken? *
 *    Wuerde das Programm uebersetzen? Wuerde das Programm korrekt laufen?                          *
 * 2. Uebersetzen Sie nun das Programm ohne -Wall. Hilft Ihnen dies bei der Fehlersuche?            *
 * 3. Uebersetzen Sie nun das Programme mit -Wall. Hilft Ihnen dies bei der Fehlersuche?            *
 * 4. Finden und korrigieren Sie nun alle Fehler, sodass das Programm korrekte Ausgaben liefert.    *
 *    Nehmen Sie dabei so wenig Veraenderungen wie moeglich vor.                                    *
*****************************************************************************************************/

#include <stdio.h>

#define MAX_PUNKTE_TEIL_A 60
#define MAX_PUNKTE_TEIL_B 44
#define MAX_GESAMT_PUNKTE MAX_PUNKTE_TEIL_A + MAX_PUNKTE_TEIL_B // ()

int main()
{
    int pktTeilA, pktTeilB;
    double ergInProzentTeilA, ergInProzentTeilB, gesamtErgInProzent;

    printf("Wie viele Punkte wurden in Teil A erzielt: ");
    scanf("%d", &pktTeilA);

    printf("Wie viele Punkte wurden in Teil B erzielt: ");
    scanf("%d", &pktTeilB);

    ergInProzentTeilA = pktTeilA * 100 / MAX_PUNKTE_TEIL_A;
    ergInProzentTeilB = pktTeilB * 100 / MAX_PUNKTE_TEIL_B;
    gesamtErgInProzent = (pktTeilA + pktTeilB) * 100 / MAX_GESAMT_PUNKTE;

    printf("Es wurden %lf %% der moeglichen Punkte in Teil A erzielt.\n", ergInProzentTeilA); 
    printf("Es wurden %lf %% der moeglichen Punkte in Teil B erzielt.\n", ergInProzentTeilB); 
    printf("Es wurden %lf %% der moeglichen Punkte insgesamt erzielt.\n", gesamtErgInProzent);

    return 0;
}