/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: moatieh <moatieh@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/13 21:57:12 by moatieh           #+#    #+#             */
/*   Updated: 2025/08/13 23:57:30 by moatieh          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
size_t  ft_strlcpy(char *dst, const char *src, size_t size)
{
    size_t	count;
	size_t srclen;
	
	srclen = 0;
	while (src[srclen] != '\0')
    {
        srclen++;
    }
	count = 0;
	if(size == 0)
	return (srclen);
	
	while (count < size - 1 && src[count] != '\0')
	{
		dst[count] = src[count];
		count++;
	}
	dst[count] = '\0'; 
	return (srclen);
}

int main()
{
	char dst[] = "";
	char src[] = "hello";
	int size = 3;
	size_t test;
	test = ft_strlcpy(dst,src, size);
	printf("%zu\n",test);
	ft_strlcpy(dst,src, size);
	printf("%s", dst);
}