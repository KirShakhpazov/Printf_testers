/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   put_perc.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kshakhpa <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/13 13:20:22 by kshakhpa          #+#    #+#             */
/*   Updated: 2024/12/21 13:22:53 by kshakhpa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libftprintf.h"

void	put_perc(t_fmt *fmt)

{
	fmt->single = 1;
	fmt->ind = '%';
	fmt->value = (char *)malloc(sizeof(char) + 1);
	fmt->value[0] = '%';
	fmt->value[1] = '\0';
	pf_prefix(fmt);
}
