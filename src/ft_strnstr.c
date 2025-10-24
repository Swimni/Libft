/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nguinot- <nguinot-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/30 12:57:16 by nguinot-          #+#    #+#             */
/*   Updated: 2025/05/05 14:58:35 by nguinot-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *origine, const char *objet, size_t len)
{
	size_t	i;
	size_t	j;

	i = 0;
	if (*objet == '\0')
		return ((char *)origine);
	while (origine[i] && i < len)
	{
		j = 0;
		while (objet[j] && (i + j) < len && origine[i + j] == objet[j])
			j++;
		if (objet[j] == '\0')
		{
			return ((char *)(origine + i));
		}
		i++;
	}
	return (NULL);
}
/*
int main() {
    const char *text = "Un exemple de test";
    const char *res = strnstr(text, "de", 18);

    if (res)
        printf("Trouvé : %s\n", res);
    else
        printf("Non trouvé\n");

    return 0;
}
	*/
