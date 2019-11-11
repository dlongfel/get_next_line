/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.h                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dlongfel <dlongfel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/21 17:13:56 by dlongfel          #+#    #+#             */
/*   Updated: 2019/11/11 20:50:16 by dlongfel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef GET_NEXT_LINE_H
# define GET_NEXT_LINE_H
# include <stdio.h>
# include "libft/libft.h"
# include <fcntl.h>
# define BUFF_SIZE 10000

typedef	struct	s_gnl
{
	int				fd;
	char			*segment;
	struct s_gnl	*next;
}				t_gnl;

#endif
