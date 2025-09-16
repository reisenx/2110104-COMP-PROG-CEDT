/**
 * @file 01_Str_11.cpp
 * @author Worralop Srichainont
 * @brief Citizen ID
 * @date 2025-09-14
 */

#include <iostream>
#include <string>
using namespace std;

string citizen_id;
int last_digit;

int main() {
  // Input the Citizen ID
  cin >> citizen_id;

  // Calculate the last digit
  last_digit = (citizen_id[0] - '0') * 13 + (citizen_id[1] - '0') * 12 +
               (citizen_id[2] - '0') * 11 + (citizen_id[3] - '0') * 10 +
               (citizen_id[4] - '0') * 9 + (citizen_id[5] - '0') * 8 +
               (citizen_id[6] - '0') * 7 + (citizen_id[7] - '0') * 6 +
               (citizen_id[8] - '0') * 5 + (citizen_id[9] - '0') * 4 +
               (citizen_id[10] - '0') * 3 + (citizen_id[11] - '0') * 2;
  last_digit = (11 - (last_digit % 11)) % 10;

  // Output the citizen ID with last digit
  cout << citizen_id[0] << "-";
  cout << citizen_id.substr(1, 4) << "-";
  cout << citizen_id.substr(5, 5) << "-";
  cout << citizen_id.substr(10, 2) << "-";
  cout << last_digit << endl;
  return 0;
}
