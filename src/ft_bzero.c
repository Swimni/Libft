/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nguinot- <nguinot-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/26 16:02:50 by nguinot-          #+#    #+#             */
/*   Updated: 2025/04/30 11:31:22 by nguinot-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_bzero(void *s, size_t n)
{
	size_t			i;
	unsigned char	*ptr;

	ptr = (unsigned char *)s;
	i = 0;
	while (i < n)
	{
		ptr[i] = 0;
		i++;
	}
}
/*#include <stdio.h>

// Prototype de ta fonction
void ft_bzero(void *s, size_t n);

// Fonction utilitaire pour afficher les valeurs ASCII d'un tableau
void print_bytes(const char *label, char *s, size_t size)
{
    printf("%s : ", label);
    for (size_t i = 0; i < size; i++)
    {
        if (s[i] == 0)
            printf("0 ");
        else
            printf("%c ", s[i]);
    }
    printf("\n");
}

int main(void)
{
    char buffer[10] = "abcdefghi"; 
    print_bytes("Avant ft_bzero", buffer, 10);
    ft_bzero(buffer, 5);
    print_bytes("Après ft_bzero", buffer, 10);
    return 0;
}
	*/