/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   pf_prefix.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kshakhpa <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/29 13:40:30 by kshakhpa          #+#    #+#             */
/*   Updated: 2024/11/29 13:40:40 by kshakhpa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libftprintf.h"

void	shiftright(t_fmt *fmt)
{
	if (fmt->postfix)
	{
		ft_putstr_fd(fmt->postfix, 1);
		fmt->len += ft_strlen(fmt->postfix);
	}
	if (fmt->prefix)
	{
		ft_putstr_fd(fmt->prefix, 1);
		fmt->len += ft_strlen(fmt->prefix);
	}
	if (fmt->single == 1)
	{
		ft_putchar_fd(fmt->ind, 1);
		fmt->len++;
	}
	else
	{
		ft_putstr_fd(fmt->value, 1);
		fmt->len += ft_strlen(fmt->value);
	}
}

void	shiftleft(t_fmt *fmt)
{
	if (fmt->prefix)
	{
		ft_putstr_fd(fmt->prefix, 1);
		fmt->len += ft_strlen(fmt->prefix);
	}
	if (fmt->single == 1)
	{
		ft_putchar_fd(fmt->ind, 1);
		fmt->len++;
	}
	else
	{
		ft_putstr_fd(fmt->value, 1);
		fmt->len += ft_strlen(fmt->value);
	}
	if (fmt->postfix)
	{
		ft_putstr_fd(fmt->postfix, 1);
		fmt->len += ft_strlen(fmt->postfix);
	}
}

void	pf_toprint(t_fmt *fmt)
{
	pf_postfix(fmt);
	if (fmt->minus == 1)
		shiftleft(fmt);
	else
		shiftright(fmt);
}
