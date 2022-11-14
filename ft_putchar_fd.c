/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putchar_fd.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gfilipe- <gfilipe-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/14 11:58:13 by gfilipe-          #+#    #+#             */
/*   Updated: 2022/11/14 12:30:19 by gfilipe-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putchar_fd(char c, int fd)
/*First parameter is file descriptor, if it was one it represented the output
device screen, second parameter is the buffer data, the third parameter is
the count number for the data given in the buffer parameter
basically, if it's 2 it will only write the first two bytes of 
the buffer data and ignore the rest of the bytes*/{
	write(fd, &c, 1);
}
