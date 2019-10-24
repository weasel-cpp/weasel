#include "file-io.hpp"

std::vector<char> FileIO::readFileBytes(const std::string& fileName)
{
    std::ifstream file;
    try {
        file.open(fileName, std::ios::binary | std::ios::in);

        file.seekg(0, std::ios::end);
        size_t length = file.tellg();
        file.seekg(0, std::ios::beg);

        std::vector<char> bytes(length);

        file.read(&bytes[0], length);

        file.close();

        return bytes;
    }
    catch(const std::ios_base::failure& fail)
    {
        throw FileIO::Exceptions::FileOpenError;
    }
}

void FileIO::writeFileBytes(const std::string& fileName, const std::vector<char>& bytes)
{
    std::ofstream file;
    try {
        file.open(fileName, std::ios::binary | std::ios::out);
        file.write(&bytes[0], bytes.size());
    }
    catch(const std::ios_base::failure& fail)
    {
        throw FileIO::Exceptions::FileOpenError;
    }
}
