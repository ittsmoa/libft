/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/27 02:48:04 by marvin            #+#    #+#             */
/*   Updated: 2025/08/27 02:48:04 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char *ft_substr(char const *s, unsigned int start, size_t len)
{
    char    *str;
    size_t  i;
    
    i = 0;
    if (!s)
    {
        return NULL;
    }
    
    str = (char *)malloc((len + 1) * sizeof(char));
    while (i < len && s[start + i])
    {
        str[i] = s[start + i];
        i++;
    }
    str[i] = '\0';
    return str;
}

int main()
{
    char *s = "hi hi welcome to";
    printf("%s", ft_substr(s, 6, 7));
    return 0;
}
    