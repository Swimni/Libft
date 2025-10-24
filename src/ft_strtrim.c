/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nguinot- <nguinot-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/02 13:13:17 by nguinot-          #+#    #+#             */
/*   Updated: 2025/05/02 13:51:34 by nguinot-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	inset(char c, const char	*set)
{
	while (*set)
	{
		if (c == *set++)
			return (1);
	}
	return (0);
}

char	*ft_strtrim(char const	*s1, char const	*set)
{
	size_t	start;
	size_t	end;
	size_t	i;
	char	*trim;

	start = 0;
	i = 0;
	if (!s1 || !set)
		return (NULL);
	while (s1[start] && inset(s1[start], set))
		start++;
	end = start;
	while (s1[end])
		end++;
	while (end > start && inset(s1[end - 1], set))
		end--;
	trim = malloc(end - start + 1);
	if (!trim)
		return (NULL);
	while (start < end)
		trim[i++] = s1[start++];
	trim[i] = '\0';
	return (trim);
}
/*int main(void)
{
	char *s1 = "   \n\tSalut ! \t\t\n ";
	char *trimmed = ft_strtrim(s1, " \n\t");

	printf("Résultat : '%s'\n", trimmed); // Affiche "Salut !"
	free(trimmed);
	return 0;
}*/