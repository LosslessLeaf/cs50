#include <cs50.h>
#include <stdio.h>
#include <string.h>

int main(int argc, string argv[])
{
    if (argc == 2)
    {
        string str = argv[1];
        // printf("%s\n", str);
        int i;
        int strLength = strlen(str);
        // printf("%i\n", strLength);

        for (i = 0; i < strLength; i++)
        {
            printf("%c\n", str[i]);
        }

        // printf("%s\n", strtok(argv[1], ""));
    }
    else if (argc > 2)
    {
        printf("Usage: ./caesar key\n");
    }
    else
    {
        printf("Usage: ./caesar key\n");
    }
}
