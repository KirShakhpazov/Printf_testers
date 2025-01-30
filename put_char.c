/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   put_char.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kshakhpa <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/13 13:20:22 by kshakhpa          #+#    #+#             */
/*   Updated: 2024/12/21 13:22:53 by kshakhpa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libftprintf.h"

void	put_char(t_fmt *fmt)
{
	fmt->single = 1;
	fmt->ind = va_arg(fmt->args, int);
	fmt->value = (char *)malloc(sizeof(char) + 1);
	fmt->value[0] = fmt->ind;
	fmt->value[1] = '\0';
	pf_prefix(fmt);
}
