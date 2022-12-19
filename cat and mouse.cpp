﻿#include <iostream>
#include <cmath>
#include "geometry.hpp"

double max(double lhs, double rhs) {
    return (lhs > rhs) ? lhs : rhs;
}

struct ex_mouse_cat {
    RDec2d v_mouse, v_cat;
};

void get_ex_mc(ex_mouse_cat& cm, RDec2d vec_cat_to_mouse) {
    std::cin >> cm.v_mouse.x >> cm.v_mouse.y;
    double v_full_cat = 0;
    std::cin >> v_full_cat;
    cm.v_cat = norm(vec_cat_to_mouse) * v_full_cat;
}

void movement(RDec2d& r_mouse, RDec2d& r_cat, const RDec2d vec_cat_to_mouse, ex_mouse_cat& cm, const double dt) {
    r_mouse += cm.v_mouse * dt;
    r_cat += cm.v_cat * dt;
    cm.v_cat = norm(vec_cat_to_mouse) * len(cm.v_cat);
}

bool mouse_hidden(RDec2d r_mouse) {
    return r_mouse.y * r_mouse.y + r_mouse.x * r_mouse.x < 9;
}

int work_with() {
    RDec2d r_mouse, r_cat;
    std::cin >> r_mouse.x >> r_mouse.y >> r_cat.x >> r_cat.y;
    RDec2d vec_cat_to_mouse = r_mouse - r_cat;

    ex_mouse_cat cm;
    get_ex_mc(cm, vec_cat_to_mouse);

    double c_c;
    std::cin >> c_c;

    bool eaten = false;
    bool hidden = false;
    bool escaped = false;

    double dist_before = std::numeric_limits<double>::max();
    double dist_now = len(vec_cat_to_mouse);
    double dt = 0.01 / (max(len(cm.v_mouse), len(cm.v_cat)) * (1 + 9 / exp(dist_now)));
    double t = 0;
    while (!eaten && !hidden && !escaped) {

        if (dist_now <= c_c) {
            eaten = true;
        }
        if (r_mouse.y <= 0) {
            hidden = true;
        }
        if (dist_now >= dist_before) {
            escaped = true;
        }
        dt = 0.001 / (max(len(cm.v_mouse), len(cm.v_cat)) * (1 + 9 / exp(dist_now)));
        t += dt;

        std::swap(dist_before, dist_now);
        movement(r_mouse, r_cat, vec_cat_to_mouse, cm, dt);
        vec_cat_to_mouse = r_mouse - r_cat;
        dist_now = len(vec_cat_to_mouse);
    }
    if (eaten && (hidden || escaped)) {
        std::cout << "Decreas base dt, please";
        return 0;
    }
    if (eaten) {
        std::cout << "Mouse was eaten in " << t << " seconds";
    }
    if (hidden) {
        std::cout << "Mouse hidden in " << t << " seconds";
    }
    if (escaped) {
        std::cout << "Mouse escaped in " << t << " seconds";
    }
    return 0;
}

int main() {
    work_with();
    return 0;
}