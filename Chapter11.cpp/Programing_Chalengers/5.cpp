#include <iostream>
#include <string>

struct WeatherData {
    double totalRainfall;
    double highTemperature;
    double lowTemperature;
    double averageTemperature;
};

enum Month { JANUARY, FEBRUARY, MARCH, APRIL, MAY, JUNE, JULY, AUGUST, SEPTEMBER, OCTOBER, NOVEMBER, DECEMBER };

int main() {
    WeatherData weatherData[12];
    std::string months[12] = {"January", "February", "March", "April", "May", "June", "July", "August", "September", "October", "November", "December"};
    double totalRainfall = 0;
    double highestTemperature = -101;
    double lowestTemperature = 141;
    std::string highestTemperatureMonth, lowestTemperatureMonth;
    double totalAverageTemperature = 0;

    for (Month month = JANUARY; month <= DECEMBER; month = static_cast<Month>(month + 1)) {
        std::cout << "Enter data for " << months[month] << ":" << std::endl;
        std::cout << "Total Rainfall: ";
        std::cin >> weatherData[month].totalRainfall;
        do {
            std::cout << "High Temperature (between -100 and 140): ";
            std::cin >> weatherData[month].highTemperature;
        } while (weatherData[month].highTemperature < -100 || weatherData[month].highTemperature > 140);
        do {
            std::cout << "Low Temperature (between -100 and 140): ";
            std::cin >> weatherData[month].lowTemperature;
        } while (weatherData[month].lowTemperature < -100 || weatherData[month].lowTemperature > 140);
        weatherData[month].averageTemperature = (weatherData[month].highTemperature + weatherData[month].lowTemperature) / 2;

        totalRainfall += weatherData[month].totalRainfall;
        if (weatherData[month].highTemperature > highestTemperature) {
            highestTemperature = weatherData[month].highTemperature;
            highestTemperatureMonth = months[month];
        }
        if (weatherData[month].lowTemperature < lowestTemperature) {
            lowestTemperature = weatherData[month].lowTemperature;
            lowestTemperatureMonth = months[month];
        }
        totalAverageTemperature += weatherData[month].averageTemperature;
    }

    std::cout << "Average Monthly Rainfall: " << totalRainfall / 12 << std::endl;
    std::cout << "Total Rainfall for the Year: " << totalRainfall << std::endl;
    std::cout << "Highest Temperature for the Year: " << highestTemperature << " (" << highestTemperatureMonth << ")" << std::endl;
    std::cout << "Lowest Temperature for the Year: " << lowestTemperature << " (" << lowestTemperatureMonth << ")" << std::endl;
    std::cout << "Average of All the Monthly Average Temperatures: " << totalAverageTemperature / 12 << std::endl;

    return 0;
}
