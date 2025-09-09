#include "shader.h"

const char *vertexShader;

GLuint LoadShader(const char *vertex, const char *fragment) {
	std::string vertexShaderFile = File::ReadFile(vertex);
	std::string fragmentShaderFile = File::ReadFile(fragment);

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
