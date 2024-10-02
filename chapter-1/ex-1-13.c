#include <stdio.h>
#define MAX_LENGTH 10    
#define IN 1    
#define OUT 0    

int main(void) {
    int c, state, length, frequency[MAX_LENGTH + 1];
    
    length = 0;
    state = OUT;

    for (int i = 0; i < MAX_LENGTH + 1; i++) {
        frequency[i] = 0;
    }

    while ((c = getchar()) != EOF) {
        if (c == ' ' || c == '\t' || c == '\n') {
            if (state == IN) {
                if (length <= 10) {
                    frequency[length]++;
                } else {
                    frequency[MAX_LENGTH]++;
                }
                state = OUT;
            }
        } else if (state == OUT) {
            state = IN;
            length = 1;
        } else {
            length++;
        }
    }

    for (int i = 1; i < MAX_LENGTH + 1; i++) {
        printf("%2i ", i);
        for (int j = 0; j < frequency[i]; j++) {
            printf("-");
        } 
        printf("\n");

    }
} 
