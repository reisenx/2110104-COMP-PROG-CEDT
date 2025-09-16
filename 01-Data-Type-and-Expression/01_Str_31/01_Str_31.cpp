/**
 * @file 01_Str_31.cpp
 * @author Worralop Srichainont
 * @brief Decimal to Fraction
 * @date 2025-09-14
 */

#include <iostream>
#include <string>
using namespace std;

int numerator, denominator, factor;
string a, b, c, temp = "";

// Function to calculate Greatest Common Divisor (GCD)
int gcd(int a, int b) {
  if (b == 0)
    return a;
  return gcd(b, a % b);
}

int main() {
  /**
   * Input a decimal number in the form of a.b(c)
   * where a is the integer part
   *       b is the non-repeating decimal part
   *       c is the repeating decimal part
   */
  cin >> a >> b >> c;

  // Calculate numerator and denominator of the fraction
  numerator = stoi(a + b + c) - stoi(a + b);
  denominator = stoi(temp.append(c.length(), '9').append(b.length(), '0'));

  // Simplify the fraction
  factor = gcd(numerator, denominator);
  numerator /= factor;
  denominator /= factor;

  // Output the fraction
  cout << numerator << " / " << denominator << endl;
  return 0;
}
