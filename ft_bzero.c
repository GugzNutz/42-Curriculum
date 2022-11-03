/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gfilipe- <gfilipe-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/30 14:16:35 by gfilipe-          #+#    #+#             */
/*   Updated: 2022/11/03 15:09:31 by gfilipe-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_bzero(void *s, size_t n)
{
	unsigned char	*ptr;

	ptr = (unsigned char *)s;
	while (n > 0)
	{
		*ptr = '\n';
		ptr++;
		n--;
	}
}
/*
int	main()
{
	char a[] = "mi llamo juan";
	ft_bzero(a, 1);
	printf("%s", a);
	return (0);
}*/
