#include <stdio.h>
#include <cs50.h>
#include <string.h>
#include <stdlib.h>

typedef struct
{
    string name;
    string number;
}
person;

int main(void)
{

    int list = get_int("List size: ");

    person people[list];

    for (int i = 0; i < list; i++)
    {
        people[i].name = get_string("%i° contact name: ", (i+1) );
        people[i].number = get_string("%i° contact number: ", (i+1) );
    }




    string search = get_string("Search a name: ");

    for (int i = 0; i < list; i++)
    {
        if (strcmp(people[i].name, search) == 0)
        {
            printf("Found %s\n", people[i].number);
            return 0;
        }
    }
    printf("Not Found\n");
    return 1;
}
