/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/26 01:24:22 by marvin            #+#    #+#             */
/*   Updated: 2025/08/26 01:24:22 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int ft_strncmp(const char *s1, const char *s2, size_t n)
{
    size_t    count;

    count = 0;
    while ( count < n && (s1[count] != '\0' || s2[count] != '\0'))
    {
        if (s1[count] != s2[count])
        {
            return ((unsigned char)s1[count] - (unsigned char)s2[count]);
        }
        count++;
    }
    return 0;

}
int main ()
{
    char s1[] = "zh";
    char s2[] = "hzello h";
    printf("%d", ft_strncmp(s1, s2, 4));
}