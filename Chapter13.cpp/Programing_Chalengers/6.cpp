#include <iostream>

class Inventory {
private:
    int itemNumber;
    int quantity;
    double cost;
    double totalCost;

public:
    Inventory() : itemNumber(0), quantity(0), cost(0), totalCost(0) {}

    Inventory(int itemNum, int qty, double c)
        : itemNumber(itemNum), quantity(qty), cost(c) {
        setTotalCost();
    }

    void setItemNumber(int itemNum) { itemNumber = itemNum; }
    void setQuantity(int qty) { quantity = qty; }
    void setCost(double c) { cost = c; }
    void setTotalCost() { totalCost = quantity * cost; }

    int getItemNumber() const { return itemNumber; }
    int getQuantity() const { return quantity; }
    double getCost() const { return cost; }
    double getTotalCost() const { return totalCost; }
};

int main() {
    Inventory item1(1, 10, 5.0);
    std::cout << "Item number: " << item1.getItemNumber() << "\n";
    std::cout << "Quantity: " << item1.getQuantity() << "\n";
    std::cout << "Cost: " << item1.getCost() << "\n";
    std::cout << "Total cost: " << item1.getTotalCost() << "\n";

    return 0;
}
