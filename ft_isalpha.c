/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalpha.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nguinot- <nguinot-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/26 14:36:03 by nguinot-          #+#    #+#             */
/*   Updated: 2025/04/26 16:02:03 by nguinot-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_isalpha(int c)
{
	if ((c >= 'A' && c <= 'Z'))
		return (1);
	if ((c >= 'a' && c <= 'z'))
		return (1);
	return (0);
}
/*
#include<stdio.h>
int main(void)
{
    printf("%d\n", ft_isalpha('A')); // 1
    printf("%d\n", ft_isalpha('z')); // 1
    printf("%d\n", ft_isalpha('!')); // 0
    printf("%d\n", ft_isalpha('5')); // 0
    return 0;
}*/
