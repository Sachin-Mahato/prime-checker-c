#include <stdio.h>
#include <stdbool.h>

bool isprime(int number);

int main(void)
{
    int min;
    int max;
    // get input from user
    do
    {
        printf("Please enter a number: ");
        scanf("%d", &min);
    } while (min < 1);

    do
    {
        printf("Please enter a number: ");
        scanf("%d", &max);
    } while (min >= max);

    for (int i = min; i <= max; i++)
    {
        if (isprime(i))
        {
            printf("%i is a prime number.\n", i);
        }
    }
}

// cheks if the number is prime
bool isprime(int x)
{
    if (x < 2)
    {
        return 0;
    }

    for (int i = 2; i < x; i++)
    {
        if (x % i == 0)
        {
            return 0;
        }
    }
    return 1;
}