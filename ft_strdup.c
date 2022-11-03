/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gfilipe- <gfilipe-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/03 09:16:26 by gfilipe-          #+#    #+#             */
/*   Updated: 2022/11/03 11:47:16 by gfilipe-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>
#include <stdio.h>
#include <stdlib.h>
#include "libft.h"

char	*ft_strdup(const char *s)
{
	static char	*ptr;
	char		*ptr_value;

	ptr = malloc(sizeof(char) * ft_strlen((char *)s) + 1);
	if (ptr == NULL)
		return (NULL);
	ptr_value = ptr;
	while (*s)
	{
		*ptr_value = *s;
		ptr_value++;
		s++;
	}
	*ptr_value = '\0';
	return (ptr);
}
