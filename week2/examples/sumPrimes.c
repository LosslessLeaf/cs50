#include <cs50.h>
#include <stdio.h>

int sumPrimes(int);
bool isPrime(int);

int main(void)
{
    sumPrimes(977);
}

int sumPrimes(int num)
{
    int sum = 0;
    for (int i = 2; i <= num; i++)
    {
        if(isPrime(i) == true)
        {
            sum += i;
        }
    }

    printf("%i\n", sum);
    return sum;

}

bool isPrime(int value)
{
    for (int j = 2; j < value; j++)
    {
        if(value % j == 0)
        {
            return false;
        }
    }
    return value > 1;
}