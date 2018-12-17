#include <iostream>
using namespace std;
//operator with 2 objects
class Complex { 
private: 
    int real, imag; 
public: 
    Complex(int r = 0, int i =0)  {real = r;   imag = i;} 
      
    // This is automatically called when '+' is used with 
    // between two Complex objects 
    Complex operator + (Complex const &obj) { 
         Complex res; 
         res.real = real + obj.real; 
         res.imag = imag + obj.imag; 
         return res; 
    } 
    void print() { cout << real << " + i" << imag << endl; } 
}; 
  
//int main() 
//{ 
//    Complex c1(10, 5), c2(2, 4); 
//    Complex c3 = c1 + c2; // An example call to "operator+" 
//    c3.print(); 
//} 

//operator with one object

// CPP program to illustrate 
// operators that can be overloaded 
#include <iostream> 
using namespace std; 
  
class overload { 
private: 
    int count; 
  
public: 
    overload() 
        : count(4) 
    { 
    } 
  
    void operator--() 
    { 
        count = count * 10; 
    } 
    void Display() 
    { 
        cout << "Count: " << count; 
    } 
}; 
  
int main() 
{ 
    overload i; 
    // this calls "function void operator ++()" function 
    --i; 
    i.Display(); 
    return 0; 
}
