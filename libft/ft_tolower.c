/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_tolower.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akretov <akretov@student.42prague.com>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/05 14:13:34 by akretov           #+#    #+#             */
/*   Updated: 2023/11/05 14:13:37 by akretov          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_tolower(int c)
{
	if (c >= 65 & c <= 90)
		c = c + 32;
	return (c);
}

// int	main(void)
// {
// 	char c = 'L';
// 	printf("Original function: %c\n", tolower(c));
// 	printf("My function: %c", ft_tolower(c));
// 	return (1);
// }