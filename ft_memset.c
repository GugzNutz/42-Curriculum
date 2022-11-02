/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gfilipe- <gfilipe-@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/30 14:17:08 by gfilipe-          #+#    #+#             */
/*   Updated: 2022/10/30 14:35:26 by gfilipe-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <libft.h>

void	*ft_memset(void *s, int c, int n)
{
	if (s == NULL || n <= 0)
		return s;

	unsigned char *str = s;
	while (n > 0)
	{
		*str++ = (unsigned char)c;
		n--;
	}
	return s;
}
/*
int	main()
{
	char a[] = "ola mi llamo bruno";
	ft_memset(a, 48, 5);
	printf("%s", a);
			return (0);
}*/	
