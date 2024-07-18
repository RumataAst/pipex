/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akretov <akretov@student.42prague.com>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/22 14:53:45 by akretov           #+#    #+#             */
/*   Updated: 2023/11/11 14:04:00 by akretov          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
	while ((char)c != *s)
	{
		if (!*s)
			return (0);
		s++;
	}
	return ((char *)s);
}

// int	main(void)
// {
// 	char string[10] = "Hello";
// 	int c = 'l';
// 	printf("My function %s\n", ft_strchr(string,c));
// 	printf("Original string %s\n", string);
// 	printf("Original function %s", strchr(string,c));
// 	return (0);
// }