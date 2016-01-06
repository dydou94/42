/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_checktetriminos.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dyuzan <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/01/06 10:32:54 by dyuzan            #+#    #+#             */
/*   Updated: 2016/01/06 11:00:13 by dyuzan           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_checktetri(char *check)
{
	int i;
	int dz;

	dz = 0
	i = 0;
	check == ft_stock("tetriminos");
	while (*check)
	{
		if (*check == '\n' || *check == '#')
		{
			i = i + 1;
			dz = dz + 1;
			{
				if (i == 4 && dz < 4 || dz > 4)
					write(1, "error", 1);
				break;
			}
			*check++;
		}
	}
}
