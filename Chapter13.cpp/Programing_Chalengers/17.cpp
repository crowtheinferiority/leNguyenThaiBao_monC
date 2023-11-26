#include <iostream>
#include <string>

class InventoryItem {
    std::string item;
    double cost;
    int onHand;
public:
    InventoryItem(std::string i, double c, int h) : item(i), cost(c), onHand(h) {}
    std::string getItem() { return item; }
    double getCost() { return cost; }
    int getOnHand() { return onHand; }
    void purchase(int quantity) { onHand -= quantity; }
};

class CashRegister {
    InventoryItem& item;
    int quantity;
public:
    CashRegister(InventoryItem& i, int q) : item(i), quantity(q) {}
    void purchase() {
        double unitPrice = item.getCost() * 1.3;
        double subTotal = unitPrice * quantity;
        double tax = subTotal * 0.06;
        double total = subTotal + tax;

        std::cout << "Subtotal: $" << subTotal << std::endl;
        std::cout << "Tax: $" << tax << std::endl;
        std::cout << "Total: $" << total << std::endl;

        item.purchase(quantity);
    }
};

int main() {
    InventoryItem item("Apple", 0.5, 100);
    int quantity;

    std::cout << "Enter the quantity of " << item.getItem() << " you want to purchase: ";
    std::cin >> quantity;

    if (quantity < 0) {
        std::cout << "Invalid quantity. Please enter a positive number." << std::endl;
        return 1;
    }

    CashRegister register(item, quantity);
    register.purchase();

    return 0;
}
