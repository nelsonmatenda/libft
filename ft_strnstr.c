/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nfigueir <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/19 20:36:55 by nfigueir          #+#    #+#             */
/*   Updated: 2024/05/19 21:43:11 by nfigueir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *s1, const char *s2, size_t n)
{
	size_t	i;
	size_t	j;
	char	*first;

	i = 0;
	j = 0;
	if ((s1 == NULL || s2 == NULL) && !n)
		return (NULL);
	if (!*s2)
		return ((char *)s1);
	while (i < n)
	{
		if (s1[i] == s2[j])
		{
			first = (char *)(s1 + i);
			j++;
			while (s1[i + j] && s2[j] && (s1[i + j] == s2[j]) && (i + j < n))
				j++;
			if (s2[j] == '\0')
				return (first);
		}
		j = 0;
		i++;
	}
	return (NULL);
}

/*int	main(void)
{
	char s1[] = "assim que encontrar que retorna para mim";
	char *s2 = "que";
	char *found = ft_strnstr(s1, s2, sizeof(s1));
	printf("achou: %s\n", found);
	return (0);
}*/
