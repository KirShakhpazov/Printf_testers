/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   put_uint.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kshakhpa <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/13 13:20:22 by kshakhpa          #+#    #+#             */
/*   Updated: 2024/12/21 13:22:53 by kshakhpa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libftprintf.h"

void	put_uint(t_fmt *fmt)
{
	unsigned int	num;
	char			*uint;
	int				len;
	int				i;

	num = va_arg(fmt->args, unsigned int);
	fmt->quant = 1;
	fmt->isun = 1;
	uint = ft_uint(num);
	len = ft_strlen(uint);
	fmt->value = (char *)malloc(len * sizeof(char) + 1);
	i = 0;
	while (i != len)
	{
		fmt->value[i] = uint[i];
		i++;
	}
	fmt->value[i] = '\0';
	free(uint);
	pf_prefix(fmt);
}
