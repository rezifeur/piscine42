#include <stdlib.h>

char	*ft_strcpy(char *src)
{
	int	i;
	int	l;
	char	*dest;

	l = 0;
	while (src[l])
		l++;
	dest = (char *)malloc(sizeof(*dest) * (l + 1));
	i = 0
	while (src[i] != '\0')
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
	return (dest);
}
