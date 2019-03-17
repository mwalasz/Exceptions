//Rozwiazanie zadania 1.

#include <iostream>
#define PI 3.14159265358979

double Circumference(int radius)
{
	if (radius <= 0)
		throw (std::string)"Ups!";
	else return 2 * PI * radius;
}

int main()
{
	int radius = 0;
	try
	{
		std::cout << "Podaj promien kola, ktorego obwod chcesz obliczyc: ";
		std::cin >> radius;
		std::cout << "Obwod kola wynosi: " << Circumference(radius);
	}
	catch (std::string)
	{
		std::cout << "Bledne dane wejsciowe!";
	}

	return 0;
}