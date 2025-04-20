/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ejavier- <ejavier-@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/20 16:08:31 by ejavier-          #+#    #+#             */
/*   Updated: 2025/04/20 16:08:31 by ejavier-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

static int  word_count(char const *s, char c);
static char *word(char const *s, char c);
static void free_array(char **array, int i);
char    **ft_split(char const *s, char c)
{
    char    **array;
    
    if (!s)
        return (NULL);
    int     words = word_count(s, c);
    array = (char **)ft_calloc((words + 1), sizeof(char));
    if (!array)
        return (NULL);

    int     i = 0;
    while (*s && i < words)
    {
        if (*s != c)
        {
            array[i] = word(s, c);
            if (!array[i])
            {
                free_array(array, i - 1);
                return (NULL);
            }
            i++;
            while (*s && *s != c)
                s++;
        }
        else
            s++;
    }
    array[i] = NULL;
    return (array);
}
static int  word_count(char const *s, char c)
{
    int count = 0;

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
static char *word(char const *s, char c)
{
    int     len = 0;
    char    *word;

    while (s[len] && s[len] != c)
        len++;
    word = (char *)ft_calloc((len + 1), sizeof(char));
    if (!word)
        return (NULL);
    for (int i = 0; i < len; i++)
        word[i] = s[i];
    word[len] = 0;
    return (word);
}
static void free_array(char **array, int i)
{
    while (i >= 0)
        free(array[i--]);
    free(array);
}
