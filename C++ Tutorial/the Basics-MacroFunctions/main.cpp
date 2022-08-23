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


#include <string>
#include <iostream>
using namespace std ;

int main()
{
  string text = "I can resist anything but temptation." ;
  int num ;

  num = text.find( "resist" , 0 ) ;
  cout << "Position: " << num << endl ;

  num = text.find( "nonsuch" , 0 ) ;
  cout << "Result: " << num << endl ;

  num = text.find_first_of( "If" ) ;
  cout << "First I: " << num << endl ;

  num = text.find_first_not_of( "If" ) ;
  cout << "First not I: " << num << endl ;

  num = text.find_last_of( "t" ) ;
  cout << "Last t: " << num << endl ;

  num = text.find_last_not_of( "t" ) ;
  cout << "Last not t: " << num << endl ;

  return 0 ;
}
