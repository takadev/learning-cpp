#include<iostream>
#include<istream>

int main() {
    int x;
    std::cout.exceptions(std::istream::failbit | std::istream::badbit);
    try {
        std::cout << "Please write an integer." << std::endl;
        std::cin >> x;
    } catch(std::istream::failure& ex) {
        std::cerr << "std::cin exception: " << ex.what() << std::endl;
        return -1;
    }

    std::cout << "Nice input!! : " << x << '\n';
    return 0;
}
