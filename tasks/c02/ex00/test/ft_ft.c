char	*ft_strcpy(char *dest, char *src);

int main()
{
    char src[18] = "C é bom, devore!";
    char dest[18];

    printf("Original: %s \n", strcpy(dest, src));
    printf("      42: %s \n", ft_strcpy(dest, src));
    return (0);
} */

char    *ft_strcpy(char *dest, char *src)
{
    int    i;

    i = 0;
    while (src[i] != '\0')
    {
        dest[i] = src[i];
        i++;
    }
    dest[i] = '\0';
    return (dest);
}
