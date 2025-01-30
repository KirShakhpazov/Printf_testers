/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   put_heks.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kshakhpa <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/13 13:20:22 by kshakhpa          #+#    #+#             */
/*   Updated: 2024/12/21 13:22:53 by kshakhpa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libftprintf.h"

void	put_heks(t_fmt *fmt)
{
	unsigned int	num;
	char			*hex;
	int				len;
	int				i;

	num = va_arg(fmt->args, unsigned int);
	fmt->bighex = 1;
	hex = ft_kstoa(num);
	len = ft_strlen(hex);
	fmt->value = (char *)malloc(len * sizeof(char) + 1);
	i = 0;
	while (i != len)
	{
		fmt->value[i] = hex[i];
		i++;
	}
	fmt->value[i] = '\0';
	free(hex);
	pf_prefix(fmt);
}
