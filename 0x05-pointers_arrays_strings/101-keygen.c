#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define TARGET_SUM 2772
#define MAX_ASCII 126
#define MIN_ASCII 33

/**
 * main - Generates random valid passwords for the
 *        program 101-crackme.
 *
 * Return: Always 0.
 */
int main(void)
{
    srand(time(0));
    int sum = 0;
    while(sum < TARGET_SUM - MAX_ASCII) // continue until adding another character won't overshoot
    {
        char ch = MIN_ASCII + rand() % (MAX_ASCII - MIN_ASCII + 1);
        sum += ch;
        putchar(ch);
    }

    // Ensure sum reaches target by picking last character specifically
    putchar(TARGET_SUM - sum);
    return 0;
}
