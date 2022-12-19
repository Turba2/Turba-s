// Copyright 2022 by Polevoy Dmitry under Free Public License 1.0.0

#ifndef COMPLEX_COMPLEX_HPP_20221114
#define COMPLEX_COMPLEX_HPP_20221114
#pragma once

#include <iosfwd>
#include <vector>

namespace math {
namespace complex {

// St - Algebraic representation
// Tr - Trigonometric representation
// Ex - Exponential representation

struct CxSt {
  double re = 0.0;   //!< вещественная часть комплексного числа
  double im = 0.0;   //!< мнимая часть комплексного числа
};

struct CxTr {
  double r = 0.0;     //!< модуль комплексного числа
  double phi = 0.0;   //!< аргумент комплексного числа
};


//! \brief Унарный минус.
inline  CxSt operator-(const CxSt& arg) noexcept {
  return { -arg.re, -arg.im };
}


inline CxSt& operator+=(CxSt& lhs, const CxSt& rhs) noexcept {
  lhs.re += rhs.re;
  lhs.im += rhs.im;
  return lhs;
}

inline CxSt operator+(const CxSt& lhs, const CxSt& rhs) noexcept {
  CxSt res = lhs;
  return operator+=(res,  rhs);
}

CxTr TrFromSt(const CxSt& arg) noexcept;

CxSt StFromTr(const CxTr& arg) noexcept;

std::vector<CxTr> Root(const CxTr& z, const int n);

std::ostream& operator<<(std::ostream& ostrm, const CxSt& val) noexcept;

std::ostream& operator<<(std::ostream& ostrm, const CxTr& val) noexcept;

} // namespace complex
} // namespace math


#endif
