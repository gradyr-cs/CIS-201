/*
To do: Test whether or not using a vector to store data is preferable to parse the log file,
or if reading line-by-line will allow for better data manipulation using loops to track the following attributes:

Damage Per Second - total fight length / damage tally
Biggest Hit
Average Hit
Total Damage Done

Add features:
later to include melee misses or spell resists
Snip a certain day and/or time from the log file and export to a new file to process.
The ability to load a snipped file into variables that will display relevant info
NPC Damage to PC
Critical Strike / Blast support



*/

#include <iostream>
#include <fstream>
#include <string>
using namespace std;

int main() {
    // Writing to a text file
    std::ofstream outFile("example.txt"); // Creates or opens a file for writing

    if (outFile.is_open()) {
        outFile << "Hello, this is a line written to the file." << std::endl;
        outFile << "Another line here." << std::endl;

        outFile.close(); // Close the file when done
    } else {
        std::cerr << "Unable to open the file for writing." << std::endl;
        return 1; // Return an error code
    }

    // Reading from a text file
    std::ifstream inFile("example.txt"); // Opens a file for reading

    
    if (inFile.is_open()) {
        std::string line;
        while (std::getline(inFile, line)) {
            std::cout << "Read from file: " << line << std::endl;
        }

        inFile.close(); // Close the file when done
    } else {
        std::cerr << "Unable to open the file for reading." << std::endl;
        return 1; // Return an error code
    }

    return 0;
}