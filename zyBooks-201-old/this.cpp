#include <iostream>
using namespace std;

void string_fun() {
    char* my_string = new char[10];
    my_string[0] = 'H';
    my_string[1] = 'e';
    my_string[2] = 'l';
    my_string[3] = 'l';
    my_string[4] = 'o';
    my_string[5] = '\0';
    
    cout << my_string << endl; // output whole string
    cout << &my_string[0] << endl;
}

int main () {
    //while(true) { // don't do this... will occupy all memory.
    string_fun(); // this is a bad example of memory management. Does not clean up its memory after.
    //}


    return 0;
}