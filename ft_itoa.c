/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gfilipe- <gfilipe-@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/10 17:19:21 by gfilipe-          #+#    #+#             */
/*   Updated: 2022/12/01 08:36:59 by gfilipe-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
//a funcao itoa 
int	ft_value(long j)
{
	int	counter;

	counter = 0;
	if (j <= 0)
		counter++;
	while (j != 0)
	{
		j = j / 10;
		counter++;
	}
	return (counter);
}

void	ft_write(int size, int end, long int n, char *ptr)
{
	while (size > end)
	{
		ptr[size - 1] = n % 10 + '0';
		n = n / 10;
		size--;
	}
}

char	*ft_itoa(int n)
{
	char		*ptr;
	long int	i;
	int			size;
	int			end;

	i = n;
	end = 0;
	size = ft_value(n);
	ptr = (char *)malloc(sizeof(char) * size + 1);
	if (ptr == NULL)
		return (0);
	if (i < 0)
	{
		ptr[0] = '-';
		end = 1;
		i = -i;
	}
	ft_write(size, end, i, ptr);
	ptr[size] = '\0';
	return (ptr);
}
