#include <stdio.h>

int main(void) {
    int c;
    long nb = 0, nt = 0, nn = 0;

    while ((c = getchar()) != EOF) {
        if (c == ' ') {
            nb++;
        } else if (c == '\t') {
            nt++;
        } else if (c == '\n') {
            nn++;
        }
    }
    printf("Number of blanks: %ld\n", nb);
    printf("Number of tabs: %ld\n", nt);
    printf("Number of newlines: %ld\n", nn);
}
