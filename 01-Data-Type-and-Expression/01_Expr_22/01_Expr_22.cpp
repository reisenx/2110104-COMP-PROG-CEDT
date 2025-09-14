/**
 * @file 01_Expr_22.cpp
 * @author Worralop Srichainont
 * @brief Eyeball
 * @date 2025-09-13
 */

#include <cmath>
#include <iostream>
using namespace std;

double x_mouse, y_mouse;     // Mouse position
double x_eyeball, y_eyeball; // Eyeball position
double x_pupil, y_pupil;     // Pupil position
double r_eyeball, r_pupil;   // Eyeball radius
double dist;                 // Distance between mouse and eyeball

int main() {
  // Input eyeball position
  cin >> x_eyeball >> y_eyeball;

  // Input radius of eyeball and pupil
  cin >> r_eyeball >> r_pupil;

  // Input mouse position
  cin >> x_mouse >> y_mouse;

  // Calculate pupil position
  dist = sqrt(pow((x_mouse - x_eyeball), 2) + pow((y_mouse - y_eyeball), 2));
  x_pupil =
      (((r_eyeball - r_pupil) * (x_mouse - x_eyeball)) / dist) + x_eyeball;
  y_pupil =
      (((r_eyeball - r_pupil) * (y_mouse - y_eyeball)) / dist) + y_eyeball;

  // Output pupil position
  cout << round(x_pupil) << " " << round(y_pupil) << endl;
  return 0;
}
