#include <unistd.h>

int     ft_atoi(const char *str)
{
        int i;
        int result;
        int signe;

        i = 0;
        result = 0;
        signe = 1;
        while(str[i] == 32 || (str[i] >= 9 && str[i] <= 13))
                i++;
        if (str[i] == '-' || str[i] == '+')
        {
                if (str[i] == '-')
                        signe = -1;
                i++;
        }
        while(str[i] && (str[i] >= '0' && str[i] <= '9'))
        {
                result = result * 10 + (str[i] - '0');
                i++;
        }
        return (signe * result);
}

void ft_putnbr(int n)
{
	char c;

	if (n < 0)
	{
		write(1, "-", 1);
		ft_putnbr(-n);
	}
	else if (n > 9)
	{
		ft_putnbr(n / 10);
		ft_putnbr(n % 10);
	}
	else
	{
		c = n + '0';
		write(1, &c, 1);
	}
}

int main(int ac, char ** av)
{
	int i;
	int nb;

	if (ac > 1)
	{
		i = 1;
		nb = ft_atoi(av[1]);
                while(i <= 9)
                {
                        ft_putnbr(i);
                  	write(1, " x ", 3);
			ft_putnbr(nb);
			write(1, " = ", 3);
			ft_putnbr(nb * i);
			write(1, "\n", 1);
			i++;
                }
	}
	else
		write(1, "\n", 1);
}
