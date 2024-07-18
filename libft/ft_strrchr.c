/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akretov <akretov@student.42prague.com>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/22 14:53:45 by akretov           #+#    #+#             */
/*   Updated: 2023/11/11 14:08:23 by akretov          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	int	s_len;

	s_len = ft_strlen(s);
	while (s_len >= 0)
	{
		if ((char) c == s[s_len])
			return ((char *)(s + s_len));
		s_len--;
	}
	return (NULL);
}

// int	main(void)
// {
// 	char string[10] = "Hello";
// 	int c = 'l';
// 	printf("My function %s\n", ft_strchr(string,c));
// 	printf("Original string %s\n", string);
// 	printf("Original function %s", strrchr(string,c));
// 	return (0);
// }