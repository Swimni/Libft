/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_toupper.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nguinot- <nguinot-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/26 18:08:57 by nguinot-          #+#    #+#             */
/*   Updated: 2025/04/26 18:14:47 by nguinot-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_toupper(int c)
{
	if (c >= 'a' && c <= 'z')
		return (c - 32);
	return (c);
}
/*#include <stdio.h>

int ft_toupper(int c);

int main(void)
{
    char test[] = "Hello world! 123";
    int i = 0;

    while (test[i])
    {
        printf("%c", ft_toupper(test[i]));
        i++;
    }
    printf("\n");

    return 0;
}*/