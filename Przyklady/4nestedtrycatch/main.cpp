#include <string>
#include <iostream>

int main() {
	try {
		try {
			try {
				bool wszystkoJestOk = false;
				if (!wszystkoJestOk) {
					throw "ojejku!";
				}
			}
			catch (...) {
				std::cout << "nie daje rady!\n";
				throw;
			}
		}
		catch (...) {
			std::cout << "uh uh!\n";
			throw;
		}
	} 
	catch (...) {
		std::cout << "dobra, teraz damy rade!\n";
	}
	return 0;
}





