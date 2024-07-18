/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akretov <akretov@student.42prague.com>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/23 15:31:05 by akretov           #+#    #+#             */
/*   Updated: 2023/11/16 15:15:24 by akretov          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t nmemb, size_t size)
{
	void	*array;
	size_t	total;

	if (nmemb == 0 || size == 0)
	{
		array = (void *)malloc(0);
		return (array);
	}
	total = nmemb * size;
	if (nmemb != total / size)
		return (NULL);
	array = (void *)malloc(total);
	if (array == NULL)
		return (NULL);
	ft_bzero(array, total);
	return (array);
}
