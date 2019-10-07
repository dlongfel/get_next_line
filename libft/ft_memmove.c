/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dlongfel <dlongfel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/07 14:41:11 by dlongfel          #+#    #+#             */
/*   Updated: 2019/10/07 14:41:13 by dlongfel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	unsigned char	*buf;
	unsigned char	*mem;

	buf = (unsigned char *)dst;
	mem = (unsigned char*)src;
	if (buf == mem)
		return (dst);
	if (src >= dst)
		while (len--)
			*buf++ = *mem++;
	else
	{
		buf += len - 1;
		mem += len - 1;
		while (len--)
			*buf-- = *mem--;
	}
	return (dst);
}
