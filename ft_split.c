/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nfigueir <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/20 12:23:20 by nfigueir          #+#    #+#             */
/*   Updated: 2024/05/20 14:16:48 by nfigueir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_count_words(const char *s, char c)
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
		if (!(s[i] == c))
		{
			if (!is_word)
				count += 1;
			is_word = 1;
		}
		i++;
	}
	return (count);
}

char	**ft_split(char const *s, char c)
{
	char	**splited;
	int	words_nb;

	splited = NULL;
	words_nb = ft_count_words(s, ' ');
	printf("%d", words_nb);
	return (splited);
}

int main()
{
	ft_split("este é um , funciona", ' ');
	return (0);
}
