//=============================================
// C++ Programming in easy steps 6ed. [6:100]
//=============================================

#include <iostream>
using namespace std ;

int main()
{
  // Declare and initialize regular variables.
  int a = 8, b = 16 ;

  // Declare and initialize pointer variables
  // with reference addresses.
  int* aPtr = &a ;

  int* bPtr ;
  bPtr = &b ;

  // Output address of pointers...
  cout << "Addresses of pointers..." << endl ;
  cout << "aPtr: " << &aPtr << endl ;
  cout << "bPtr: " << &bPtr << endl << endl ;

  // Output addresses stored in pointers.
  cout << "Values in pointers..." << endl ;
  cout << "aPtr: " << aPtr << endl ;
  cout << "bPtr: " << bPtr << endl << endl ;

  // Output deferenced values pointed to.
  cout << "Values in addresses pointed to..." << endl ;
  cout << "a: " << *aPtr << endl ;
  cout << "b: " << *bPtr << endl << endl ;

  return 0 ;
}
