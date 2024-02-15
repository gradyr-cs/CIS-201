#include <iostream>
#include <vector>
using namespace std;

class Experiment {
   public:
      Experiment();
      Experiment(string newMeasurement, int newValues);
      void ReadValues();
      void Print() const;
   private:
      string measurement;
      vector<int> values; 
};

Experiment::Experiment() : measurement("Empty"), values(0) {
}

Experiment::Experiment(string newMeasurement, int newValues) : measurement(newMeasurement), values(newValues) {
}

void Experiment::ReadValues() {
   int valueMeasurement;
   int i;
   for (i = 0; i < values.size(); ++i) {
      cin >> valueMeasurement;
		values.at(i) = valueMeasurement;
   }
}

void Experiment::Print() const {
   int i;
  
   cout << "Experiment: " << measurement << ", ";
   if (values.size() == 0) {
      cout << "No values" << endl;
   }
   else {
      cout << "Values: ";
      for (i = 0; i < values.size() - 1; ++i) {
         cout << values.at(i) << ", ";
      }
      cout << values.at(values.size() - 1) << endl;
   }
}

int main() {
   string measurement;
   int newValues;
	Experiment myExperiment;

   myExperiment.Print();

   cin >> measurement;
	cin >> newValues;
	Experiment yourExperiment(measurement, newValues);
	yourExperiment.ReadValues();
	yourExperiment.Print();
   
   return 0;
} 