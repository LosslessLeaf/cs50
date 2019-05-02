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
    printf("Card number: %ld\n", card);
    if (card > 0)
    {
        count = log10(card) + 1;
    printf("Card length: %i\n", count);

    cardHolder = card;

    // printf("%f", pow(10, (count - 2)));
    // card /= pow(10, (count - 2));
    // printf("%ld\n", card);

    if (card /= pow(10, (count - 2)))
        {
            printf("First two: %ld\n", card);
        }



    card = cardHolder;

    printf("=======One\n");
    do
    {
        card /= 10;
        n = card;
        n %= 10;
        // printf("%ld\n", n);
        sumOne += n * 2;
        card /= 10;
    }
    while (card != 0);

    card = cardHolder;

    printf("sumOne: %ld\n", sumOne);

    printf("=======Two\n");
    do
    {
        n = card;
        n %= 10;
        // printf("%ld\n", n);
        sumTwo += n;
        card /= 100;
    }
    while (card != 0);

    printf("sumTwo: %ld\n", sumTwo);

    int check = (sumOne + sumTwo) % 10;

    printf("Check: %i\n", check);

    if (check == 0)
    {
        printf("All good!\n");
    }
    else
    {
        printf("No good!\n");
    }
    }

    return 0;
}