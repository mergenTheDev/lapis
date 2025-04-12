#include "shader.h"

std::string readFile(const char *path) {
    std::ifstream in(path, std::ios::binary);

	if (in) {
		std::string shaderFile;
		in.seekg(0, std::ios::end);
		shaderFile.resize(in.tellg());
		in.seekg(0, std::ios::beg);
		in.read(&shaderFile[0], shaderFile.size());
		in.close();
		return(shaderFile);
	}

	throw(errno);
}

GLuint LoadShader(const char *vertex, const char *fragment) {
	std::string vertexShaderFile = readFile(vertex);
	std::string fragmentShaderFile = readFile(fragment);

	const char *vertexSource = vertexShaderFile.c_str();
	const char *fragmentSource = fragmentShaderFile.c_str();

	GLuint shaderProgram = glCreateProgram();
	GLuint vertexShader = glCreateShader(GL_VERTEX_SHADER);
	GLuint fragmentShader = glCreateShader(GL_FRAGMENT_SHADER);

	glShaderSource(vertexShader, 1, &vertexSource, NULL);
	glShaderSource(fragmentShader, 1, &fragmentSource, NULL);
	
	glCompileShader(vertexShader);
	glCompileShader(fragmentShader);

	glAttachShader(shaderProgram, vertexShader);
	glAttachShader(shaderProgram, fragmentShader);

	return shaderProgram;
}
