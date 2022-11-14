/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gfilipe- <gfilipe-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/10 15:21:07 by gfilipe-          #+#    #+#             */
/*   Updated: 2022/11/14 09:24:36 by gfilipe-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strtrim(char const *s1, char const *set)
{
	int		start;
	int		len;
	char	*str;

	len = ft_strlen(s1);
	start = 0;
	if (!s1 || !set)
		return (NULL);
	while (ft_strchr(set, s1[start]) && start <= len)
		start++;
	if (start > len)
		return (ft_strdup(s1 + len));
	while (ft_strchr(set, s1[len]) && start < len)
		len--;
	str = malloc(len - start + 2);
	if (!str)
		return (NULL);
	ft_strlcpy(str, &s1[start], len - start + 2);
	return (str);
}
