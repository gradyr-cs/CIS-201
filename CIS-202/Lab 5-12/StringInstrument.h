/* 
    File: StringInstrument.h 
    Description: 5.12.1: LAB: Instrument information
    Author: Richard Grady
    Email: gradyr@student.vvc.edu
    Course#: cis202
    Section#: 30402
    Date: 04-05-2024
*/

#ifndef STR_INSTRUMENTH
#define STR_INSTRUMENTH

#include "Instrument.h"

class StringInstrument : public Instrument {
	// TODO: Declare private data members: numStrings, numFrets, isBowed
	private:
		int numStrings;
		int numFrets;
		bool isBowed;

	// TODO: Declare mutator functions - 
	//      SetNumOfStrings(), SetNumOfFrets(), SetIsBowed()
	//
	public:
		void SetNumOfStrings(int inNumStrings);
		void SetNumOfFrets(int inNumFrets);
		void SetIsBowed(bool inIsBowed); 

	// TODO: Declare accessor functions -
	//      GetNumOfStrings(), GetNumOfFrets(), GetIsBowed()
	public:
		int GetNumOfStrings();
		int GetNumOfFrets();
		bool GetIsBowed();


};

#endif
