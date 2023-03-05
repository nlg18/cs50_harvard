#include <stdio.h>
#include <cs50.h>

float average();

int main(void)
{
    int hmscores = get_int("How Many Scores? ");
    int scores[hmscores];
    
    for(int i = 0; i < hmscores; i++)
    {
        scores[i] = get_int("Score %i\n", (i+1));
    }
    
    
    printf("Average Score: %.2f", average(hmscores, scores));
}

/////////////////////////////////

float average(int lenght, int array[])
{
    int amount = 0;
    for(int i = 0; i < lenght; i++)
    {
        amount = amount + array[i]; 
    }
    return amount / (float) lenght;
}
