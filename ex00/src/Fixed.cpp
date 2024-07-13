#include "Fixed.hpp"

const int Fixed::_bits = 8;

Fixed::Fixed(void)
{
    std::cout << "Default constructor called" << std::endl;
    _value = 0;
}

Fixed::Fixed(Fixed &fixed)
{
    std::cout << "Copy constructor called" << std::endl;
    *this = fixed;
}

Fixed &Fixed::operator=(Fixed &rhs)
{
    std::cout << "Copy assignment operator called" << std::endl;
    if (this != &rhs)
        _value = rhs.getRawBits();
    return *this;
}

int Fixed::getRawBits() const
{
    std::cout << "getRawBits member function called" << std::endl;
    return _value;
}

void Fixed::setRawBits(const int value)
{
    std::cout << "setRawBits member function called" << std::endl;
    _value = value;
}

Fixed::~Fixed(void)
{
    std::cout << "Destructor called" << std::endl;
}