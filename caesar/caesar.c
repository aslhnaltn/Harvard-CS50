#include <stdio.h>
#include <cs50.h>
#include <string.h>
#include <stdlib.h>
#include <ctype.h>

int main(int argc, string argv[])
{
    //check if the command line argument fits the conditions.
    if (argc != 2 && !isdigit(argv[1]))
    {
        printf("Usage: ./caesar key");
        return 1;
    }

    string plaintext = get_string("plaintext: ");
    printf("ciphertext: ");

    int getkey = atoi(argv[1]); //convert type string to integer


    for (int i = 0; plaintext[i]; i++)
    {
        if (islower(plaintext[i]))
        {
            //substract 'a' to scale their position from 0 to 26.
            printf("%c", ((plaintext[i] - 'a' + getkey) % 26) + 'a');
        }
        else if (isupper(plaintext[i]))
        {
            printf("%c", ((plaintext[i] - 'A' + getkey) % 26) + 'A');
        }
        else
        {
            //print any other character as it is
            printf("%c", plaintext[i]);
        }

    }
    printf("\n");
}