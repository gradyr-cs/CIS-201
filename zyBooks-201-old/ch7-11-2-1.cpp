#include <iostream>
#include <string>
using namespace std;

class Essay {
   public:
      Essay();
      Essay(string essayTitle);
      Essay(string essayTitle, string essayAuthor, int essayYear);
      void Print();
   
   private:
      string title;
      string author;
      int year;
};

// Default constructor
Essay::Essay() {
   title = "NoName";
   author = "None";
   year = -1;
}

Essay::Essay(string essayTitle) {  
   title = essayTitle;
   author = "None";
   year = -1;
}

Essay::Essay(string essayTitle, string essayAuthor, int essayYear) {  
   title = essayTitle;
   author = essayAuthor;
   year = essayYear;
}

void Essay::Print() {
   cout << "Essay: " << title << ", " << author << ", " << year << endl;
}

int main() {
   string essayTitle;
   string essayAuthor;
   int essayYear;
   
   cin >> essayTitle;
   cin >> essayAuthor;
   cin >> essayYear;

   Essay essay1;
   Essay essay2(essayTitle);
   Essay essay3(essayTitle, essayAuthor, essayYear);

   essay1.Print();
   essay2.Print();
   essay3.Print();
   
   return 0;
}