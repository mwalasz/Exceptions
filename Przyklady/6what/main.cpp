#include <string>
#include <iostream>

class bladNiezawiazanychSznurowek : public std::exception {
public:
	const char * what() throw() {
		return "Nastepnym razem zawiaz buty!";
	}
};

void ktosTuSieWywroci() {
	throw bladNiezawiazanychSznurowek();
}

int main() {
	try {
		ktosTuSieWywroci();
	}
	catch (bladNiezawiazanychSznurowek &e) {
		std::cout << e.what();
	}

	return 0;
}
