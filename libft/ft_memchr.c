/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akretov <akretov@student.42prague.com>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/22 15:39:34 by akretov           #+#    #+#             */
/*   Updated: 2023/11/12 14:54:25 by akretov          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	size_t	i;

	i = 0;
	while (i < n)
	{
		if ((char) c == ((char *)s)[i])
			return ((void *)&s[i]);
		i++;
	}
	return (0);
}

// int	main(void)
// {
// 	const void*	string;
// 	int	c;
// 	size_t	n;
// 	string = "Hello fuuuuuuuu";
// 	c = 'f';
// 	n = 10;
// 	printf("My function: %s\n", (char *)ft_memchr(string,c,n));
// 	printf("My function: %s\n", (char *)memchr(string,c,n));
// 	return (0);
// }