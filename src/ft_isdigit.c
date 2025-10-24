/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isdigit.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nguinot- <nguinot-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/26 14:42:00 by nguinot-          #+#    #+#             */
/*   Updated: 2025/04/26 14:57:28 by nguinot-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_isdigit(int c)
{
	if (c >= '0' && c <= '9')
		return (1);
	return (0);
}
/*#include<stdio.h>

int main(void)
{
    // Quelques caractères à tester
    char test_chars[] = {'0', '5', '9', 'a', 'Z', ' ', '#', '3'};
    int i;

    for (i = 0; i < (int)(sizeof(test_chars) / sizeof(char)); i++)
    {
        char c = test_chars[i];
        int result = ft_isdigit(c);

        printf("ft_isdigit('%c') = %d\n", c, result);
    }

    return 0;
}*/
