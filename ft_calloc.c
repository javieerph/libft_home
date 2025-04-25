/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ejavier- <ejavier-@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/17 20:39:30 by ejavier-          #+#    #+#             */
/*   Updated: 2025/04/24 23:09:00 by ejavier-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

void	*ft_calloc(size_t nelem, size_t elsize)
{
	void	*ptr;

	if (nelem == 0 || elsize == 0)
	{
		ptr = malloc(1);
		if (ptr == NULL)
			return (NULL);
		return (ptr);
	}
	ptr = malloc(nelem * elsize);
	if (ptr == NULL)
		return (NULL);
	ft_bzero(ptr, (nelem * elsize));
	return (ptr);
}
