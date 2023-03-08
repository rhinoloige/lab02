#include <iostream>
#include <string>


int main() {
std::cout << "Enter your name" << std::endl;
std::string name = "";
std::cin >> name;
std::cout << "Hello world from " + name  << std::endl;
return 1;
}
