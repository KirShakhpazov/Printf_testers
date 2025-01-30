/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   pf_init.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kshakhpa <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/29 13:40:30 by kshakhpa          #+#    #+#             */
/*   Updated: 2024/11/29 13:40:40 by kshakhpa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libftprintf.h"

void	pf_init1(t_fmt *fmt)
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
	fmt->noprint = 0;
}

void	pf_init2(t_fmt *fmt)
{
	fmt->value = 0;
	fmt->postfix = 0;
	fmt->prefix = 0;
	fmt->toprint = 0;
	if (fmt->value)
		fmt->value = '\0';
	if (fmt->prefix)
		fmt->prefix = '\0';
	if (fmt->postfix)
		fmt->postfix = '\0';
	if (fmt->value)
		fmt->toprint = '\0';
}

void	pf_init(t_fmt *fmt)
{
	pf_init1(fmt);
	pf_init2(fmt);
}
