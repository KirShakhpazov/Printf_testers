/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_xtoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kshakhpa <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/13 13:20:22 by kshakhpa          #+#    #+#             */
/*   Updated: 2024/12/21 13:22:53 by kshakhpa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libftprintf.h"

char	*ft_xtoa(long long n)
{
	int			len;
	char		*str;
	char		*hexd;
	long long	nbr;

	hexd = "0123456789abcdef";
	len = count_char(n, 16);
	nbr = n;
	str = malloc(sizeof(char) * (len + 1));
	if (!str)
		return (0);
	if (nbr < 0)
		str[0] = '-';
	nbr = ft_abst(nbr);
	if (nbr == 0)
		str[0] = hexd[0];
	str[len--] = '\0';
	while (nbr)
	{
		str[len] = hexd[(nbr % 16)];
		nbr /= 16;
		len--;
	}
	return (str);
}
