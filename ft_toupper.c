#include "libft.h"
#include "stdio.h"

int ft_toupper(int c)
{
    if((c >= 'a' && c <= 'z'))
    return (c - 32);
    else
    return (c);
}
/*int main()
{
    printf("%d", ft_toupper(97));
    return (0);   
}*/