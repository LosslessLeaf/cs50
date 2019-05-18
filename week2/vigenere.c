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
        int j;

        for (j = 0; j < len; j++)
        {
            if (!(isalpha(argv[1][j])))
            {
                printf("Usage: ./vigenere keyword\n");
                return 1;
            }
        }
        string keyword = argv[1];
        string plaintext = get_string("plaintext: ");

        int i = 0;
        printf("ciphertext: ");
        for (j = 0; j < strlen(plaintext); j++)
        {


            if (isalpha(plaintext[j]))
            {
                int key = (tolower(keyword[i % strlen(keyword)]) - 'a');
                long newLetter = plaintext[j];
                char letter;

                if (islower(plaintext[j]))
                {

                    if (j < strlen(plaintext) && j < strlen(keyword))
                    {
                        newLetter = newLetter + key;
                        if (newLetter > 122)
                        {
                            newLetter = ((newLetter - 'z') + 'a') - 1;
                            letter = newLetter;
                            printf("%c", letter);
                        }
                        else
                        {
                            letter = newLetter;
                            printf("%c", letter);
                        }

                    }
                    else if (j < strlen(plaintext) && j >= strlen(keyword))
                    {
                        newLetter = newLetter + key;
                        if (newLetter > 122)
                        {
                            newLetter = ((newLetter - 'z') + 'a') - 1;
                            letter = newLetter;
                            printf("%c", letter);
                        }
                        else
                        {
                            letter = newLetter;
                            printf("%c", letter);
                        }
                    }
                }
                else if (isupper(plaintext[j]))
                {
                    if (j < strlen(plaintext) && j < strlen(keyword))
                    {

                        newLetter = newLetter + key;
                        if (newLetter > 90)
                        {
                            newLetter = (newLetter - 'Z' + 'A') - 1;
                            letter = newLetter;
                            printf("%c", letter);
                        }
                        else
                        {
                            letter = newLetter;
                            printf("%c", letter);
                        }

                    }
                    else if (j < strlen(plaintext) && j >= strlen(keyword))
                    {
                        newLetter = newLetter + key;
                        if (newLetter > 90)
                        {
                            newLetter = ((newLetter - 'Z') + 'A') - 1;
                            letter = newLetter;
                            printf("%c", letter);
                        }
                        else
                        {
                            letter = newLetter;
                            printf("%c", letter);
                        }
                    }
                }
                i++;
            }
            else
            {
                printf("%c", plaintext[j]);
            }
        }
        printf("\n");
    }
    else
    {
        printf("Usage: ./vigenere keyword\n");
        return 1;
    }
}
