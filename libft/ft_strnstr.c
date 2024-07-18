/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akretov <akretov@student.42prague.com>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/05 14:07:00 by akretov           #+#    #+#             */
/*   Updated: 2023/11/16 14:06:37 by akretov          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <bsd/string.h>

char	*ft_strnstr(const char *big, const char *little, size_t len)
{
	size_t	n;

	n = ft_strlen(little);
	if (n == 0)
		return ((char *)big);
	if (len == 0)
		return (NULL);
	while (*big && len >= n)
	{
		if (ft_strncmp(big, little, n) == 0)
			return ((char *)big);
		big++;
		len--;
	}
	return (NULL);
}

// int main(void)
// {
//     const char *big_string = "Hello, World! This is a test string.";
//     const char *substring1 = "World";
//     const char *substring2 = "test";
//     const char *substring3 = "Hello";
//     const char *substring4 = "notfound";
//     size_t len = strlen(big_string);

// printf("Using ft_strnstr:\n");
// printf("Substring '%s' found at position: %s\n", 
// substring1, ft_strnstr(big_string, substring1, len));
// printf("Substring '%s' found at position: %s\n", 
// substring2, ft_strnstr(big_string, substring2, len));
// printf("Substring '%s' found at position: %s\n", 
// substring3, ft_strnstr(big_string, substring3, len));
// printf("Substring '%s' found at position: %s\n", 
// substring4, ft_strnstr(big_string, substring4, len));

// printf("\nUsing strnstr (standard library function) 
// for comparison:\n");
// printf("Substring '%s' found at position: %s\n", 
// substring1, strnstr(big_string, substring1, len));
// printf("Substring '%s' found at position: %s\n", 
// substring2, strnstr(big_string, substring2, len));
// printf("Substring '%s' found at position: %s\n", 
// substring3, strnstr(big_string, substring3, len));
// printf("Substring '%s' found at position: %s\n", 
// substring4, strnstr(big_string, substring4, len));
// return 0;
// }
