//
//  main.cpp
//  the Basics-Except
//
//  Created by Liang Zhao on 8/19/22.
//

#include <stdexcept>
#include <fstream>
#include <string>
#include <iostream>

#include <typeinfo>

using namespace std;

int main()
{
  string lang =  "C++" ;
  int num = 1000000000; // One billion.

  try
  {
    lang.replace( 100, 1, "C" ) ; // 1. out_of_range exception

    //lang.resize( 3 * num ); // 2. length error

    //ifstream reader( "nonsuch.txt" ) ;
    //if( ! reader ) throw logic_error("File not found" ); // 3. logic_error
  }
  catch( out_of_range &e )
  {
    cerr << "Range Exception: " << e.what() << endl ;
    cerr << "Exception Type: " << typeid( e ).name() ;
    cout << endl << "Program terminated." << endl ;
    return -1 ;
  }
  catch( exception &e )
  {
    cerr << "Exception: " << e.what() << endl ;
    cerr << "Exception Type: " << typeid( e ).name() << endl ;
  }
  
  cout << "Program continues..." << endl ;

  return 0 ;
}
