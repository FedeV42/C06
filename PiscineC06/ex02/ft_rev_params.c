/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_params.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cvazquez <cvazquez@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/07 11:53:42 by cvazquez          #+#    #+#             */
/*   Updated: 2022/04/07 18:30:14 by cvazquez         ###   ########.fr       */
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
}

int	main(int argc, char **argv)
{
	int	i;

	i = 1;
	while (argc - i > 0)
	{
		ft_putstr(argv[argc - i]);
		ft_putchar('\n');
		i++;
	}
	return (0);
}
