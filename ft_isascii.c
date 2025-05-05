/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isascii.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nguinot- <nguinot-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/26 15:03:50 by nguinot-          #+#    #+#             */
/*   Updated: 2025/04/26 15:07:52 by nguinot-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_isascii(int c)
{
	if (c >= 0 && c <= 127)
		return (1);
	return (0);
}
/*#include<stdio.h>
int main()
{
    // Quelques valeurs à tester
    int test_vals[] = {0, 10, 32, 65, 97, 127, 128, -1, 200};
    int i;

    for (i = 0; i < (int)(sizeof(test_vals) / sizeof(int)); i++)
    {
        int c = test_vals[i];
        int result = ft_isascii(c);

        if (c >= 32 && c <= 126)
            printf("ft_isascii('%c') = %d\n", c, result);
        else
            printf("ft_isascii(%d) = %d\n", c, result);
    }

    return 0;
}*/