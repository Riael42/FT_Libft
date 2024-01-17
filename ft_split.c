/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: riael <#42gether | home@42berlin>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/30 10:34:10 by riael             #+#    #+#             */
/*   Updated: 2023/12/04 13:33:08 by riael            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

static char	**ft_zerowords(void);

char	**ft_split(char const *s, char c)
{
	int		wc;
	char	**final;
	int		i;

	wc = ft_countwords(s, c);
	if (wc == 0)
		return (ft_zerowords());
	final = (char **)malloc(sizeof(char *) * (wc + 1));
	if (final == ((void *)0))
		return ((void *)0);
	i = 0;
	while (i < wc)
	{
		final[i] = ft_createword(s, c, i);
		i += 1;
	}
	final[wc] = ((void *)0);
	return (final);
}

static char	**ft_zerowords(void)
{
	char	**s;

	s = (char **)malloc(sizeof(char *) * 1);
	s[0] = ((void *)0);
	return (s);
}

//int main()
//{
//	char **a = ft_split(" tripouille ",' ');
//
//	int i = 0;
//	if (!a)
//		printf("DED");
//	if (a[i])
//		while (a[i] != ((void *)0))
//		{
//			printf("%s \n", a[i]);
//			free(a[i]);
//			i += 1;
//		}
//	free(a[i]);
//	free(a);
//}
