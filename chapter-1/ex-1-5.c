#include <stdio.h>

#define LOWER 0
#define UPPER 300
#define STEP  20 

/* 
 *  Program to convert temperature from fahrenheit
 *  to celsius in reverse starting at 300 to 0 in 
 *  steps of 20 while making use of symbolic constants
 */
int main(void) {
    for (int fahr = UPPER; fahr >= LOWER; fahr -= STEP) {
        printf("%3d %6.1f\n", fahr, 5./9. * (fahr - 32.));
    }
}
