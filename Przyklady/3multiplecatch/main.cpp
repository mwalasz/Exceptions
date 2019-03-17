#include <string>
#include <iostream>

void mozeRzuciInt(bool czyRzuci) {
	if (czyRzuci)
		throw 1;
}

void mozeRzuciChar(bool czyRzuci) {
	if (czyRzuci)
		throw 'a';
}

void mozeRzuciBool(bool czyRzuci) {
	if (czyRzuci)
		throw true;
}

int main() {
	try {
		mozeRzuciInt(false);
		mozeRzuciChar(true);
		mozeRzuciBool(false);
	}
	catch (int wyjatek) {
		std::cout << wyjatek << "\n";
		std::cout << "poradzimy sobie z tym intem!\n";
	}
	catch (char wyjatek) {
		std::cout << wyjatek << "\n";
		std::cout << "poradzimy sobie z tym charem!\n";
	}
	catch (bool wyjatek) {
		std::cout << wyjatek << "\n";
		std::cout << "poradzimy sobie z tym boolem!\n";
	}

	return 0;
}
