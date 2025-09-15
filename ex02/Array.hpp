/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Array.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ufo <ufo@student.42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/14 14:48:40 by ufo               #+#    #+#             */
/*   Updated: 2025/09/15 10:51:24 by ufo              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ARRAY_HPP
#define ARRAY_HPP

#include <cstddef>   // size_t
#include <stdexcept> // std::out_of_range

template <typename T>
class Array {
    private:
        T *_data;
        size_t _size;


    public:
        Array();
        Array(const Array &other);
        Array &operator=(const Array& other);
        Array(unsigned int n);
        ~Array();

        T &operator[](std::size_t n);
        const T &operator[](std::size_t idx) const;      
        std::size_t size() const;
};

#include "Array.tpp"
#endif
