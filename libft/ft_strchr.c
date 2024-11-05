/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: deabraha <deabraha@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/01 19:04:20 by deabraha          #+#    #+#             */
/*   Updated: 2024/11/04 20:53:41 by deabraha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// returns a pointer to the first occurrence
//of the character c in the string s

#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
	char	chr;
	int		i;

	chr = (char)c;
	i = 0;
	while (s[i])
	{
		if (s[i] == chr)
			return ((char *)&s[i]);
		i++;
	}
	if (chr == '\0')
		return ((char *)&s[i]);
	return (NULL);
}
