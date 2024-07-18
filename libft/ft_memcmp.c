/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akretov <akretov@student.42prague.com>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/05 13:44:20 by akretov           #+#    #+#             */
/*   Updated: 2023/11/16 14:05:29 by akretov          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	size_t	i;

	i = 0;
	if (n == 0)
		return (0);
	while ((((unsigned char *)s1)[i] == ((unsigned char *)s2)[i])
			&& (i < n - 1))
		i++;
	return (((unsigned char *)s1)[i] - ((unsigned char *)s2)[i]);
}

// int main(void)
// {
//   char source[] = "World";   
//   char destination[] = "Hello ";   
//   printf("Modified String: %i\n", 
// +		ft_memcmp(destination, source, sizeof(source)));
//   char source_1[] = "World";   
//   char destination_1[] = "Hello ";   
//   printf("Modified String: %i\n", 
// +		memcmp(destination_1, source_1, sizeof(source_1)));
//   return (0);
// }