/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: moatieh <moatieh@student.42amman.com>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/28 18:35:06 by moatieh           #+#    #+#             */
/*   Updated: 2025/08/30 00:53:33 by moatieh          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_bzero(void *s, size_t n)
{
	unsigned char	*a;
	size_t			count;

	a = (unsigned char *)s;
	count = 0;
	while (count < n)
	{
		*a = 0;
		a++;
		count++;
	}
}
/*
int	main(void)
{
	char p[] = "iuhke  rehfgbf e";
	ft_bzero(p, 4);

	printf("%s\n", p);
}*/