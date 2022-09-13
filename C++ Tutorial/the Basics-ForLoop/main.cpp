#include <iostream>

//void print() {
//    int v[] = {0, 1, 2, 3, 4, 5, 6, 7, 8, 9};
//
//    std::cout << "Refreshed Old for syntax\n";
//
//    for (auto i = 0; i < 10; i++)
//         std::cout << "[" << i << "] = " << v[i] << std::endl;
//    std::cout << std::endl;
//
//    std::cout << "New Cpp for-syntax\n";
//    // for every element of v, from the first to the last, place a COPY in x,
//    // that is, x is a different variable (memory position) of v[i]
//    for (auto x : v)
//        std::cout << x << "\n";
//    std::cout << std::endl;
//
//    std::cout << "New Cpp for-syntax - literal arrays\n";
//    // it also works for literal arrays
//    for (auto x : {0, 1, 2, 3, 4, 5, 6, 7, 8, 9})
//        std::cout << x << "\n";
//    std::cout << std::endl;
//
//    std::cout << "Using References in For to get the True Values (not copies) from the array's elements\n";
//    // A reference is similar to a pointer, except that you don’t need to use a prefix * to access the
//    // value referred to by the reference. Also, a reference cannot be made to refer to a different
//    // object after its initialization.
//    for (auto& x : v) {
//        x++;
//        std::cout << x << "\n";
//    }
//
//    std::cout << "Here, the values of v were changed\n";
//    // now, the values of v were changed
//    for (auto i = 0; i < 10; i++)
//        std::cout << "[" << i << "] = " << v[i] << std::endl;
//    std::cout << std::endl;
//}
//
//
//int main() {
//    print();
//    return 0;
//}
//

//int main(){
//
//    int sum = 0;
//    //for(auto i= -100; i<= 100; ++i)
//    for(auto i= -100; i<= 100; i++)
//
//        sum += i;
//    std::cout << sum << "\n";
//
//}


#include <iostream>

int main()
{
    // currVal is the number we're counting; we'll read new values into val
    int currVal = 0, val = 0;

    // if input "12 1 2 3 1 3 2 12 13 12 13 1 3 2", error, how to fix?
    // build a list to save all the num
    // read first number and ensure that we have data to process
    if (std::cin >> currVal) {
        int cnt = 1;  // store the count for the current value we're processing
        while (std::cin >> val) { // read the remaining numbers
            if (val == currVal)   // if the values are the same
                ++cnt;            // add 1 to cnt
            else { // otherwise, print the count for the previous value
                std::cout << currVal << " occurs "
                          << cnt << " times" << std::endl;
                currVal = val;    // remember the new value
                cnt = 1;          // reset the counter
            }
        }  // while loop ends here
        // remember to print the count for the last value in the file
        std::cout << currVal << " occurs "
                  << cnt << " times" << std::endl;
    } // outermost if statement ends here
    return 0;
}
