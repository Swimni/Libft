/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalnum.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nguinot- <nguinot-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/26 14:47:40 by nguinot-          #+#    #+#             */
/*   Updated: 2025/04/26 15:03:12 by nguinot-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_isalnum(int c)
{
	if ((c >= 'A' && c <= 'Z') || (c >= 'a' && c <= 'z'))
		return (1);
	if (c >= '0' && c <= '9')
		return (1);
	return (0);
}
/*#include<stdio.h>
int main()
{
    // Tableau de caractères à tester
    char test_chars[] = {'A', 'z', '0', '9', '5', '-', ' ', '#', 'b'};
    int i;

    // Boucle sur chaque caractère du tableau
    for (i = 0; i < (int)(sizeof(test_chars) / sizeof(char)); i++)
    {
        char c = test_chars[i];
        int result = ft_isalnum(c);
        printf("ft_isalnum('%c') = %d\n", c, result);
    }

    return 0;
}*/