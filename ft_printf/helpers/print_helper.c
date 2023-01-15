/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print_helper.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: otait-ta <otait-ta@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/28 09:56:47 by otait-ta          #+#    #+#             */
/*   Updated: 2022/10/28 18:27:26 by otait-ta         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../ft_printf.h"

char	*putchar_count(char *s, char c, t_control *control)
{
	write(1, &c, 1);
	control->printed++;
	s++;
	return (s);
}

char	*put_str(char *s, char *arg, t_control *control)
{
	if (!arg)
	{
		put_str(s, "(null)", control);
		return (s);
	}
	while (*arg)
		arg = putchar_count(arg, *arg, control);
	s++;
	return (s);
}
