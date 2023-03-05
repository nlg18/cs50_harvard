#include <stdio.h>
#include <cs50.h>
#include <string.h>

int main(void)
{
    //string input
    string s = get_string("Word to encrypt: \n");
    
    //sum 2 in each char (casting)
    //a becames c, b bcm d,...
    int i = 0, n = strlen(s);
    for (i = 0; i < n ; i++)
    {
        if(s[i] == 'y' || s[i] == 'z')
        {
            s[i] = (int) s[i] - 24;
        }
        else
        {
            s[i] = (int) s[i] + 2;
        }
    }
    
    //printing the encr. message
    printf("%s \n", s);
    
}