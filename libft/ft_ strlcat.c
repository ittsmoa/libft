/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ strlcat.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/13 23:59:57 by moatieh           #+#    #+#             */
/*   Updated: 2025/08/26 01:09:50 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t ft_strlcat(char *dst, const char *src, size_t size)
{
    size_t  dlen;
    int    count;
    size_t srclen;

    srclen = 0;
    dlen = 0;
    count = 0;
    while (dst  [dlen] != '\0' &&  dlen < size)
    {
        dlen++;
    }
    
    while (src[srclen] != '\0')
    {
        srclen++;
    }
    if ( ( srclen + dlen + 1) >= size)
    return (srclen + size);
    while (dst  [dlen])
    {
        dst [dlen] = src[count];
        count++;
        dlen++;
        srclen++;
    }
    return (srclen);
}

int main()
{
	char dst[] = "";
	char src[] = "hello";
	int size = 3;
	size_t test;
	test = ft_strlcat(dst,src, size);
	printf("%zu\n",test);
	ft_strlcat(dst,src, size);
	printf("%s", dst);
}
