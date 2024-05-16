/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nfigueir <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/16 12:51:23 by nfigueir          #+#    #+#             */
/*   Updated: 2024/05/16 14:57:24 by nfigueir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_strncmp(const char *s1, const char *s2, size_t n)
{
	size_t	i;

	i = 0;
	while (s1[i] == s2[i])
	{
		if (i == n || (!s1[i] && !s2[i]))
			return (0);
		i++;
	}
	return (s1[i] - s2[i]);
}

int main()
{
	char *s1 = "asdfgh";
	char *s2 = "asd6fgh";
	if (ft_strncmp(s1, s2, 4) == 0)
		printf("sim");
	else
		printf("nao");
	return 0;
}
