/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gfilipe- <gfilipe-@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/03 13:33:03 by gfilipe-          #+#    #+#             */
/*   Updated: 2023/01/04 15:03:30 by gfilipe-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
// returns characters from the string value for the size defined
/*char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char			*ptr;
	size_t			i;
	size_t			j;

	ptr = (char *) malloc(sizeof(*s) * (len + 1));
	if (!ptr)
		return (NULL);
	i = 0;
	j = 0;
	while (s[i] != '\0')
	{
		if (i >= start && j < len)
		{
			ptr[j] = s[i];
			j++;
		}
		i++;
	}
	ptr[j] = NULL;
	return (ptr);
}*/
/*if start is bigger than strlen of s
i need to str dup an empty string otherwise
i have memory leaks or sigsegv fault
can t be null just have to put an ""*/
char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*ptr;
	size_t	lenght;

	if (start >= ft_strlen(s))
		return (ft_strdup(""));
	lenght = ft_strlen(s + start);
	if (lenght < len)
		len = lenght;
	ptr = (char *)malloc(sizeof(char) * (len + 1));
	if (!ptr)
		return (NULL);
	if (!s)
		return (NULL);
	ft_strlcpy(ptr, s + start, len + 1);
	return (ptr);
}
