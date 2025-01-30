/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   pf_postfix.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kshakhpa <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/29 13:40:30 by kshakhpa          #+#    #+#             */
/*   Updated: 2024/11/29 13:40:40 by kshakhpa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libftprintf.h"

void	pf_postfix(t_fmt *fmt)
{
	int	j;
	int	i;
	int	k;

	if (fmt->single == 1)
		k = 1;
	else
		k = ft_strlen(fmt->value);
	i = 0;
	if (ft_strlen(fmt->prefix) + k >= fmt->width)
	{
		fmt->postfix = (char *)malloc(1);
		fmt->postfix[0] = '\0';
	}
	else
	{
		j = fmt->width - ft_strlen(fmt->prefix) - k;
		fmt->postfix = (char *)malloc(j * sizeof(char) + 1);
		while (i < j)
			fmt->postfix[i++] = ' ';
		fmt->postfix[i] = '\0';
	}
}
