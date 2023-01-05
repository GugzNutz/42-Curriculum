/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line_bonus.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anepali <anepali@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/14 14:13:17 by anepali           #+#    #+#             */
/*   Updated: 2022/12/14 16:03:33 by anepali          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line_bonus.h"

char	*get_next_line(int fd)
{
	int			len;
	char		*list;
	static char	buf[FOPEN_MAX][BUFFER_SIZE + 1];

	len = 1;
	list = NULL;
	if (fd < 0 || fd > FOPEN_MAX || BUFFER_SIZE < 1)
		return (0);
	list = next_line(buf[fd], 0);
	if (clear(buf[fd]))
		return (list);
	while (len)
	{
		len = read(fd, buf[fd], BUFFER_SIZE);
		if (len == -1 || (len == 0 && list[0] == '\0'))
		{
			free(list);
			return (0);
		}
		list = next_line(buf[fd], list);
		if (clear(buf[fd]))
			break ;
	}
	return (list);
}
