#include <iostream>
#include <string>
#include <vector>
#include <map>

class MyClass
{
public:
    int value;

    MyClass(int val) : value(val) {}
};

int main()
{
    // Pointer to an object
    MyClass obj(42);
    MyClass* objPtr = &obj;

    std::cout << "Value of the object: " << objPtr->value << std::endl;

    // Pointer to an instance of the std::string class
    std::string str = "Hello, world!";
    std::string* strPtr = &str;

    std::cout << "String value: " << *strPtr << std::endl;

    // Pointer to a vector from the STL
    std::vector<int> numbers = {1, 2, 3, 4, 5};
    std::vector<int>* vecPtr = &numbers;

    std::cout << "Vector elements: ";
    for (const auto& num : *vecPtr)
    {
        std::cout << num << " ";
    }
    std::cout << std::endl;

    // Pointer to a map from the STL
    std::map<int, std::string> myMap = {{1, "One"}, {2, "Two"}, {3, "Three"}};
    std::map<int, std::string>* mapPtr = &myMap;

    std::cout << "Map elements: ";
    for (const auto& pair : *mapPtr)
    {
        std::cout << pair.first << ":" << pair.second << " ";
    }
    std::cout << std::endl;

    return 0;
}
