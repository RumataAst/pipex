/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akretov <akretov@student.42prague.com>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/22 14:42:46 by akretov           #+#    #+#             */
/*   Updated: 2023/11/16 15:02:08 by akretov          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcpy(char *dst, const char *src, size_t size)
{
	size_t	i;

	i = 0;
	if (size != 0)
	{
		while (src [i] && i < (size - 1))
		{
			dst[i] = src[i];
			i++;
		}
		dst[i] = '\0';
	}
	return (ft_strlen(src));
}

// int main(void)
// {
//     char buffer[15] = "";
//     char src[] = "123456789101112131415";

//     size_t result = ft_strlcpy(buffer, src, sizeof(buffer));
//     printf("Mine: %li\n", result);
//     printf("Modified Dest String: %s\n", buffer);

//     char buffer_1[15] = "";
//     char src_1[] = "123456789101112131415";
//     size_t result_1 = strlcpy(buffer_1, src_1, sizeof(buffer_1));
//     printf("Original: %li\n", result_1);
// 	printf("Modified Dest String: %s\n", buffer_1);
//     return (0);
// }