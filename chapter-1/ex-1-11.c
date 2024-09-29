#include <stdio.h> 
#define IN 1
#define OUT 0 

/*
 * Testing the word counting program must done with inputs 
 * that contain blanks, tabs and newlines in between contiguous
 * characters. For example "te s\t one" must be correctly 
 * identified to have 3 words
*/
int main(void) {
    int c, nc, nl, nw, state;  

    nc = nl = nw = 0;
    state = OUT;
    while((c = getchar()) != EOF) {
        nc++;
        if (c == '\n') {
            nl++;
        }
        if (c == ' ' || c == '\t' || c == '\n') {
            state = OUT;
        } else if (state == OUT) {
            state = IN;
            nw++;
        }
    }

    printf("Number of lines: %d\n", nl);
    printf("Number of words: %d\n", nw);
    printf("Number of characters: %d\n", nc);
}
