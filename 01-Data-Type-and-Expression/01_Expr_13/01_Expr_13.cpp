/**
 * @file 01_Expr_13.cpp
 * @author Worralop Srichainont
 * @brief Quadratic Root
 * @date 2025-09-13
 */

#include <cmath>
#include <iostream>
using namespace std;

double a, b, c;

int main() {
  // Input coefficients a, b, and c
  cin >> a >> b >> c;

  // Calculate the quadratic roots
  double x1 = (-b - sqrt(b * b - 4 * a * c)) / (2 * a);
  double x2 = (-b + sqrt(b * b - 4 * a * c)) / (2 * a);

  // Round to three decimal places
  x1 = round(x1 * 1000) / 1000;
  x2 = round(x2 * 1000) / 1000;

  // Output the roots
  cout << x1 << " " << x2 << endl;
  return 0;
}
