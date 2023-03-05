
#include <cs50.h>
#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    FILE *file = fopen("phonebook.csv", "a");
    //a pointer to a file / fileopen(2 args: FILENAME, MODE(read, write or apend) )
    //csv = comma separated value, spreadsheet file
    if (file == NULL)
    {
        return 1;
    }
    char *name = get_string("Name: ");
    char *number = get_string("Number: ");
    
    fprintf(file,"%s,%s\n", name, number);
    //print in the file
    //fprintf(pointer to the file, data i want to put in the file, variables)
    
    fclose(file);
}