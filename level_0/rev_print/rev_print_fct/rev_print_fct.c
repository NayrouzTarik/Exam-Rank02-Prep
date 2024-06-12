#include <unistd.h>

int ft_strlen(char *str)
{
    int i;
    i = 0;
    while (str[i])
        i++;
    return i;
}
char *rev_print(char *str)
{
    int i = ft_strlen(str) - 1;
    while (i >= 0)
        write(1, &str[--i], 1);
    return (str);
}