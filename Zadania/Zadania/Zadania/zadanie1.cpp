//zad.1 Zabezpiecz poni¿szy kod tak, aby w sytuacji zlych danych wyrzucal wyjatek i wyswietlal komunikat o bledzie

#include "pch.h"
#include <iostream>
#define PI 3.14159265358979

double Circumference(int radius)
{
	return 2 * PI * radius;
}

int main()
{
	int radius = 0;
	std::cout << "Podaj promien kola, ktorego obwod chcesz obliczyc: ";
	std::cin >> radius;
	std::cout << "Obwod kola wynosi: " << Circumference(radius);

	return 0;
}