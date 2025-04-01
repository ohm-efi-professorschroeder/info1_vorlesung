/***************************************************************************************************************************************
* Schreiben Sie ein Programm, das einen Winkel in Grad als ganze Zahl einliest und diesen in rad (als Fliesskommazahl) wieder ausgibt. *
* Nutzen Sie dabei sinnvoll mindestens eine Makro-Konstante. Der Winkel in rad soll dabei mit drei Nachkommastellen ausgegeben werden. *
****************************************************************************************************************************************/

#include <stdio.h>

#define PI 3.1415

int main()
{
    // 1. Eingabe (Winkel Grad)
    int winkel = 0;
    printf("Bitte Winkel in Grad eingeben: ");
    scanf("%d", &winkel);

    // 2. Winkel * PI / 180;
    float rad = winkel * PI / 180;

    // 3. Ausgabe Winkel rad
    printf("Der Winkel in Radians ist: %.3f\n", rad);

    return 0;
}
