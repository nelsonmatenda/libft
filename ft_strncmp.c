/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nfigueir <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/16 12:51:23 by nfigueir          #+#    #+#             */
/*   Updated: 2024/05/17 10:18:52 by nfigueir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_strncmp(const char *s1, const char *s2, size_t n)
{
	size_t	i;

	i = 0;
	while (s1[i] == s2[i])
	{
		if ((i == n - 1) || (!s1[i] && !s2[i]))
			return (0);
		i++;
	}
	printf
	return (s1[i] - s2[i]);
}

//int main()
//{
//	char *s1 = "asdfgh";
//	char *s2 = "asd6fgh";
//	int t = ft_strncmp(s1, s2, 3);
//	printf("retorno:%d\n", t);
//	if (t == 0) 
//		printf("sim");
//	else
//		printf("nao");
//	return 0;
//}
