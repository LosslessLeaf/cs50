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
    int count;


    // Prompt user for card number
    card = get_long("Enter card number here: ");

    // If card > 0, start check process
    if (card > 0)
    {
        // gets count of card number
        count = log10(card) + 1;

        // sets placeholder for card number so it can be mutated
        cardHolder = card;

        // starts loop to get, starting with the second-to-last number,
        // and iterates through, multiplying each by 2 and adding them to sumOne
        do
        {
            card /= 10;
            n = (card % 10) * 2;
            int nHolder = n;

            // If n is greater than or equal to 10, split the double digit integer into two separate digits
            // Add each separate digit to sumOne
            if (n >= 10)
            {

                sumOne += n / 10;
                n = nHolder;
                sumOne += n % 10;
            }
            else
            {
                sumOne += n;
            }

            card /= 10;
        }
        while (card != 0);

        card = cardHolder;

        // starts loop to, starting with the last number,
        // iterate through, multiplying each by 2 and adding them to sumTwo

        do
        {
            n = card;
            n %= 10;
            sumTwo += n;
            card /= 100;
        }
        while (card != 0);

        card = cardHolder;

        // Adds both sums and gets the remainder, if it is 0, then proceed, else print INVALID

        int check = (sumOne + sumTwo) % 10;

        int firstTwo = (card / pow(10, count - 2));

        int firstOne = (card / pow(10, count - 1));

        if (check == 0)
        {
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