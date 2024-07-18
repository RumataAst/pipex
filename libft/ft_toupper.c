/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_toupper.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akretov <akretov@student.42prague.com>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/05 14:13:43 by akretov           #+#    #+#             */
/*   Updated: 2023/11/05 14:13:48 by akretov          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_toupper(int c)
{
	if (c >= 97 & c <= 122)
		c = c - 32;
	return (c);
}

// int	main(void)
// {
// 	char c = '1';
// 	printf("Original function: %c\n", toupper(c));
// 	printf("My function: %c", ft_toupper(c));
// 	return (1);
// }