/**
 * @file 01_Expr_15.cpp
 * @author Worralop Srichainont
 * @brief An Expression II
 * @date 2025-09-13
 */

#include <cmath>
#include <iostream>
using namespace std;

double x, y;

int main() {
  // Input x
  cin >> x;

  // Calculate y
  y = pow(x, sqrt(log(pow(x + 1, 2)))) / (10 - x);

  // Round y to 6 decimal places
  y = round(y * 1000000) / 1000000;

  // Output y
  cout << y << endl;
  return 0;
}
