#include <unistd.h>

void cherch_word(char *str, int *i)
{
    while (str[*i] && (str[*i] != ' ' && str[*i] != '\t'))
    {
        write(1, &str[*i], 1);
        i++;
    }
}

int check_last(char  *str,int i)
{
    while (str[i])
    {
        if (str[i] != ' ' && str[i] != '\t')
            return (1);
        i++;
    }
    return (0);
}
int main(int ac,char **av)
{
    int i;

    if (ac == 2)
    {
        i = 0;
        while (av[1][i] == ' ' || av[1][i] == '\t')
            i++;
        while (av[1][i])
        {
            while (av[1][i] && (av[1][i] != ' ' && av[1][i] != '\t'))
            {
                write(1, &av[1][i], 1);
                i++;
            }
            while (av[1][i] == ' ' || av[1][i] == '\t')
                i++;
            if (av[1][i])
                write(1, "   ", 3);
        }
    }
    write(1, "\n", 1);
}
