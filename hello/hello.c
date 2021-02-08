#include <stdio.h>
#include <cs50.h>

int main(void)
{
    //takes input from user to type their name.
    string yourname = get_string("What is your name?\n");
    //prints "Hello, username"
    printf("Hello, %s\n", yourname);
}