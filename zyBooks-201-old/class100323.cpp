#include <iostream>
using namespace std;

main () {

int total = 0;
int points;
int game = 1; 

cout << "Enter the points for game #" << game << endl;
cin >> points;

while (points !=-1)
{
    total += points;

    game++;
    cout << "Enter the points for game #" << game << endl;
    cin >> points;
}
    
}