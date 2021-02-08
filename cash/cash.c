#include <stdio.h>
#include <cs50.h>
#include <math.h>

int main(void)
{

    float coins;
    do
    {
        //getting user input
        coins = get_float("Change owed:");
    }
    while (coins < 0);

    //makes 4 variables for four types of coins.
    int x = 0;
    int y = 0;
    int z = 0;
    int t = 0;

    int cents = round(coins * 100); //going to round cents to nearest penny

    while (cents > 0)
    {
        //checks for every condition cents could take.
        if (cents >= 25)
        {
            cents = cents - 25;
            x++;
        }
        else if (cents >= 10)
        {
            cents = cents - 10;
            y++;
        }
        else if (cents >= 5)
        {
            cents = cents - 5;
            z++;
        }
        else
        {
            cents = cents - 1;
            t++;
        }

    }//then print the result
    printf("total : %i\n", x + y + z + t);

}