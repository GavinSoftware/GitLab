/* Calculate average line length from wc counts.
 * Gavin Lai, September 22, 2026
 */

#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <math.h>

int main(void) {
    double lines, words, characters;

    while (true) {
        int result = scanf("%lf %lf %lf", &lines, &words, &characters);

        if (result == EOF) {
            break;
        }

        if (result != 3) {
            fprintf(stderr, "Expected 3 num from wc.\n");
            return EXIT_FAILURE;
        }

        if (!isfinite(lines) || !isfinite(words) || !isfinite(characters)
                || lines <= 0 || words < 0 || characters < lines) {
            fprintf(stderr, "Invalid counts or no lines to average.\n");
            return EXIT_FAILURE;
        }

        double average = characters / lines - 1;
        if (printf("%.1f\n", average) < 0) {
            fprintf(stderr, "Could not write output :(\n");
            return EXIT_FAILURE;
        }
    }

    if (ferror(stdin) || fflush(stdout) == EOF) {
        fprintf(stderr, "Input or output error...\n");
        return EXIT_FAILURE;
    }

    return EXIT_SUCCESS;
}
