/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_createword.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: riael <#42gether | home@42berlin>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/30 11:14:37 by riael             #+#    #+#             */
/*   Updated: 2022/11/30 16:55:54 by riael            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

static int	ft_skipword(const char *str, char c, int i);
static int	ft_skipspace(const char *str, char c, int i);

char	*ft_createword(const char *str, char c, int curword)
{
	int		i;
	int		size;
	char	*word;

	i = ft_skipspace(str, c, 0);
	size = 0;
	while (curword > 0)
	{
		i = ft_skipword(str, c, i);
		i = ft_skipspace(str, c, i);
		curword -= 1;
	}
	while (str[i + size] != c && str[i + size] != '\0')
		size += 1;
	word = (char *)malloc(sizeof(char) * size + 1);
	if (word == ((void *)0))
		return ((void *)0);
	word[size] = '\0';
	size -= 1;
	while (size >= 0)
	{
		word[size] = str[i + size];
		size -= 1;
	}
	return (word);
}

static int	ft_skipword(const char *str, char c, int i)
{
	while (str[i] != c)
		i += 1;
	return (i);
}

static int	ft_skipspace(const char *str, char c, int i)
{
	while (str[i] == c)
		i += 1;
	return (i);
}
