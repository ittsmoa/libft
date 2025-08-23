/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: moatieh <moatieh@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/13 23:59:57 by moatieh           #+#    #+#             */
/*   Updated: 2025/08/23 20:02:06 by moatieh          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t ft_strlcat(char *dst, const char *src, size_t size)
{
    size_t dcount;
    int    count;
    size_t stclen;

    srclen = 0;
    dcount = 0;
    count = 0;
    while (src[dcount] != '\0')
    {
        dcount++;
    }
    while (src[srclen] != '\0')
    {
        srclen++;
    }
    if (srclen + dcount > size)
    return (srclen);
    while (dst[dcount])
    {
        dst[dcount] == src[count];
        count++;
        dcount++;
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
