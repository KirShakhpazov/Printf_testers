/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   put_ptr.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kshakhpa <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/13 13:20:22 by kshakhpa          #+#    #+#             */
/*   Updated: 2024/12/21 13:22:53 by kshakhpa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libftprintf.h"

void	nul_ptr(t_fmt *fmt)
{
	fmt->value = (char *)malloc(5 * sizeof(char) + 1);
	fmt->value[0] = '(';
	fmt->value[1] = 'n';
	fmt->value[2] = 'i';
	fmt->value[3] = 'l';
	fmt->value[4] = ')';
	fmt->value[5] = '\0';
}

void	val_ptr(t_fmt *fmt, long long ptr)
{
	char		*hex;
	long long	len;
	long long	i;

	hex = ft_xtoa(ptr);
	len = ft_strlen(hex);
	fmt->value = (char *)malloc(len * sizeof(char) + 3);
	fmt->value[0] = '0';
	fmt->value[1] = 'x';
	i = 2;
	while (i != len + 2)
	{
		fmt->value[i] = hex[i - 2];
		i++;
	}
	fmt->value[i] = '\0';
	free(hex);
}

void	put_ptr(t_fmt *fmt)
{
	long long	ptr;

	ptr = va_arg(fmt->args, long long);
	if (ptr == 0)
		nul_ptr(fmt);
	else
		val_ptr(fmt, ptr);
	pf_prefix(fmt);
}
