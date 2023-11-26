#include <iostream>
#include <string>

class Car {
private:
    int yearModel;
    std::string make;
    int speed;

public:
    Car(int year, const std::string &m)
        : yearModel(year), make(m), speed(0) {}

    int getYearModel() const { return yearModel; }
    std::string getMake() const { return make; }
    int getSpeed() const { return speed; }

    void accelerate() { speed += 5; }
    void brake() { speed -= 5; }
};

int main() {
    Car car(2022, "Toyota");

    for (int i = 0; i < 5; i++) {
        car.accelerate();
        std::cout << "Speed after acceleration: " << car.getSpeed() << "\n";
    }

    for (int i = 0; i < 5; i++) {
        car.brake();
        std::cout << "Speed after brake: " << car.getSpeed() << "\n";
    }

    return 0;
}
