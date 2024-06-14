#include <iostream>
#include "Invoice.h"

void displayInvoice(const Invoice& invoice);
void updateInvoice(Invoice& invoice, std::string num, std::string desc, int quantity, int price);

int main() {
    Invoice appleInvoice{"1", "Invoice of Apples", 5, 2};
    std::cout << "* Initial Invoice\n";
    displayInvoice(appleInvoice);

    std::cout << "* Enter new values\n";

    std::cout << "New Invoice Number: ";
    std::string newNumber{};
    getline(std::cin, newNumber);

    std::cout << "New Invoice Description: ";
    std::string newDesc{};
    getline(std::cin, newDesc);

    std::cout << "New Item Quantity: ";
    int newQuantity{};
    std::cin >> newQuantity;

    std::cout << "New Item Price: $";
    int newPrice{};
    std::cin >> newPrice;

    updateInvoice(appleInvoice, newNumber, newDesc, newQuantity, newPrice);
    std::cout << "\n* Updated Invoice\n";
    displayInvoice(appleInvoice);

    return 0;
}

void displayInvoice(const Invoice& invoice) {
    std::cout << "Invoice Number: " << invoice.getNumber() << '\n';
    std::cout << "Invoice Description: " << invoice.getDescription() << '\n';
    std::cout << "Item Quantity: " << invoice.getQuantity() << '\n';
    std::cout << "Item Price: $" << invoice.getPrice() << '\n';
    std::cout << "Invoice Total: $" << invoice.getInvoiceAmount() << "\n\n";
}

void updateInvoice(Invoice& invoice, std::string num, std::string desc, int quantity, int price) {
    invoice.setNumber(num);
    invoice.setDescription(desc);
    invoice.setQuantity(quantity);
    invoice.setPrice(price);
}