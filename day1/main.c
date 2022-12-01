/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jhesso <jhesso@student.hive.fi>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/01 15:51:14 by jhesso            #+#    #+#             */
/*   Updated: 2022/12/01 16:17:22 by jhesso           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "day1.h"

/* find highest section from input.txt
*/
int	main(void)
{
	int		highest;
	char	*ret;
	int		current_line;
	int		fd;

	highest = 0;
	fd = open("input.txt", O_RDONLY);
	if (fd == -1)
		return (-1);
	while (ret != NULL)
	{
		ret = get_next_line(fd);
		current_line = ft_atoi(ret);
		if (current_line > highest)
			highest = current_line;
	}
	printf("highest value found: %d\n", highest);
	return (0);
}
