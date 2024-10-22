/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   easyFind.tpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gdaignea <gdaignea@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/18 14:52:59 by gdaignea          #+#    #+#             */
/*   Updated: 2024/10/21 11:24:56 by gdaignea         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef EASYFIND_HPP
# define EASYFIND_HPP

# include <iostream>
# include <algorithm>

template<typename T>
typename T::const_iterator	easyfind(const T& container, int toFind) {
	
	typename T::const_iterator	it = std::find(container.begin(), container.end(), toFind);

	if (it == container.end()) {
		throw std::out_of_range("element not found");
	}
	return it;
}

#endif