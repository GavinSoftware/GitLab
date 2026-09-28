/*
 * Lab 1.2: Print student information and course reflections with pauses.
 * Name: [YOUR FULL NAME]
 * Date: September 27, 2026
 */

#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

int main(void) {
    puts("Full name: [YOUR FULL NAME]");
    fflush(stdout);
    sleep(1);

    puts("Student number: [YOUR STUDENT NUMBER]");
    fflush(stdout);
    sleep(1);

    puts("Course: SFWRENG 2XC3");
    fflush(stdout);
    sleep(1);

    puts("\nWhat do you think is the most useful thing you've learned so far in this course?");
    fflush(stdout);
    sleep(1);

    puts("[WRITE YOUR PERSONAL ANSWER TO QUESTION 1]");
    fflush(stdout);
    sleep(1);

    puts("\nIs there anything you've learned so far that you do not think is useful? If so, explain why.");
    fflush(stdout);
    sleep(1);

    puts("[WRITE YOUR PERSONAL ANSWER TO QUESTION 2]");
    fflush(stdout);
    sleep(1);

    puts("\nWhat are the advantages and disadvantages of using vim for coding?");
    fflush(stdout);
    sleep(1);

    puts("[WRITE YOUR PERSONAL ANSWER TO QUESTION 3, INCLUDING ADVANTAGES AND DISADVANTAGES]");
    fflush(stdout);
    sleep(1);

    puts("\nWhat are the advantages and disadvantages of using VS Code for coding?");
    fflush(stdout);
    sleep(1);

    puts("[WRITE YOUR PERSONAL ANSWER TO QUESTION 4, INCLUDING ADVANTAGES AND DISADVANTAGES]");

    return EXIT_SUCCESS;
}
