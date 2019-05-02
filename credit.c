#include <cs50.h>
#include <math.h>
#include <stdio.h>

int cardChecker();

int main(void)
{
    cardChecker();
}

int cardChecker()
{
    long card;
    long n;
    long sumOne = 0;
    long sumTwo = 0;
    long cardHolder;
    int legit = 0;
    int counter = 0;
    int total = 0;
    int count;



    card = get_long("Enter card number here: ");
    // printf("Card number: %ld\n", card);
    if (card > 0)
    {
        count = log10(card) + 1;
        // printf("Card length: %i\n", count);

        cardHolder = card;

        // printf("=======One\n");
        do
        {
            card /= 10;
            n = card;
            n %= 10;
            n *= 2;
            int nHolder = n;
            if (n >= 10)
            {

                sumOne += n / 10;
                // printf("n/10: %ld\n", n / 10);
                n = nHolder;
                sumOne += n % 10;
                // printf("nmod10: %ld\n", n % 10);
            }
            else
            {
                sumOne += n;
                // printf("n: %ld\n", n);
            }

            card /= 10;
        }
        while (card != 0);

        card = cardHolder;

        // printf("sumOne: %ld\n", sumOne);

        // printf("=======Two\n");
        do
        {
            n = card;
            n %= 10;
            sumTwo += n;
            card /= 100;
        }
        while (card != 0);

        // printf("sumTwo: %ld\n", sumTwo);

        int check = (sumOne + sumTwo) % 10;

        // printf("Check: %i\n", check);

        card = cardHolder;
        card /= pow(10, count - 2);
        int firstTwo = card;
        card = cardHolder;
        card /= pow(10, count - 1);
        int firstOne = card;
        // printf("First two: %i\n", firstTwo);
        // printf("First one: %i\n", firstOne);

        if (check == 0)
        {
            // printf("All good!\n");
            if ((firstTwo == 34 || firstTwo == 37) && count == 15)
            {
                printf("AMEX\n");
                return true;
            }
            else if ((firstTwo >= 51 && firstTwo <= 55) && count == 16)
            {
                printf("MASTERCARD\n");
                return true;
            }
            else if (firstOne == 4 && (count == 13 || count == 16))
            {
                printf("VISA\n");
                return true;
            }
            else
            {
                printf("INVALID\n");
                return false;
            }
        }
        else
        {
            printf("INVALID\n");
            return false;
        }
    }

    return 0;
}