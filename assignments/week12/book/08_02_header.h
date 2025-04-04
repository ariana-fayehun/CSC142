# pragma once

class PrimeNumberRange{
    private:
        int currentNum;
        int maxNum;

        bool checkIfPrime(int num) {
            if(num < 2) {
                return false;
            }
            for (int i = 2; i * i <= num; i++) {
                if (num % i == 0) return false; // Divisible by another number
            }
            return true;
        }

    public:
        PrimeNumberRange(int max) {
            maxNum = max;
            currentNum = 2;

        }

        int nextPrime() {
            while(currentNum < maxNum) {
                if(checkIfPrime(currentNum)) {
                    return currentNum++;
                }
            }
            return -1;
            
        }
    };