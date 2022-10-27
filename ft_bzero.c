#include <stdio.h>
#include <strings.h>

void	ft_bzero(void *s, int n)
{
	unsigned char *ptr = s;

	while(n > 0)
	{
		*ptr = '\n';
		ptr++;
		n--;
	}
}
/*
int	main()
{
	char a[] = "mi llamo juan";
	ft_bzero(a, 1);
	printf("%s", a);
	return (0);
}*/
