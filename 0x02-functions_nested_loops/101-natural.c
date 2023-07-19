#include <stdio.h>

/**
 * main - Computes and prints the sum of all the multiples of 3 or 5 below 1024 (excluded)
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
    int limit = 1024;
    int sum = 0;

    for (int num = 0; num < limit; num++)
    {
        if (num % 3 == 0 || num % 5 == 0)
        {
            sum += num;
        }
    }

    printf("The sum of all multiples of 3 or 5 below 1024 is: %d\n", sum);
    return (0);
}
