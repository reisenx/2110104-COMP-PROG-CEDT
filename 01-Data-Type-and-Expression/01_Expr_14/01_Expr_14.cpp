/**
 * @file 01_Expr_14.cpp
 * @author Worralop Srichainont
 * @brief Songkran
 * @date 2025-09-13
 */

#include <cmath>
#include <iostream>
using namespace std;

int year;

int main() {
  // Input the year
  cin >> year;

  // Convert from Bhuddist Era (BE) to Common Era (CE)
  year -= 543;

  // Calculate and output the Songkran Day
  cout << ((year % 100) + ((year % 100) / 4) + 11) % 7 << endl;
  return 0;
}