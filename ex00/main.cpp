#include <iostream>
#include <string>

int main(int argc, char **argv)
{
	if (argc != 2)
	{
		std::cout << "Error number of parameter invalid" << std::endl;
		return 1;
	}
	std::string param(argv[1]);
	std::cout << param << std::endl;
}
