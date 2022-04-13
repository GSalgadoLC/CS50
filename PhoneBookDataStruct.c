#include <cs50.h>
#include <stdio.h>
#include <string.h>


typedef struct{
    string name;
    string number;
}
person;

int main()
{
    person people[2];
    
    people[0].name = "Carter";
    people[0].number = "1-111-111-1111";
    people[1].name = "David";
    people[1].number = "0-000-000-0000";
    
    
    for (int i = 0; i<2; i++){
        if (strcmp(people[1].name, "David") == 0 ){
            printf("Found %s\n", numbers[i]);
            return 0 ;
           
        }
    }

    printf("Not Found\n");

    return 1
}
