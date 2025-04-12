/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ejavier- <ejavier-@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/12 10:27:03 by ejavier-          #+#    #+#             */
/*   Updated: 2025/04/12 10:27:03 by ejavier-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	*ft_memmove(void *dest, const void *src, unsigned int len)
{
	char	*s;
	char	*d;
	unsigned int	i;

	s = (char *)src;
	d = (char *)dest;
	i = 0;
	if (d > s)
		while (len > 0)
		{
			d[len - 1] = s[len - 1];
			len--;
		}
	else
		while (i < len)
		{
			d[i] = s[i];
			i++;
		}
	return (dest);
}
