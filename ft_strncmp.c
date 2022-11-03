/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gfilipe- <gfilipe-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/02 13:24:52 by gfilipe-          #+#    #+#             */
/*   Updated: 2022/11/03 12:39:39 by gfilipe-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_strncmp(const char *s1, const char *s2, size_t n)
{
	int	i;
	int	j;

	i = 0;
	j = (int)n;
	while ((s1[i] && s2[i]) && i < j)
	{
		if ((s1[i] != s2[i]))
			return ((s1[i] - s2[i]));
		i++;
	}
	if (i != j)
		return ((s1[i] - s2[i]));
	return (0);
}
