#include <cs50.h>
#include <stdio.h>

long long factorialize(int);

int main(void)
{
    factorialize(12);
}

long long factorialize(int num)
{
    long long factorial = num;
    int updater = num;
    if (num == 0 || num == 1)
    {
        printf("%i\n", 1);
        return 1;
    }
    else
    {
        for (int i = 1; i < num; i++)
        {
            updater -= 1;
            factorial *= updater;
        }
        printf("%lli\n", factorial);
        return factorial;
    }
}