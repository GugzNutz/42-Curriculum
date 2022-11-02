/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gfilipe- <gfilipe-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/02 13:24:52 by gfilipe-          #+#    #+#             */
/*   Updated: 2022/11/02 13:52:47 by gfilipe-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_strncmp(const char *s1, const char *s2, int n)
{
	int	i;

	i = 0;
	while ((s1[i] && s2[i]) && i < n)
	{
		if ((s1[i] != s2[i]))
			return ((s1[i] - s2[i]));
		i++;
	}
	if (i != n)
		return ((s1[i] - s2[i]));
	return (0);
}
