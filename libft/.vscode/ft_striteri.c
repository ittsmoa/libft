/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_striteri.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/26 02:27:55 by marvin            #+#    #+#             */
/*   Updated: 2025/08/26 02:27:55 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

// Function to apply to each character
void make_upper(unsigned int i, char *c)
{
    (void)i; // إذا لم نحتاج الفهرس
    if (*c >= 'a' && *c <= 'z')
        *c = *c - 32;
}

void ft_striteri(char *s, void (*f)(unsigned int, char*))
{
    unsigned int i;

    i = 0;
    while (s[i])
    {
        f (i, &s[i]);
        i++;
    }

}

int main()
{
    char str[] = "hello world!";
    printf("Before: %s\n", str);

    ft_striteri(str, make_upper);

    printf("After: %s\n", str);
    return 0;
}