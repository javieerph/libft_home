/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ejavier- <ejavier-@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/13 19:04:56 by ejavier-          #+#    #+#             */
/*   Updated: 2025/04/13 19:04:56 by ejavier-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

char *strchr(const char *s, int c)
{
    while (*s != '\0')
    {
        if (*s == (char)c)
            return (char *)s;
        s++;
    }
    if (c == '\0')
    {
        return (char *)s;
    }
    else
    {
        return NULL;
    }
}
