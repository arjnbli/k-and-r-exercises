#include <stdio.h>

/*
 * Removal of int from the main function signature results in compiler error
 * void can be omitted from main without any errors
 * Removal of semicolon results in compilation error 
 */
int main() {
    printf("hello, world\n");
}
