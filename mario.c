#include <stdio.h>
#include <cs50.h>

int main(void)

{
    int n;
    do
    {
        n = get_int("Size")
    } while (n < 1);

    // For each row
    for (int i = 0; i < 4; i++)
    {
        // For each column
        for (int j = 0; j < 4; j++)
        {
            // Print a brick
            printf("#");
        }
        // Print a new line
        printf("\n");
    }
}

// In c you must specify type of data, name of function, and input/argument if none applicable put void
// Whilte (true)
// break; Can break out of a loop