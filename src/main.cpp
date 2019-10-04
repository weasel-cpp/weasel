#include <iostream>

#include "crypt.hpp"

int main(int argc, char** argv)
{
    std::cout << "String to encrypt: ";
    std::string input;
    std::cin >> input;

    std::cout << "Encrypted: " << caesar_cipher(input, 10) << std::endl;
    
    return 0;
}