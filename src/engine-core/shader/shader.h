#pragma once

#include "../globals.h"
#include "../../../lib/gl/gl.h"
#include <iostream>
#include <string>
#include <fstream>
#include <sstream>
#include <cerrno>

std::string readFile(const char *path);
GLuint LoadShader(const char *vertex, const char *fragment);

