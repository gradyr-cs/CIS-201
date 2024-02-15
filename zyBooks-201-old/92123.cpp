#include <iostream>
using namespace std;

int main() {

    unsigned long long count = 0xFFFFFFFFFFFFFFFF; // for a 64 bit 
    count = count * count; // this will generate overflow
    //unsigned int count = 4294967295; //max int size 4294967297
    //unsigned int count = 0xFFFFFFFF; // base 16 hexidecimal 0b prefix for octal, not covered in this course however.
    
    //cout << hex << count << endl; // or oct etc,
    cout << count << endl;

    //char c = 'a';
    //cout << ++c << endl; //pre-increment. c++ is a post-increment
    //cout << c << endl;

    return 0;






}