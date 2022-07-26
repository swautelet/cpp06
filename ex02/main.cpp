#include "A.hpp"
#include "B.hpp"
#include "C.hpp"

Base* generate(void)
{
	std::srand((unsigned)time(0) + std::rand());
	int lol = std::rand() % 3;
	Base* ret = NULL;
	switch (lol + 1)
	{
	case 1:
		ret = new A;
		return (ret);
		break;
	case 2:
		ret = new B;
		return (ret);
		break;
	case 3:
		ret = new C;
		return (ret);
		break;
	default:
		std::cout << "Error it's never supposed to happen" << std::endl;
		return (NULL);
		break;
	}
}

void identify(Base* p)
{
	if (dynamic_cast<C*>(p))
		std::cout << "This is of type C!" << std::endl;
	if (dynamic_cast<A*>(p))
		std::cout << "This is of type A!" << std::endl;
	if (dynamic_cast<B*>(p))
		std::cout << "This is of type B!" << std::endl;
}

void identify(Base& p)
{
	if (dynamic_cast<C*>(&p))
		std::cout << "This is of type C!" << std::endl;
	if (dynamic_cast<A*>(&p))
		std::cout << "This is of type A!" << std::endl;
	if (dynamic_cast<B*>(&p))
		std::cout << "This is of type B!" << std::endl;
}

int main()
{
	Base* tester = NULL;
	// std::srand((unsigned)time(0));
	for (int i = 0; i < 10; i++)
	{
		tester = generate();
		identify(tester);
		identify(*tester);
		delete(tester);
		std::cout << std::endl;
	}
}