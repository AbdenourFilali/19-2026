#include <stdio.h>

void	ft_sort_int_tab(int *tab, int size)
{
	int	tmp;
	int	i;
	int	j;

	i = 0;
	while( i < size - 1)
	{
		j = 0;
		while(j < size - 1)
		{
			if (tab[j] > tab[j + 1])
			{
				tmp = tab[j];
				tab [j] = tab[j + 1];
				tab[j + 1] = tmp;
			}
			j++;
		}
		i++;
	}
}

int	main(void)
{
	int	tab[] = {10, 8, 120, 5, 0, -50, 1};
	int	size = 7;
	int	i;

	ft_sort_int_tab(tab, size);

	i = 0;
	while(i < size)
	{
		printf("%d \n", tab[i]);
		i++;
	}
}
