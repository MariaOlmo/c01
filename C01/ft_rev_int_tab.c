

#include <unistd.h>
void	ft_rev_int_tab(int *tab, int size)
{
	int i;
    int x;
	int aux
	i = 0;
    x = size-1;

	while (i < size/2)
	{
		aux = (tab[i]);
        tab[i]=tab[x];
        tab[x]= aux;
        i++;
        x--;
	}
	
}