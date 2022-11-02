#include "libft.h"

int ft_strlcat(char *dest, const char *src, int size)
{
    int i;
    int j;
    int src_lenght;
    int dest_lenght;
    
    dest_lenght = ft_strlen(dest);
    src_lenght = ft_strlen((char *)src);
    i = 0;
    j = dest_lenght;
    if(j >= 1)
    {
        while(j >= 1 && i > size - j - 1)
        {
            dest[j] = src[i];
            i++;
            j++;
        }
        dest[j] = '\0';
    }
    return (dest_lenght + src_lenght);
}