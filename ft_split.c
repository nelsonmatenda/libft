/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nfigueir <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/20 12:23:20 by nfigueir          #+#    #+#             */
/*   Updated: 2024/05/21 08:03:18 by nfigueir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_substr_len(char const *str, char c)
{
	int	i;

	i = 0;
	while (str[i] && str[i] != c)
		i++;
	return (i);
}

static char	**ft_free(char **strs, int i)
{
	while (i > 0)
	{
		free(strs[i]);
		i--;
	}
	free(strs);
	return (NULL);
}

static int	ft_count_substr(const char *s, char c)
{
	int	i;
	int	count;
	int	is_word;

	i = 0;
	count = 0;
	is_word = 0;
	while (s[i])
	{
		if (s[i] == c)
		{
			i++;
			is_word = 0;
		}
		else
		{
			if (!is_word && s[i + 1])
				count += 1;
			is_word = 1;
			i++;
		}
	}
	return (count);
}

char	**ft_split(char const *s, char c)
{
	char	**dst;
	int		substr_len;
	int		i;

	dst = malloc((ft_count_substr(s, c) + 1) * sizeof(char *));
	if (!dst)
		return (NULL);
	i = 0;
	while (*s)
	{
		substr_len = 0;
		while (*s == c && *s)
			s++;
		substr_len = ft_substr_len(s, c);
		if (substr_len)
		{
			dst[i] = ft_substr(s, 0, substr_len);
			if (!dst[i])
				return (ft_free(dst, i));
			i++;
		}
		s += substr_len;
	}
	dst[i] = NULL;
	return (dst);
}

//int main()
//{
//	char **v = ft_split(" e agora, o que faço. Para continuar", ',');
//	while(*v)
//		printf("%s\n", *v++);
//	return (0);
//}
