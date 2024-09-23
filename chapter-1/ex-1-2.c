#include <stdio.h>

/*
 * Compiler generates warnings mentioning unknown escape sequence 
 * in case of c and * and incomplete format specifier in case of %
 */
int main(void) {
    printf("\c");
    printf("\*");
    printf("\%");
}
