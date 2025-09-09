#pragma once

#include "../core.h"
#include "../file/file.h"
#include "../../../lib/gl/gl.h"
#include <iostream>
#include <string>
#include <fstream>
#include <sstream>
#include <cerrno>

class Shader {
    public:
        static GLuint LoadShader(const char *fragment);
};


