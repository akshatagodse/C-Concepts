#include <iostream>
using namespace std;
class Employee {
  public:
    int age;
  
    //default constructor
    Employee() {
      //data member is defined with the help of default constructor
      age = 50;
    }
};

int main() {
  //object of class Employee declared
  Employee e1;
  //prints value assigned by default   constructor
  cout << e1.age;
  return 0;
}