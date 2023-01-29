/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yichinos <yichinos@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/28 11:12:36 by yichinos          #+#    #+#             */
/*   Updated: 2023/01/27 14:02:19 by yichinos         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"libft.h"

size_t	ft_strlcpy(char *dest, const char *src, size_t n)
{
	size_t	i;

	i = ft_strlen(src);
	if (n == 0)
		return (i);
	while (n > 1)
	{
		if (*src != '\0')
			*dest++ = *src++;
		else
			break ;
		n--;
	}
	*dest = '\0';
	return (i);
}
