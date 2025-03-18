#include <stdio.h>

int main()
{
    // Hinweis: bit4 ist das hoechstwertige Bit, bit1 das niederwertigste Bit
    unsigned int bit4 = 1;
    unsigned int bit3 = 0;
    unsigned int bit2 = 1;
    unsigned int bit1 = 0;

    unsigned int zahl0 = 0;

    // Todo: a) Benutzen Sie nur Shift- und Bit-Operatoren, um die obige Binaerzahl in der Variable zahl zu speichern.
    //       b) Kommentieren Sie Teilaufgabe a) aus und nutzen Sie nun nur logische und arithmetische Operatoren sowie 
    //          Bitoperatoren, um die obige Binaerzahl in der Variable zahl zu speichern.
    //       Geben Sie am Ende jeder Teilaufgabe die entsprechenden Bits der Variable zahl aus.
    printf("Zielwert: %u%u%u%u\n", bit4, bit3, bit2, bit1);

    // Ausgabe der Variable zahl

    return 0;
}