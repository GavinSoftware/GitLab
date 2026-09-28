/* Split input into one word per line!
 * Gavin Lai, September 22, 2026
 */

#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <ctype.h>

int main(void) {
    char word[1000];

    while (true) {
        int result = scanf("%999s", word);

        if (result == EOF) {
            break;
        }

        if (result != 1) {
            fprintf(stderr, "Could not read..\n");
            return EXIT_FAILURE;
        }

        int next = getchar();
        if (next != EOF && !isspace(next)) {
            fprintf(stderr, "Word is too long :( (maximum 999 bytes).\n");
            return EXIT_FAILURE;
        }

        if (puts(word) == EOF) {
            fprintf(stderr, "Could not write output...\n");
            return EXIT_FAILURE;
        }
    }

    if (ferror(stdin) || fflush(stdout) == EOF) {
        fprintf(stderr, "Input or output error :(\n");
        return EXIT_FAILURE;
    }

    return EXIT_SUCCESS;
}
