/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dlongfel <dlongfel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/21 17:14:23 by dlongfel          #+#    #+#             */
/*   Updated: 2019/10/05 14:14:22 by dlongfel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

int		get_next_line(int const fd, char **line)
{
	char	buf[10+1];
	int		was_read;

	while ((was_read = read = (fd, buf, 10)))
	{
		buf[was_read] = '\0';
		*line = ft_strjoin(*line, buf);
	}
	return (0);
}

int		main(void)
{
	char	*line;
	int		fd;

	line = "hello world";
	fd = open(text.txt, O_RDONLY);
	get_next_line(fd, &line);
	printf("%s\n", line);
}
