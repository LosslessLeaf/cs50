#include <cs50.h>
#include <string.h>
#include <stdio.h>

int main(void)
{
    string name = "Joseph";
    for (int letter = 0, length = strlen(name); letter < length; letter++)
    {
        printf("%c", name[letter]);
    }
    printf("\n");
}