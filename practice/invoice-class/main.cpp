#include <iostream>
#include "Invoice.h"

int main() {
    Invoice invoice1{"Milk", 10.0, 3};
    invoice1.setItem("Chocolate Milk");
    invoice1.setPrice(12.0);
    invoice1.setQuantity(2);

    invoice1.display();
    std::cout << "Your invoice total is $" << invoice1.calculateTotal();

    return 0;
}
