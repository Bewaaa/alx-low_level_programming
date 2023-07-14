#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 * main - Prints whether a randomly generated number
 *        is divisible by 3, 5, or both.
 *
 * Return: Always 0.
 */
int main(void)
{
    int n;

    srand(time(0));
    n = rand() % 100; // generate a random number between 0 and 99

    if ((n % 3 == 0) && (n % 5 == 0))
        printf("%d is divisible by both 3 and 5.\n", n);
    else if (n % 3 == 0)
        printf("%d is divisible by 3.\n", n);
    else if (n % 5 == 0)
        printf("%d is divisible by 5.\n", n);
    else
        printf("%d is not divisible by 3 or 5.\n", n);

    return 0;
}
