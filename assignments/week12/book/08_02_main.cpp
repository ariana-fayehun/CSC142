# include "08_02_header.h"
# include <iostream>

int main() {
    PrimeNumberRange prime(20);

    int primes;

    while ((primes = prime.nextPrime()) != -1) {
        std::cout << primes << std::endl;

    }
}