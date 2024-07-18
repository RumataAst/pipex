/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akretov <akretov@student.42prague.com>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/05 13:46:03 by akretov           #+#    #+#             */
/*   Updated: 2023/11/11 13:59:30 by akretov          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	char			j;
	unsigned char	*d;
	unsigned char	*s;

	j = 1;
	d = (unsigned char *)dest;
	s = (unsigned char *)src;
	if (!dest && !src)
		return (NULL);
	if (dest > src)
	{
		j = -1;
		d += n - 1;
		s += n - 1;
	}
	while (n > 0)
	{
		*d = *s;
		d += j;
		s += j;
		n--;
	}
	return (dest);
}

// int main(void)
// {
//   char str[] = {65, 66, 67, 68, 69, 0, 45};
//   char s0[] = { 0,  0,  0,  0,  0,  0, 0};
//   ft_memmove (s0, str, 7); 
//   printf("My function: %s\n", str);
//   char	str2[] = {65, 66, 67, 68, 69, 0, 45};
//   char s0_2[] = { 0,  0,  0,  0,  0,  0, 0};
//   memmove (s0_2, str2, 7); 
//   printf("Original: %s\n", str2);
//   return (0);
// }