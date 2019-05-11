#include <cs50.h>
#include <ctype.h>
#include <stdio.h>
#include <string.h>

int main(int argc, string argv[])
{
    if (argc > 1)
    {
        string str = argv[1];
        int key = atoi(argv[1]), counter = 0, x, i, letter;
        char y;

        for (i = 0; i < strlen(str); i++)
        {

            x = str[i] - '0';

            if (x >= 0 && x <= 9)
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

                    if (letter >= 65 && letter <= 90)
                    {
                        letter = plaintext[i] + (key % 26);
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
                if (letter >= 97 && letter <= 122)
                {
                    letter = plaintext[i] + (key % 26);
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
        else if (counter != strlen(str) || argc > 2 || argc <= 0)
        {
            printf("Usage: ./caesar key\n");
            return 1;
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
