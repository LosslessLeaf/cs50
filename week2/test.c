#include <cs50.h>
#include <ctype.h>
#include <stdio.h>
#include <string.h>

int main(int argc, string argv[])
{
    if (argc > 1)
    {
        string str = argv[1];
        int key = atoi(argv[1]), strLength = strlen(str), counter = 0, x, i, letter;
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

            string plaintext = get_string("plaintext: ");
            // printf("%s\n", plaintext);
            // int textLength = strlen(plaintext);
            // printf("%i\n", textLength);
            for (i = 0; i < strlen(plaintext); i++)
            {
                // printf("%c\n", plaintext[i]);
                if (isalpha(plaintext[i]))
                {
                    letter = plaintext[i];

                    if (letter >= 65 && letter <= 90)
                    {
                        letter = plaintext[i] + (key % 26);
                        if (letter > 90)
                        {
                            letter = 65 + (letter - 90);
                            printf("%c", letter);
                        }
                        else
                        {
                            printf("%c", letter);
                        }
                    }




                if (letter >= 97 && letter <= 122)
                {
                    letter = plaintext[i] + (key % 26);
                    if (letter > 122)
                    {
                        letter = 97 + (letter - 122);

                        printf("%c", letter);
                    }
                    else
                    {
                        printf("%c", letter);

                    }
                }

                    // ==================WORKING============================================================================================
                    // if (letter > 122)
                    // {
                    //     letter = 97 + (letter - 122);

                    //     printf("Greater %c %i\n", letter, letter);
                    // }
                    // else
                    // {
                    //     printf("Not Greater %c %i\n", letter, letter);

                    // }
                    // ==================WORKING============================================================================================

                }
                else
                {
                    printf("%c", plaintext[i]);
                }
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
