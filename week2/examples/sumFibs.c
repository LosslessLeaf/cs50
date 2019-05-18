#include <cs50.h>
#include <stdio.h>

int sumFibs(int);

int main(void)
{
    sumFibs(121393);
}

int sumFibs(int num)
{
    int firstFib = 1;
    int middleFib = 1;
    int trailingFib = 0;
    int counter = 0;
    int oddSum = 0;

    for (int i = 0; i < num; i++)
    {
        if (i == 0 || i == 1)
        {
            oddSum += 1;
        }
        else
        {
            trailingFib = firstFib + middleFib;

            firstFib = middleFib;
            middleFib = trailingFib;

            if (trailingFib % 2 != 0)
            {
                if ((trailingFib) > num)
                {
                    break;
                }
                else
                {
                    oddSum += trailingFib;
                }

            }

        }
    }
    printf("%i\n", oddSum);
    return oddSum;
}
