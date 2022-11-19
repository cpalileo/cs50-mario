#include <cs50.h>
#include <stdio.h>

int main(void)
{
    //Using a DO WHILE loop, prompt user and check if user makes a valid input
    //If input is invalid, reprompt the user to make a valid selection
    int input = 0;

    do
    {
        input = get_int("How tall do you want your Mario hill to be? (Minimum height 1 - Maximum height 8): ");
    }
    while (input < 1 || input > 8);

    //Interate loop to create multiple rows
    for (int i = 0; i <= input; i++)
    {
        //Iterate loop to create hashes
        for (int j = 0; j < i; j++)
        {
            printf("#");
        }
        printf("\n");

        //Iterate loop to create spaces before hashes
        for (int k = 0; k < input - i - 1; k++)
        {
            printf(" ");
        }
    }

}