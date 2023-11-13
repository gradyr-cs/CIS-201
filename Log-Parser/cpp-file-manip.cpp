#include <iostream>
#include <fstream>
#include <string>

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