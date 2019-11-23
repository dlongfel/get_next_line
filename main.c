/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dlongfel <dlongfel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/16 17:16:02 by dlongfel          #+#    #+#             */
/*   Updated: 2019/11/19 20:51:59 by dlongfel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

int		main(void)
{
	int		fd;
	char	*line;

	line = NULL;
	fd = open("get_next_line.h", O_RDONLY);
	while (get_next_line(fd, &line))
	{
		printf("%s\n", line);
		free(line);
	}
	free(line);
	printf("%s\n", line);
	close(fd);
}
