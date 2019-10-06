/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dlongfel <dlongfel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/05 20:07:41 by scash             #+#    #+#             */
/*   Updated: 2019/09/21 17:02:38 by dlongfel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnew(size_t size)
{
	char	*ptr;

	if (size > size + 1)
		return (NULL);
	ptr = (char *)malloc(sizeof(char) * size + 1);
	if (ptr)
	{
		ft_bzero(ptr, size + 1);
		return (ptr);
	}
	return (NULL);
}
