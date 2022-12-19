// Copyright 2022 by Polevoy Dmitry under Free Public License 1.0.0

#include <complex/complex.hpp>

#include <cmath>
#include <iostream>
#include <numbers>


namespace mc = math::complex;

mc::CxTr mc::TrFromSt(const mc::CxSt& arg) noexcept {
  mc::CxTr z{ 0.0, 0.0 };
  z.r = std::sqrt(arg.re * arg.re + arg.im * arg.im);
  z.phi = atan2(arg.re, arg.im);
  return { z };
}

mc::CxSt mc::StFromTr(const mc::CxTr& arg) noexcept {
  mc::CxSt z{ 0.0, 0.0 };
  z.re = arg.r * std::cos(arg.phi);
  z.im = arg.r * std::sin(arg.phi);
  return { z };
}

std::ostream& mc::operator<<(std::ostream& ostrm, const mc::CxSt& val) noexcept {
  ostrm << val.re << (0 <= val.im ? '+' : '-') << val.im << 'i';
  return ostrm;
}

std::ostream& mc::operator<<(std::ostream& ostrm, const mc::CxTr& val) noexcept {
  ostrm << '(' << val.r << ',' << val.phi << ')';
  return ostrm;
}

std::vector<mc::CxTr> mc::Root(const mc::CxTr& z, const int n) {
  const auto r = std::pow(z.r, 1 / n);
  auto roots = std::vector<mc::CxTr>(n, mc::CxTr{ r, 0.0 });
  const auto phi_0 = z.phi / n;
  const auto phi_d = std::numbers::pi * 2.0 / n;
  for (int i = 0; i < n; i += 1) {
    roots[i].phi = phi_0 + i * phi_d;
  }
  return roots;
}