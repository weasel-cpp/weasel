#pragma once

#include <vector>
#include <fstream>

namespace FileIO {
    enum class Exceptions { FileOpenError };
    std::vector<char> readFileBytes(const std::string& fileName);
    void writeFileBytes(const std::string& fileName, const std::vector<char>& bytes);
};
