/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gfilipe- <gfilipe-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/10 17:19:21 by gfilipe-          #+#    #+#             */
/*   Updated: 2022/11/14 10:08:12 by gfilipe-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*int	ft_value(long j)
{
	int	counter;

	counter = 0;
	if (j < 0)
	{
		j *= -1;
		counter++;
	}
	while (j > 0)
	{
		j /= 10;
		counter++; 
	}
	return (counter);
	
}

char	*ft_itoa(int n)
{
	char 		*ptr;
	long int	i;
	int			j;



	i = n;
	j = ft_value(n);
	ptr = (char *) malloc(j * sizeof(char) + 1);
	if (ptr == 0)
		return (NULL);
	while ()
}
*/
static int	ft_get_size(int n)
{
	int size;

	size = 0;
	if (n <= 0)
		size++;
	while (n != 0)
	{
		n = n / 10;
		size++;
	}
	return (size);
}

static void	ft_fill_res(int size, int offset, int n, char *res)
{
	while (size > offset)
	{
		res[size - 1] = n % 10 + '0';
		n = n / 10;
		size--;
	}
}

char		*ft_itoa(int n)
{
	int		offset;
	int		size;
	char	*res;

	offset = 0;
	size = ft_get_size(n);
	if (!(res = (char *)malloc(sizeof(char) * size + 1)))
		return (0);
	if (n == -2147483648)
	{
		res[0] = '-';
		res[1] = '2';
		n = 147483648;
		offset = 2;
	}
	if (n < 0)
	{
		res[0] = '-';
		offset = 1;
		n = -n;
	}
	ft_fill_res(size, offset, n, res);
	res[size] = '\0';
	return (res);
}
