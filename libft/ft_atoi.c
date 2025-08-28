/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: moatieh <moatieh@student.42amman.com>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/28 18:35:14 by moatieh           #+#    #+#             */
/*   Updated: 2025/08/28 18:35:15 by moatieh          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */



#include "libft.h"

int ft_atoi(const char *nptr)
{
    
	int	i;
	long 	nb;
	int	si;

	nb = 0;
	i = 0;
	si = 1;
	while ((nptr[i] >= 9 && nptr[i] <= 13) || nptr[i] == 32)
    {
		i++;
    }
    if (nptr[i] == '-')
    {
        si *= -1;
        i++;
    }
	while (nptr[i] >= '0' && nptr[i] <= '9')
	{
		nb = nb * 10;
		nb = nb + nptr[i] - '0';
		i++;
	}
	return (nb * si);
}

int main()
{
	printf("%d\n", ft_atoi("         --+-fdvvfbf2323"));
    printf("%d\n", atoi("         --+-fdvvfbf2323"));
}
