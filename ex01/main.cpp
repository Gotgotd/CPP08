/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gdaignea <gdaignea@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/22 16:48:05 by gdaignea          #+#    #+#             */
/*   Updated: 2024/10/22 18:01:39 by gdaignea         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "Span.hpp"
# include <algorithm>

int	main() {

/* 	Span sp = Span(5);
	sp.addNumber(6);
	sp.addNumber(3);
	sp.addNumber(17);
	sp.addNumber(9);
	sp.addNumber(11);

	std::cout << "list :" << std::endl;
	for (std::set<int>::const_iterator it = sp._container.begin(); it != sp._container.end(); ++it) {
		std::cout << *it << std::endl;
	}
	std::cout << std::endl;
	std::cout << "shortest span :" << sp.shortestSpan() << std::endl;
	std::cout << "longest span :" << sp.longestSpan() << std::endl; */

	/* Span	span(10);
	
	try {
		for (int i = 0; i < 10; i++) {
			int n = rand() % 50;
			span.addNumber(n);
		}

		std::cout << "list :" << std::endl;
		for (std::vector<int>::const_iterator it = span._container.begin(); it != span._container.end(); ++it) {
			std::cout << *it << std::endl;
		}
		std::cout << "longest span :" << span.longestSpan() << std::endl;
		std::cout << "shortest span :" << span.shortestSpan() << std::endl;
		span.addNumber(42);
		for (std::vector<int>::const_iterator it = span._container.begin(); it != span._container.end(); ++it) {
			std::cout << *it << std::endl;
		}
	}
	catch (std::exception& e) {
		std::cerr << e.what() << std::endl;
	} */

	/* Span	span2(1);

	try {
		span2.addNumber(2);
		//span2.longestSpan();
		span2.shortestSpan();
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	} */
	
	Span	span3(12000);

	span3.addRange();
	std::cout << "longest span :" << span3.longestSpan() << std::endl;
	std::cout << "shortest span :" << span3.shortestSpan() << std::endl;

	return 0;
}