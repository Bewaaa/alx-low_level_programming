#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 * main - Prints a random number and states whether
 *        it is even or odd.
 *
 * Return: Always 0.
*/
int main(void)
{
    int n;

    srand(time(0));
    n = rand() % 100; // generate a random number between 0 and 99

    if (n % 2 == 0)
        printf("%d is even.\n", n);
    else if
        printf("%d is odd.\n", n);
    else
		printf("%d is zero\n", n);
    return 0;
}
