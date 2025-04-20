/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ejavier- <ejavier-@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/20 18:08:41 by ejavier-          #+#    #+#             */
/*   Updated: 2025/04/20 18:08:41 by ejavier-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

static size_t	ft_intlen(int n);
char    *ft_itoa(int n)
{
	char	*ret;
	size_t	len;

	if (n == -2147483648)
		return (ft_strdup("-2147483648"));
	len = ft_intlen(n);
    ret = (char *)ft_calloc((len + 1), sizeof(char));
	if (n == 0)
		ret[0] = '0';
	if (n < 0)
	{
		ret[0] = '-';
		n *= -1;
	}
	while (n > 0)
	{
		ret[len-1] = (n % 10) + '0';
		n /= 10;
        len--;
	}
	return (ret);
}
static size_t	ft_intlen(int n)
{
	int i;

	i = 0;
	if (n == 0)
		return (1);
	if (n < 0)
	{
		n = -n;
		i++;
	}
	while (n > 0)
	{
		n /= 10;
		i++;
	}
	return (i);
}

#include <stdio.h>
int main(void)
{
    int n = -1234567890;
    char *result = ft_itoa(n);
    printf("The integer %d as a string is: %s\n", n, result);
    for (int i = 0; result[i] != '\0'; i++)
    printf("Character at position %d: %c\n", i, result[i]);
    free(result); // Don't forget to free the allocated memory
    return 0;
}
