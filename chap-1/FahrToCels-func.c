#include <stdio.h>

float FahrToCels(float Fahr);

int main(void)
{
    float fahr, celsius;
    int lower, upper, step;

    lower = 0;
    upper = 300;
    step = 20;

    fahr = lower;
    printf("Fahrenheit - Celsius Temperature conversion Application\n");
    while (fahr <= upper)
    {
        celsius = FahrToCels(fahr);
        printf("%3.0f%6.1f\n", fahr, celsius);
        fahr = fahr + step;
    }
}

float FahrToCels(float fahr)
{
    return (5.0 / 9.0) * (fahr - 32.0);
}