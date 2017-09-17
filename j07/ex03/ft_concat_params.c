#include <stdlib.h>

int	ft_strlen(char *str)
{
	int i;

	i = 0;
	while (str[i] != '\0')
		i++;
		
	return (i);
}

char	*ft_concat_params(int argc, char **argv)
{
	int	i;
	int	l;
	int	p;
	char	*out;

	i = 0;
	l = 0;
	p = 0;
	while (++i < argc)
		l += ft_strlen(argv[i]);
	out = (char *)malloc(sizeof(char) * (l + 1));
	i = 0;
	while (++i < argc)
	{
		l = -1;
		while (++l < ft_strlen(argv[i]))
			out[l + p] = argv[i][l];
		out[l + p] = '\n';
		p += l + 1;
	}
	out[p + 1] = '\0';
	return (out);
}
