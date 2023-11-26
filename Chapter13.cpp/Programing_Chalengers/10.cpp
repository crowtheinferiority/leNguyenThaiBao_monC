#include <iostream>
#include <algorithm>
#include <numeric>

class NumberArray {
private:
    float* numbers;
    int size;

public:
    NumberArray(int size) : size(size) {
        numbers = new floatsize;
    }

    ~NumberArray() {
        delete[] numbers;
    }

    void setNumber(int index, float number) {
        if (index >= 0 && index < size) {
            numbers[index] = number;
        }
    }

    float getNumber(int index) const {
        if (index >= 0 && index < size) {
            return numbers[index];
        }
        return 0;
    }

    float getMax() const {
        return *std::max_element(numbers, numbers + size);
    }

    float getMin() const {
        return *std::min_element(numbers, numbers + size);
    }

    float getAverage() const {
        return std::accumulate(numbers, numbers + size, 0.0f) / size;
    }
};

int main() {
    NumberArray arr(5);
    for (int i = 0; i < 5; i++) {
        arr.setNumber(i, i + 1);
    }

    std::cout << "Max: " << arr.getMax() << "\n";
    std::cout << "Min: " << arr.getMin() << "\n";
    std::cout << "Average: " << arr.getAverage() << "\n";

    return 0;
}
