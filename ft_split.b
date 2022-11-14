/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.b                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gfilipe- <gfilipe-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/08 10:41:45 by gfilipe-          #+#    #+#             */
/*   Updated: 2022/11/14 09:23:39 by gfilipe-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_words(char const *word, char c)
{
	int	i;
	int	counter;

	i = 0;
	counter = 0;
	while(word[i] && word)
	{
		if (word[i] != c)
		{
			counter++;
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
	int	j;

	i = 0;
	j = 0;
	while(*word && word[i] == c)
	{
		if (word[i] == c && word[i] != word[i + 1])
		{
			i++;
			while (word[i] != c)
			{
				word[j] = word[i];
				i++;
				j++;
			}
		}
	}
	return (*word);
}

char	**ft_split(char const *s, char c)
{
	char	**split;

	**split = malloc(sizeof(array(s,c)));

}
