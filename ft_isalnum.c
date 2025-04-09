/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalnum.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ejavier- <ejavier-@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/08 12:19:23 by ejavier-          #+#    #+#             */
/*   Updated: 2025/04/09 10:20:46 by ejavier-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_isalnum(char c);
int	ft_isalpha(char c);
int	ft_isdigit(char c);

int	ft_isalpha(char c)
{
	if ((c >= 65 && c <= 90) || (c >= 97 && c <= 122))
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
int	ft_isdigit(char c)
{
	if (c >= 48 && c <= 57)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
int	ft_isalnum(char c)
{
	if ((ft_isalpha(c) != 0) || (ft_isdigit(c) != 0))
	{
		return (1);
	}
	else
	{
		return (0);
	}
}