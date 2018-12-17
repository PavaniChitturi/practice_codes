// bad_alloc standard exception
#include <iostream>
#include <exception>
#include <typeinfo>
using namespace std;

struct S { // The type has to be polymorphic
    virtual void f();
};

int main () {
  try
  {
  	int arr[100];
  	arr[105] = 10;
  }
  catch (exception& e)
  {
    cout << "Standard exception: " << e.what() << endl;
  }
  return 0;
}
