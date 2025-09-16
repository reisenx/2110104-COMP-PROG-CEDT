/**
 * @file 01_Expr_11.cpp
 * @author Worralop Srichainont
 * @brief An Expression
 * @date 2025-09-13
 */

#include <cmath>
#include <iostream>
using namespace std;

double a = M_PI - ((10 * 9 * 8 * 7 * 6 * 5 * 4 * 3 * 2 * 1) / pow(8, 8));
double b = pow(log(9.7), ((7 / sqrt(71)) - sin(40 * (M_PI / 180))));
double c = pow(1.2, cbrt(2.3));

int main() {
  cout << (a + b) / c << endl;
  return 0;
}