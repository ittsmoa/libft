/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/13 21:28:09 by moatieh           #+#    #+#             */
/*   Updated: 2025/08/26 01:10:03 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void ft_bzero(void *s, size_t n)
{
    unsigned char   *a;
    size_t count;
    
    a = ( unsigned char *)s;
    count = 0;
    
    while (count < n)
    {
        *a = 0; 
        a++;
        count++;
    }
    
}

int main()
{
    char  p[] = "iuhke  rehfgbf e";
    ft_bzero(p,4);

    printf ("%s\n", p);
}