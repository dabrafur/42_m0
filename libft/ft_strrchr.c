/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: deabraha <deabraha@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/01 19:59:27 by deabraha          #+#    #+#             */
/*   Updated: 2024/11/04 21:04:14 by deabraha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	char	*lst;
	char	chr;
	size_t	i;

	chr = (char)c;
	lst = NULL;
	i = 0;
	while (s[i])
	{
		if (s[i] == chr)
			lst = (char *)&s[i];
		i++;
	}
	if (chr == '\0')
		return ((char *)&s[i]);
	return (lst);
}
