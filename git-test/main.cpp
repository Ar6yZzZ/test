#include <iostream>
int main() {
    std::string str;
    int a;
    std::cin >> str >> a;
    std::cout << "Hello, World! " << str;
    if (a == 2) std::cin >> a;
    std::cout << "\nHi my friend!!!" << a;
}
