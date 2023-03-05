#include <stdio.h>
#include <cs50.h>

int main(void)
{
//int cents;
    float value, cents;

//user input a value
    do
    {
        value = get_float("Amount (in U$D): ");
    }
    while (value < 0);

    cents = value * 100;

    int coins = 0;
    int c25 = 0, c10 = 0, c5 = 0, c1 = 0;

//condition laces to verify if its possible to
//reduce the value by the largest coin

    if (cents >= 25)
    {
        do
        {
            cents = cents - 25;
            c25 ++;
        }

        while (cents >= 25);
    }

    if (cents >= 10)
    {
        do
        {
            cents = cents - 10;
            c10 ++;
        }

        while (cents >= 10);
    }

    if (cents >= 5)
    {
        do
        {
            cents = cents - 5;
            c5 ++;
        }

        while (cents >= 5);
    }

    if (cents >= 1)
    {
        do
        {
            cents = cents - 1;
            c1 ++;
        }

        while (cents >= 1);
    }

    coins = c25 + c10 + c5 + c1;

    printf("%i\n", coins);
    
    //printf("%i coins of 25 cents\n", c25);
    //printf("%i coins of 10 cents\n", c10);
    //printf("%i coins of 5 cents\n", c5);
    //printf("%i coins of 1 cents\n", c1);

}