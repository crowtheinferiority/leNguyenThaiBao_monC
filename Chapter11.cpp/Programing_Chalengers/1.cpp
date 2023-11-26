#include <iostream>
#include <string>

struct MovieData {
    std::string title;
    std::string director;
    int yearReleased;
    int runningTime;
};

void displayMovieData(const MovieData& movie) {
    std::cout << "Title: " << movie.title << std::endl;
    std::cout << "Director: " << movie.director << std::endl;
    std::cout << "Year Released: " << movie.yearReleased << std::endl;
    std::cout << "Running Time: " << movie.runningTime << " minutes" << std::endl;
}

int main() {
    MovieData movie1 = {"Movie 1", "Director 1", 2000, 120};
    MovieData movie2 = {"Movie 2", "Director 2", 2005, 150};

    displayMovieData(movie1);
    std::cout << std::endl;
    displayMovieData(movie2);

    return 0;
}
