#include <cs50.h>
#include <stdio.h>
#include <string.h>

int main(int argc, string argv[])
{


    // printf("%i\n", key);
    if (argc > 1)
    {
        string str = argv[1];
        // int i;
        // int strLength = strlen(str);
        // int counter = 0;
        // int x;
        int key = atoi(argv[1]), strLength = strlen(str), counter = 0, x, i;
        char y;
        // printf("%i\n", strLength);

        for (i = 0; i < strLength; i++)
        {
            // printf("%c\n", str[i]);

            x = str[i] - '0';
            // printf("%i\n", x);

            if (x >= 0 && x <= 9)
            {
                // printf("%i\n", x);
                counter++;
            }
        }
        // printf("%i, %s\n", counter, str);
        if (counter == strlen(str) && argc == 2)
        {
            // printf("Good!\n");
            string plaintext = get_string("plaintext: ");
            // printf("%s\n", plaintext);
            int textLength = strlen(plaintext);
            // printf("%i\n", textLength);

            for (i = 0; i < textLength; i++)
            {
                // printf("%c\n", plaintext[i]);
                x = plaintext[i];
                if (x >= 65 && x <= 90)
                {
                    // printf("Real %i\n", x);
                    x = x + key;
                    // printf("%i\n", x);
                    if (x > 90)
                    {
                        x -= 26;
                    }
                    y = x;
                    printf("%c", x);
                }
                else if (x >= 97 && x <= 122)
                {
                    // printf("real");
                    // printf("%i\n", key);
                    x = x + key;
                    if (x > 122 && x < 148)
                    {
                        x -= 26;
                    }
                    else if (x >= 148)
                    {
                        int k = x % 26;
                        x = 122 - k;
                    }
                    y = x;
                    printf("%c", y);

                }
                else
                {
                    // printf("fake");
                    y = x;
                    printf("%i", y);
                }

                // if (x >= 0 && x <= 9)
                // {

                // }
            }

        }
        else if (counter != strlen(str) || argc > 2 || argc <= 0)
        {
            printf("Usage: ./caesar key\n");
            return 0;
        }
        else
        {
            printf("Usage: ./caesar key\n");
        }
    }
    else
    {
        printf("Usage: ./caesar key\n");
        return 0;
    }

}
