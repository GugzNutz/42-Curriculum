/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gfilipe- <gfilipe-@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/27 08:23:19 by gfilipe-          #+#    #+#             */
/*   Updated: 2022/12/27 11:58:36 by gfilipe-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
/*Serves to count the words in the initial string*/
int	ft_wordcount(const char *str, char sep)
{
	int	count;
	int	i;

	i = 0;
	count = 0;
	while (str[i])
	{
		while (str[i] == sep)
			i++;
		if (str[i])
		{
			while (str[i] && str[i] != sep)
				i++;
			count++;
		}
	}
	return (count);
}

int	ft_wordlen(char const *str, char sep, int i)
{
	int	len;

	len = 0;
	while (str[i] != sep && str[i])
	{
		i++;
		len++;
	}
	return (len);
}

char	**ft_split(char const *s, char c)
{