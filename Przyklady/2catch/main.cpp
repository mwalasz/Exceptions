#include <string>
#include <iostream>

int main() {
	try {
		int dzielnik = 0;

		if (dzielnik == 0) {
			throw (std::string)"ratunku";
		}
	}
	catch (std::string wyjatek) {
		std::cout << wyjatek << "\n";
		std::cout << "poradzimy sobie z tym!\n";
	}
	
	std::cout << "juz wszystko dobrze :)";
	return 0;
}





