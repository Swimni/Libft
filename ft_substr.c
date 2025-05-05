/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nguinot- <nguinot-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/30 15:02:27 by nguinot-          #+#    #+#             */
/*   Updated: 2025/05/05 13:26:33 by nguinot-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(const char *str, unsigned int start, size_t len)
{
	char	*sub;
	size_t	i;
	size_t	str_len;

	if (!str)
		return (NULL);
	str_len = ft_strlen(str);
	if (start >= str_len)
		return (ft_strdup(""));
	if (len > str_len - start)
		len = str_len - start;
	sub = (char *)malloc(sizeof(char) * (len + 1));
	if (!sub)
		return (NULL);
	i = 0;
	while (i < len && str[start + i])
	{
		sub[i] = str[start + i];
		i++;
	}
	sub[i] = '\0';
	return (sub);
}
/*
int main(void)
{
    const char *original = "Hello, world!";
    char *result = ft_substr(original, 7, 5);  // Extrait "world"

    if (result)
    {
        printf("Sous-chaîne extraite : %s\n", result);  // Affiche "world"
        free(result);  // Libère la mémoire allouée pour la sous-chaîne
    }
    else
    {
        printf("Erreur d'allocation ou index invalide.\n");
    }

    return 0;
}*/
