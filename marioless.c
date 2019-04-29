#include <cs50.h>
#include <stdio.h>

int main(void)

{
    int height = get_int("Height: ");
    if (height > 0 && height < 9)
    {
        int counter = height;
        for (int i = 0; i < height; i++)
        {
            for (int j = 1; j < counter; j++)
            {
                printf(" ");
            }
            for (int k = 0; k < i + 1; k++)
            {
                printf("#");
            }
            counter -= 1;
            printf("\n");
        }
    }
    else
    {
        height = get_int("Height: ");
        int counter = height;
        for (int i = 0; i < height; i++)
        {
            for (int j = 1; j < counter; j++)
            {
                printf(" ");
            }
            for (int k = 0; k < i + 1; k++)
            {
                printf("#");
            }
            counter -= 1;
            printf("\n");
        }
    }
}