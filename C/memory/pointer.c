#include <cs50.h>
#include <stdio.h>
#include <stdlib.h>


void swap(int *a, int *b);

int main(void)
{
    int x = 1;
    int y = 2;
    printf("x  is %i, y is %i\n", x, y);
    swap(&x,&y);
    printf("x  is %i, y is %i\n", x, y);
    
    printf("\n%p\n", &x);
}

void swap(int *a, int *b)
{
    int tmp = *a;
    *a = *b;
    *b = tmp;
}

// int main(void)
// {
//     int n = 10;
//     int *p = &n; //lugar do n
//     int **q = &p; //lugar do p
//     int ***r = &q;
//     printf("%i\n", *p);
//     printf("%p\n", q);
//     printf("%p\n", &r);
// }

