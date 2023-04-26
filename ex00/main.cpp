/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pgeeser <pgeeser@student.42heilbronn.de    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/10 16:05:47 by pgeeser           #+#    #+#             */
/*   Updated: 2023/04/26 16:50:05 by pgeeser          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "whatever.hpp"
#include <iostream>	// std::cout, std::endl

int main(void) {
	int a = 2;
	int b = 3;
	
	std::cout << "a = " << a << ", b = " << b << std::endl;
	::swap( a, b );
	std::cout << "a = " << a << ", b = " << b << std::endl;
	std::cout << "min( a, b ) = " << ::min( a, b ) << std::endl;
	std::cout << "max( a, b ) = " << ::max( a, b ) << std::endl;

	std::cout << std::endl;
	
	std::string c = "chaine1";
	std::string d = "chaine2";
	
	std::cout << "c = " << c << ", d = " << d << std::endl;
	::swap(c, d);
	std::cout << "c = " << c << ", d = " << d << std::endl;
	std::cout << "min( c, d ) = " << ::min( c, d ) << std::endl;
	std::cout << "max( c, d ) = " << ::max( c, d ) << std::endl;

	std::cout << std::endl;

	float f = 2.98f;
	float g = 3.56f;
	
	std::cout << "f = " << f << ", g = " << g << std::endl;
	::swap( f, g );
	std::cout << "f = " << f << ", g = " << g << std::endl;
	std::cout << "min( f, g ) = " << ::min( f, g ) << std::endl;
	std::cout << "max( f, g ) = " << ::max( f, g ) << std::endl;

	return 0;
}
