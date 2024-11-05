/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: deabraha <deabraha@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/01 20:48:05 by deabraha          #+#    #+#             */
/*   Updated: 2024/11/04 20:56:40 by deabraha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *str)
{
	char	*dup;
	size_t	len;

	len = ft_strlen(str) + 1;
	dup = (char *)malloc(len * sizeof(char));
	if (!dup)
		return (NULL);
	ft_strlcpy(dup, str, len);
	return (dup);
}
