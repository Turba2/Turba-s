struct RDec2d {
    double x = 0;
    double y = 0;
};


double len(RDec2d have) {
    return std::sqrt(have.x * have.x + have.y * have.y);
}

double dist(RDec2d lhs, RDec2d rhs) {
    return std::sqrt((lhs.x - rhs.x) * (lhs.x - rhs.x) + (lhs.y - rhs.y) * (lhs.y - rhs.y));
}

RDec2d norm(RDec2d have) {
    RDec2d tmp(have);
    if (std::abs(len(have)) <= std::numeric_limits<double>::epsilon()) {
        return { 0, 0 };
    }
    tmp.x /= len(have);
    tmp.y /= len(have);
    return tmp;
}

double angle(RDec2d have) {
    return std::atan2(have.y, have.x);
}

RDec2d operator+ (RDec2d const lhs, RDec2d const rhs) {
    RDec2d tmp(lhs);
    tmp.x += rhs.x;
    tmp.y += rhs.y;
    return tmp;
}

RDec2d operator* (RDec2d const lhs, double const rhs) {
    RDec2d tmp = { lhs.x, lhs.y };
    tmp.x *= rhs;
    tmp.y *= rhs;
    return tmp;
}

RDec2d operator/ (RDec2d const lhs, double const rhs) {
    RDec2d tmp = { lhs.x, lhs.y };
    tmp.x /= rhs;
    tmp.y /= rhs;
    return tmp;
}

RDec2d operator- (RDec2d const lhs, RDec2d const rhs) {
    RDec2d tmp(lhs);
    tmp.x -= rhs.x;
    tmp.y -= rhs.y;
    return tmp;
}

void operator+= (RDec2d& const lhs, RDec2d const rhs) {
    RDec2d tmp(lhs);
    lhs.x += rhs.x;
    lhs.y += rhs.y;
}

void operator-= (RDec2d& const lhs, RDec2d const rhs) {
    lhs.x -= rhs.x;
    lhs.y -= rhs.y;
}

double dot(RDec2d lhs, RDec2d rhs) {
    return lhs.x * rhs.x + lhs.y * rhs.y;
}
double cos_between(RDec2d lhs, RDec2d rhs) {
    return std::abs(dot(lhs, rhs)) / (len(lhs) * len(rhs));
}

struct RPol2d {
    double r = 0;
    double phi = 0;
};


RPol2d Rec_to_Pol(RDec2d vec) {
    RPol2d ans (len(vec), angle(vec));
    return ans;
}

RDec2d Rec_to_Pol(RPol2d vec) {
    RDec2d ans (vec.r * std::cos(vec.phi), vec.r * std::sin(vec.phi));
    return ans;
}