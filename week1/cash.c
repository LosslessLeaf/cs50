#include <cs50.h>
#include <math.h>
#include <stdio.h>

int main(void)
{
    float cash;
    int coinsOwed;

    do
    {
        cash = get_float("Enter change owed: ");

        cash = round(cash * 100);
        if (cash >= 0)
        {
            coinsOwed = 0;

            while (cash >= 25)
            {
                cash -= 25;
                coinsOwed++;
            }
            while (cash >= 10)
            {
                cash -= 10;
                coinsOwed++;
            }
            while (cash >= 5)
            {
                cash -= 5;
                coinsOwed++;
            }
            while (cash >= 1)
            {
                cash -= 1;
                coinsOwed++;
            }
            printf("%i\n", coinsOwed);
        }
    }
    while (cash < 0);
}