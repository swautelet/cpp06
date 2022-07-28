#include <iostream>
#include <string>

void	convert_char(char c)
{

}

void	convert_int(int	in)
{

}

void	convert_float(float fl)
{

}

void	convert_double(double dou)
{

}

int main(int argc, char **argv)
{ // have redo it to detect type first !
	if (argc != 2)
	{
		std::cout << "Error number of parameter invalid" << std::endl;
		return 0;
	}
	std::string param(argv[1]);
	if (param.front() == '\'' && param.back() == '\'' && param.size() == 3)
	{
		convert_char(param[1]);
	}
	// std::cout << "I received |" << param << "|" << std::endl;
	// if (param.compare("+inf") == 0 || param.compare("inf") == 0 || param.compare("+inff") == 0 || param.compare("inff") == 0)
	// {
	// 	return 0;
	// }
	// else if (!param.compare("-inf") || !param.compare("-inff"))
	// {
	// 	return 0;
	// }
	// else if (!param.compare("nan") || !param.compare("nanf"))
	// {
	// 	return 0;
	// }
	// int i = stoi(param);
	// double d = stod(param);
	// float f = stof(param);
	// if (isprint(i))
	// {
	// 	char c = i;
	// 	std::cout << "char: " << c << std::endl;
	// }
	// else
	// {
	// 	std::cout << "char: non displayable" << std::endl; 
	// }
	// std::cout << std::fixed;
	// std::cout << "int: " << i << std::endl;
	// // std::cout << std::precision(std::numeric_limits<d>::digits10;
	// // std::cout << setprecision(std::numeric_limits<double>::max_digits10) << 0.3;
	// std::cout << "double: " << d << std::endl;
	// std::cout << "float: " << f << std::endl;
}
