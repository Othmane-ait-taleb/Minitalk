/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: otait-ta <otait-ta@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/14 04:51:59 by otait-ta          #+#    #+#             */
/*   Updated: 2022/10/22 20:28:01 by otait-ta         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putnbr_fd(int n, int fd)
{
	unsigned int	pnbr;

	pnbr = n;
	if (n < 0)
	{
		ft_putchar_fd('-', fd);
		pnbr *= -1;
	}
	if (pnbr < 10)
		ft_putchar_fd('0' + pnbr, fd);
	else
	{
		ft_putnbr_fd(pnbr / 10, fd);
		ft_putchar_fd('0' + (pnbr % 10), fd);
	}
}
