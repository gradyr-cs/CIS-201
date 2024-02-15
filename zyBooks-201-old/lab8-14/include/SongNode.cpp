/* 
    File: SongNode.cpp 
    Description: 8.14.1: LAB: Playlist (output linked list)
    Author: Richard Grady
    Email: gradyr@student.vvc.edu
    Course#: cis201
    Section#: 70107
    Date: 12-13-2023
*/

#include "SongNode.h"

// Constructor                                                                                     
SongNode::SongNode(string songTitleInit, string songLengthInit, string songArtistInit) {
	this->songTitle = songTitleInit;
	this->songLength = songLengthInit;
	this->songArtist = songArtistInit;
	this->nextNodeRef = NULL;
}

// Constructor                                                                                     
SongNode::SongNode(string songTitleInit, string songLengthInit, string songArtistInit, SongNode* nextLoc) {
	this->songTitle = songTitleInit;
	this->songLength = songLengthInit;
	this->songArtist = songArtistInit;
	this->nextNodeRef = nextLoc;
}

// insertAfter
void SongNode::InsertAfter(SongNode* nodeLoc) {
	SongNode* tmpNext;
	tmpNext = this->nextNodeRef;
	this->nextNodeRef = nodeLoc;
	nodeLoc->nextNodeRef = tmpNext;
}

// Get location pointed by nextNodeRef                                                            
SongNode* SongNode::GetNext() {
	return this->nextNodeRef;
}

// TODO: Write PrintSongInfo() function
void SongNode::PrintSongInfo() { //
    // kill the FOO after testing...
    // string FOO = " SongNode.cpp TEST UNIT ENABLED";

    // Remove FOO var placeholders...
	cout << "Title: " << this->songTitle << endl;
	cout << "Length: " << this->songLength << endl;
	cout << "Artist: " << this->songArtist << endl; // pay attention to whitespace requirements...?
	// You dont need the next line, logic created in main.cpp for whitespace requirements.
	// cout << endl; // extra endl for whitespace requirements.
}