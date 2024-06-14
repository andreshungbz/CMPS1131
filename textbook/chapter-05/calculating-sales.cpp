#include <iostream>
#include "DollarAmount.h"

int main() {
    std::cout << "Calculating Sales\n";
    std::cout << "Usage (-1 in either to stop): [product number (1 - 5)] [quantity]\n\n";

    DollarAmount product1{298};
    DollarAmount product2{450};
    DollarAmount product3{998};
    DollarAmount product4{449};
    DollarAmount product5{687};
    DollarAmount totalRetailValue{0};

    int productNum{-1};
    int quantity{-1};

    do {
        std::cout << "Enter sale: ";
        std::cin >> productNum >> quantity;

        switch (productNum) {
            case 1:
                totalRetailValue.add(DollarAmount{product1.getPennies() * quantity});
                break;
            case 2:
                totalRetailValue.add(DollarAmount{product2.getPennies() * quantity});
                break;
            case 3:
                totalRetailValue.add(DollarAmount{product3.getPennies() * quantity});
                break;
            case 4:
                totalRetailValue.add(DollarAmount{product4.getPennies() * quantity});
                break;
            case 5:
                totalRetailValue.add(DollarAmount{product5.getPennies() * quantity});
                break;
            default:
                break;
        }
    } while (productNum > -1 || quantity > -1);

    std::cout << "Total Retail Value of All Products Sold: $" << totalRetailValue.toString() << '\n';
    return 0;
}
