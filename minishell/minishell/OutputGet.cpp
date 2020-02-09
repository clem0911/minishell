#include <iostream>
#include "OutputGet.h"

std::string OutputGet::output() {
	std::string name;
	std::getline(std::cin, name);
	return name;
}

std::string OutputGet::getOutput() {
	while (1) {
		std::string out = output();
		std::cout << out << std::endl;
	}
	return "";
}