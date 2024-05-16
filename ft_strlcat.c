/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nfigueir <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/16 08:04:29 by nfigueir          #+#    #+#             */
/*   Updated: 2024/05/16 10:23:34 by nfigueir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t size)
{
	size_t	i;
	size_t	len;

	i = 0;
	len = ft_strlen(dst);
	if (size > 0)
	{
		while (src[i] && (len + i) < (size - 1))
		{
			dst[len + i] = src[i];
			i++;
		}
		dst[len + i] = 0;
	}
	while (src[i])
		i++;
	return (len + i);
}

//int	main(void)
//{
//	char dst[10] = "123";
//	char src[11] = "4567891011";
//	size_t i = ft_strlcat(dst, src, sizeof(dst));
//	printf("dst: %s\nreturn: %zu\n", dst, i);
//	//i = strlcat(dst, src, sizeof(dst));
//	//printf("dst: %s\nreturn: %zu\n", dst, i);
//	return (0);
//}
