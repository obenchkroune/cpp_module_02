#pragma once

#include <iostream>

class Fixed
{
    private:
        int                 _value;
        static const int    _bits;

    public:
        Fixed(void);
        Fixed(Fixed &fixed);
        ~Fixed(void);
        Fixed &operator=(Fixed &rhs);
        int getRawBits(void) const;
        void setRawBits(const int value);
};