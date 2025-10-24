/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nguinot- <nguinot-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/30 11:46:06 by nguinot-          #+#    #+#             */
/*   Updated: 2025/04/30 12:52:55 by nguinot-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	const unsigned char	*p1 = (const unsigned char *)s1;
	const unsigned char	*p2 = (const unsigned char *)s2;

	while (n-- > 0)
	{
		if (*p1 != *p2)
		{
			return (*p1 - *p2);
		}
	p1++;
	p2++;
	}
	return (0);
}
/*
int memcmp(const void *s1, const void *s2, size_t n);  // déclaration

int main() {
    char a[] = {1, 2, 3, 4};
    char b[] = {1, 2, 3, 5};

    int res = memcmp(a, b, 4);

    if (res == 0) {
        printf("Les blocs sont identiques\n");
    } else if (res < 0) {
        printf("Le bloc a est plus petit que b\n");
    } else {
        printf("Le bloc a est plus grand que b\n");
    }

    return 0;
}*/