int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while(str[i])
	{
		i++;
	}
	return (i);
}
#include <stdio.h>

int	main(void)
{
	int	i;
	i = ft_strlen("abdenour");
	printf("%d", i);
	return (0);
}
