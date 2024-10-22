/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gdaignea <gdaignea@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/22 11:07:39 by gdaignea          #+#    #+#             */
/*   Updated: 2024/10/22 12:04:31 by gdaignea         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "Span.hpp"

Span::Span(unsigned int n): N(n) {}

Span::Span(Span const& copy) {
	*this=copy;
}

Span::~Span() {}

Span&	Span::operator=(Span const& rhs) {
	if (this != &rhs) {
		N = rhs.getN();
	}
}

unsigned int	Span::getN() const {
	return this->N;
}

void	Span::addNumber(int nb) {
	if (_container.size() < N) {
		_container.insert(nb);
	}
	throw std::out_of_range("no more space left on Span to add a new number");
}

int	Span::longestSpan() {
	if (N > 1) {
		return *_container.end() - *_container.begin();
	}
	throw std::range_error("not enough numbers in Span");
}