/**
 * @file 01_Expr_12.cpp
 * @author Worralop Srichainont
 * @brief Body Surface Area
 * @date 2025-09-13
 */

#include <cmath>
#include <iomanip>
#include <iostream>
using namespace std;

double weight, height;

int main() {
  // Input weight and height
  cin >> weight >> height;

  // Calculate Body Surface Area
  double mosteller = sqrt(weight * height) / 60.0;
  double haycock = 0.024265 * pow(weight, 0.5378) * pow(height, 0.3964);
  double dubois = 0.0333 * pow(weight, 0.6157 - (0.0188 * log10(weight))) *
                  pow(height, 0.3);

  // Output the results
  cout << setprecision(15) << mosteller << endl;
  cout << setprecision(15) << haycock << endl;
  cout << setprecision(15) << dubois << endl;
  return 0;
}
