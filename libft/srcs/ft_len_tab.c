/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_concattab.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmanuel <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/15 16:12:33 by tmanuel           #+#    #+#             */
/*   Updated: 2018/01/10 04:25:08 by tmanuel          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_len_tab(char **tab)
{
	int i;

	i = 0;
	while (tab[i])
		i++;
	i--;
	return (i);
}