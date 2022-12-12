#include <iostream>
#include "complex.hpp"


std::ostream& operator << (std::ostream& ostrm, const Rdec2D& v) {
		return ostrm << '(' << v.x << ',' << v.y << ')';
}

std::ostream& operator << (std::ostream& ostrm, const Rpol2D& p) {
	return ostrm << '(' << p.z << ',' << p.ph << ')';
}

Rdec2D operator+(const Rdec2D& lhs, const Rdec2D& rhs) {
	Rdec2D res = { 0,0 };
	res = { lhs.x + rhs.x,  rhs.y + lhs.y };
	return res;
}

Rdec2D operator-(const Rdec2D& lhs, const Rdec2D& rhs) {
	Rdec2D res = { lhs.x - rhs.x, lhs.y - rhs.y };
	return res;
}

Rdec2D operator-(Rdec2D& p) {
	return { p.x * (-1),p.y * (-1) };
}

Rdec2D operator*(const Rdec2D& lhs, const double d) {
	Rdec2D res = { lhs.x * d, lhs.y * d };
	return res;
}

Rdec2D operator/(const Rdec2D& lhs, const double g) {
	Rdec2D res = { lhs.x / g, lhs.y / g };
	return res;
}

Rdec2D change(const Rdec2D& lhs) {
	Rdec2D res{ lhs.y,0 };
	return res;
};

double norma(const Rdec2D& vec)
{
	double r;
	r = sqrt(vec.x * vec.x + vec.y * vec.y);
	return r;
}

double Dot(const Rdec2D& lhs, const Rdec2D& rhs) {
	double pr;
	pr = lhs.x * rhs.x + lhs.y * rhs.y;
	return pr;
}

Rdec2D toPol(const Rdec2D& lhs) {
	Rdec2D PolR{ 0,0 };
	double kX = sqrt(lhs.x * lhs.x + lhs.y * lhs.y);
	double kY = lhs.y / lhs.x;
	PolR = { kX, kY };
	return PolR;
}

Rpol2D toDec(const Rpol2D& lhs) {
	Rpol2D res{ 0,0 };
	double kX = lhs.z * cos(lhs.ph);
	double kY = lhs.z * sin(lhs.ph);
	res = { kX, kY };

	return res;
}

   


