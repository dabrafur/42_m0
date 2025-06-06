/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: deabraha <deabraha@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/01 20:35:26 by deabraha          #+#    #+#             */
/*   Updated: 2024/11/05 13:36:24 by deabraha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *str, const char *substr, size_t len)
{
	size_t	substr_len;

	if (!*substr)
		return ((char *)str);
	substr_len = ft_strlen(substr);
	while (*str && len >= substr_len)
	{
		if (ft_strncmp(str, substr, substr_len) == 0)
			return ((char *)str);
		str++;
		len--;
	}
	return (NULL);
}
