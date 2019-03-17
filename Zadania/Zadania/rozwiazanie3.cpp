//Rozwiazanie zadania 3.

#include <iostream>
#include <string>

enum Type { Bool, Char, Double, Int, Unknown };

void ThrowSomething(Type t)
{
	switch (t)
	{
	case 0:
		throw (bool)(true);
	case 1:
		throw (char)'a';
	case 2:
		throw (double)(1.0);
	case 3:
		throw (int)(2);

	default:
		throw (std::string) ("Nieznany typ!");
	}
}

void ExceptionHandler(Type type)
{
	try
	{
		try
		{
			ThrowSomething(type);
		}
		catch (char c)
		{
			std::cout << "Char: " << c;
		}
		catch (int i)
		{
			std::cout << "Int: " << i;
		}
		catch (bool b)
		{
			std::cout << "Bool: " << b;
		}
		catch (double d)
		{
			std::cout << "Double: " << d;
		}
	}
	catch (std::string s)
	{
		std::cout << "Unknown: " << s;
	}
}

int main()
{
	ExceptionHandler((Type)2);
}
