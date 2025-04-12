/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ejavier- <ejavier-@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/12 17:23:08 by ejavier-          #+#    #+#             */
/*   Updated: 2025/04/12 17:23:08 by ejavier-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include "libft.h"

int main(void)
{
    char c ;
    int result;

    c = 'A';
    result = ft_isalnum(c);
    if (result == 1)
    {
        printf("The character '%c' is alphanumeric.\n", c);
    }
    else
    {
        printf("The character '%c' is not alphanumeric.\n", c);
    }
    return (0);
}