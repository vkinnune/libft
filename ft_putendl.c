/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putendl.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vkinnune <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/02 21:59:08 by vkinnune          #+#    #+#             */
/*   Updated: 2021/12/02 21:59:13 by vkinnune         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putendl(char const *s)
{
	int	size;
	int	i;

	i = 0;
	size = ft_strlen((char *)s);
	while (size--)
		write (1, &s[i++], 1);
	write (1, "\n", 1);
}
