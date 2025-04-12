/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ejavier- <ejavier-@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/12 17:07:13 by ejavier-          #+#    #+#             */
/*   Updated: 2025/04/12 17:07:13 by ejavier-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_H
# define LIBFT_H

#include <stdlib.h>

int ft_isalpha(char c);
int ft_isdigit(char c);
int ft_isalnum(char c);
int	ft_isascii(char c);
int	ft_isprint(char c);
int	ft_strlen(const char *s);
void	*ft_memset(void *s, int c, size_t len);
void	ft_bzero(void *s, size_t len);
void	*ft_memcpy(void *dest, const void *src, size_t len);
void	*ft_memmove(void *dest, const void *src, size_t len);
char	*ft_strcpy(char *dest, const char *src);
size_t	ft_strlcat(char *dest, const char *src,
	size_t destsize);
#endif