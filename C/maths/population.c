#include <stdio.h>
#include <cs50.h>

int main(void)
{
    
    printf("POPULATION GROW CALCULATOR\n");
    long n, end;
    
    
    do 
    {
        n = get_long("start size: \n");
    }
    while (n < 9);

    
    do 
    {
        end = get_long("end size: \n");
    } 
    while (end < n);
    
    //increasing population with the formula until
    //it gets the number wanted, and counting the years
    
    int cont = 0;
    
    while (n < end) 
    {
        n = n + (n / 3) - (n / 4);
        cont ++;
    }
    

    printf("Years: %i", cont);
    
}