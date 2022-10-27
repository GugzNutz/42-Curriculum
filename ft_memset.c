#include <string.h>
#include <stdio.h>

void	*ft_memset(void *s, int c, int n)
{
	if (s == NULL || n <= 0)
		return s;

	unsigned char *str = s;
	while (n > 0)
	{
		*str++ = (unsigned char)c;
		n--;
	}
	return s;
}
/*
int	main()
{
	char a[] = "ola mi llamo bruno";
	ft_memset(a, 48, 5);
	printf("%s", a);
			return (0);
}*/	
