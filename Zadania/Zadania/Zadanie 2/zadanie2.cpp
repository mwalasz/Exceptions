//zad.2 W przestrzeni nazw MathExceptions, stworz dwie klasy wyjatkow z wirtualna metoda what(): DivideByZeroException oraz BothNumbersAreZeroException.
// Obydwie klasy powinny dziedziczyc z klasy std::exception. Pierwszy wyjatek bylby przeznaczony dla dzielenia przez 0,
// z kolei drugi, gdy zarowno dzielna i dzielnik sa rowne 0.
// Uzupelnij funkcje Division(), by w odpowiednich sytuacjach wyrzucaly odpowiednie, wczesniej utworzone wyjatki.
// W funkcji main zaimplementuj instrukcje try/catch, tak aby byla mozliwosc wykrycia stworzonych wyjatkow.

#include <iostream>
#include <exception>
#include <string>

namespace MathExceptions
{
}

double Division(double a, double b)
{
	return 0;
}

int main()
{
	double a = 20, b = 0; //wartosci dla funkcji Division

	std::cout << "Wynik dzielenia: " << a << " / "<< b << " = " << Division(a, b);

	return 0;
}