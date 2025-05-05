/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nguinot- <nguinot-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/26 18:50:08 by nguinot-          #+#    #+#             */
/*   Updated: 2025/04/26 18:59:46 by nguinot-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strrchr(const char *s, int c)
{
	const char	*last = 0;

	while (*s)
	{
		if (*s == (char)c)
			last = s;
		s++;
	}
	if ((char)c == '\0')
		return ((char *)s);
	return ((char *)last);
}
/*
#include <stdio.h>

char *ft_strrchr(const char *s, int c);

int main(void)
{
    const char *str = "Hello world!";
    char *ptr = ft_strrchr(str, 'o');

    if (ptr)
        printf("Dernier 'o' trouvé à : %s\n", ptr);
    else
        printf("Caractère pas trouvé.\n");

    return 0;
}*/