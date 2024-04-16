/* 
    File: StringInstrument.cpp
    Description: 5.12.1: LAB: Instrument information
    Author: Richard Grady
    Email: gradyr@student.vvc.edu
    Course#: cis202
    Section#: 30402
    Date: 04-05-2024
*/

#include "StringInstrument.h"

// TODO: Define mutator functions - 
//      SetNumOfStrings(), SetNumOfFrets(), SetIsBowed()
void StringInstrument::SetNumOfStrings(int inNumStrings) {
    numStrings = inNumStrings;
}
void StringInstrument::SetNumOfFrets(int inNumFrets) {
    numFrets = inNumFrets;
}
void StringInstrument::SetIsBowed(bool inIsBowed) {
    isBowed = inIsBowed;
}

// TODO: Define accessor functions -
//      GetNumOfStrings(), GetNumOfFrets(), GetIsBowed()
int StringInstrument::GetNumOfStrings() {
    return numStrings;
}
int StringInstrument::GetNumOfFrets() {
    return numFrets;
}
bool StringInstrument::GetIsBowed() {
    return isBowed;
}

