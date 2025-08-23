/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: moatieh <moatieh@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/13 20:09:08 by moatieh           #+#    #+#             */
/*   Updated: 2025/08/13 21:23:27 by moatieh          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
void *ft_memset(void *s, int c, size_t n)
{
    unsigned char	*a;

    a = (unsigned char *)s;
    
    size_t count;
    count = 0;
    if (!s)
    return (NULL);
    while (count < n)
    {
        *a = (unsigned char )c;
        a++;
        count++;
    }
    return (s);
}

int main()
{
    char  p[] = "hello ss";

    char *d = ft_memset(p,'c',4);
    printf ("%s\n", d);
}
