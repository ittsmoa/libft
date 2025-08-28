/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: moatieh <moatieh@student.42amman.com>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/28 18:36:07 by moatieh           #+#    #+#             */
/*   Updated: 2025/08/28 18:36:07 by moatieh          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>

static int len(int n)
{
    int i;

    i = 0;
    if (n == 0)
        return (1);
    if (n < 0)
        i++;
    while (n != 0)
    {
        n = n / 10;
        i++;
    }
    return (i);
}
char *ft_itoa(int n)
{
    char    *str;
    int    count;
    int    i;


    count = 0;
    i = len(n);
    str = ( char *)malloc((i + 1) * sizeof(char));
    if (!str)
        return  NULL;
    str[i] = '\0';
    if ( n < 0 )
    {
        str[count] = '-';
        n = n * -1;
    }
    if (n >= 0 && n <= 9)
    {
        str[count] = n + '0';
        return str;
    }
    if ( n > 9)
    {
        ft_itoa( n / 10);
        ft_itoa( n % 10);
    }
    return (NULL);
}

int main()
{
    int x = 44;
    printf("%s", ft_itoa(x));
    return 0;
}