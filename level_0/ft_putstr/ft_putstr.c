#include <unistd.h>

int ft_strlen(char *str)
{
    int i;
    while (str[i])
        i++;
    return (i);
}

void ft_putstr(char *str)
{
    write(1, str, ft_strlen(str));
}
