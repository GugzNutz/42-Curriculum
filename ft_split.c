/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gfilipe- <gfilipe-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/08 10:41:45 by gfilipe-          #+#    #+#             */
/*   Updated: 2022/11/08 11:50:00 by gfilipe-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	array(char *word, char c)
{
	int	i;
	int	counter;

	i = 0;
	counter = 0;
	while(word[i])
	{
		if (word[i] != c)
		{
			i++;
		}
		else if (word[i] == c)
		{
			i++;
			counter++;
		}
	}
	return (counter);
}

int sarray(char *word, char c)
{
	int	i;

	i = 0;
	while()
}

char	**ft_split(char const *s, char c)
{
	**split;

	*split = malloc(sizeof(array(s,c)));

}