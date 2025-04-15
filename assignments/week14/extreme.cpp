#include <iostream>
#include <string>
#include <cctype>

int decode_char(char letter) {
    return toupper(letter) - 'A' + 1;
}

int decode_char(char letter, int bonus){
    return decode_char(letter) + bonus;
}
int decode_message(std::string& message, int index = 0) {
    if(index >= message.size()){
        return 0;
    }
}
std::string yoda_shift(std::string msg, int shift = 2); // Caesar cipher

// ??