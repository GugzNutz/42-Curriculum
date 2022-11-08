/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gfilipe- <gfilipe-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/03 15:11:33 by gfilipe-          #+#    #+#             */
/*   Updated: 2022/11/08 17:29:19 by gfilipe-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strtrim(char const *s1, char const *set)
{
	size_t	counter;
	int		i;
	int		j;
	char	*s2;

	counter = 0;
	i = 0;
	j = 0;
	s2 = (char *) s1;
	if (set[i] == '\0')
		return (NULL);
	while (counter < ft_strlen(set))
	{
		if (s2[i] == set[j])
		{
			s2[i] = 0;
			counter++;
			j++;
			i++;
		}
		else if (s2[ft_strlen(s2) - i] == set[j])
		{
			s2[ft_strlen(s2) - i] = 0;
			counter++;
			j++;
			i++;
		}
		else
		break;
	}
	s2 = malloc(sizeof(char) * ft_strlen(s2));
	return (s2);
}