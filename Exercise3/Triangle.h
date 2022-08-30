#pragma once

#include <cmath>

/*TODO:
Napisz i przetestuj klase Triangle, ktora w c-torze przyjmuje 3 boki
- dodaj metode getArea, ktora wyliczy pole
pole wylicz za pomoca wzoru Herona: heronsformula
- dodaj metode getPerimeter, ktora wyliczy obwod
- dodaj metode isValid, ktora zwroci prawde, jesli trojkat jest poprawny
Trojkat jest poprawny, gdy suma dlugosci dwoch bokow trojkata jest zawsze wieksza od dlugosci trzeciego boku
- jesli trojkat nie moze istniec, to niech wszystkie funkcje cos wyliczajace zwracaja 0 
*/

class Triangle
{
public:
	Triangle(double side1, double side2, double side3)
		: a(side1), b(side2), c(side3)
	{
	}

	double getPerimeter() const
	{
		double perimeter = 0;

		if (isValid())
		{
			perimeter = a + b + c;
		}
		return perimeter;
	}
	double getArea() const
	{
		double area = 0;

		if (isValid())
		{
			double p = getPerimeter() / 2;
			area = sqrt(p * (p - a) * (p - b) * (p - c));
		}
		return area;	
	}

	bool isValid() const
	{
		return (((a + b) > c) && ((b + c) > a) && ((a + c) > b));
	}
private:
	double a, b, c;
};

