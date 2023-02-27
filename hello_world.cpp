#include <iostream>
#include <string>

using namespace std;
int main() {
cout << "Enter your name" << endl;
string name = "";
cin >> name;
cout << "Hello world from " + name  << endl;
return 1;
}
