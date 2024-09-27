#include <stdio.h>

int main(void) {
    int curr, prev;
    prev = 0;
    while ((curr = getchar()) != EOF) {
        if (curr != ' ' || prev != ' ') {
            putchar(curr);
        }
        prev = curr;
    }
}
