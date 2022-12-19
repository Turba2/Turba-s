#include <iosfwd>

struct Rdec2D {
	double x;
	double y;
};
struct Rpol2D {
	double z;
	double ph;
};

std::ostream& operator << (std::ostream& ostrm, const Rdec2D& v);
std::ostream& operator << (std::ostream& ostrm, const Rpol2D& p);
Rdec2D operator+(const Rdec2D& lhs, const Rdec2D& rhs);
Rdec2D operator-(const Rdec2D& lhs, const Rdec2D& rhs);
Rdec2D operator-(Rdec2D& p);
Rdec2D operator*(const Rdec2D& lhs, const double d);
Rdec2D operator/(const Rdec2D& lhs, const double g);
double Dot(const Rdec2D& lhs, const Rdec2D& rhs);
Rdec2D toPol(const Rdec2D& lhs);
Rpol2D toDec(const Rpol2D & lhs);
double norma(const Rdec2D& vec);