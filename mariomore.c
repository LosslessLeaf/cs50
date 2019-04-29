#include <cs50.h>
#include <stdio.h>

int main(void)

{
    int height = get_int("Height: ");
    int counter = height;

    // do {
        if (height >= 1 || height <= 8)
        {
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
                printf("  ");
                // for (int m = 0; m < height; m++)
                // {
                for (int n = 0; n < i + 1; n++)
                {
                    printf("#");
                }
                // for (int f = height; f > 0; f--)
                // {
                //     printf("=");
                // }
                    // printf("\n");
                // }
                counter -= 1;
                printf("\n");
            }


        }
        else
        {
            height = get_int("Height: ");
        }
    // }
    // while (height < 1 || height > 8);
}