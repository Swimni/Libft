/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nguinot- <nguinot-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/30 11:05:49 by nguinot-          #+#    #+#             */
/*   Updated: 2025/05/02 11:59:04 by nguinot-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>

void	*ft_memchr(const void *s, int c, size_t n)
{
	const unsigned char	*ptr = (const unsigned char *)s;
	unsigned char		target;

	target = (unsigned char)c;
	while (n > 0)
	{
		if (*ptr == target)
		{
			return ((void *)ptr);
		}
		ptr++;
		n--;
	}
	return (NULL);
}
/*
#include <stdio.h>
int main() {
    char buffer[] = "hello world";
    char to_find = 'o';

    void *result = memchr(buffer, to_find, sizeof(buffer));

    if (result != NULL) {
        size_t offset = (char *)result - buffer;
        printf("Caractère '%c' trouvé à l'offset %zu\n", to_find, offset);
    } else {
        printf("Caractère '%c' non trouvé\n", to_find);
    }

    return 0;
}
	*/
