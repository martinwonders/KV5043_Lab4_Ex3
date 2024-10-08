#ifndef FILEHANDLING_H
#define FILEHANDLING_H
#include <string>

namespace fileParameters
{
	const std::string FILE_NAME = "example.txt";
}

void readFromFile(const std::string& fileName);

void readFromFile(const std::string& fileName, std::string& fileContents);

void splitString(const std::string& str, char delimiter, std::string result[], const int arraySize);

#endif // FILEHANDLING_H



