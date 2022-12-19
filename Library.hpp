struct RDec2d {
	double x, y;
	RDec2d() : x(0), y(0) {}
	RDec2d(double x, double y) : x(x), y(y) {}
	RDec2d(RDec2d& a) : x(a.x), y(a.y) {}
	RDec2d(RDec2d& a, RDec2d& b) : x(b.x - a.x), y(b.y - a.y) {}

};

struct RPol2d {
	double x, y, phi;
	RPol2d() : x(0), y(0), phi(0) {}
	RPol2d(double x, double y, double phi) : x(y), y(y), phi(phi) {}
};

RDec2d operator +(const RDec2d& first, const RDec2d& second);

RDec2d operator -(const RDec2d& first, const RDec2d& second);

RDec2d operator *(const RDec2d& first, double coeff);

RDec2d operator /(const RDec2d& first, double coeff);

RDec2d ToDec(const RPol2d first);

RPol2d ToPol(const RDec2d first, double phi);


double Norm(const RDec2d& that) {
	return sqrt(that.x * that.x + that.y * that.y);
}

double Dot(const RDec2d& first_r, const RDec2d& second_r) {
	return first_r.x * second_r.x + first_r.y * second_r.y;
}

RDec2d operator +(const RDec2d& first, const RDec2d& second) {
	return RDec2d(first.x + second.x, first.y + second.y);
}

RDec2d operator -(const RDec2d& first, const RDec2d& second) {
	return RDec2d(first.x - second.x, first.y - second.y);
}

RDec2d operator *(const RDec2d& first, double coeff) {
	return RDec2d(first.x * coeff, first.y * coeff);
}

RDec2d operator /(const RDec2d& first, double coeff) {
	return RDec2d(first.x / coeff, first.y / coeff);
}

RPol2d ToPol(const RDec2d first, double phi) {
	return RPol2d(first.x * cos(phi), first.y * sin(phi), phi);
}

RDec2d ToDec(const RPol2d first) {
	return RDec2d(first.x / cos(first.phi), first.y / sin(first.phi));
}

