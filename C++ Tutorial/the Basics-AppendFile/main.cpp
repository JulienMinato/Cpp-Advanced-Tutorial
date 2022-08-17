//
//  main.cpp
//  the Basics-AppendFile
//
//  Created by Liang Zhao on 8/16/22.
//

#include <fstream>
#include <string>
#include <iostream>
using namespace std;

int main()
{
  string info = "\n\tThe Ballad of Reading Gaol" ;
  info.append( "\n\t\t\tOscar Wilde 1898" ) ;

  ofstream writer( "poem.txt" , ios::app ) ;

  if( ! writer )
  {
    cout << "Error opening file for output" << endl ;
    return -1 ;
  }
  
  writer << info << endl ;
  
  writer.close() ;

  return 0 ;
}
