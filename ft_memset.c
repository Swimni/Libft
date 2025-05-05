/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nguinot- <nguinot-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/26 15:30:59 by nguinot-          #+#    #+#             */
/*   Updated: 2025/04/26 16:12:12 by nguinot-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<string.h>

void	*ft_memset(void *s, int c, size_t n)
{
	size_t			i;
	unsigned char	*ptr;

	ptr = (unsigned char *)s;
	i = 0;
	while (i < n)
	{
		ptr[i] = c;
		i++;
	}
	return (s);
}
/*#include <stdio.h>
#include <string.h>

// 
int main(void)
{
    char buffer1[20] = "Hello, world!";
    char buffer2[20] = "Hello, world!";
    ft_memset(buffer1, '*', 5);
    memset(buffer2, '*', 5);
    printf("ft_memset : %s\n", buffer1);
    printf("memset    : %s\n", buffer2);

    return 0;
}
	*/