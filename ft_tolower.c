/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_tolower.c.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nguinot- <nguinot-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/26 18:15:41 by nguinot-          #+#    #+#             */
/*   Updated: 2025/04/26 18:19:35 by nguinot-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_tolower(int c)
{
	if (c >= 'A' && c <= 'Z')
		return (c + 32);
	return (c);
}
/*
#include<stdio.h>
int main ()
{
	char test[] = "HELLO World! 123";
    int i = 0;

    printf("Avant  : %s\n", test);
    printf("Après  : ");
    while (test[i])
    {
        putchar(ft_tolower(test[i]));
        i++;
    }
    printf("\n");

    return 0;
}*/