/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nguinot- <nguinot-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/30 14:15:08 by nguinot-          #+#    #+#             */
/*   Updated: 2025/05/05 15:15:52 by nguinot-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *str)
{
	int		len;
	char	*copy;

	len = 0;
	while (str[len])
		len++;
	copy = (char *)malloc(sizeof(char) * (len + 1));
	if (!copy)
		return (NULL);
	ft_memcpy(copy, str, len + 1);
	return (copy);
}
/*
int main(void)
{
    char *original = "Hello, world!";  // Chaîne à dupliquer
    char *copie = ft_strdup(original);  // Appel de la fonction ft_strdup

    if (copie)  // Vérification de l'allocation mémoire
    {
        printf("Original : %s\n", original);  // Affiche la chaîne originale
        printf("Copie    : %s\n", copie);     // Affiche la chaîne copiée

        // Comparer les chaînes pour vérifier qu'elles sont identiques
        if (original != copie)  // Vérifie que c
		e sont deux zones mémoire différentes
            printf("Les chaînes sont différentes en mémoire.\n");
        else
            printf("Les chaînes sont identiques en mémoire.\n");

        free(copie);  // Libère la mémoire allouée pour la copie
    }
    else
    {
        printf("Erreur d'allocation mémoire.\n");  // En cas d'échec d'allocation
    }

    return 0;
}
    */
