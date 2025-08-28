/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: moatieh <moatieh@student.42amman.com>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/28 18:37:44 by moatieh           #+#    #+#             */
/*   Updated: 2025/08/28 18:37:44 by moatieh          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char *ft_strjoin(char const *s1, char const *s2)
{
    char *str;
    size_t  i;
    size_t  j;
    size_t total;

    if(!s1 || !s2)
        return NULL;
    i = 0;
    total = 0;
    while (s1[total] != '\0')
        total++;
    while (s2[i] != '\0')
        i++;
    total += i;
    str = (char *)malloc((total + 1) * sizeof(char));
    if (!str)
        return NULL;
    i = 0;
    while (s1[i])
    {
        str[i] = s1[i];
        i++;
    }
    j = 0;
    while (s2[j])
    {
        str[i + j] = s2[j];
        j++;
    }
    str[i + j] = '\0';
    return (str);    
}

int main()
{
    char s1[] = "hello";
    char s2[] = " world";
    printf("%s", ft_strjoin(s1, s2));    
}