/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dlongfel <dlongfel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/07 14:47:18 by dlongfel          #+#    #+#             */
/*   Updated: 2019/10/07 14:47:19 by dlongfel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_isws(int c)
{
	return ((c == ' ') || (c == '\t') || (c == '\n'));
}

char		*ft_strtrim(char const *s)
{
	char		*s_end;

	if (!s)
		return (NULL);
	while (ft_isws(*s))
		s++;
	if (*s == '\0')
		return (ft_strnew(0));
	s_end = (char *)(s + ft_strlen(s) - 1);
	while (ft_isws(*s_end))
		s_end--;
	return (ft_strndup((char *)s, s_end - s + 1));
}
