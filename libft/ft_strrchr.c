/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/26 01:17:10 by marvin            #+#    #+#             */
/*   Updated: 2025/08/26 01:17:10 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

char *ft_strrchr(const char *s, int c)
{
    int    count;
    int    indx;

    count = 0;
    indx = -1;
    while (s[count])
    {
        if ( s[count] == (char)c)
        {
            indx = count;
        }
        count++;
    }
    if (indx != -1)
    {
        return (char *)(s + indx);;
    }
    else
    return NULL;
}

int main()
{
    char expl[] = "wello world";
    
    printf("%c\n", *ft_strrchr(expl, 't'));

    return 0;
}