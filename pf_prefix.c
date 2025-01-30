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

int	preflen(t_fmt *fmt)
{
	int	tlen;

	tlen = 0;
	if (fmt->hashtag == 1 && (fmt->bighex == 1 || fmt->lilhex == 1))
		tlen += 2;
	else if ((fmt->neg == 1 || fmt->plus == 1)
		&& fmt->quant == 1 && fmt->isun != 1)
		tlen += 1;
	if (fmt->precision <= ft_strlen(fmt->value))
		return (tlen);
	else if (fmt->quant == 1 || fmt->bighex == 1 || fmt->lilhex == 1)
		tlen += (fmt->precision - ft_strlen(fmt->value));
	return (tlen);
}

int	hashtag(t_fmt *fmt, int i)
{
	if (fmt->hashtag == 1 && fmt->bighex == 1)
	{
		fmt->prefix[0] = '0';
		fmt->prefix[1] = 'X';
		i += 2;
	}
	if (fmt->hashtag == 1 && fmt->lilhex == 1)
	{
		fmt->prefix[0] = '0';
		fmt->prefix[1] = 'x';
		i += 2;
	}
	return (i);
}

int	signtag(t_fmt *fmt, int i)
{
	if (fmt->neg == 1 && fmt->isun != 1)
	{
		fmt->prefix[0] = '-';
		i++;
	}
	else if (fmt->neg != 1 && fmt->plus == 1 && fmt->isun != 1)
	{
		fmt->prefix[0] = '+';
		i++;
	}
	else if (fmt->neg != 1 && fmt->plus != 1 && fmt->space == 1)
	{
		fmt->prefix[0] = ' ';
		i++;
	}
	return (i);
}

void	pf_prefix(t_fmt *fmt)
{
	int	i;
	int	j;

	i = 0;
	j = 0;
	fmt->prefix = (char *)malloc((preflen(fmt)) * sizeof(char) + 1);
	if (fmt->hashtag == 1 && (fmt->bighex == 1 || fmt->lilhex == 1))
		i += hashtag(fmt, i);
	else if ((fmt->neg == 1 || fmt->space == 1 || fmt->plus == 1)
		&& (fmt->quant == 1 || fmt->isun == 1))
		i += signtag(fmt, i);
	j = 0 - fmt->neg;
	while (i < (preflen(fmt) + j))
	{
		fmt->prefix[i] = '0';
		i++;
	}
	fmt->prefix[i] = '\0';
}
