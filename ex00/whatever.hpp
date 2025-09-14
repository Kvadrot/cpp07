/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   whatever.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ufo <ufo@student.42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/14 10:38:10 by ufo               #+#    #+#             */
/*   Updated: 2025/09/14 10:51:48 by ufo              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WHATEVER_HPP
#define WHATEVER_HPP

template <typename T>
void swap(T &a, T &b) {
    T tmp = a;
    a = b;
    b = tmp;
};

template <typename T>
const T& min(const T &a, const T &b) {
    if (b <= a) {
        return b;
    } else {
        return a;
    }
}

template <typename T>
const T& max(const T &a, const T &b) {
    if (b >= a) {
        return b;
    } else {
        return a;
    }
}

#endif