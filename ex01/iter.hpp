/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   iter.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ufo <ufo@student.42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/14 10:57:36 by ufo               #+#    #+#             */
/*   Updated: 2025/09/14 11:11:48 by ufo              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ITER_HPP
#define ITER_HPP

#include <cstddef>

template <typename T>
void iter(T *array, std:: size_t length, void (*funcName)(T&)) {
    if (array == NULL || funcName == NULL) {
        return;
    }
    for (size_t i = 0; i < length; i++) {
        funcName(array[i]);
    }
}

template <typename T>
void iter(T const *array, std::size_t length, void (*func)(T const &)) {
	if (!array || !func) return;
	std::size_t i = 0;
	while (i < length) {
		func(array[i]);
		++i;
	}
}

#endif