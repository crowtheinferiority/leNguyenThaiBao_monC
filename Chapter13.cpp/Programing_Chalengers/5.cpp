#include <iostream>
#include <string>

class RetailItem {
private:
    std::string description;
    int unitsOnHand;
    double price;

public:
    RetailItem(const std::string &desc, int units, double p)
        : description(desc), unitsOnHand(units), price(p) {}

    void setDescription(const std::string &desc) { description = desc; }
    void setUnitsOnHand(int units) { unitsOnHand = units; }
    void setPrice(double p) { price = p; }

    std::string getDescription() const { return description; }
    int getUnitsOnHand() const { return unitsOnHand; }
    double getPrice() const { return price; }
};

int main() {
    RetailItem item1("Jacket", 12, 59.95);
    RetailItem item2("Designer Jeans", 40, 34.95);
    RetailItem item3("Shirt", 20, 24.95);

    std::cout << "Item 1: " << item1.getDescription() << ", " << item1.getUnitsOnHand() << " units, $" << item1.getPrice() << "\n";
    std::cout << "Item 2: " << item2.getDescription() << ", " << item2.getUnitsOnHand() << " units, $" << item2.getPrice() << "\n";
    std::cout << "Item 3: " << item3.getDescription() << ", " << item3.getUnitsOnHand() << " units, $" << item3.getPrice() << "\n";

    return 0;
}
