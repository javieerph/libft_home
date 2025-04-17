/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ejavier- <ejavier-@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/17 20:12:11 by ejavier-          #+#    #+#             */
/*   Updated: 2025/04/17 20:12:11 by ejavier-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
static int	is_space(char c);

int			ft_atoi(const char *str)
{
	int i;
	int neg;
	int sum;

	sum = 0;
	neg = 0;
	i = 0;
	while (is_space(str[i]))
		i++;
	if (str[i] == '+' || str[i] == '-')
	{
		if (str[i] == '-')
			neg = 1;
		i++;
	}
	while (str[i] >= '0' && str[i] <= '9')
	{
		sum *= 10;
		sum += str[i] - '0';
		i++;
	}
	return (neg ? -(sum) : sum);
}

static int	is_space(char c)
{
	if(c == ' ' || c == '\t' || c == '\n'
		|| c == '\v' || c == '\f' || c == '\r')
    {
        return (1);
    }
    else
    {
        return (0);
    }        
}
