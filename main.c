/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amaroni <amaroni@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/06 02:31:32 by amaroni           #+#    #+#             */
/*   Updated: 2021/11/06 04:18:45 by amaroni          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	main(int argc, char **argv)
{
	if (!ft_is_input_correct(argv, argc))
		printf("Error \n");
	else
		ft_push_swap(argc, argv);
	return (0);
}
