/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jahmimid <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/20 09:52:13 by jahmimid          #+#    #+#             */
/*   Updated: 2021/10/20 09:52:18 by jahmimid         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <stdlib.h>
# include <stdarg.h>
# include <stdint.h>

int		ft_printf(const char *format, ...);
int		ft_putchar(char c);
int		ft_putstr(char *s);
int		ft_putnbr(int n);
int		ft_eval_and_treat(va_list args, char const *format, int i, int len);
int		ft_puthexa(unsigned int nb, char *base);
int		ft_putunbr(unsigned int n);
int		ft_putaddress(void *address);
int		ft_puthexadd(unsigned long int nb, char *base);

#endif
