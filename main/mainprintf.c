/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   mainprintf.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pribolzi <pribolzi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/16 17:28:39 by pribolzi          #+#    #+#             */
/*   Updated: 2025/01/15 16:50:29 by pribolzi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/ft_printf.h"
#include <stdio.h>

int main()
{
	void *ptr;
	int a = 500;

	ptr = &a;	
	ft_printf("Valeur ft_printf : %d\n", ft_printf("Test char : %c\n", 'c'));
	printf("Valeur printf : %d\n\n", printf("Test char : %c\n", 'c'));
	ft_printf("Valeur ft_printf : %d\n", ft_printf("Test string : %s\n", "Phrase"));
	printf("Valeur printf : %d\n\n", printf("Test string : %s\n", "Phrase"));
	ft_printf("Valeur ft_printf : %d\n", ft_printf("Test ptr : %p\n", ptr));
	printf("Valeur printf : %d\n\n", printf("Test ptr : %p\n", ptr));
	ft_printf("Valeur ft_printf : %d\n", ft_printf("Test decimal : %d\n", 0));
	printf("Valeur printf : %d\n\n", printf("Test decimal : %d\n", 0));
	ft_printf("Valeur ft_printf : %d\n", ft_printf("Test int : %i\n", 2147483647));
	printf("Valeur printf : %d\n\n", printf("Test int : %i\n", 2147483647));
	ft_printf("Valeur ft_printf : %d\n", ft_printf("Test unsigned decimal : %u\n", 100));
	printf("Valeur printf : %d\n\n", printf("Test unsigned decimal : %u\n", 100));
	ft_printf("Valeur ft_printf : %d\n", ft_printf("Test hexa : %x\n", 100));
	printf("Valeur printf : %d\n\n", printf("Test hexa : %x\n", 100));
	ft_printf("Valeur ft_printf : %d\n", ft_printf("Test hexa upper : %X\n", 100));
	printf("Valeur printf : %d\n\n", printf("Test hexa upper : %X\n", 100));
	ft_printf("Valeur ft_printf : %d\n", ft_printf("Test char : %%\n"));
	printf("Valeur printf : %d\n\n", printf("Test char : %%\n"));
	ft_printf("Valeur ft_printf : %d\n", ft_printf("Test de tout les flags : %c, %s, %p, %d, %i, %u, %x, %X, %%\n", 'c', "phrase", ptr, 500, 500, 100, 100, 100));
	printf("Valeur printf : %d\n", printf("Test de tout les flags : %c, %s, %p, %d, %i, %u, %x, %X, %%\n", 'c', "phrase", ptr, 500, 500, 100, 100, 100));
}