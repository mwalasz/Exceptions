#include <string>
#include <iostream>

class bladPierwszejFunkcji : public std::exception {};
class bladDrugiejFunkcji : public std::exception {};
class niktNieWieCzyjToBlad : public std::exception {};

void pierwszaFunkcja(bool czyRzuci) {
	if (czyRzuci)
		throw bladPierwszejFunkcji();
}

void drugaFunkcja(bool czyRzuci) {
	if (czyRzuci)
		throw bladDrugiejFunkcji();
}

void jakisTajniak(bool czyRzuci) {
	if (czyRzuci)
		throw niktNieWieCzyjToBlad();
}

int main() {
	try {
		pierwszaFunkcja(false);
		drugaFunkcja(true);
		jakisTajniak(false);
	}
	catch (bladPierwszejFunkcji) {
		std::cout << "uwazajcie na pierwsza funkcje!";
	}
	catch (bladDrugiejFunkcji) {
		std::cout << "uwazajcie na druga funkcje!";
	}
	catch (std::exception) {
		std::cout << "to jeszcze ktos inny zawinil!";
	}

	return 0;
}





