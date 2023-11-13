#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

int main() {


    //cout << time(0) << endl; // display epoch time
    //srand(0xFF); // your own chosen seed,,, vs nextline
    long long theSeed;

    // srand(time(0)); //takes the clockticks aka timestamp or epoch time, increases by seconds. this is how you keep track with a realtime clock
    // to debug, use cout and cin
    theSeed = srand(time(0));

    cout << "The stored seed is" << theSeed << "." << endl;

    cout << rand() % 6 + 1 << endl; // modulo division, 
    cout << rand() % 6 + 1 << endl; // six sided die d6
    cout << rand() % 20 + 1 << endl; // d20

    //cout << "(RAND_MAX: " << RAND_MAX << ")" << endl;

    return 0;
}




