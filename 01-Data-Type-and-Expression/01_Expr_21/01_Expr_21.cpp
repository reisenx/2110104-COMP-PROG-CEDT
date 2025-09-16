/**
 * @file 01_Expr_21.cpp
 * @author Worralop Srichainont
 * @brief Duration
 * @date 2025-09-13
 */

#include <iostream>
#define SECONDS_IN_MINUTE 60
#define SECONDS_IN_HOUR 3600
#define SECONDS_IN_DAY 86400

using namespace std;

int h1, m1, s1, t1; // Start time
int h2, m2, s2, t2; // End time
int dh, dm, ds, dt; // Duration

int main() {
  // Input start time and end time
  cin >> h1 >> m1 >> s1;
  cin >> h2 >> m2 >> s2;

  // Convert time to seconds
  t1 = (h1 * SECONDS_IN_HOUR) + (m1 * SECONDS_IN_MINUTE) + s1;
  t2 = (h2 * SECONDS_IN_HOUR) + (m2 * SECONDS_IN_MINUTE) + s2;

  // Calculate duration in seconds
  // Ensure that the duration is non-negative by using modulo operation
  dt = (SECONDS_IN_DAY + t2 - t1) % SECONDS_IN_DAY;

  // Convert the duration to seconds to hours, minutes, and seconds
  dh = dt / SECONDS_IN_HOUR;
  dt = dt % SECONDS_IN_HOUR;
  dm = dt / SECONDS_IN_MINUTE;
  ds = dt % SECONDS_IN_MINUTE;

  // Output duration
  cout << dh << ":" << dm << ":" << ds << endl;
  return 0;
}