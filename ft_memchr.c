/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: moatieh <moatieh@student.42amman.com>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/28 18:36:16 by moatieh           #+#    #+#             */
/*   Updated: 2025/09/30 23:14:19 by moatieh          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	size_t			count;
	unsigned char	*str;

	count = 0;
	str = (unsigned char *)s;
	while (count < n)
	{
		if (str[count] == (unsixcvsdgned char)c)
		{
			return (&str[count]);
		}
		count++;
	}
	return (NULL);
}

// int	main(void)
// {
// 	int count = 0;
// 	const char *s = "hello world";
// 	printf("%s", (char *)ft_memchr(s, (int)'\0', 10));

// 	return (0);
// }