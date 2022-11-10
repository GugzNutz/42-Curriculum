/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gfilipe- <gfilipe-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/03 13:44:06 by gfilipe-          #+#    #+#             */
/*   Updated: 2022/11/10 11:36:29 by gfilipe-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	int		i;
	int		j;
	char	*ptr;

	i = 0;
	j = 0;
	ptr = malloc((ft_strlen(s1) + ft_strlen(s2) + 1));
	if (ptr == 0)
		return (NULL);
	while (s1[i] != '\0')
	{
		ptr[i + j] = s1[i];
		i++;
	}
	while (s2[j] != '\0' && s1[i] == '\0')
	{
		ptr[i + j] = s2[j];
		j++;
	}
	ptr[i + j] = '\0';
	return (ptr);
}
