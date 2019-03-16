//zad.3 Napisaæ funkcje ThrowSomething, ktora na podstawie przekazanego do niej typu zwroci wyjatek tego typu wraz z jakas wartoscia.
// Ma wykrywac pierwsze 4 typy z enum Type, natomiast w innym wypadku ma wyrzucac tekst "Nieznany typ!".
// Napisac odpowiednio zagniezdzone instrukcje try/catch w funkcji ExceptionHandler,
// tak by najpierw lapala znane typy, a dopiero w ostatecznosci nieznane typy.
// W kazdym bloku catch ma zostac wypisana nazwa typu oraz wartosc rzuconego wyjatku.

#include <iostream>
#include <string>

enum Type {Bool, Char, Double, Int, Unknown};

void ThrowSomething(Type t)
{
	//przyklad rzucenia wyjatku danego typu z jakas wartoscia
	throw (int)(2); 
}

void ExceptionHandler(Type type)
{
	double d = 0;
	//przyklad wypisania dla jednego z typow
	std::cout << "Double: " << d; 
}

int main()
{
	ExceptionHandler(Bool);

	return 0;
}
