// dynamic_cast
//dynamic_cast can also cast null pointers even between pointers to unrelated classes, 
//and can also cast pointers of any type to void pointers (void*)
//http://www.cplusplus.com/doc/oldtutorial/typecasting/
#include <iostream>
#include <exception>
using namespace std;

class CBase { virtual void dummy() {} };
class CDerived: public CBase { int a; };

int main () {
    CBase * pba = new CDerived;
    CBase * pbb = new CBase;
    CDerived * pd;

    pd = dynamic_cast<CDerived*>(pba); //casting from base to derived for derived obj
    if (pd==0) cout << "Null pointer on first type-cast" << endl;

    pd = dynamic_cast<CDerived*>(pbb); //casting from base to derived for base obj
    //void* ptr = dynamic_cast<void*>(pbb) will work for dynamic_casting
    //CBase* ptr = dynamic_cast<CBase*>(pd); //castin null pointer will also work
    if (pd==0) cout << "Null pointer on second type-cast" << endl;
  return 0;
}

