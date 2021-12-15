#include <stdio.h>

void ft_swap(int *a, int *b);

int main() 
{
    int a = 10;
    int b = 20;

    ft_swap(&a, &b);

    printf("a:%d,b:%d", a,b);
}
