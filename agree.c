#include <stdio.h>
#include <cs50.h>

int main(void)
{
    // prompt user to agree
    char response = get_char("Do you agree?");

    // check whether user agreed
    if (response == 'y' || response == 'Y')
    {
        printf("Thanks for agreeing \n");
    }
    else if (response == 'n' || responsee == "N")
    {
        printf("You do not agree")
    }
    else
    {
        printf("Thanks for participating")
    }
}