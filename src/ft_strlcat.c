/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nguinot- <nguinot-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/26 17:48:38 by nguinot-          #+#    #+#             */
/*   Updated: 2025/05/05 15:02:01 by nguinot-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>

size_t	ft_strlcat(char *dest, const char *src, size_t size)
{
	size_t	i;
	size_t	dest_len;
	size_t	src_len;

	i = 0;
	dest_len = 0;
	src_len = 0;
	while (dest[dest_len] && dest_len < size)
		dest_len++;
	while (src[src_len])
		src_len++;
	if (dest_len >= size)
		return (size + src_len);
	while (src[i] && (dest_len + i + 1) < size)
	{
		dest[dest_len + i] = src[i];
		i++;
	}
	if (dest_len + i < size)
		dest[dest_len + i] = '\0';
	return (dest_len + src_len);
}
/*
#include <stdio.h>

int main()
{
    char dest[20] = "Hello, ";
    const char *src = "World!";

    size_t len = strlcat(dest, src, sizeof(dest));

    printf("Source: %s\n", src);
    printf("Dest: %s\n", dest);
    printf("Longueur retournée: %zu\n", len);  
	// Affiche la longueur totale de la chaîne concaténée

    return 0;
}
	*/
