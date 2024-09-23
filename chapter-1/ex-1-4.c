#include <stdio.h>

int main(void) {
    float celsius, fahr;
    int lower, upper, step;

    lower = 0;
    upper = 300;
    step = 20;

    celsius = lower;
    printf("Celsius   Fahr\n");
    while (celsius <= upper) {
        fahr = 9./ 5. * celsius + 32.;
        printf("%7.0f %6.1f\n", celsius, fahr);
        celsius += step;
    }
}
