/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalnum.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: moatieh <moatieh@student.42amman.com>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/28 18:35:32 by moatieh           #+#    #+#             */
/*   Updated: 2025/08/28 18:40:59 by moatieh          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int    ft_isalnum(int c)
{
    if (ft_isalpha(c) || ft_isdigit(c))
    {
        return 1;
    }
    return (0);
    
}

int main ()
{
    char c = 'd';
    printf("%d",ft_isalnum(c));
}


// check