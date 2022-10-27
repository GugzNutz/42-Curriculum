#include <stdio.h>
#include <string.h>

void	*ft_memmove(void *dest, const void *src, int n)
{
	char	*d = (char *)dest;
	const char	*s = (const char *)src;
	char	*temp;
	int	i;

	i = 0;
	while (i < n)
	{
		temp[i] = s[i];
		i++;
	}
	i = 0;
	while (i < n)
	{
		temp[i] = d[i];
		i++;
	}
	return (d);
}
