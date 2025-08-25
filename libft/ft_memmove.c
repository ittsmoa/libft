/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/25 20:52:04 by marvin            #+#    #+#             */
/*   Updated: 2025/08/25 20:52:04 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void *ft_memmove(void *dest, const void *src, size_t n)
{
    unsigned char   *s;
    unsigned char   *d;
    char   
    size_t  i;

    s = ( unsigned char *) src;
    d = ( unsigned char *) dest;
    i = 0;
    while ( i < n)
    {
        d[i] = s[i];
        i++;
    }
    return d;
    
}