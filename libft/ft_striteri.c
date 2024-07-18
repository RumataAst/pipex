/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_striteri.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akretov <akretov@student.42prague.com>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/05 14:01:45 by akretov           #+#    #+#             */
/*   Updated: 2023/11/05 14:01:46 by akretov          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_striteri(char *s, void (*f)(unsigned int, char *))
{
	unsigned int	i;

	if (!s || !f)
		return ;
	i = 0;
	while (s[i] != '\0')
	{
		f(i, s + i);
		i++;
	}
}

// void my_func(unsigned int i, char *str)
// {
// 	printf("My inner function: index = %d and the string is %s\n", i, str);
// }

// int main(void)
// {
// 	char str[10] = "Hello.";
// 	// printf("The result is %s\n", str);
// 	ft_striteri(str, my_func);
// 	// printf("The result is %s\n", str);
// 	return (0);
// }
