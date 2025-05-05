/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nguinot- <nguinot-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/02 13:53:18 by nguinot-          #+#    #+#             */
/*   Updated: 2025/05/02 16:22:51 by nguinot-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	count_words(char const *s, char c)
{
	int	count;
	int	i;

	count = 0;
	i = 0;
	while (s[i] != '\0')
	{
		while (s[i] == c)
			i++;
		if (s[i] != c && s[i] != '\0')
			count++;
		while (s[i] != c && s[i] != '\0')
		i++;
	}
	return (count);
}

int	len_word(char const *s, char c)
{
	int	i;

	i = 0;
	while (s[i] != c && s[i] != '\0')
		i++;
	return (i);
}

static void	free_all(char **tab, int i)
{
	while (i--)
		free(tab[i]);
	free(tab);
}

char	**ft_split(char const *s, char c)
{
	char	**result;
	int		i;

	if (!s)
		return (NULL);
	result = malloc((count_words(s, c) + 1) * sizeof(char *));
	if (!result)
		return (NULL);
	i = 0;
	while (*s)
	{
		while (*s == c)
			s++;
		if (*s)
		{
			result[i] = malloc(len_word(s, c) * sizeof(char) + 1);
			if (!result[i])
				return (free_all(result, i), NULL);
			ft_strlcpy(result[i], s, len_word(s, c) + 1);
			s += len_word(s, c);
			i++;
		}
	}
	result[i] = NULL;
	return (result);
}
/*
void	print_split(char **tab)
{
	int i = 0;

	if (!tab)
	{
		printf("Résultat : NULL\n");
		return;
	}
	while (tab[i])
	{
		printf("mot[%d] = \"%s\"\n", i, tab[i]);
		free(tab[i]);
		i++;
	}
	free(tab);
	printf("--------\n");
}

int	main(void)
{
	printf("Test 1 : \"Salut les amis\" (sep: ' ')\n");
	print_split(ft_split("Salut les amis", ' '));

	printf("Test 2 : \"abc,,def,,ghi\" (sep: ',')\n");
	print_split(ft_split("abc,,def,,ghi", ','));

	printf("Test 3 : \"   Hello   world   \" (sep: ' ')\n");
	print_split(ft_split("   Hello   world   ", ' '));

	printf("Test 4 : \",,,\" (sep: ',')\n");
	print_split(ft_split(",,,", ','));

	printf("Test 5 : \"\" (chaîne vide)\n");
	print_split(ft_split("", ','));

	printf("Test 6 : NULL (entrée nulle)\n");
	print_split(ft_split(NULL, ','));

	return 0;
}*/
