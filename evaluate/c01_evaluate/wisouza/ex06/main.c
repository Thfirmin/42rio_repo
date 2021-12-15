#include <stdio.h>

int ft_strlen(char *str);

int main() {
    char string[] = "lorem ipsum dolor sit amet";
    char *ptr;
    ptr = string;
    int len = ft_strlen(ptr);
    printf("%d", len);
}
