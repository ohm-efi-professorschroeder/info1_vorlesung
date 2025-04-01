#include <stdio.h>

#define PI_HALF 1.571
#define PI PI_HALF+PI_HALF

int main()
{
    const float pi_half = 1.571;
    const float pi = pi_half + pi_half;

    // Aufgabe: Welchen Wert hat die Variable twoPI nach der Zuweisung und warum? Erst nachdenken, dann ausprobieren!
    float twoPI = 2 * PI;
    printf("%f\n", twoPI);
}
