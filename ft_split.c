/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ejavier- <ejavier-@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/20 16:08:31 by ejavier-          #+#    #+#             */
/*   Updated: 2025/04/25 04:05:33 by ejavier-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

static int	word_count(char const *s, char c);
static char	*word(char const *s, char c);
static void	free_array(char **array, int i);

char	**ft_split(char const *s, char c)
{
	char	**array;
	int		words;
	int		i;

	if (!s)
		return (NULL);
	words = word_count(s, c);
	array = (char **)ft_calloc((words + 1), sizeof(char));
	if (!array)
		return (NULL);
	i = 0;
	while (*s && i < words)
	{
		if (*s != c)
		{
			array[i] = word(s, c);
			if (!array[i++])
				return (free_array(array, i - 1), NULL);
			while (*s && *s != c)
				s++;
		}
		else
			s++;
	}
	return (array);
}

static int	word_count(char const *s, char c)
{
	int	count;

	count = 0;
	while (*s)
	{
		if (ft_strchr(s, c))
		{
			count++;
			s++;
		}
		else
			s++;
	}
	return (count);
}

static char	*word(char const *s, char c)
{
	char	*word;
	int		len;
	int		i;

	len = 0;
	i = 0;
	while (s[len] && s[len] != c)
		len++;
	word = (char *)ft_calloc((len + 1), sizeof(char));
	if (!word)
		return (NULL);
	while (i < len)
	{
		word[i] = s[i];
		i++;
	}
	word[len] = 0;
	return (word);
}

static void	free_array(char **array, int i)
{
	while (i >= 0)
		free(array[i--]);
	free(array);
}
