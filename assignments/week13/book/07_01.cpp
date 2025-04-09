#include <iostream>
#include <cstdint>

class UnsignedBigInteger {
    public:
        std::vector<uint8_t> digits;
        int value;

        UnsignedBigInteger operator+(const UnsignedBigInteger& other) {
            UnsignedBigInteger result;
            result.value = this->value + other.value;
            return result;
        }

};