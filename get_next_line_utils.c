/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line_utils.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lmaujean <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/06 12:46:58 by lmaujean          #+#    #+#             */
/*   Updated: 2021/09/06 12:47:01 by lmaujean         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

size_t	ft_strlen(const char *c)
{
	size_t	i;

	i = 0;
	while (c[i] != '\0')
		i++;
	return (i);
}

char	*ft_strjoin(char const *s1, char const *s2)
{
	char	*str;
	int		size;
	int		i;

	i = 0;
	if (s1 == NULL || s2 == NULL)
		return (NULL);
	size = ft_strlen(s1) + ft_strlen(s2);
	str = (char *)malloc(size + 1 * sizeof(char));
	if (str == NULL)
		return (NULL);
	while (s1[i])
	{
		str[i] = s1[i];
		i++;
	}
	size = 0;
	while (s2[size])
	{
		str[i] = s2[size];
		i++;
		size++;
	}
	str[i] = '\0';
	return (str);
}

void	*ft_memcpy(void *dst, const void *src, size_t n)
{
	size_t		num;
	size_t		i;
	char		*str;
	const char	*s;

	i = -1;
	num = sizeof(dst);
	str = dst;
	s = src;
	if (dst == NULL && src == NULL)
		return (NULL);
	while (++i < n)
		str[i] = s[i];
	return (str);
}

char	*ft_strdup(const char *s1)
{
	char	*str;
	int		num;

	num = ft_strlen((char *)s1);
	str = malloc(num + 1);
	if (str == NULL)
		return (NULL);
	ft_memcpy(str, s1, num * sizeof(char) + 1);
	str[num] = '\0';
	return (str);
}

char	*ft_strchr(const char *s, int c)
{
	char	*str;
	int		i;

	str = (char *)s;
	i = 0;
	while (str[i])
	{
		if (str[i] == (char)c)
			return (&str[i]);
		i++;
	}
	if (c == '\0')
		return (&str[i]);
	return (NULL);
}
