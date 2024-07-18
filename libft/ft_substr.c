/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akretov <akretov@student.42prague.com>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/05 14:12:59 by akretov           #+#    #+#             */
/*   Updated: 2023/11/11 16:51:10 by akretov          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*new;
	size_t	s_len;
	size_t	finish;

	if (!s)
		return (0);
	s_len = ft_strlen(s);
	finish = 0;
	if (start < s_len)
		finish = s_len - start;
	if (finish > len)
		finish = len;
	new = (char *)malloc(sizeof(char) * (finish + 1));
	if (!new)
		return (0);
	ft_strlcpy(new, s + start, finish + 1);
	return (new);
}

// int	main(void)
// {
// 	char * str = strdup("1");
// 	printf("%s\n", ft_substr(str, 42, 42000000));
// 	return (0);
// }