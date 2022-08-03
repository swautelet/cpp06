#include <iostream>
#include <string>

void	convert_char(char c)
{
	std::cout << "char : '" << c << "'" <<std::endl;
	std::cout << "int : " << static_cast<int>(c) << std::endl;
	std::cout << "float : " << static_cast<float>(c) << std::endl;
	std::cout << "double : " << static_cast<double>(c) << std::endl;
}

void	convert_int(int	in)
{
	char res = 0;
	if (isprint(in))
	{
		res = in;
	}
	if (!res)
	{
		std::cout << "char : non displayable" << std::endl; 
	}
	else
	{
		std::cout << "char : '" << res << "'" << std::endl;
	}
	std::cout << "int : " << in << std::endl;
	std::cout << "float : " << static_cast<float>(in) << std::endl;
	std::cout << "double : " << static_cast<double>(in) << std::endl;
}

void	convert_float(float fl)
{
	char res = 0;
	if (isprint(fl))
	{
		res = fl;
	}
	if (!res)
	{
		std::cout << "char : non displayable" << std::endl; 
	}
	else
	{
		std::cout << "char : '" << res << "'" << std::endl;
	}
	std::cout << "int : " << static_cast<int>(fl) << std::endl;
	std::cout << "float : " << fl << std::endl;
	std::cout << "double : " << static_cast<double>(fl) << std::endl;
}

void	convert_double(double dou)
{
	char res = 0;
	if (isprint(dou))
	{
		res = dou;
	}
	if (!res)
	{
		std::cout << "char : non displayable" << std::endl; 
	}
	else
	{
		std::cout << "char : '" << res << "'" << std::endl;
	}
	std::cout << "int : " << static_cast<int>(dou) << std::endl;
	std::cout << "float : " << static_cast<float>(dou) << std::endl;
	std::cout << "double : " << dou << std::endl;
}

void	deal_except(std::string param)
{
	std::cout << "char : impossible" << std::endl;
	std::cout << "int : impossible" << std::endl;
	if (!param.compare("nan") || !param.compare("nanf"))
	{
		std::cout << "float : nanf" << std::endl;
		std::cout << "double : nan" << std::endl;
	}
	else if (!param.compare("inf") || !param.compare("inff") || !param.compare("+inf") || !param.compare("+inff"))
	{
		std::cout << "float : inff" << std::endl;
		std::cout << "double : inf" << std::endl;
	}
	else if (!param.compare("-inf") || !param.compare("-inff"))
	{
		std::cout << "float : -inff" << std::endl;
		std::cout << "double : -inf" << std::endl;
	}
}

int main(int argc, char **argv)
{ // have redo it to detect type first !
	if (argc != 2)
	{
		std::cout << "Error number of parameter invalid" << std::endl;
		return 0;
	}
	std::string param(argv[1]);
	if (!param.compare("nan") || !param.compare("nanf") || !param.compare("inf") || !param.compare("inff") || !param.compare("-inf") || !param.compare("-inff") || !param.compare("+inf") || !param.compare("+inff"))
	{
		deal_except(param);
	}
	else if (param.front() == '\'' && param.back() == '\'' && param.size() == 3)
	{
		convert_char(param[1]);
	}
	else if (param.find('.') == std::string::npos)
	{
		convert_int(stoi(param));
	}
	else if (param.back() == 'f' && param.find('.') != std::string::npos)
	{
		convert_float(stof(param));
	}
	else if (param.find('.') != std::string::npos)
	{
		convert_double(stod(param));
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
