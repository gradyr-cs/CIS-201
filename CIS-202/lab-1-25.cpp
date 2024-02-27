/* 
    File: main.cpp 
    Description: 1.25.1: LAB: Remove all odd numbers from a vector
    Author: Richard Grady
    Email: gradyr@student.vvc.edu
    Course#: cis202
    Section#: 30402
    Date: 02-16-2024
*/

#include <iostream>
#include <vector>
using namespace std;

// Function to iterate through a vector and erase odd integers
vector<int> RemoveOdds(vector<int> nums) {
    vector<int> cleanedNums;

	for (unsigned int i = 0; i < nums.size(); ++i) {
        if ((nums.at(i) % 2) == 0) { // check if int at index i is 'even'
            //nums.erase(nums.begin() + i); // erase index at i. (Suspect this is the problem due to index-shifting)
			cleanedNums.push_back(nums.at(i)); // push_back the even value
        }
    }
	return cleanedNums; // return the modified vector to the result vector in main function
}

int main() {
	vector<int> input = {1,2,3,4,5,6,7,8,9}; // this works
	//vector<int> input = {-2,-1,3,3,3}; // but this doesnt, suspect that .erase is shifting the vector positions for inaccuracy

	vector<int> result = RemoveOdds(input); // Should return [2, 4, 6, 8]

	cout << "[";
	for (size_t i = 0; i < result.size(); ++i) {
		cout << result.at(i);
		if (i != result.size() - 1) {
		   cout << ", ";
		}
	}
	cout << "]" << endl;

	return 0;
}