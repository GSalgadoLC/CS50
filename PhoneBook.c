
#include <cs50.h>
#include <stdio.h>
#include <string.h>

int main()
{
    string names[] = {"Carter", "David"};
    string numbers[] = {"1-111-111-1111", "0-000-000-0000"};
    
    
    
    for (int i = 0; i<2; i++){
        if (strcmp (names[i], "David") ==0){
            printf("Found %s\n", numbers[i]);
            return 0 ;
           
        }
    }

    printf("Not Found\n");

    return 1
}
