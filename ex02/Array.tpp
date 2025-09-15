/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Array.tpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ufo <ufo@student.42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/15 09:57:06 by ufo               #+#    #+#             */
/*   Updated: 2025/09/15 10:51:33 by ufo              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


template <typename T>
Array<T>::Array() : _data(0), _size(0) {
}

template <typename T>
Array<T>::Array(unsigned int n) : _data(0), _size(n) {
	if (n > 0) {
		_data = new T[_size]; // default-init elements
	}
}

template <typename T>
Array<T>::Array(const Array<T> &other) : _data(0), _size(other._size) {
	if (this->_size > 0) {
		_data = new T[this->_size];
		std::size_t i = 0;
		while (i < this->_size) {
			_data[i] = other._data[i];
			i = i + 1;
		}
	}
}

template <typename T>
Array<T> &Array<T>::operator=(const Array<T> &other) {
	if (this != &other) {
		delete[] this->_data;
		this->_size = other._size;

		if (this->_size > 0) {
			this->_data = new T[this->_size];
			std::size_t i = 0;
			while (i < this->_size) {
				this->_data[i] = other._data[i];
				i = i + 1;
			}
		} else {
			this->_data = 0;
		}
	}
	return *this;
}

template <typename T>
Array<T>::~Array() {
	delete[] this->_data;
}

template <typename T>
T &Array<T>::operator[](std::size_t idx) {
	if (idx >= this->_size) {
		throw std::out_of_range("Array index out of range");
	}
	return this->_data[idx];
}

template <typename T>
const T &Array<T>::operator[](std::size_t idx) const {
	if (idx >= this->_size) {
		throw std::out_of_range("Array index out of range");
	}
	return this->_data[idx];
}

template <typename T>
std::size_t Array<T>::size() const {
	return this->_size;
}