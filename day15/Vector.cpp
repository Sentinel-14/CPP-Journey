/*
VECTOR
Like dynamic arrays, vectors can grow and shrink in size. They are part of the C++ Standard Library and provide a convenient way to work with sequences of elements.

Key Features of Vectors:

1. Dynamic Sizing: Vectors can change size automatically as elements are added or removed.
2. Random Access: Elements can be accessed using an index, similar to arrays.
3. Memory Management: Vectors handle memory allocation and deallocation automatically.

Basic Operations on Vectors:

1. Insertion: Add elements to the vector using push_back().
2. Deletion: Remove elements using pop_back() or erase().
3. Access: Retrieve elements using the [] operator or at() method.

Example:
#include <iostream>
#include <vector>

int main() {
    std::vector<int> vec;
    vec.push_back(10);
    vec.push_back(20);
    std::cout << "First element: " << vec[0] << std::endl;
    vec.pop_back();
    return 0;
}

*/
#include <iostream>
#include <vector>

int main() {
    std::vector<int> vec;
    vec.push_back(10);
    vec.push_back(20);
    std::cout << "First element: " << vec[0] <<","<<vec[1]<< std::endl;
    vec.pop_back();
    return 0;
}