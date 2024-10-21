#include <stdio.h>

int             max(int* tab, unsigned int len)
{
        int i;
        int test;

        i = 0;
        if (!tab)
                return (0);
        test = tab[i];
        while(i < len)
        {
                if (tab[i] >= test)
                        test = tab[i];
                i++;
        }
        return (test);
}

