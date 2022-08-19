//
//  main.cpp
//  the Basics-MultOjbects
//
//  Created by Liang Zhao on 8/18/22.
//

#include <string>
#include <iostream>
using namespace std;

class Dog
{
  int age, weight ;
  string color ;

public:
  void bark() { cout << "WOOF!" << endl ; }

  //void setAge( int yrs ) { age = yrs ; }
  //void setWeight( int lbs ) { weight = lbs ; }
  //void setColor( string hue ) { color = hue ; }

  void setValues( int, int, string ) ; // Prototype.

  int getAge() { return age; }
  int getWeight() { return weight; }
  string getColor() { return color; }
} ;

void Dog::setValues( int age, int weight, string color ) // Definition.
{
  this -> age = age ;
  this -> weight = weight ;
  this -> color = color ;
}

int main()
{
  Dog fido ;

  //fido.setAge( 3 ) ;
  //fido.setWeight( 15 ) ;
  //fido.setColor( "brown" ) ;

  fido.setValues( 3, 15, "brown" ) ;

  cout << "Fido is a " << fido.getColor() << " dog" << endl ;
  cout << "Fido is " << fido.getAge() << " years old" << endl ;
  cout << "Fido weighs " << fido.getWeight() << " pounds" << endl ;

  fido.bark() ;

  Dog pooch ;
  pooch.setValues( 4, 18, "gray" ) ;
  cout << "Pooch is a " << pooch.getAge() ;
  cout << " year old " << pooch.getColor() ;
  cout << " dog who weighs " << pooch.getWeight() ;
  cout << " pounds." ;
  pooch.bark() ;

  return 0 ;
}
