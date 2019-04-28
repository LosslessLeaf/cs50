#include <cs50.h>
#include <stdio.h>
#include <string.h>

int main(void)
{
    int height = get_int("Height: ");

    string hashStart = "##";
    string hashAdd = "#";
    string space = " ";

    for (int i = 0; i < height; i++)
    {
        printf("%s", hashStart);
        for (int j = 0; j < i; j++)
        {
            printf("%s", hashAdd);
        }
        printf("\n");
    }
}