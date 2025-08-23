/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: moatieh <moatieh@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/23 18:43:35 by moatieh           #+#    #+#             */
/*   Updated: 2025/08/23 20:24:25 by moatieh          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>
void *ft_memchr(const void *s, int c, size_t n)
{
    size_t    count;
    unsigned char    *str;

    count = 0;
    str = (unsigned char *)s;
    while(count < n && str[count])
    {
        if (str[count] == c)
        {
            return (&str[count]);
        }
        count++;
    }
    return NULL;
}

int main ()
{
    int count = 0;
    const char *s = "hello world";
   printf("%s",(char *) ft_memchr(s, (int) 'r', 10));
   
    return 0;
}