/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gfilipe- <gfilipe-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/03 15:11:33 by gfilipe-          #+#    #+#             */
/*   Updated: 2022/11/03 16:10:56 by gfilipe-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strtrim(char const *s1, char const *set)
{
	int	counter;
	int	i;
	int	j;
	int	f;

	counter = 0;
	i = 0;
	j = 0;
	f = ft_strlen(s1);
	while (counter < ft_strlen(set) || *set)
	{
		if (s1[i] = set[j])
		{
			s1[i] = NULL;
			counter++;
			j++;
			i++;
		}
		else if (s1[f] = set[j])
		{
			s1[f] = NULL;
			counter++;
			f--;
			j++;
		}
		
	}

}
