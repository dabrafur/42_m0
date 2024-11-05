/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: deabraha <deabraha@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/04 15:00:37 by deabraha          #+#    #+#             */
/*   Updated: 2024/11/04 20:39:58 by deabraha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t num, size_t size)
{
	void	*ptr;
	size_t	t_size;

	t_size = num * size;
	if (num != 0 && t_size / num != size)
		return (NULL);
	ptr = malloc(t_size);
	if (!ptr)
		return (NULL);
	ft_memset(ptr, 0, t_size);
	return (ptr);
}
