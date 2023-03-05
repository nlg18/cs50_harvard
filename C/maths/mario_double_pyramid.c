#include <stdio.h>
#include <cs50.h>

int main(void)
{
    int p, s, h, i;

//user input for pyramid height
    do
    {
        p = get_int("Pyramid Size: ");
    }
    while ((p < 1) || (p > 8));


    for (i = 1; i <= p; i++)
    {

//print space for get the top pointed
        for (s = (p - i); s > 0; s--)
        {
            printf(" ");
        }
//number of "blocks" complementary to spaces
        for (h = 1; h <= i; h++)
        {
            printf("#");
        }

//blank between pyramids
        printf("  ");

//pyramid again (but mirrored)
        for(h = i; h >= 1; h--)
        {
            printf("#");
        }

        printf("\n");

    }
}


