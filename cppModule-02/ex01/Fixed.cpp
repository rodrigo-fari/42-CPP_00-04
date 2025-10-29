/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rde-fari <rde-fari@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/09 15:24:18 by rde-fari          #+#    #+#             */
/*   Updated: 2025/08/19 15:29:56 by rde-fari         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

Fixed::Fixed() : _fixedPoint(0) { 
	std::cout <<  "Default constructor called" << std::endl;
}

Fixed::Fixed(const int intToFixed) {
	std::cout <<  "Int constructor called" << std::endl;
	//TODO IMPLEMENTATION <--------------------------------------------------------------| IMPORTANT ! |----------------------
}

Fixed::Fixed(const float floatToFixed) {
	std::cout <<  "Float constructor called" << std::endl;
	//TODO IMPLEMENTATION <--------------------------------------------------------------| IMPORTANT ! |----------------------
}

Fixed::Fixed( const Fixed& other ) {
	std::cout << "Copy constructor called" << std::endl;
	*this = other;
}

Fixed& Fixed::operator=( const Fixed& other ) {
	std::cout << "Copy assignment operator called" << std::endl;
	if (this != &other) {
		this->_fixedPoint = other.getRawBits();
	}
	return (*this);
}

Fixed::~Fixed() {
	std::cout << "Default destructor called" << std::endl;
}

int	Fixed::getRawBits( void ) const {
	std::cout << "getRawBits member function called" << std::endl;
	return (this->_fixedPoint);
}

void	Fixed::setRawBits( const int raw ) {
	std::cout << "getRawBits member function called" << std::endl;
	this->_fixedPoint = raw;
}

int		Fixed::toInt( void ) const {
	//TODO IMPLEMENTATION <--------------------------------------------------------------| IMPORTANT ! |----------------------
}

float	Fixed::toFloat( void ) const {
	//TODO IMPLEMENTATION <--------------------------------------------------------------| IMPORTANT ! |----------------------
}

//Overload do operador "<<".
std::ostream& operator<<(std::ostream& os, Fixed const& rhs) {
	os << rhs.toFloat();
	return (os);
}
