/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_params.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cvazquez <cvazquez@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/07 12:27:28 by cvazquez          #+#    #+#             */
/*   Updated: 2022/04/07 18:30:09 by cvazquez         ###   ########.fr       */
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

int	ft_strcmp(char *s1, char *s2)
{
	int	i;
	int	valor_retorno;

	valor_retorno = 0;
	i = 0;
	while (s1[i] != '\0' || s2[i] != '\0')
	{
		valor_retorno = s1[i] - s2[i];
		if (valor_retorno != 0)
		{
			return (valor_retorno);
		}
		i++;
	}
	return (valor_retorno);
}

void	ft_print(int argc, char **argv)
{
	int	j;

	j = 0;
	while (j < argc)
	{
		ft_putstr(argv[j]);
		ft_putchar('\n');
		j++;
	}
}

int	main(int argc, char **argv)
{
	int		i;
	char	*aux;
	int		j;

	i = 1;
	while (i < argc)
	{
		j = i + 1;
		while (j < argc)
		{
			if (ft_strcmp(argv[i], argv[j]) > 0)
			{
				aux = argv[i];
				argv[i] = argv[j];
				argv[j] = aux;
			}
			j++;
		}
		i++;
	}
	ft_print(argc, argv);
	return (0);
}
