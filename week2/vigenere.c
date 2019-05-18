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
                return 1;
            }
        }
        string keyword = argv[1];
        string plaintext = get_string("plaintext: ");

        printf("ciphertext: \n");
        for (i = 0; i < strlen(plaintext); i++)
        {
            // char holder = keyword[i];
            int key = (tolower(keyword[i % strlen(keyword)]) - 'a');
            printf("key: %i, test: %c %i\n", key, plaintext[i], plaintext[i]);

            if (islower(plaintext[i]))
            {

                if (i < strlen(plaintext) && i < strlen(keyword))
                {
                    printf("%i %i\n", key, plaintext[i]);
                    plaintext[i] = plaintext[i] + key;
                    printf("%i\n", plaintext[i]);
                    // if (plaintext[i] > 122)
                    // {
                    //     plaintext[i] = (((plaintext[i] + key) - 122) + 'a') - 1;
                    //     printf("%c %i\n", plaintext[i], plaintext[i]);
                    // }
                    // else
                    // {
                    //     printf("%c %i\n", plaintext[i], plaintext[i]);
                    // }

                }
                else if (i < strlen(plaintext) && i >= strlen(keyword))
                {
                    // plaintext[i] = plaintext[i] + key;
                    // printf("%i\n", plaintext[i]);
                    // if (plaintext[i] > 122)
                    // {
                    //     plaintext[i] = ((plaintext[i] - 'z') + 'a') - 1;
                    //     printf("%c %i\n", plaintext[i], plaintext[i]);
                    // }
                    // else
                    // {
                    //     printf("%c %i\n", plaintext[i], plaintext[i]);
                    // }
                }
            }
        //     else if (isupper(plaintext[i]))
        //     {
        //         if (i < strlen(plaintext) && i < strlen(keyword))
        //         {

        //             plaintext[i] = plaintext[i] + key;
        //             if (plaintext[i] > 90)
        //             {
        //                 plaintext[i] = (plaintext[i] - 'Z' + 'A') - 1;
        //                 printf("%c", plaintext[i]);
        //             }
        //             else
        //             {
        //                 printf("%c", plaintext[i]);
        //             }

        //         }
        //         else if (i < strlen(plaintext) && i >= strlen(keyword))
        //         {
        //             plaintext[i] = plaintext[i] + key;
        //             if (plaintext[i] > 90)
        //             {
        //                 plaintext[i] = ((plaintext[i] - 'Z') + 'A') - 1;
        //                 printf("%c", plaintext[i]);
        //             }
        //             else
        //             {
        //                 printf("%c", plaintext[i]);
        //             }
        //         }
        //     }
        //     else
        //     {
        //         printf("%c", plaintext[i]);
        //     }
        }
        // printf("\n");
    }
    else
    {
        printf("Usage: ./vigenere keyword\n");
        return 1;
    }
}
