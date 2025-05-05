/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nguinot- <nguinot-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/26 16:15:19 by nguinot-          #+#    #+#             */
/*   Updated: 2025/05/02 10:50:11 by nguinot-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>

void	*ft_memcpy(void *dest, const void *src, size_t n)
{
	size_t					i;
	unsigned char			*d;
	const unsigned char		*s;

	if (!dest && !src)
		return (NULL);
	d = (unsigned char *)dest;
	s = (const unsigned char *)src;
	i = 0;
	while (i < n)
	{
			d[i] = s[i];
			i++;
	}
	return (dest);
}
/*
#include <stdio.h>

void *ft_memcpy(void *dest, const void *src, size_t n);

int main(void)
{
    char src[] = "Coucou toi !";
    char dest[20];  // Assez grand pour contenir le texte copié

    // On copie 11 caractères depuis src vers dest
    ft_memcpy(dest, src, 12);
    dest[12] = '\0';  // On termine manuellement la chaîne

    printf("Contenu de src  : %s\n", src);
    printf("Contenu de dest : %s\n", dest);

    return 0;
}
	*/