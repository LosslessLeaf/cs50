#include <cs50.h>
#include <stdio.h>

int findHour(int, int);

int main(void)
{
    int hourHand = 0;
    do
    {
        hourHand = get_int("Hour hand is at: ");
    }
    while (hourHand <= 0 || hourHand > 12);

    int rotations = get_int("How many hours? ");

    findHour(hourHand, rotations);

    return 0;
}

int findHour(int hourHand, int rotations)
{
    printf("%i %i\n", hourHand, rotations);

    if (rotations < 0)
    {
        rotations *= -1;
        // printf("Rotations: %i\n", rotations);
        int cycles = rotations / 12;
        // printf("Cycles: %i\n", cycles);
        hourHand += (cycles * 12) - rotations;
        printf("Cycles: %i Clock position: %i\n", cycles, hourHand);
    }
    else
    {
        rotations += hourHand;
        int cycles = rotations / 12;
        printf("Cycles: %i\n", cycles);
        int clockPosition = rotations % 12;
        if (clockPosition == 0)
        {
            clockPosition = 12;
        }
        printf("Cycles: %i Clock position: %i\n", cycles, clockPosition);
    }

    return 0;
}

// create a function that will take 2 parameters, int and int.
// the first int should be between the range of 1 and 12
// and represents which number the clock hand is pointing at
// the second can be any integer

// mvp
// the second int will be a positive number only
// return te hour that the hand will be pointing at

// hacker 1
// return both the number of clock cycles and the final hour

// hacker 2
// accept negative numbers in the second int and go back on clock