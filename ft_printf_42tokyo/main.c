/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ichinoseyuuki <ichinoseyuuki@student.42    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/09 20:57:19 by ichinoseyuu       #+#    #+#             */
/*   Updated: 2022/11/09 20:57:25 by ichinoseyuu      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<stdio.h>
#include"ft_printf.h"

int main(void)
{
	int i;
	int *p;
	p = &i;
	printf("%%%s%%%c\n","42",'c');
	ft_printf("%%%s%%%c\n","42",'c');
	return (0);
}
