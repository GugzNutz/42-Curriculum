/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gfilipe- <gfilipe-@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/30 14:17:11 by gfilipe-          #+#    #+#             */
/*   Updated: 2022/10/30 14:17:11 by gfilipe-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <libft.h>

void    ft_putstr_fd(char *s, int fd)
{

    if (!s)
    return (void);

    int a;

    a = 0;
    while(s[a])
    {
        write(fd, &s[a], 1);/*Ou escreve ft_putchar_fd(s[a], fd) */
        a++;
    }
}