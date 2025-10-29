/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rde-fari <rde-fari@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/09 15:24:16 by rde-fari          #+#    #+#             */
/*   Updated: 2025/08/19 16:06:09 by rde-fari         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_HPP
# define FIXED_HPP

# include <iostream>
# include <cmath>

class Fixed {
	private:
		int					_fixedPoint;
		static const int	_fracBits = 8;
	public:
		Fixed();
		Fixed(const int intToFixed);
		Fixed(const float floatToFixed);
		Fixed(const Fixed& other);
		Fixed&	operator=(const Fixed& other);
		~Fixed();
		int		getRawBits(void) const;
		void	setRawBits(const int raw);
		int		toInt( void ) const;
		float	toFloat( void ) const;
		
};

std::ostream& operator<<(std::ostream& os, Fixed const& rhs);

#endif
