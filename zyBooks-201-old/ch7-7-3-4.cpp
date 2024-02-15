#include <iostream>
#include <vector>
using namespace std;

// Class representing a Lesson
class Lesson {
public:
    // Function to set the details of a Lesson
    void SetDetails(string newTopic, char newDiscount);

    // Function to print the details of a Lesson
    void Print() const;

private:
    string topic;
    char discount;
};

// Implementation of the Lesson class functions
void Lesson::SetDetails(string newTopic, char newDiscount) {
    topic = newTopic;
    discount = newDiscount;
}

void Lesson::Print() const {
    cout << "Lesson: " << topic << ", Discount: " << discount << endl;
}

// Class representing a Collection of Lessons
class Collection {
public:
    // Function to input Lessons and populate the lessonList
    void InputLessons();

    // Function to print all Lessons in the collection
    void PrintLessons();

private:
    vector<Lesson> lessonList; // List to store Lesson objects
};

// Implementation of the Collection class functions
void Collection::InputLessons() {
    string currTopic;
    char currDiscount;

    cin >> currTopic;
    cin >> currDiscount;

    // Continue reading input until "end" is encountered
    while (currTopic != "end") {
        Lesson lesson; // Instantiate a new Lesson object
        lesson.SetDetails(currTopic, currDiscount);
        lessonList.push_back(lesson); // Push the Lesson object into the vector

        // Read the next input values for the next Lesson or "end"
        cin >> currTopic;
        cin >> currDiscount;
    }
}

void Collection::PrintLessons() {
    Lesson currLesson;
    unsigned int i;

    // Loop through the lessonList to print each Lesson
    for (i = 0; i < lessonList.size(); ++i) {
        currLesson = lessonList.at(i);
        currLesson.Print();
    }
}

// Main function to create a Collection object, input Lessons, and print Lessons
int main() {
    Collection collection;

    // Input Lessons
    collection.InputLessons();

    // Print all Lessons in the collection
    collection.PrintLessons();

    return 0;
}