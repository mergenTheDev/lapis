#include "file.h"

std::string File::ReadFile(const char *path) {
    std::ifstream in(path, std::ios::binary);

	if (in) {
		std::string file;
		in.seekg(0, std::ios::end);
		file.resize(in.tellg());
		in.seekg(0, std::ios::beg);
		in.read(&file[0], file.size());
		in.close();
		return(file);
	}

	//throw(errno);
	return "";
}