//Rozwiazanie zadania 2.

#include <iostream>
#include <exception>
#include <string>

namespace MathExceptions
{
	class DivideByZeroException : public std::exception
	{
	public:
		const char * what() noexcept
		{
			return "Nie wolno dzielic przez 0! \n";
		}
	};

	class BothNumbersAreZeroException : public std::exception
	{
	public:
		const char * what() noexcept
		{
			return "Obydwie liczby sa rowne 0! \n";
		}
	};
};


double Division(double a, double b)
{
	if (b == 0)
		if (a == 0)
			throw MathExceptions::BothNumbersAreZeroException();
		else
			throw MathExceptions::DivideByZeroException();
	else return a / b;
}

int main()
{
	double a = 20, b = 10;

	try
	{
		std::cout << "Wynik dzielenia: " << a << " / " << b << " = " << Division(a, b);
	}
	catch (MathExceptions::BothNumbersAreZeroException &e)
	{
		std::cout << e.what();
	}
	catch (MathExceptions::DivideByZeroException &e)
	{
		std::cout << e.what();
	}

	std::cout << std::endl << "Brak wyjatkow, wszystko poszlo zgodnie z planem!";

	return 0;
}