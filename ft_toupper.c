#include "libft.h"
#include "stdio.h"

int ft_toupper(int c)
{
    if(c >= 'A' && c <= 'Z')
    c += 32;
    else if(c >= 'a' && c <= 'z')
    c -= 32;
    else
    return (c);
}

int main()
{
    printf("%d", ft_toupper(65));
    return (0);   
}