#include <complex/complex.hpp>

#include <cmath>
#include <iostream>
#include <numbers>
#include <vector>


namespace mc = math::complex;

int main() {
  mc::CxSt z1{1.5, 2.5};
  std::cout << "\n-z1=" << -z1;
  std::cout << "z1=" << z1;

  mc::CxSt z2{ -1.5, 0.5 };
  std::cout << " z2=" << z2;
  std::cout << "\nz1+z2=" << z1 + z2;
//  std::cout << "\nz1-z2=" << z1 - z2;
  auto z_tr = TrFromSt(z1);
  std::cout << "\nz1=" << z1 << " -> " << z_tr;
  auto z_st = StFromTr(z_tr);
  std::cout << " -> " << z_st;
  auto roots_3 = mc::Root(mc::TrFromSt({ 0, -1 }), 4);
}