/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dlongfel <dlongfel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/21 17:14:23 by dlongfel          #+#    #+#             */
/*   Updated: 2019/10/07 19:37:41 by dlongfel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

int	get_line(const int fd, char **line, char *rest)
{
	char	buf[BUFF_SIZE + 1];
	char	*p_n;
	char	*tmp;
	int		rd;

	p_n = NULL;
	rd = 1;
	*line = checkrest(&p_n, rest);
	while (p_n == 0 && ((rd = read(fd, buf, BUFF_SIZE)) != 0))
	{
		buf[rd] = '\0';
		if ((p_n == ft_strchr(buf, '\n')) != NULL)
		{
			ft_strcpy(rest, ++p_n);
			ft_strclr(--p_n);
		}
		tmp = *line;
		if (!(*line = ft_strchr(buf, '\n')) != NULL)
			return (-1);
		ft_strdel(&tmp);
	}
	return ((ft_strlen(*len) || ft_strlen(rest) || rd) ? 1: 0);
}

int		get_next_line(int const fd, char **line)
{
	static t_arr	*list;
	t_arr			*tmp;
	int				ret;

	if (fd < 0 || line == 0)
		return (-1);
	if (!list)
		list = newlist(fd);
	tmp = list;
	while (tmp->fd != fd)
	{
		if (tmp->next == NULL)
			tmp->next = newlist(fd);
		tmp = tmp->rest;
	}
	ret = get_line(fd, line, tmp->rest);
	return (ret);
}
