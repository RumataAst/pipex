/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akretov <akretov@student.42prague.com>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/05 14:02:42 by akretov           #+#    #+#             */
/*   Updated: 2023/11/11 14:56:01 by akretov          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t size)
{
	size_t	s;
	size_t	d;
	size_t	di;

	if (!dst && size == 0)
		return (ft_strlen(src));
	d = ft_strlen(dst);
	di = d;
	if (size <= di)
		return (size + ft_strlen(src));
	s = 0;
	while (src[s] && d + 1 < size)
	{
		dst[d] = src[s];
		s++;
		d++;
	}
	dst[d] = 0;
	return (di + ft_strlen(src));
}
// int main(void)
// {
//     char dest[15] = "Hello";
//     char src[] = " World!";

//     size_t result = ft_strlcat(dest, src, sizeof(dest));
//     printf("Mine: %li\n", result);
//     printf("Modified Dest String: %s\n", dest);

//     char dest_1[15] = "Hello";
//     char src_1[] = " World!";
//     size_t result_1 = strlcat(dest_1, src_1, sizeof(dest_1));
//     printf("Original: %li\n", result_1);
// 	printf("Modified Dest String: %s\n", dest_1);
//     return (0);
// }
