#include <iostream>
#include <fstream>

void arrayToFile(const std::string &fileName, int *array, int size) {
    std::ofstream file(fileName, std::ios::binary);
    if (file.is_open()) {
        file.write(reinterpret_cast<char*>(array), size * sizeof(int));
        file.close();
    } else {
        std::cout << "Unable to open file for writing" << std::endl;
    }
}

void fileToArray(const std::string &fileName, int *array, int size) {
    std::ifstream file(fileName, std::ios::binary);
    if (file.is_open()) {
        file.read(reinterpret_cast<char*>(array), size * sizeof(int));
        file.close();
    } else {
        std::cout << "Unable to open file for reading" << std::endl;
    }
}

int main() {
    const int size = 5;
    int array[size] = {1, 2, 3, 4, 5};

    arrayToFile("test.bin", array, size);

    int readArray[size] = {0};
    fileToArray("test.bin", readArray, size);

    for (int i = 0; i < size; i++) {
        std::cout << readArray[i] << " ";
    }
    std::cout << std::endl;

    return 0;
}
