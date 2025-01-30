/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   pf_reset.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kshakhpa <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/29 13:40:30 by kshakhpa          #+#    #+#             */
/*   Updated: 2024/11/29 13:40:40 by kshakhpa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libftprintf.h"

void	pf_reset1(t_fmt *fmt)
{
	fmt->len = 0;
	fmt->offset = 0;
	fmt->pad = 0;
	fmt->width = 0;
	fmt->precision = 0;
	fmt->hashtag = 0;
	fmt->zero = 0;
	fmt->minus = 0;
	fmt->space = 0;
	fmt->plus = 0;
	fmt->dot = 0;
	fmt->upper = 0;
	fmt->quant = 0;
	fmt->single = 0;
	fmt->ind = 0;
	fmt->isun = 0;
	fmt->neg = 0;
	fmt->lilhex = 0;
	fmt->bighex = 0;
}

void	pf_reset2(t_fmt *fmt)
{
	if (fmt->value != 0)
		free(fmt->value);
	if (fmt->prefix != 0)
		free(fmt->prefix);
	if (fmt->postfix != 0)
		free(fmt->postfix);
	if (fmt->toprint != 0)
		free(fmt->toprint);
}

void	pf_reset(t_fmt *fmt)
{
	pf_reset1(fmt);
	pf_reset2(fmt);
}
