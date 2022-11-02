/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gfilipe- <gfilipe-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/02 12:54:49 by gfilipe-          #+#    #+#             */
/*   Updated: 2022/11/02 14:04:06 by gfilipe-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>
#include "libft.h"

char    *ft_strrchr(const char *s, int c)
{
    int i;

    i = ft_strlen(s);
    while (i >= 0)
    {
        if (s[i] == c)
        {
            return (s + (char) i);
        }
        i--;
    }
    return (NULL);
}