/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: moatieh <moatieh@student.42amman.com>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/28 18:37:55 by moatieh           #+#    #+#             */
/*   Updated: 2025/08/30 00:07:43 by moatieh          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t size)
{
	size_t	dcount;
	int		count;
	size_t	srclen;

	srclen = 0;
	dcount = 0;
	count = 0;
	while (dst[dcount] != '\0')
		dcount++;
	while (src[srclen] != '\0')
		srclen++;
	if (dcount >= size)
		return (srclen + size);
	while (src[count] != '\0' && dcount + 1 < size)
	{
		dst[dcount] = src[count];
		count++;
		dcount++;
	}
	if (dcount < size)
		dst[dcount] = '\0';
	return (srclen + dcount);
}
/*
int	main(void)
{
	char	dst[] = "hi i am mo haaaaaa mmad";
	char	src[] = "hello";
	int		size;
	size_t	test;

	size = 3;
	test = ft_strlcat(dst, src, size);
	ft_strlcat(dst, src, size);
	printf("%s", dst);
}*/
