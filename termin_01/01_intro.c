#include <stdio.h>

int main()
{
    /* Aufgabe 1: Welche Werte haben a,b,c? Erst nachdenken, dann ausführen! */
    int a, b, c = 12;
    printf("a = %d, b = %d, c = %d\n\n", a, b, c);

    /* Aufgabe 2: Welchen Wert hat die Variable d nach der Zuweisung? Warum? */
    unsigned char d = 257;
    // Vermutung1 : d=255
    // Vermutung2 : d=1
    printf("d = %d\n\n", d);

    /* Aufhabe 3: Welchen Wert haben die Variablen g und f nach der Zuweisung? Warum? */
    int e = 10;
    int f = e = 11; 
    int g = e == 10;
    // Vermutung 1: f = 10, g = 0
    // Vermutung 1: f = 11, g = 0
    printf("f = %d, g = %d\n\n", f, g);

    return 0;
}