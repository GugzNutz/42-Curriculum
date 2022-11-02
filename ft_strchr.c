/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gfilipe- <gfilipe-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/02 12:09:35 by gfilipe-          #+#    #+#             */
/*   Updated: 2022/11/02 12:27:40 by gfilipe-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <unistd.h>
#include <string.h>
#include "/nfs/homes/gfilipe-/Desktop/libft.a/libft.h"

char	*ft_strchr(const char *s, int c)
{
	char	*s2;

	s2 = (char *) s;
	while (*s2 != c)
	{
		if (*s2 == '\0')
		{
			return (NULL);
		}
	s2++;
	}
	return (s2);
}