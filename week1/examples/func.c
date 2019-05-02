#include <cs50.h>
#include <stdio.h>

void printSum(void);
void printSums(int, int);
int squared(int);
bool isLeapYear(void);

int main(void)
{
    // printf("Hello\n");
    // printSums(4, 8);
    // int threeSquared = squared(3);
    // printf("3 squared is: %i\n", threeSquared);
    int leapYear = isLeapYear();
    if (leapYear == 0)
    {
        printf("Not a leap year!\n");
    }
    else
    {
        printf("Leap year!\n");
    }
    return leapYear;
}

int squared(num)
{
    return num * num;
}

void printSum(void)
{
    printf("1 + 2 = %i\n", 1 + 2);
}

void printSums(x, y)
{
    printf("%i + %i = %i\n", x, y, x + y);
}

bool isLeapYear()
{
    long year = get_long("Enter a year to find out if Leap Year: ");

    if (year % 400 == 0)
    {
        return true;
    }
    else if (year % 100 == 0)
    {
        return true;
    }
    else if (year % 4 == 0)
    {
        return true;
    }
    else
    {
        return false;
    }
}