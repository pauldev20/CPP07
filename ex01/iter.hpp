/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   iter.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pgeeser <pgeeser@student.42heilbronn.de    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/10 16:12:45 by pgeeser           #+#    #+#             */
/*   Updated: 2023/04/26 16:51:53 by pgeeser          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ITER_HPP
# define ITER_HPP

# include <cstddef>	// NULL

template <typename T>
void	iter(T *a, int len, void (*func)(T &))
{
	if (a == NULL || func == NULL)
		return;
	for (int i = 0; i < len; i++)
		func(a[i]);
}

#endif
