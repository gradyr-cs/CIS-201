#include <string>
#include <iostream>
#include <iomanip>
#include <fstream>

using namespace std;

int main() {
    ifstream hungerFS;
    string filename;
    string reader;
    string cat;
    string name;
    string desc;
    string avail;
    int startPos = 0;
    int nextPos;
    
    cin >> filename;
    hungerFS.open(filename);
    if (! hungerFS.is_open()) {
        return 1;
    }
    while (getline(hungerFS, reader)) {
        
        int nextPos = 0;
        cat = reader.substr(startPos, reader.find('\t'));
        nextPos = cat.length();
        
        name = reader.substr(reader.find('\t') + 1, reader.find('\t')); 
		//desc = reader.substr(reader.find('\t') + name.length(), reader.find('\t') - 1);
        //avail = reader.substr(reader.find('\t') + name.length() + desc.length(), reader.find('\t') - 1);

        // Debug tool:
        cout << "Debug: nextPos = " << nextPos << " and startPos = " << startPos << endl;
        cout << reader << endl;
        cout << "Result: " << endl;
        cout << cat << endl;
        cout << name << endl;
        //cout << desc << endl;
        //cout << avail << endl;
        cout << "---------------------" << endl;
        
        

        

    }



    return 0;
}