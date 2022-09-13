//
//  main.cpp
//  the Basics-Vector
//
//  Created by Liang Zhao on 8/15/22.
#include <vector>
#include <iostream>
//using namespace std ;
//
//int main()
//{
//  vector <int> vec(3,100) ;
//
//  cout << "Vector size: " << vec.size() << endl ;
//  cout << "Is empty?: " << vec.empty() << endl ;
//  cout << "First element: " << vec.at(0) << endl ;
//
//  vec.pop_back() ; // Remove final element.
//  cout << "Vector size: " << vec.size() << endl ;
//  cout << "Final element: " << vec.back() << endl;
//
//  vec.clear() ; // Remove all elements.
//  cout << "Vector size: " << vec.size() << endl;
//
//  vec.push_back( 200 ) ; // Add an element.
//  cout << "Vector size: " << vec.size() << endl ;
//  cout << "First element: " << vec.front() << endl ;
//
//  return 0 ;
//}



//
//Write a program to create a vector with ten int elements.
//Using an iterator, assign each element a value that is twice its current value.
// Test your program by printing the vector.
//

#include <vector>
#include <iostream>
#include <iterator>

using std::vector; using std::iterator; using std::cout;

int main()
{
    vector<int> v{ 0, 1, 2, 3, 4, 5, 6, 7, 8, 9 };
    for (auto it = v.begin(); it != v.end(); ++it) *it *= 2;
    for (auto i : v) cout << i << " ";

    return 0;
}
