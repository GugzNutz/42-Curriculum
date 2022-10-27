#include <libft.h>

int ft_strlen(char *s)
{
	int	a;

	a = 0;
	while (s[a])
	{
		a++;
	}
	return (a);
}
