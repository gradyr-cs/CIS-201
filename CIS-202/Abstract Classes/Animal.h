#include <string>
using namespace std;

class Animal {
   protected:
      string name;
      int age;

   public:
      virtual void printInfo() const = 0;

      string getNameAndAge() const {
         return name + " (" + to_string(age) + ") years";
      }
};