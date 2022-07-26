#include <iostream>
#include <string>

int main(int argc, char **argv)
{
	if (argc != 2)
	{
		std::cout << "Error number of parameter invalid" << std::endl;
		return 0;
	}
	std::string param(argv[1]);
	// std::cout << "I received |" << param << "|" << std::endl;
	int i = stoi(param);
	double d = stod(param);
	float f = stof(param);
	if (isprint(i))
	{
		char c = i;
		std::cout << "char: " << c << std::endl;
	}
	else
	{
		std::cout << "char: non displayable" << std::endl; 
	}
	std::cout << std::fixed;
	std::cout << "int: " << i << std::endl;
	// std::cout << std::precision(std::numeric_limits<d>::digits10;
	// std::cout << setprecision(std::numeric_limits<double>::max_digits10) << 0.3;
	std::cout << "double: " << d << std::endl;
	std::cout << "float: " << f << std::endl;
}
