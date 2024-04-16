/* 
    File: Encyclopedia.h
    Description: 5.14.1: LAB: Book information (overriding member functions)
    Author: Richard Grady
    Email: gradyr@student.vvc.edu
    Course#: cis202
    Section#: 30402
    Date: 04-05-2024
*/

#ifndef ENCYCLOPEDIAH
#define ENCYCLOPEDIAH

#include "Book.h"

class Encyclopedia : public Book {
   // TODO: Declare mutator functions -
   //       SetEdition(), SetNumPages()
   public:
      void SetEdition(string userEdition);
      void SetNumPages(int userNumPages); 


   // TODO: Declare accessor functions -
   //       GetEdition(), GetNumPages()
   string GetEdition();
   int GetNumPages();


   // TODO: Declare a PrintInfo() function that overrides the PrintInfo() in Book class
   void PrintInfo();

   // TODO: Declare private data members
   private:
      string edition;
      int numPages;

};

#endif