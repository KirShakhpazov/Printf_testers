/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   put_decm.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kshakhpa <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/13 13:20:22 by kshakhpa          #+#    #+#             */
/*   Updated: 2024/12/21 13:22:53 by kshakhpa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libftprintf.h"

void	put_decm(t_fmt *fmt)
{
	char		*decs;
	long long	nmb;
	int			len;
	int			i;

	fmt->quant = 1;
	nmb = va_arg(fmt->args, int);
	if (nmb < 0)
		fmt->neg = 1;
	nmb = ft_abst(nmb);
	decs = ft_itoa(nmb);
	len = ft_strlen(decs);
	fmt->value = (char *)malloc(len * sizeof(char) + 1);
	i = 0;
	while (i != len)
	{
		fmt->value[i] = decs[i];
		i++;
	}
	fmt->value[i] = '\0';
	free(decs);
	pf_prefix(fmt);
}
