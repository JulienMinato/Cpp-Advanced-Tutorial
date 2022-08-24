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
