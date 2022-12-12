#include <iostream>
#include<complex/complex.hpp>

int main() {
	Rdec2D point1{ 3,4 };
	Rdec2D point2{ 5,7 };
	Rpol2D vector1{ 14.8 , 1.4 };
	std::cout << "point1 " << point1 << std::endl;
	auto point3 = point1 + point2;

	std::cout << "point3 " << point3 << std::endl;
	
	auto point4 = point1 - point2;
	std::cout << "point4" << point4 << std::endl;

	auto point5 = -point1;
	std::cout << "point5= " << point5 << std::endl;

	double t = 6;
	auto point6 = point1 * t;
	std::cout << "point6=" << point6 << std::endl;

	double f = 2;
	auto point7 = point1 / f;
	std::cout << "point7 " << point7 << std::endl;

	double len_norm;
	len_norm = norma(point2);
	std::cout << "Length of vector 2 = " << len_norm << std::endl;

	double proizvedenie;
	proizvedenie = Dot(point1, point2);
	std::cout << "Skalzrnoe proizvedenie 1 and 2 = " << proizvedenie << std::endl;

	auto points_in_dec = toDec(vector1);
	std::cout << "Points in dec " << points_in_dec << std::endl;

	auto points_in_pol = toPol(point1);
	std::cout << "Points in pol  " << points_in_pol << std::endl;
	
}
