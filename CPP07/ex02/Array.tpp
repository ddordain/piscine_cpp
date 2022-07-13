/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Array.tpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ddordain <ddordain@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/25 11:53:27 by ddordain          #+#    #+#             */
/*   Updated: 2022/07/13 14:46:45 by ddordain         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Array.hpp"

template <typename T> class Array {
		public:
			Array() : n_(0), array_(NULL) {};

			Array(unsigned int n) : array_(new T[n]), n_(n) {};

			Array(const Array& copy) {*this = copy;}

			~Array() {delete [] this->array_;};

			const Array&	operator =(const Array& array) {
				if (this == &array) {return (*this);}
				this->array_ = new T[array.n_];
				this->n_ = array.n_;
				for (unsigned int i = 0; i < n_; i++) {
					this->array_[i] = array.array_[i];
				}
				return (*this);
			}

			const T&	operator [](const unsigned int i) {
				if (i >= this->n_) {throw WrongSize();}
				else {return (this->array_[i]);}
			}

			unsigned int	size() const {return (this->n_);}
			void			setValue(unsigned int i, T v) {
				if (i >= n_) {return;}
				array_[i] = v;
			}
			void getArray () {
    			for (unsigned int i = 0; i < n_; i++ ) {
        			std::cout << std::setw(7) << i << std::setw(13) << array_[i]  << std::endl;
				}
				std::cout << "-----------------------------" << std::endl;
			}
			class WrongSize : public std::exception {
				public:
					const char * what() const throw() {return ("Wrong size : Cannot find it in the Array.");}
			};
		private:
			T				*array_;
			unsigned int	n_;
};
