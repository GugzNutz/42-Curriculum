/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gfilipe- <gfilipe-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/02 12:26:15 by gfilipe-          #+#    #+#             */
/*   Updated: 2022/11/02 12:35:18 by gfilipe-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "/nfs/homes/gfilipe-/Desktop/libft.a/libft.h"

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
    if (j >= 1)
    {
        while (j >= 1 && i > size - j - 1)
        {
            dest[j] = src[i];
            i++;
            j++;
        }
        dest[j] = '\0';
    }
    return (dest_lenght + src_lenght);
}