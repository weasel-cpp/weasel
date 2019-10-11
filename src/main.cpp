#include <iostream>

#include "crypt.hpp"
#include "file-io.hpp"

int main(int argc, char** argv)
{

    std::vector<char> bytes = {'a', 'b', 'c'};

    FileIO::writeFileBytes("test.txt", bytes);

    for(char c : FileIO::readFileBytes("test.txt"))
    {
        std::cout << c;
    }
    std::cout << std::endl;

    return 0;
}