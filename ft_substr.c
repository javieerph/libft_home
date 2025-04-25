/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ejavier- <ejavier-@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/20 11:01:49 by ejavier-          #+#    #+#             */
/*   Updated: 2025/04/25 02:48:39 by ejavier-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

char	*ft_substr(char const *s, unsigned int start,
	size_t len)
{
	size_t	i;
	char	*substr;

	i = 0;
	if (!s)
		return (NULL);
	substr = (char *)ft_calloc((len + 1), sizeof(char));
	if (start >= (unsigned int)ft_strlen(s) || len == 0 || !substr)
	{
		free(substr);
		return (NULL);
	}
	while (i < len)
	{
		substr[i] = s[start];
		i++;
		start++;
	}
	substr[i] = 0;
	return (substr);
}
