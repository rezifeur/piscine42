#include <stdlib.h>

int	*ft_ultimate_range(int **range, int min, int max)
{
	int i;
	int *tab;

	i = 0;
	if (min >= max)
		return (NULL);
	tab = (int *)malloc(sizeof(*tab) * (max - min));
	while (min < max)
	{
		tab[i] = min;
		i++;
		min++;
	}
	*range = tab;
	return (i);
}
