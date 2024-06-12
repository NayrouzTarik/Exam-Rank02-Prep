#include <unistd.h>

void ft_putnbr(int n) 
{
    char c;

    if (n == -2147483648) 
    {
        write(1, "-2147483648", 11);
        return;
    }
    if (n < 0) 
    {
        write(1, "-", 1);
        n = -n;
    }
    if (n > 9)
        ft_putnbr(n / 10);
    c = n % 10 + '0';
    write(1, &c, 1);
}

int main()
{
    int n;

    n = 1;
    while (n <= 100)
    {
        if ((n % 3 == 0) && (n % 5 == 0))
            write(1, "fizzbuzz\n", 9);
        else if ((n % 3 == 0))
            write(1, "fizz\n", 5);
        else if ((n % 5 == 0))
            write(1, "buzz\n", 5);
        else
        {
            ft_putnbr(n);
            write(1, "\n", 1);
        }
        n++;
    }
}