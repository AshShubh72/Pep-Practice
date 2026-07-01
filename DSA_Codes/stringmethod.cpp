#include <iostream>
#include <string>

int main() {
    std::string dtr1 = "HELLO";
    for (int i = (int)dtr1.size() - 1; i >= 0; --i) {
        std::cout << dtr1[i];
    }
    std::cout << std::endl;
    return 0;
}
