#include "../include/Fixed.hpp"
#include <cmath>

const int Fixed::_bits = 8;

Fixed::Fixed(void)
{
    _value = 0;
}

Fixed::Fixed(const int value)
{
    _value = value * (1 << _bits);
}

Fixed::Fixed(const float value)
{
    _value = roundf(value * (1 << _bits));
}

Fixed::Fixed(const Fixed &fixed)
{
    *this = fixed;
}

float Fixed::toFloat(void) const
{
    return static_cast<float>(_value) / (1 << _bits);
}

int Fixed::toInt(void) const
{
    return static_cast<int>(_value >> _bits);
}

int Fixed::getRawBits() const
{
    return _value;
}

void Fixed::setRawBits(const int value)
{
    _value = value;
}

Fixed::~Fixed(void)
{
}

std::ostream &operator<<(std::ostream &os, const Fixed &rhs)
{
    os << rhs.toFloat();
    return os;
}

Fixed &Fixed::operator=(const Fixed &rhs)
{
    if (this != &rhs)
        _value = rhs._value;
    return *this;
}

bool Fixed::operator>(const Fixed &rhs) const
{
    return _value > rhs._value;
}

bool Fixed::operator<(const Fixed &rhs) const
{
    return _value < rhs._value;
}

bool Fixed::operator>=(const Fixed &rhs) const
{
    return _value >= rhs._value;
}

bool Fixed::operator<=(const Fixed &rhs) const
{
    return _value <= rhs._value;
}

bool Fixed::operator==(const Fixed &rhs) const
{
    return _value == rhs._value;
}

bool Fixed::operator!=(const Fixed &rhs) const
{
    return _value != rhs._value;
}

Fixed Fixed::operator+(const Fixed &rhs) const
{
    Fixed fixed;
    fixed.setRawBits(_value + rhs._value);
    return fixed;
}

Fixed Fixed::operator-(const Fixed &rhs) const
{
    Fixed fixed;
    fixed.setRawBits(_value - rhs._value);
    return fixed;
}

Fixed Fixed::operator/(const Fixed &rhs) const
{
    Fixed fixed;
    fixed.setRawBits((_value << _bits) / rhs._value);
    return fixed;
}

Fixed Fixed::operator*(const Fixed &rhs) const
{
    Fixed fixed;
    fixed.setRawBits((_value * rhs._value) >> _bits);
    return fixed;
}

Fixed &Fixed::operator++()
{
    this->_value++;
    return *this;
}

Fixed &Fixed::operator--()
{
    this->_value--;
    return *this;
}

Fixed Fixed::operator++(int)
{
    Fixed temp = *this;
    this->_value++;
    return temp;
}

Fixed Fixed::operator--(int)
{
    Fixed temp = *this;
    this->_value--;
    return temp;
}

Fixed &Fixed::min(Fixed &a, Fixed &b)
{
    if (a < b)
        return a;
    return b;
}

const Fixed &Fixed::min(const Fixed &a, const Fixed &b)
{
    if (a < b)
        return a;
    return b;
}

Fixed &Fixed::max(Fixed &a, Fixed &b)
{
    if (a > b)
        return a;
    return b;
}

const Fixed &Fixed::max(const Fixed &a, const Fixed &b)
{
    if (a > b)
        return a;
    return b;
}
