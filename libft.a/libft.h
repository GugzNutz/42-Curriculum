/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gfilipe- <gfilipe-@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/30 14:16:14 by gfilipe-          #+#    #+#             */
/*   Updated: 2022/10/30 14:34:21 by gfilipe-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef __LIBFT_H__
#define __LIBFT_H__

int ft_isalpha(int c);

void	ft_bzero(void *s, int n);

int	ft_isalnum(int c);

int	ft_isalpha(int c);

int	ft_isascii(int c);

int	ft_isdigit(int c);

int	ft_isprint(int c);

void	*ft_memcpy(void *dest, const void *src, int n);

void	*ft_memmove(void *dest, const void *src, int n);

void	*ft_memset(void *s, int c, int n);



int strlcat(char *dest, const char *src, int size);

int ft_strlen(char *s);

void    ft_putstr_fd(char *s, int fd);

#endif