#include <iostream>
#include <fstream>
#include <string>

void printJoke(std::ifstream &file) {
    std::string line;
    while (std::getline(file, line)) {
        std::cout << line << std::endl;
    }
}

void printPunchLine(std::ifstream &file) {
    file.seekg(-1, std::ios_base::end);
    if (file.peek() == '\n') {
        file.seekg(-2, std::ios_base::cur);
    }

    int pos = file.tellg();
    for (; pos >= 0 && file.peek() != '\n'; --pos) {
        file.seekg(pos);
    }

    if (pos >= 0) {
        file.seekg(pos + 1);
        std::string line;
        std::getline(file, line);
        std::cout << line << std::endl;
    }
}

int main() {
    std::ifstream jokeFile("joke.txt");
    std::ifstream punchLineFile("punchline.txt");

    if (jokeFile.is_open() && punchLineFile.is_open()) {
        printJoke(jokeFile);
        printPunchLine(punchLineFile);
        jokeFile.close();
        punchLineFile.close();
    } else {
        std::cout << "Unable to open file" << std::endl;
    }

    return 0;
}
