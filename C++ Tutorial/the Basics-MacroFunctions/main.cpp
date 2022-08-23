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

class Parent
{
  public:
    void Common() const { cout << "I am part of this family, " ; }
    virtual void Identify() const { cout << "I am the parent" << endl ; }
} ;

class Child : public Parent
{
  public :
    void Identify() const { cout << "I am the child" << endl ;  }
} ;

class Grandchild : public Child
{
  public :
    void Identify() const { cout << "I am the grandchild" << endl ; }
    void Relate() const { cout << "Grandchild has parent and grandparent" << endl ; }
} ;

int main()
{
  Child son ;
  Grandchild grandson ;

  Parent* ptrChild = &son ;
    Parent* ptrGrandchild = &grandson ;

  ptrChild -> Common() ;
  ptrChild -> Identify( ) ;
  ptrGrandchild -> Common() ;
  ptrGrandchild -> Identify( ) ;

  ptrChild -> Parent::Common() ;
  ptrChild -> Parent::Identify( ) ;

  grandson.Relate() ;

  return 0 ;
}
