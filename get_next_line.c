/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anepali <anepali@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/26 13:57:05 by anepali           #+#    #+#             */
/*   Updated: 2022/12/14 15:35:34 by anepali          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

char	*get_next_line(int fd)
{
	int			len;
	char		*list;
	static char	buf[BUFFER_SIZE + 1];

	len = 1;
	list = NULL;
	if (fd < 0 || BUFFER_SIZE < 1)
		return (0);
	list = next_line(buf, 0);
	if (clean(buf))
		return (list);
	while (len)
	{
		len = read(fd, buf, BUFFER_SIZE);
		if (len == -1 || (len == 0 && list[0] == '\0'))
		{
			free(list);
			return (0);
		}
		list = next_line(buf, list);
		if (clean(buf))
			break ;
	}
	return (list);
}
