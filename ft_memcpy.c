/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wcollen <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/09 23:10:13 by wcollen           #+#    #+#             */
/*   Updated: 2021/10/10 01:05:48 by wcollen          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	*ft_memcpy(void *destination, const void *source, size_t n)
{
	unsigned int		i;
	unsigned char		*to;
	const unsigned char	*from;

	i = 0;
	to = destination;
	from = source;
	while (from[i] && (i < n))
	{
		to[i] = from[i];
		i++;
	}
	return (to);
}
