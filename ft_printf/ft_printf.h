/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: otait-ta <otait-ta@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/28 09:40:15 by otait-ta          #+#    #+#             */
/*   Updated: 2022/10/28 19:26:14 by otait-ta         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H
# include <stdio.h>
# include <stdarg.h>
# include <stdio.h>
# include <stdlib.h>
# include <unistd.h>

typedef struct t_control
{
	int	printed;
}	t_control;

int			ft_printf(const char *str, ...);
char		*putchar_count(char *s, char c, t_control *control);
t_control	*initialize_controls(void);
char		*put_str(char *s, char *arg, t_control *control);
char		*put_pointer(char *s, unsigned long pointer, t_control *control);
char		*put_dicimal(char *s, long long nbr, t_control *control);
char		*put_unsigned(char *s, unsigned int nbr, t_control *control);
char		*put_hexa(char *s, long long nbr, t_control *control);
char		*flag_anal(char *s, va_list args, t_control *controls);
char		*testing_flags(char *s, va_list args, t_control *controls);
#endif