/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pgeeser <pgeeser@student.42heilbronn.de    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/10 16:05:47 by pgeeser           #+#    #+#             */
/*   Updated: 2023/04/25 19:20:13 by pgeeser          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "whatever.hpp"
#include <iostream>	// std::cout, std::endl

int main(void) {
	int a = 2;
	int b = 3;
	
	::swap( a, b );
	std::cout << "a = " << a << ", b = " << b << std::endl;
	std::cout << "min( a, b ) = " << ::min( a, b ) << std::endl;
	std::cout << "max( a, b ) = " << ::max( a, b ) << std::endl;
	
	std::string c = "chaine1";
	std::string d = "chaine2";
	
	::swap(c, d);
	std::cout << "c = " << c << ", d = " << d << std::endl;
	std::cout << "min( c, d ) = " << ::min( c, d ) << std::endl;
	std::cout << "max( c, d ) = " << ::max( c, d ) << std::endl;

	float f = 2.98f;
	float g = 3.56f;
	
	::swap( f, g );
	std::cout << "f = " << f << ", g = " << g << std::endl;
	std::cout << "min( f, g ) = " << ::min( f, g ) << std::endl;
	std::cout << "max( f, g ) = " << ::max( f, g ) << std::endl;

	return 0;
}
