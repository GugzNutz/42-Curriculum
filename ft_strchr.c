/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gfilipe- <gfilipe-@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/02 12:09:35 by gfilipe-          #+#    #+#             */
/*   Updated: 2023/01/04 13:23:45 by gfilipe-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*char	*ft_strchr(const char *s, int c)
{
	char	*s2;

	s2 = (char *) s;
	if (c >= 255)
		return (NULL);
	while (*s2 != c)
	{
		if (*s2 == '\0')
			return (NULL);
	s2++;
	}
	return (s2);
}*/
char
	*ft_strchr(const char *s, int c)
{
	int	i;

	i = 0;
	if (!s)
		return (NULL);
	while (s[i])
	{
		if (s[i] == (char) c)
			return (s + i);
		i++;
	}
	if (s[i] == (char)c)
		return ((char *)(s + i));
	return (NULL);
}
