#include <string.h>
#include <stdio.h>

void	*ft_memcpy(void *dest, const void *src, int n)
{
	int	i; 
	unsigned const char *s =src;
	unsigned char *d = dest;


	i = 0;
	while(n > 0)
	{
		d[i] = s[i];
		i++;
		n--;
	}
	return (dest);
}
/*int	main()
{
	char a[] = "Hello";
	char b[] = "World Hello";
	ft_memcpy(a, b, 5);
	printf("%s", a);
	return (0);
}*/
