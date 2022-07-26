#include "Data.hpp"

Data::Data():_name("default")
{

}

Data::Data(std::string name):_name(name)
{

}

Data::Data(const Data& copi)
{
	(void) copi;
}

Data::~Data()
{

}

Data& Data::operator =(const Data& copi)
{
	(void) copi;
	return (*this);
}

uintptr_t serialize(Data* ptr)
{
	void* tmp = (void *)ptr;
	uintptr_t ret = (uintptr_t)tmp;
	return ret;
}

Data*	deserialize(uintptr_t raw)
{
	void* tmp = (void *) raw;
	Data* ret = (Data *) tmp;
	return ret;
}