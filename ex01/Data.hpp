#ifndef DATA_HPP
# define DATA_HPP

#include <iostream>
#include <string>

class Data{
	public:
		Data();
		Data(std::string name);
		~Data();
		Data(const Data& copi);
		Data& operator =(const Data& copi);

	private:
		std::string _name;
		
	protected:

};
Data*	deserialize(uintptr_t raw);
uintptr_t serialize(Data* ptr);

#endif