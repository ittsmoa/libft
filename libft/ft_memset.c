/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: moatieh <moatieh@student.42amman.com>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/13 20:09:08 by moatieh           #+#    #+#             */
/*   Updated: 2025/08/28 18:37:00 by moatieh          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
void *ft_memset(void *s, int c, size_t n)
{
    unsigned char	*a;

    a = (unsigned char *)s;
    
    size_t count;
    count = 0;
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
    char  p[] = "hello";

    char *d = ft_memset(p,'c',0);
    printf ("%s\n", d);
}

