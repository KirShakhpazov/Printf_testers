/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   put_str.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kshakhpa <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/13 13:20:22 by kshakhpa          #+#    #+#             */
/*   Updated: 2024/12/21 13:22:53 by kshakhpa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libftprintf.h"

void	put_str(t_fmt *fmt)
{
	int		i;
	int		j;
	char	*str;

	str = va_arg(fmt->args, char *);
	j = 0;
	if (!str)
	{
		str = "(null)";
		j = 6;
	}
	else if (fmt->dot == 1 && ft_strlen(str) > fmt->precision)
		j = fmt->precision;
	else
		j = ft_strlen(str);
	fmt->value = (char *)malloc(j * sizeof(char) + 1);
	i = 0;
	while (i != j)
	{
		fmt->value[i] = str[i];
		i++;
	}
	fmt->value[i] = '\0';
	pf_prefix(fmt);
}
