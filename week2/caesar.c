// get_string, string variable
#include <cs50.h>

// used for isdigit, isalpha
#include <ctype.h>

// printf
#include <stdio.h>

// used for strlen
#include <string.h>

int main(int argc, string argv[])
{
    if (argc > 1)
    {
        string str = argv[1];
        int key = (atoi(argv[1]) % 26), counter = 0, x, i, letter;

        for (i = 0; i < strlen(str); i++)
        {
            if(isdigit(str[i]))
            {
                counter++;
            }
        }
        if (counter == strlen(str) && argc == 2)
        {
            string plaintext = get_string("plaintext: ");
            printf("ciphertext: ");
            for (i = 0; i < strlen(plaintext); i++)
            {
                if (isalpha(plaintext[i]))
                {
                    letter = plaintext[i];

                    // UPPERCASE
                    if (letter >= 65 && letter <= 90)
                    {
                        letter = plaintext[i] + key;
                        if (letter > 90)
                        {
                            letter = 64 + (letter - 90);
                            printf("%c", letter);
                        }
                        else
                        {
                            printf("%c", letter);
                        }
                    }

                    // LOWERCASE
                    if (letter >= 97 && letter <= 122)
                    {
                        letter = plaintext[i] + key;
                        if (letter > 122)
                        {
                            letter = 96 + (letter - 122);

                            printf("%c", letter);
                        }
                        else
                        {
                            printf("%c", letter);
                        }
                    }
                }
                else
                {
                    printf("%c", plaintext[i]);
                }
            }
            printf("\n");
        }
        else
        {
            printf("Usage: ./caesar key\n");
        }
    }
    else
    {
        printf("Usage: ./caesar key\n");
        return 1;
    }

}
