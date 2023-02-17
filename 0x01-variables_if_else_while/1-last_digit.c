#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 * main -Entry point
 *
 * Return: Always 0 (success/correct)
 */
int main(void)
{
int n, last_digit;

srand(time(NULL));
n = rand() - RAND_MAX / 2;
last_digit = n % 10;

if (last_digit > 5)
printf("Last digit of %d is %d greater than 5\n ", n, last_digit);
else if (last_digit == 0)
printf("Last digit of %dis %d and 0\n ", n, last_digit);
else if (last_digit < 6 && last_digit != 0)
printf("Last digit of %d is %d and less than 6 and not 0\n ", n, last_digit);
return (0);
}
