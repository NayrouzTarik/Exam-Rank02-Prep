#include <unistd.h>

int main(int ac, char **av)
{
    int i;

    if (ac == 2)
    {
        i = 0;
        while (av[1][i])
        {
            while (av[1][i] >= 'a' && av[i][i] <= 'z')
                i++;
            if (av[1][i] >= 'A' && av[i][i] <= 'Z')
            {
                write(1, "_", 1);
                av[1][i] -= 32;
            }
            write(1, &av[1][i], 1);
            i++;
        }
    }
    write(1, "\n", 1);
}