#include <stdio.h>
#include <cs50.h>

int main(void)
{

    int height;
    do
    {
        // get input from the user
        height = get_int("Height:");
    }
    while (height < 1 || height > 8);

    for (int x = 0 ; x < height; x++)
    {
        for (int z = 0 ; z < (height - 1) - x; z++)
        {
            // add space depens on the user input - 1
            printf(" ");

        }
        for (int y = 0; y < x + 1; y++)
        {
            // add hashes from top to down and left to right
            printf("#");
        }
        printf("\n");
    }
}