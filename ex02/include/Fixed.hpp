#pragma once

#include <iostream>

class Fixed
{
    private:
        int                 _value;
        static const int    _bits;

    public:
        Fixed(void);
        Fixed(const Fixed &fixed);
        Fixed(const int value);
        Fixed(const float value);
        ~Fixed(void);
        Fixed &operator=(const Fixed &rhs);
        bool operator>(const Fixed &rhs) const;
        bool operator<(const Fixed &rhs) const;
        bool operator>=(const Fixed &rhs) const;
        bool operator<=(const Fixed &rhs) const;
        bool operator==(const Fixed &rhs) const;
        bool operator!=(const Fixed &rhs) const;
        Fixed operator+(const Fixed &rhs) const;
        Fixed operator-(const Fixed &rhs) const;
        Fixed operator*(const Fixed &rhs) const;
        Fixed operator/(const Fixed &rhs) const;
        Fixed &operator++();
        Fixed &operator--();
        Fixed operator++(int);
        Fixed operator--(int);
        int getRawBits(void) const;
        void setRawBits(const int value);
        float toFloat(void) const;
        int toInt(void) const;
        static Fixed &min(Fixed &, Fixed &);
        static const Fixed &min(const Fixed &, const Fixed &);
        static Fixed &max(Fixed &, Fixed &);
        static const Fixed &max(const Fixed &, const Fixed &);

};

std::ostream &operator<<(std::ostream &os, const Fixed &rhs);