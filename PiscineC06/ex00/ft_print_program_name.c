/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_program_name.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cvazquez <cvazquez@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/07 11:48:21 by cvazquez          #+#    #+#             */
/*   Updated: 2022/04/07 20:49:50 by cvazquez         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_putstr(char *src)
{
	int	i;

	i = 0;
	while (src[i] != '\0')
	{
		ft_putchar(src[i]);
		i++;
	}
	ft_putchar('\n');
}

int	main(int argc, char **argv)
{
	if (argc)
	{
		ft_putstr(argv[0]);
	}
	return (0);
}
