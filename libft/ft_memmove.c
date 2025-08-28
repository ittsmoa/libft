/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: moatieh <moatieh@student.42amman.com>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/28 18:36:50 by moatieh           #+#    #+#             */
/*   Updated: 2025/08/28 18:36:50 by moatieh          ###   ########.fr       */
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
    return (d);
}