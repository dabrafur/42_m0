/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: deabraha <deabraha@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/04 18:50:17 by deabraha          #+#    #+#             */
/*   Updated: 2024/11/04 21:01:43 by deabraha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	size_t	i;
	size_t	strlen;
	char	*str;

	if (!s || !f)
		return ;
	strlen = ft_strlen(s);
	str = (char *)malloc((strlen + 1) * sizeof(char));
	if (!str)
		return (NULL);
	i = 0;
	while (i < strlen)
	{
		str[i] = f(i, s[i]);
		i++;
	}
	str[i] = '\0';
	return (str);
}
