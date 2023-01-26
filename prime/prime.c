#include <cs50.h>
#include <stdio.h>

bool prime(int number);

int main(void)
{
    int min;
    do
    {
        min = get_int("Minimum: ");
    }
    while (min < 1);

    int max;
    do
    {
        max = get_int("Maximum: ");
    }
    while (min >= max);

    for (int i = min; i <= max; i++)
    {
        if (prime(i) == true)
        {
            printf("%i\n", i);
        }

    }
}

bool prime(int number)
{
    // TODO
    int n = 1;
    do
    {
        n++; // starts division by 2
    }


    while (number % n != 0 && n < number); // checks if remainder is equal to zero and if counter has reached number we are checking
    if (n == number)
    {
        return true; // if counter got to number we are checking then it is prime
    }
    else
    {
        return false; // if n is less than number we are checking and modulus greater than 0 not prime
    }
}
