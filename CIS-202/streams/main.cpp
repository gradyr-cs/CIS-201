#include <iostream>
#include <string>
#include <fstream>

using namespace std;

void read_and_print(std::istream &istr) {
    if (! istr.fail()) { // .eof() .fail() .is_open()
        while ( ! istr.eof()) {
        std::string s;
        istr >> s;
        std::cout << s << std::endl;
        }

    }
    else {
        std::cout << "File not found or not open!" << std::endl;
    }
}

int main() {
    std::ifstream ifstr("adjectives.txt");
    read_and_print(ifstr);
    read_and_print(std::cin);

    return 0;
}