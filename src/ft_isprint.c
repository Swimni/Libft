/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isprint.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nguinot- <nguinot-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/26 15:08:29 by nguinot-          #+#    #+#             */
/*   Updated: 2025/04/26 15:25:52 by nguinot-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_isprint(int c)
{
	if (c >= 32 && c <= 126)
		return (1);
	return (0);
}
/*
#include<stdio.h>
int ft_isprint(int c);

int main(void)
{
    // Quelques valeurs à tester (visibles et invisibles)
    int test_vals[] = {31, 32, 48, 65, 97, 126, 127, 10, 0};
    int i;

    for (i = 0; i < (int)(sizeof(test_vals) / sizeof(int)); i++)
    {
        int c = test_vals[i];
        int result = ft_isprint(c);

        if (c >= 32 && c <= 126)
            printf("ft_isprint('%c') = %d\n", c, result);
        else
            printf("ft_isprint(%d) = %d\n", c, result);
    }

    return 0;
}
	*/
