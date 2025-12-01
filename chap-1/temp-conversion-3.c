#include <stdio.h>

/* print Celsius-Fahrenheit table for celsius = 0, 10, ..., 150; */

int main() {
    float celsius, fahr;
    float lower, upper, step;

    lower = 0;
    upper = 150;
    step = 10;

    celsius = lower;
    printf("Celsius - Fahrenheit Temperature scale\n");
    while (celsius <= upper) {
        fahr = (celsius * 9.0/5.0) + 32;
        printf("%3.0f%6.1f\n", celsius, fahr);
        celsius = celsius + step;
    }
}