#include <stdio.h>

int main()
{
    /* Aufgabe 1: Welche Werte haben a,b,c? Erst nachdenken, dann ausführen! */
    int a, b, c = 12;
    printf("a = %d, b = %d, c = %d\n\n", a, b, c);

    /* Aufgabe 2: Welchen Wert hat die Variable d nach der Zuweisung? Warum? */
    unsigned char d = 257;
    printf("d = %d\n\n", d);

    /* Aufhabe 3: Welchen Wert haben die Variablen g und f nach der Zuweisung? Warum? */
    int e = 9;
    int f = e = 10; 
    int g = e == 10;
    printf("f = %d, g = %d\n\n", f, g);

    return 0;
}