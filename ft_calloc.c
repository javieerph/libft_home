/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ejavier- <ejavier-@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/17 20:39:30 by ejavier-          #+#    #+#             */
/*   Updated: 2025/04/17 20:39:30 by ejavier-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

void	*ft_calloc(size_t nelem, size_t elsize)
{
	void *ptr;

    if (nelem == 0 || elsize == 0)
    {
        return (NULL);
    }    
	ptr = malloc(nelem * elsize);
	if (ptr == NULL)
		return (ptr);
	ft_bzero(ptr, elsize * nelem);
	return (ptr);
}
