#include <iostream>
#include <string>
#include <vector>
using namespace std;

class Movie {
   public:
      void SetTitleAndDuration(string movieTitle, int movieDuration) {
         title = movieTitle;
         duration = movieDuration;
      }
      void PrintMovie() const {
         cout << title << " - " << duration << endl;
      }
      string GetTitle() const { return title; }
      int GetDuration() const { return duration; }

   private:
      string title;
      int duration;
};

int main() {
   vector<Movie> favoriteMovies;
   Movie currMovie;
   string currTitle;
   int currDuration;
   unsigned int i;

   cin >> currTitle;
   cin >> currDuration;
   while ((currTitle != "quit") && (currDuration > 0)) {

      currMovie.SetTitleAndDuration(currTitle, currDuration);
      favoriteMovies.push_back(currMovie);

      cin >> currTitle;
      cin >> currDuration;
   }

   for (i = 0; i < favoriteMovies.size(); ++i) {
      currMovie = favoriteMovies.at(i);
      currMovie.PrintMovie();
   }

   return 0;
}