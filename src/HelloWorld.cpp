#include <iostream>
#include <string>

int main() {
    // Ask user's name.
    std::string name;
    std::cout << "Enter user name: ";
    std::cin >> name;
    
    // Print greeting.
    std::cout << "Hello world from @" << name << "!" << std::endl;

    return 0;
}
