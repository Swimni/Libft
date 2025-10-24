/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nguinot- <nguinot-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/26 19:09:46 by nguinot-          #+#    #+#             */
/*   Updated: 2025/04/26 19:17:52 by nguinot-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<string.h>

int	ft_strncmp(const char *s1, const char *s2, size_t n)
{
	size_t	i;

	i = 0;
	while (i < n && (s1[i] != '\0' || s2[i]))
	{
		if (s1[i] != s2[i])
			return ((unsigned char)s1[i] - (unsigned char)s2[i]);
		i++;
	}
	return (0);
}
/*#include<stdio.h>
int main(void)
{
    printf("Résultat : %d\n", ft_strncmp("bonjour", "bonsoir", 3));  // 0
    printf("Résultat : %d\n", ft_strncmp("bonjour", "bonsoir", 5));  // < 0
    printf("Résultat : %d\n", ft_strncmp("abc", "abc", 10));         // 0
    printf("Résultat : %d\n", ft_strncmp("abc", "abd", 3));          // < 0
    return 0;
}*/