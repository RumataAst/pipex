/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akretov <akretov@student.42prague.com>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/05 13:25:49 by akretov           #+#    #+#             */
/*   Updated: 2023/11/05 15:13:27 by akretov          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_bzero(void *s, size_t n)
{
	size_t	count;

	count = 0;
	while (count < n)
		((unsigned char *)s)[count++] = '\0';
}

// int	main(void)
// {
// 	char str[20] = "Hello World";
// 	char str1[20] = "Hello World";

// 	bzero(str, 2);
// 	printf("String after bzero(): %s \n", str);
// 	ft_bzero(str1,2);
// 	printf("String after ft_bzero(): %s \n", str1);
// 	return(0);
// }