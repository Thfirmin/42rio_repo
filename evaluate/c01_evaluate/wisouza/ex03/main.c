#include <stdio.h>

void ft_div_mod(int a, int b, int *div, int *mod);

int main() {
    int a = 10;
    int b = 3;
    int div, mod;
    ft_div_mod(a, b, &div, &mod);
    printf("div:%d, mod:%d", div, mod);
}
