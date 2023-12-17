#include <iostream>
using namespace std;

class Engine {
   public:
      Engine(int powerValue, int durationValue);
      void Print();
   private:
      int power;
      int duration;
};
Engine::Engine(int powerValue, int durationValue) {
   power = powerValue;
   duration = durationValue;
}
void Engine::Print() {
   cout << "Engine's power: " << power << endl;
   cout << "Engine's duration: " << duration << endl;
}

int main() {
   Engine* myEngine = nullptr;
   int powerValue;
   int durationValue;

   cin >> powerValue;
   cin >> durationValue;
   
   myEngine = new Engine(powerValue, durationValue);
 
   myEngine->Print();
   
   return 0;
}