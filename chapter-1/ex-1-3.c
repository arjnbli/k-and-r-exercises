#include <stdio.h>

/*
 * Program to convert fahrenheit to celsius
 * in the range 0 to 300 in steps of 20 
 * with heading
 * */
int main(void) {
    float celsius, fahr;
    int lower, upper, step;

    lower = 0;
    upper = 300;
    step = 20;

    fahr = lower;
    printf("Fahr Celsius\n");
    while (fahr <= upper) {
        celsius = (5./9.) * (fahr - 32.);
        printf("%4.0f  %6.1f\n", fahr, celsius);
        fahr += step;
    }
}
