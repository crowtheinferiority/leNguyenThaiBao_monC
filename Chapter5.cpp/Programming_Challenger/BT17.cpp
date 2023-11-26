#include <iostream>
using namespace std;

int main() {
    const int NUM_STORES = 5;
    int sales[NUM_STORES];

    cout << "Enter today's sales for five stores:\n";

    // Get sales data for each store
    for (int i = 0; i < NUM_STORES; i++) {
        cout << "Enter today's sales for store " << i + 1 << ": ";
        cin >> sales[i];
    }

    cout << "\nSALES BAR CHART" << endl;
    cout << "(Each * = $100)\n";

    // Display the bar chart
    for (int i = 0; i < NUM_STORES; i++) {
        cout << "Store " << i + 1 << ": ";
        // Display asterisks based on sales
        for (int j = 0; j < sales[i] / 100; j++) {
            cout << '*';
        }
        cout << endl;
    }

    return 0;
}
