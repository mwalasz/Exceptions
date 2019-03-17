//Rozwiazanie zadania 4.

#include <iostream>
#include <typeinfo>
#include <new>
#include <vector>

struct firstStructure { 
	virtual void someFunction() {}
};

struct secondStructure { 
	virtual ~secondStructure() {} 
};

void runTypeId() {
	firstStructure* p = nullptr;
	std::cout << typeid(*p).name() << '\n';
}

void runDynamicCast() {
	firstStructure f;
	secondStructure& s = dynamic_cast<secondStructure&>(f);
}

void runRange() {
	std::vector<int> myvector(10);
	myvector.at(20) = 100;
}

int main()
{
	try {
		runTypeId();
	}
	catch (const std::bad_typeid& e) {
		std::cout << e.what() << '\n';
	}
	try {
		runDynamicCast();
	}
	catch (const std::bad_cast& e) {
		std::cout << e.what() << '\n';
	}
	try {
		runRange();
	}
	catch (const std::out_of_range& e) {
		std::cout << e.what() << '\n';
	}

	return 0;
}
