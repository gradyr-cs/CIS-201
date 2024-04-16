/* 
    File: Encyclopedia.cpp
    Description: 5.14.1: LAB: Book information (overriding member functions)
    Author: Richard Grady
    Email: gradyr@student.vvc.edu
    Course#: cis202
    Section#: 30402
    Date: 04-05-2024
*/

#include "Encyclopedia.h"
#include <iostream>

// Define functions declared in Encyclopedia.h
void Encyclopedia::SetEdition(string userEdition) {
   edition = userEdition;
}

void Encyclopedia::SetNumPages(int userNumPages) {
   numPages = userNumPages;
}

string Encyclopedia::GetEdition() {
   return edition;
}

int Encyclopedia::GetNumPages() {
   return numPages;
}

void Encyclopedia::PrintInfo() {
   cout << "Book Information: " << endl;
   cout << "   Book Title: " << title << endl;
   cout << "   Author: " << author << endl;
   cout << "   Publisher: " << publisher << endl;
   cout << "   Publication Date: " << publicationDate << endl;
   cout << "   Edition: " << edition << endl;
   cout << "   Number of Pages: " << numPages << endl;
}