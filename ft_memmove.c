/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nfigueir <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/15 11:01:25 by nfigueir          #+#    #+#             */
/*   Updated: 2024/05/15 13:32:10 by nfigueir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	size_t		i;
	char		*d;
	const char	*s;

	d = (char *)dest;
	s = (const char *)src;
	i = 0;
	if (!d && !s)
		return (NULL);
	if (d > s)
	{
		while (n-- > 0)
			d[n] = s[n];
	}
	else
	{
		i = 0;
		while (i < n)
		{
			d[n] = s[n];
			i++;
		}
	}
	return (d);
}

//int	main()
//{
//	char buffer[20] = "Hello, World!";
//
//    // Mover parte dos dados com memmove
//	ft_memmove(buffer + 5, buffer, 10);
//	printf("%s\n", buffer); // Resultado esperado: "HelloHello, Wor"
//	return 0;
//}
