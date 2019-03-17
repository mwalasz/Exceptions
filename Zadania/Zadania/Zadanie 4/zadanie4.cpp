//zad.4 Uzyc Google do wyszukania, jakich wyjatkow nalezy spodziewac sie po nieprawidlowym uzyciu funkcji 
// zastosowanych w programie. Zabezpieczyc funkcje main tak, aby program konczyl sie kodem 0 (prawidlowo).
// Kazde bledne uzycie funkcji powinno byc zakomunikowane na standardowym wyjsciu (cout) za pomoca 
// funkcji what() wyrzucanego wyjatku.

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
	runTypeId();
	runDynamicCast();
	runRange();

	return 0;
}
