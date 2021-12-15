#include <unistd.h>

void	ft_sort_int_tab(int *tab, int size)
{
	int i;
	int x;
	int aux;
	int min;

	i = 0;
	
	while (i < size)
	{
		min = i;
		x = i + 1;
		while (x < size)
		{
			if (tab[x] < tab[min])
			{
				min = x;
			}
			x++;
		}
		aux = tab[i];
		tab[i] = tab[min];
		tab[min] = aux;
		i++;
	}
}