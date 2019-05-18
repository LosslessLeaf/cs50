#include <cs50.h>
#include <stdio.h>
#include <math.h>
#include <string.h>
#include <ctype.h>


int main(int argc, string argv[])
{
    if (argc > 1 && argc < 3)
    {
        int len =  strlen(argv[1]);
        int i;

        for (i = 0; i < len; i++)
        {
            if (!(isalpha(argv[1][i])))
            {
                printf("Usage: ./vigenere keyword\n");
                return 0;
            }
        }
        string keyword = argv[1];
        string plaintext = get_string("plaintext: ");

        for (i = 0; i < strlen(plaintext); i++)
        {
            char holder = keyword[i];
            int key = (tolower(keyword[i % strlen(keyword)]) - 'a');
            // printf("%i\n", key);

            if (islower(plaintext[i]))
            {
                if (i < strlen(plaintext) && i < strlen(keyword))
                {

                    plaintext[i] = plaintext[i] + key;
                    if (plaintext[i] > 122)
                    {
                        plaintext[i] = plaintext[i] - 'z' + 'a';
                        printf("%c %c\n", plaintext[i], keyword[i]);
                    }
                    printf("%c %c\n", plaintext[i], keyword[i]);

                }
                else if (i < strlen(plaintext) && i >= strlen(keyword))
                {
                    plaintext[i] = plaintext[i] + key;
                    if (plaintext[i] > 122)
                    {
                        plaintext[i] = (plaintext[i] - 'z') + 'a';
                        printf("%c %c\n", plaintext[i], keyword[i % strlen(keyword)]);
                    }
                    else
                    {
                        printf("%c %c\n", plaintext[i], keyword[i % strlen(keyword)]);
                    }
                }
            }
            else if (isupper(plaintext[i]))
            {
                if (i < strlen(plaintext) && i < strlen(keyword))
                {

                    plaintext[i] = plaintext[i] + key;
                    if (plaintext[i] > 90)
                    {
                        plaintext[i] = plaintext[i] - 'Z' + 'A';
                        printf("%c %c\n", plaintext[i], keyword[i]);
                    }
                    printf("%c %c\n", plaintext[i], keyword[i]);

                }
                else if (i < strlen(plaintext) && i >= strlen(keyword))
                {
                    plaintext[i] = plaintext[i] + key;
                    if (plaintext[i] > 90)
                    {
                        plaintext[i] = (plaintext[i] - 'Z') + 'A';
                        printf("%c %c\n", plaintext[i], keyword[i % strlen(keyword)]);
                    }
                    else
                    {
                        printf("%c %c\n", plaintext[i], keyword[i % strlen(keyword)]);
                    }
                }
            }
        }
    }
    else
    {
        printf("Usage: ./vigenere keyword\n");
        return 1;
    }
}
