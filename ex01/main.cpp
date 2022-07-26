#include "Data.hpp"

int main()
{
	Data * nu = NULL;
	std::cout << nu << std::endl;
	uintptr_t res = serialize(nu);
	std::cout << res << std::endl;
	nu = deserialize(res);
	std::cout << nu << std::endl << std::endl;

	Data test;
	nu = &test;
	std::cout << nu << std::endl;
	res = serialize(nu);
	std::cout << res << std::endl;
	nu = deserialize(res);
	std::cout << nu  << std::endl << std::endl;

	Data test1("lol");
	nu = &test1;
	std::cout << nu << std::endl;
	res = serialize(nu);
	std::cout << res << std::endl;
	nu = deserialize(res);
	std::cout << nu  << std::endl << std::endl;
}