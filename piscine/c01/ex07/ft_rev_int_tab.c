#include <stdio.h>

void	ft_rev_int_tab(int *tab, int size)
{
	int	tmp;
	int	i;

	i = 0;

	while(i < (size / 2))
	{
		tmp = tab[i];
		tab[i] = tab[size - 1 - i];
		tab[size - 1 - i] = tmp;
		i++;
	}
}

int	main(void)
{
	int	size;

	int	tab[] = {1, 2, 3, 4};
	size = 4;
	ft_rev_int_tab(tab, size);
	int i = 0;
	while(i < size)
	{
		printf("tab[%d]: %d \n", i, tab[i]);
		i++;
	}
}
