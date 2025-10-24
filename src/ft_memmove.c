/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nguinot- <nguinot-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/26 17:09:10 by nguinot-          #+#    #+#             */
/*   Updated: 2025/05/05 15:06:04 by nguinot-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<string.h>

void	*ft_memmove(void *dest, const void *src, size_t len)
{
	unsigned char		*d;
	const unsigned char	*s;

	d = dest;
	s = src;
	if (!src && !dest && len > 0)
		return (NULL);
	if (d == s)
		return (dest);
	if (s < d)
	{
		s += len;
		d += len;
		while (len--)
			*(--d) = *(--s);
	}
	else
	{
		while (len--)
			*(d++) = *(s++);
	}
	return (dest);
}
/*
#include <stdio.h>

// Prototype de ta fonction personnalisée
void *ft_memmove(void *dest, const void *src, size_t n);

int main(void)
{
    char str1[20] = "ABCDEF";
    char str2[20] = "ABCDEF";

    // Cas avec chevauchement : on copie le début de la chaîne plus loin
    printf("Avant ft_memmove  : %s\n", str1);
    ft_memmove(str1 + 2, str1, 4); // on copie "ABCD" vers la position 2
    printf("Après ft_memmove  : %s\n", str1);

    // Pour comparer avec la vraie fonction memmove
    printf("\nAvant memmove     : %s\n", str2);
    memmove(str2 + 2, str2, 4);
    printf("Après memmove     : %s\n", str2);

    return 0;
}*/
