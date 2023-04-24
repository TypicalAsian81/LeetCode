#include <iostream>
using namespace std;

class reverse{
    public:

    bool reverse(){
        if(x == reversed_number)
           return true;
        else
           return false;
    }
};

int main() {

  int x, reversed_number = 0, remainder;

  while(x != 0) {
    remainder = x % 10;
    reversed_number = reversed_number * 10 + remainder;
    x /= 10;
  }

  cout << "Reversed Number = " << reversed_number;

   reverse.obj->bool();

  return 0;
}