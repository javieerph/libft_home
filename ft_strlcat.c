/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ejavier- <ejavier-@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/12 18:48:20 by ejavier-          #+#    #+#             */
/*   Updated: 2025/04/12 18:48:20 by ejavier-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

char	*ft_strncat(char *dest, char *src, int nb);
size_t	ft_strlcat(char *dest, const char *src,
	size_t destsize)
{
	size_t	destlen;
	size_t	srclen;
	size_t	bytes;

	destlen = ft_strlen(dest);
	srclen = ft_strlen(src);
	if (destsize <= destlen)
		return (srclen + destsize);
	bytes = destsize - destlen - 1;
	ft_strncat(dest, (char *)src, bytes);
	return (destlen + srclen);
}
char	*ft_strncat(char *dest, char *src, int nb)
{
	char	*p;

	p = dest;
	while (*p)
		p++;
	while (nb-- > 0 && *src)
		*p++ = *src++;
	*p = 0;
	return (dest);
}
#include <stdio.h>
int main()
{
    char dest[20] = "Hello";
    char src[] = " World!";
    size_t destsize = 20;
    size_t result;

    result = ft_strlcat(dest, src, destsize);
    printf("Result: %zu\n", result);
    printf("Destination: %s\n", dest);
    return 0;
}