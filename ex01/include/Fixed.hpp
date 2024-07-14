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
        int getRawBits(void) const;
        void setRawBits(const int value);
        float toFloat(void) const;
        int toInt(void) const;
};

std::ostream &operator<<(std::ostream &os, const Fixed &rhs);