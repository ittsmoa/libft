/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalpha.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: moatieh <moatieh@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/03 20:16:09 by moatieh           #+#    #+#             */
/*   Updated: 2025/08/13 19:09:11 by moatieh          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void ft_putendl_fd(char *s, int fd)
{
     int     count;

    count = 0;
    while (s[count])
    {
        write (fd, &s[count], 1);
        count++;
    }   
    write(fd, "\n", 1);
}