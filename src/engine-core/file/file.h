#pragma once

#include <iostream>
#include <string>
#include <fstream>
#include <sstream>
#include <cerrno>

namespace File {
    std::string ReadFile(const char *path);
}
