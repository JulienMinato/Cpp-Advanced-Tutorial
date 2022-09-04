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




### Nonmodifying Sequence Operations

- `all_of()`: Returns true if a predicate test is true for all elements. (C++11)
- `any_of()`: Returns true if a predicate test is true for any element. (C++11)
- `none_of()`: Returns true if a predicate test is false for all elements. (C++11)
- `for_each()`: Applies a nonmodifying function object to each element in a range.
- `find()`: Finds the first occurrence of a value in a range.
- `find_if()`: Finds the first value that satisfies a predicate test criterion in a range.
- `find_if_not()`: Finds the first value that doesn’t satisfy a predicate test criterion in a range. (C++11)
- `find_end()`: Finds the last occurrence of a subsequence whose values match the values of a second sequence. Matching may be by equality or by applying a binary predicate.
- `find_first_of()`: Finds the first occurrence of any element of a second sequence that matches a value in the first sequence. Matching may be by equality or may be evaluated with a binary predicate.
- `adjacent_find()`: Finds the first element that matches the element immediately follow- ing it. Matching may be by equality or may be evaluated with a binary predicate.
- `count()`: Returns the number of times a given value occurs in a range.
- `count_if()`: Returns the number of times a given value matches values in a range, with a match determined by using a binary predicate.
- `mismatch()`: Finds the first element in one range that does not match the corre- sponding element in a second range and returns iterators to both. Matching may be by equality or may be evaluated with a binary predicate.
- `equal()`: Returns true if each element in one range matches the correspon- ding element in a second range. Matching may be by equality or may be evaluated with a binary predicate.
- `is_permutation()`: Returns true if each element in one range matches the correspon- ding element in some permutation of a second range. Matching may be by equality or may be evaluated with a binary predicate. (C++11)
- `search()`: Finds the first occurrence of a subsequence whose values match the values of a second sequence. Matching may be by equality or by applying a binary predicate.
- `search_n()`: Finds the first subsequence of n elements that each match a given value. Matching may be by equality or by applying a binary predicate.

### Mutating Sequence Operations
- `copy()`: Copies elements from a range to a location identified by an iterator.
- `copy_n()`: Copies n elements from one location identified by an iterator to a sec- ond location identified by an iterator. (C++11)
- `copy_if()`: Copies elements satisfying a predicate test from a range to a location identified by an iterator. (C++11)
- `copy_backward()`: Copies elements from a range to a location identified by an iterator. Copying begins at the end of the range and proceeds backward.
- `move()`: Moves elements from a range to a location identified by an iterator. (C++11)
- `move_backward()`: Moves elements from a range to a location identified by an iterator. Moving begins at the end of the range and proceeds backward. (C++11)
- `swap()`: Exchanges two values stored at locations specified by references.
- `swap_ranges()`: Exchanges corresponding values in two ranges.
- `iter_swap()`: Exchanges two values stored at locations specified by iterators.
- `transform()`: Applies a function object to each element in a range (or to each pair of elements in a pair of ranges) and copies the return value to the corresponding location of another range.
- `replace()`: Replaces each occurrence of a value in a range with another value.
- `replace_if()`: Replaces each occurrence of a value in a range with another value if a predicate function object applied to the original value returns true.
- `replace_copy()`: Copies one range to another and replaces each occurrence of a speci- fied value with another value.
- `replace_copy_if()`: Copies one range to another and replaces each value for which a pred- icate function object is true with an indicated value.
- `fill()`: Sets each value in a range to an indicated value.
- `fill_n()`: Sets n consecutive elements to a value.
- `generate()`: Sets each value in a range to the return value of a generator, which is a function object that takes no arguments.
- `generate_n()`: Sets the first n values in a range to the return value of a generator, which is a function object that takes no arguments.
- `remove()`: Removes all occurrences of an indicated value from a range and returns a past-the-end iterator for the resulting range.
- `remove_if()`: Removes all occurrences of values for which a predicate object returns true from a range and returns a past-the-end iterator for the resulting range.
- `remove_copy()`: Copies elements from one range to another, omitting elements that equal a specified value.
- `remove_copy_if()`: Copies elements from one range to another, omitting elements for which a predicate function object returns true.
- `unique()`: Reduces each sequence of two or more equivalent elements in a range to a single element.
- `unique_copy()`: Copies elements from one range to another, reducing each sequence of two or more equivalent elements to one.
- `reverse()`: Reverses the elements in a range.
- `reverse_copy()`: Copies a range in reverse order to a second range.
- `rotate()`: Treats a range as a circular ordering and rotates the elements left.
- `rotate_copy()`: Copies one range to another in a rotated order.
- `random_shuffle()`: Randomly rearranges the elements in a range.
- `shuffle()`: Randomly rearranges the elements in a range using a function object type satisfying C++11 requirements for a uniform random generator. (C++11)
- `is_partitioned()`: Returns true if a range is partitioned by a given predicate.
- `partition()`: Places all the elements that satisfy a predicate function object before all elements that don’t.
- `stable_partition()`: Places all the elements that satisfy a predicate function object before all elements that don’t. The relative order of elements in each group is preserved.
- `partition_copy()`: Copies all the elements that satisfy a predicate function object to one output range and the remaining elements to a second output range. (C++11)
- `partition_point()`: For a range partitioned by a given predicate, returns an iterator to the first element not satisfying the predicate.
