#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <cs50.h>

int isalpha();
int isspace();

int main(void)
{
    
    //prompt for input text
    string s = get_string("Input the Text: ");
    
    
    //letters, spaces and ponctuation declaration
    int let = 0, spa = 0, pon = 0;

    //letters, spaces and ponctuation counting    
    for (int i = 0, n = strlen(s); i < n; i++)
    {
        
        if (isspace(s[i]))
        {
            spa = spa + 1;
        }
        else if (isalpha(s[i]))
        {
            let = let + 1;
        }
        else
        {
            if ((s[i] == '!') || (s[i] == '.') || (s[i] == '?'))
            {
                pon = pon + 1;   
            }
        }
        
    }

    int words = spa + 1;
    
    //getting the grade...
    float grade = 0.0588 * ((let / (float) words) * 100) - 0.296 * ((pon / (float) words) * 100) - 15.8 + 0.5;
    
    //...and printing it
    if (grade > 1 && grade < 16)
    {
        printf("Grade %i\n", (int) grade);
    }
    else if (grade < 1)
    {
        printf("Before Grade 1\n");
    }
    else
    {
        printf("Grade 16+\n");
    }
    
}