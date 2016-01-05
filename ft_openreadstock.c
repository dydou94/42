/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_openreadstock.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dyuzan <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/01/05 09:05:38 by dyuzan            #+#    #+#             */
/*   Updated: 2016/01/05 13:26:50 by dyuzan           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <sys/types.h>
#include <sys/uio.h>
#include <fcntl.h>

#define BUF_SIZE 5555

char		*ft_stock(char *tetriminos)
{
	int		fd;
	char	buf[BUF_SIZE];
	int		ret;

	fd = open(tetriminos, O_RDONLY);
	while (ret = read(fd, buf, BUF_SIZE))
	{
		buf[ret] = '\0';
	}
	close(fd);
	return (buf);
}

void	ft_checktetri(void)
{
	char *checkhor;

	checkhor = ft_stock("tetriminos");
	while (*checkhor)
	{

	}


}
