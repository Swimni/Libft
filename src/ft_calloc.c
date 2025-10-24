/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nguinot- <nguinot-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/30 13:51:55 by nguinot-          #+#    #+#             */
/*   Updated: 2025/04/30 14:12:44 by nguinot-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t nbelem, size_t size)
{
	size_t	total;
	size_t	i;
	char	*ptr;

	total = nbelem * size;
	ptr = (char *)malloc(total);
	if (!ptr)
		return (NULL);
	i = 0;
	while (i < total)
	{
		ptr[i] = 0;
		i++;
	}
	return ((void *)ptr);
}
/*
int	main(void)
{
	int	*tab = (int *)ft_calloc(5, sizeof(int));
	if (!tab)
		return (1);

	for (int i = 0; i < 5; i++)
		printf("%d ", tab[i]);  // Affiche : 0 0 0 0 0

	free(tab);
	return (0);
}
	*/