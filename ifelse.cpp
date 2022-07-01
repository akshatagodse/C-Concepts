#include <iostream>
using namespace std;

int main() {

  int number=2;


  if (number >= 0) {
    cout << "You entered a positive integer: " << number << endl;
  }
  else {
    cout << "You entered a negative integer: " << number << endl;
  }

  cout << "This line is always printed.";

  return 0;
}