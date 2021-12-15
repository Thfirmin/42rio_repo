#include <stdio.h>

void ft_putstr(char *str);

int main() {
    char string[] = "lorem ipsum dolor sit amet";
    char *ptr;
    ptr = string;
    ft_putstr(ptr);
    return 0;
}
