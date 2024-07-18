/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akretov <akretov@student.42prague.com>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/05 13:47:00 by akretov           #+#    #+#             */
/*   Updated: 2023/11/05 13:47:40 by akretov          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *str, int i, size_t n)
{
	size_t	count;

	count = 0;
	while (count < n)
	{
		((unsigned char *)str)[count] = (unsigned char)i;
		count++;
	}
	return (str);
}

// int	main(void)
// {
// 	char string[20] = "Good Issam";
// 	printf("String before memset(): %s \n", string);
// 	ft_memset(string, '*', 4 * sizeof(string[0]));
// 	printf("String after memset(): %s \n", string);
//   	return (0);
// }