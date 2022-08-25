//
//  main.cpp
//  the Basics-MacroFunctions
//
//  Created by Liang Zhao on 8/21/22.
//

#define SQUARE(n) ( n * n )
#define CUBE(n) ( n * n * n )

#include <iostream>
using namespace std ;

inline int square( int n ) { return ( n * n ); }
inline int cube( int n ) { return ( n * n * n ); }

int main()
{
  int num = 5 ;

  cout << "Macro SQUARE: " << SQUARE( num ) << endl ;
  cout << "Inline square: " << square( num ) << endl ;

  cout << "Macro CUBE: " << CUBE( num ) << endl ;
  cout << "Inline cube: " << cube( num ) << endl ;

  return 0 ;
}


#include <iostream>
using namespace std ;

int main()
{
  int num ;
  
  int &rNum = num ;

  rNum = 400 ;

  cout << "Value direct: " << num << endl ;
  cout << "Value via reference: " << rNum << endl ;

  cout << "Address direct: " << &num << endl ;
  cout << "Address via reference: " << &rNum << endl ;

  rNum *= 2 ;

  cout << "Value direct: " << num << endl ;
  cout << "Value via reference: " << rNum << endl ;

  return 0 ;
}


#include <iostream>
using namespace std ;

int main()
{
  int nums[] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 } ;

  // Pointer assigns address of element zero.
  int* ptr = nums ;

  cout << endl << "ptr at: " << ptr << " gets: " << *ptr ;

  // Increment to element one.
  ptr++ ;
  cout << endl << "ptr at:\t" << ptr << " gets: " << *ptr  ;

  // Increment again to element two.
  ptr++ ;
  cout << endl << "ptr at: " << ptr << " gets: " << *ptr ;

  // Decrement again to element zero.
  ptr -= 2 ;
  cout << endl << "ptr at: " << ptr << " gets: " << *ptr ;
  
  // (Added for formatting.)
  cout << endl ;

  for( int i = 0 ; i < 10 ; i++ )
  {
    cout << endl << "Element: " << i ;
    cout << "    Value: " << *ptr ;
    ptr++ ;
  }

  // (Added for formatting).
  cout << endl << endl ;

  return 0 ;
}



#include <string>
#include <iostream>
using namespace std ;

int main()
{
  string str = "C++" ;

  try
  {
    str.erase( 4 , 6) ;
  }
  catch( exception &error )
  {
    cerr << "Exception: " << error.what() << endl ;
  }

  return 0 ;
}



#include <iostream>
using namespace std ;

int main()
{
  int num = 3 ;

  switch ( num )
  {
    case 1 : cout << num << " : Monday" ; break ;
    case 2 : cout << num << " : Tuesday" ; break ;
    case 3 : cout << num << " : Wednesday"  ; break ;
    case 4 : cout << num << " : Thursday" ; break ;
    case 5 : cout << num << " : Friday" ; break ;

    default : cout << num << " : Weekend day" ;
  }
  cout << endl ;
  return 0 ;
}
