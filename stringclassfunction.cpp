// string::find_first_not_of
#include <iostream>       // std::cout
#include <string>         // std::string
#include <cstddef>        // std::size_t

int main ()
{
  std::string str ("look for non-alphabetic characters...");
  std::string special_symbols ("*!+ -");
  std::string str1("abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ0123456789 ");
  std::string combined = str1 + check; 
  std::size_t found = str.find_first_not_of(combined);

  if (found!=std::string::npos)
  {
    std::cout << "The first non-alphabetic character is " << str[found];
    std::cout << " at position " << found << '\n';
  }
  else
  {
  	std::cout << "not found"<< std::endl;
  }

  return 0;
}
