/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_parrpush.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tberthie <tberthie@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/02/20 19:49:27 by tberthie          #+#    #+#             */
/*   Updated: 2017/12/08 00:44:45 by tberthie         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

#include <stdlib.h>

void	ft_parrpush(void ***tab, void *elem)
{
	void			**n_tab;
	unsigned int	arr_len;

	arr_len = ft_parrlen(*tab);
	n_tab = (void**)ft_m(sizeof(void*) * (arr_len + 2));
	n_tab[arr_len] = elem;
	n_tab[arr_len + 1] = (void*)0;
	if (n_tab == *tab)
		return ;
	while (arr_len--)
		n_tab[arr_len] = (*tab)[arr_len];
	free(*tab);
	*tab = n_tab;
}
