/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line_utils.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anepali <anepali@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/23 16:02:58 by anepali           #+#    #+#             */
/*   Updated: 2022/12/14 14:12:22 by anepali          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

typedef struct my_var
{
	char	*temp;
	int		i_a;
	int		i_b;
	int		n_buf;
	int		n_list;
}			t_var;

int	clean(char *buffer)
{
	int	index_a;
	int	index_b;
	int	flag;

	index_a = 0;
	index_b = 0;
	flag = 0;
	while (buffer[index_a])
	{
		if (flag > 0)
			buffer[index_b++] = buffer[index_a];
		flag = flag + (buffer[index_a] == '\n');
		buffer[index_a++] = '\0';
	}
	return (flag);
}

char	*next_line(char *buffer, char *list)
{
	t_var	v;

	v.n_list = 0;
	v.n_buf = 0;
	v.i_a = -1;
	v.i_b = 0;
	v.temp = 0;
	while (buffer[v.n_buf] && buffer[v.n_buf] != '\n')
		v.n_buf++;
	v.n_buf += (buffer[v.n_buf] == '\n');
	while (list && list[v.n_list] && list[v.n_list] != '\n')
		v.n_list++;
	v.temp = malloc((v.n_list + v.n_buf + 1) * sizeof(char));
	if (!v.temp)
		return (0);
	while (list && list[++v.i_a])
		v.temp[v.i_a] = list[v.i_a];
	v.i_a += (v.i_a == -1);
	while (buffer[v.i_b] && buffer[v.i_b] != '\n')
		v.temp[v.i_a++] = buffer[v.i_b++];
	if (buffer[v.i_b] == '\n')
		v.temp[v.i_a++] = '\n';
	v.temp[v.i_a] = '\0';
	free(list);
	return (v.temp);
}
