/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nguinot- <nguinot-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/26 18:22:19 by nguinot-          #+#    #+#             */
/*   Updated: 2025/04/26 18:43:30 by nguinot-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strchr(const char *s, int c)
{
	while (*s)
	{
		if (*s == (char)c)
			return ((char *)s);
		s++;
	}
	if ((char )c == '\0')
		return ((char *)s);
	return (0);
}
/*#include<stdio.h>
int main(void)
{
    const char *phrase = "Hello world!";
    char *ptr = ft_strchr(phrase, 'w');

    if (ptr)
        printf("Trouvé : %s\n", ptr);
    else
        printf("Pas trouvé.\n");

    return 0;
}
	*/