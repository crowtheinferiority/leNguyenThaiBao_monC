#include <iostream>
#include <string>

struct WeatherData {
    double totalRainfall;
    double highTemperature;
    double lowTemperature;
    double averageTemperature;
};

int main() {
    WeatherData weatherData[12];
    std::string months[12] = {"January", "February", "March", "April", "May", "June", "July", "August", "September", "October", "November", "December"};
    double totalRainfall = 0;
    double highestTemperature = -101;
    double lowestTemperature = 141;
    std::string highestTemperatureMonth, lowestTemperatureMonth;
    double totalAverageTemperature = 0;

    for (int i = 0; i < 12; ++i) {
        std::cout << "Enter data for " << months[i] << ":" << std::endl;
        std::cout << "Total Rainfall: ";
        std::cin >> weatherData[i].totalRainfall;
        do {
            std::cout << "High Temperature (between -100 and 140): ";
            std::cin >> weatherData[i].highTemperature;
        } while (weatherData[i].highTemperature < -100 || weatherData[i].highTemperature > 140);
        do {
            std::cout << "Low Temperature (between -100 and 140): ";
            std::cin >> weatherData[i].lowTemperature;
        } while (weatherData[i].lowTemperature < -100 || weatherData[i].lowTemperature > 140);
        weatherData[i].averageTemperature = (weatherData[i].highTemperature + weatherData[i].lowTemperature) / 2;

        totalRainfall += weatherData[i].totalRainfall;
        if (weatherData[i].highTemperature > highestTemperature) {
            highestTemperature = weatherData[i].highTemperature;
            highestTemperatureMonth = months[i];
        }
        if (weatherData[i].lowTemperature < lowestTemperature) {
            lowestTemperature = weatherData[i].lowTemperature;
            lowestTemperatureMonth = months[i];
        }
        totalAverageTemperature += weatherData[i].averageTemperature;
    }

    std::cout << "Average Monthly Rainfall: " << totalRainfall / 12 << std::endl;
    std::cout << "Total Rainfall for the Year: " << totalRainfall << std::endl;
    std::cout << "Highest Temperature for the Year: " << highestTemperature << " (" << highestTemperatureMonth << ")" << std::endl;
    std::cout << "Lowest Temperature for the Year: " << lowestTemperature << " (" << lowestTemperatureMonth << ")" << std::endl;
    std::cout << "Average of All the Monthly Average Temperatures: " << totalAverageTemperature / 12 << std::endl;

    return 0;
}
