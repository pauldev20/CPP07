/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   iter.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pgeeser <pgeeser@student.42heilbronn.de    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/10 16:12:45 by pgeeser           #+#    #+#             */
/*   Updated: 2023/04/10 16:22:17 by pgeeser          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ITER_HPP
# define ITER_HPP

# include <cstddef>

template <typename T>
void	iter(T *a, int length, void (*func)(T &))
{
	if (a == NULL || func == NULL)
		return;
	for (int i = 0; i < length; i++)
		func(a[i]);
}

#endif
