/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_realloc.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bclaudio <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/19 11:48:12 by bclaudio          #+#    #+#             */
/*   Updated: 2018/11/19 11:48:57 by bclaudio         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>
#include <stdlib.h>
#include "libft.h"

void	*ft_realloc(void *ptr, size_t initsize, size_t size)
{
	void *new;

	new = NULL;
	if (!ptr)
	{
		if (!(ptr = malloc(size)))
			return (NULL);
	}
	if (size <= 0)
		ft_memdel(ptr);
	else
	{
		if (!(new = malloc(size)))
			return (NULL);
		ft_memcpy(new, ptr, size < initsize ? size : initsize);
		ft_memdel(&ptr);
	}
	return (new);
}
