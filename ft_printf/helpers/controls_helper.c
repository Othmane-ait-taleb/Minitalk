/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   controls_helper.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: otait-ta <otait-ta@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/28 10:03:52 by otait-ta          #+#    #+#             */
/*   Updated: 2022/10/28 18:23:45 by otait-ta         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../ft_printf.h"

t_control	*initialize_controls(void)
{
	t_control	*controls;

	controls = (t_control *) malloc(sizeof(t_control *));
	controls->printed = 0;
	return (controls);
}
