/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalnum.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/13 19:15:35 by moatieh           #+#    #+#             */
/*   Updated: 2025/08/26 01:10:09 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int    ft_isalnum(int c)
{
    if (ft_isalpha(c) || ft_isdigit(c))
    {
        return 1;
    }
    return 0;
    
}

int main ()
{
    char c = 'd';
    printf("%d",ft_isalnum(c));
}


// check