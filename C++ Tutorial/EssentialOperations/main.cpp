#include <iostream>
#include <vector>

using std::cout;
using std::string;
using std::vector;



class NamePhone {
private:
    string name_;
    int phone_;

public:
    NamePhone(string name_in, int phone_in) : name_{name_in}, phone_{phone_in} {};
    string name() const { return name_; }
    int phone() const { return phone_; }
};


// We can use std::sort to sort our own Classes.
// For this, we must define the operations less than (<), greater than (<), and equal (==)
//
// We must define these functions out of the Class, because std::sort expects these functions with
// two arguments.
// When defining these functions inside the class, they only have one parameter and this is not work.
bool operator<(const NamePhone& x, const NamePhone& y) {// less than
    return x.name() < y.name(); // order NamePhones by their names
}

bool operator==(const NamePhone& x, const NamePhone& y) {// less than
    return x.name() == y.name(); // order NamePhones by their names
}

bool operator>(const NamePhone& x, const NamePhone& y) {// less than
    return x.name() > y.name(); // order NamePhones by their names
}



void print(const vector<NamePhone>& phone_book) {
    int i = 0;
    for (const auto& book : phone_book)
        cout << "[" << i++ << "] = {" << book.name() << ", " << book.phone() << "}\n";
    cout << "\n";
}



int main() {
    vector<NamePhone> phone_book = {
            {"Maria Joaquina", 1234},
            {"Carla da Silva", 5677},
            {"Joao da Silva", 9999},
            {"Bruno Andrade", 7777}
    };
    
    cout << "phone book\n";
    print(phone_book);
    cout << "\n";
    
    cout << "ascending book\n";
    std::sort(phone_book.begin(), phone_book.end());
    print(phone_book);
    cout << "\n";
    
    cout << "descending book\n";
    std::sort(phone_book.begin(), phone_book.end(), std::greater<>());
    print(phone_book);
    cout << "\n";
    
    
    return 0;
}



//=============================================
// C++ Programming in easy steps 6ed. [4:70]
//=============================================

#include <string>
#include <iostream>
using namespace std ;

int main()
{
  string lang = "C++" ;
  string term = " Programming" ;
  string text = "C++ Programming" ;

  // Joining strings...
  cout << "Concatenated: " << ( lang + term ) << endl ; // Concatenates strings in output.
  cout << "Original: " << lang << endl ; // But does not change first variable.

  cout << "Appended: " << lang.append( term ) << endl ; // Appends second string in first variable.
  cout << "Original: " << lang << endl << endl ; // And does change first variable.

  // Comparing strings...
  cout << "Differ: " << ( lang == term ) << endl ; // 0 false.
  cout << "Match: " << ( lang == text ) << endl << endl ; // 1 true.

  cout << "Match: " << lang.compare( text ) << endl ; // 0 identical.
  cout << "Differ: " << lang.compare( term ) << endl ; // 1 string arg lower ascii code value.
  cout << "Lower ASCII: " << lang.compare( "zzzzz" ) << endl ; // -1 string arg higher ascii code value.

  return 0 ;
}
