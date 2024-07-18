/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akretov <akretov@student.42prague.com>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/05 13:45:28 by akretov           #+#    #+#             */
/*   Updated: 2023/11/16 14:07:49 by akretov          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dest, const void *src, size_t n)
{
	size_t		count;
	const char	*src_1;
	char		*dest_1;

	count = 0;
	dest_1 = dest;
	src_1 = src;
	if (!dest && !src)
		return (NULL);
	while (count < n)
	{
		dest_1[count] = src_1[count];
		count++;
	}
	return (dest);
}

// int main(void)
// {
//   char source[] = "World";   
//   char destination[] = "";   
//   /* Printing destination string before memcpy */
//   printf("Original String: %s\n", destination);
//   /* Copies contents of source to destination */
//   ft_memcpy (destination, source, 0); 
//   /* Printing destination string after memcpy */
//   printf("Modified String: %s\n", destination);

//   char source_1[] = "World";   
//   char destination_1[] = "";   
//   /* Printing destination string before memcpy */
//   printf("Original String: %s\n", destination_1);
//   /* Copies contents of source to destination */
//   memcpy (destination_1, source_1, 0); 
//   /* Printing destination string after memcpy */
//   printf("Modified String: %s\n", destination_1);

//   return (0);
// }