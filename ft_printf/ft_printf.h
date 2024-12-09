/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rabatist <rabatist@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/10 14:52:23 by rabatist          #+#    #+#             */
/*   Updated: 2024/11/27 15:02:35 by rabatist         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <unistd.h>
# include <stdarg.h>
# include <stdint.h>

int		ft_printf(char const *str, ...);
int		ft_putchar_pf(int c);
int		ft_putstr_pf(char *str);
int		ft_putnbr_pf(int n);
int		ft_unsigned_putnbr_pf(unsigned int n);
int		ft_putnbr_hex_lower_pf(unsigned int n);
int		ft_putnbr_hex_upper_pf(unsigned int n);
int		ft_pointer_pf(void *ptr);

#endif
