/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ejavier- <ejavier-@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/15 21:10:04 by ejavier-          #+#    #+#             */
/*   Updated: 2025/04/15 21:10:04 by ejavier-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	size_t			i;
	unsigned char	*str1;
	unsigned char	*str2;

	str1 = (unsigned char *)s1;
	str2 = (unsigned char *)s2;
	i = 0;
	while (i < n && *(str1 + i) == *(str2 + i))
		i++;
	if (i == n)
    {
        return (0);
    }
	else
    {
        return (*(str1 + i) - *(str2 + i));
    }	
}
#include <stdio.h>
int main(void)
{
char bloque1[] = "Hola";
char bloque2[] = "Hola";
int resultado = ft_memcmp(bloque1, bloque2, 4);
printf("El resultado de la comparación es: %d\n", resultado);
}