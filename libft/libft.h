/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/13 18:42:02 by moatieh           #+#    #+#             */
/*   Updated: 2025/08/27 02:39:51 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_H
#define LIBFT_H

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <unistd.h>
int    ft_isalpha( int c);
int    ft_isdigit(int c);
int    ft_isalnum(int c);
int    ft_isascii(int c);
int    ft_isprint(int c);
size_t ft_strlen(const char *s);
void ft_bzero(void *s, size_t n);
size_t  ft_strlcpy(char *dst, const char *src, size_t size);
size_t ft_strlcat(char *dst, const char *src, size_t size);
int tolower(int c);
char *ft_strdup(const char *s);
#endif 
