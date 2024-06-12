#include <unistd.h>
#include <stdio.h>

int ft_atoi(const char *str)
{
    int i;
    int res;
    int signe;

    signe = 1;
    res = 0;
    i = 0;
    while ((str[i] == ' ' ) || (str[i] >= 9 && str[i] <= 13))
        i++;
    if (str[i] == '-')
        signe = -1;
    if (str[i] ==  '-' || str[i] == '+')
        i++;
    while (str[i] >= '0' && str[i] <= '9')
    {
        res = (res * 10) + str[i] - '0';
        i++;
    }
    return (res * signe);
}
