/********************************************************************************************
 * Das folgende Programm macht einige Zeigeroperationen. 
 * 1. Beantworten Sie nacheinander, OHNE das Programm auszuführen, die Fragen in Teil A, B und C.
 * 2. Führen Sie das Programm nun aus und vergleichen Sie die Ausgabe mit Ihrer Vermutung.
 ********************************************************************************************/
#include <stdio.h>

int main() 
{
    // Aufgabenteil A
    // Welche der durch printf ausgegebenen Werte sind gleich?
    int a = 123;
    int* b = &a;
    printf("Aufgabenteil A: a=%d, &a=%d, b=%d, &b=%d, *b=%d\n", a, &a, b, &b, *b);
    // a=123, &a=0x80, b=0x80, &b=0x84, *b=123

    // Aufgabenteil B
    // Welchen Wert hat die Variable a beim printf?
    (*b)++;
    a++;
    printf("Aufgabenteil B: a=%d\n", a); 
    // a=125

    // Aufgabenteil C
    // Welchen Wert haben b, &b und *b beim printf?
    b++;
    printf("Aufgabenteil C: b=%d, &b=%d, *b=%d\n", b, &b, *b);
}