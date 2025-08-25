/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/25 20:24:41 by marvin            #+#    #+#             */
/*   Updated: 2025/08/25 20:24:41 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dest, const void *src, size_t n)
{
    unsigned char *d;
    const unsigned char *s;
    size_t i;

    d = (unsigned char *)dest;
    s = (const unsigned char *)src;
    i = 0;

    if (dest == NULL && src == NULL)
        return NULL;
    while (i < n)
    {
         d[i] = s[i];
        i++;
    }
    return (dest);
}

int main()
{
    char d[] = "ddsecsdc";
    char s[] = "hello world";
    printf("%s", (char *)ft_memcpy(d, s, 6));

}