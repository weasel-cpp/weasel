#include "crypt.hpp"

std::string caesar_cipher(const std::string& input, int shift)
{
    std::string cipher;

    for(char c : input)
    {
        cipher += ('a' + (c - 'a' + shift) % 26);
    }

    return cipher;
}

std::string caesar_decipher(const std::string& input, int shift)
{
    return caesar_cipher(input, - shift);
}
