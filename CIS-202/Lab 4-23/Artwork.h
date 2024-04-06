/* 
    File: Artwork.h
    Description: 4.23.1: LAB: Artwork label (classes/constructors)
    Author: Richard Grady
    Email: gradyr@student.vvc.edu
    Course#: cis202
    Section#: 30402
    Date: 03-24-2024
*/

#ifndef ARTWORKH
#define ARTWORKH

#include "Artist.h"

class Artwork{
   public:
      Artwork();

      Artwork(string title, int yearCreated, Artist artist);

      string GetTitle();

      int GetYearCreated();

      void PrintInfo();
   
   private:
      // TODO: Declare private data members - title, yearCreated
      string title;
      int yearCreated;

      // TODO: Declare private data member artist of type Artist
      Artist artist;

};

#endif