#ifndef INVOICE_CLASS_INVOICE_H
#define INVOICE_CLASS_INVOICE_H

#include <string>
#include <iostream>

class Invoice {
public:
    Invoice(std::string newItem, double newPrice, int newQuantity);
    void setItem(const std::string& newItem);
    [[nodiscard]] const std::string& getItem() const;
    void setPrice(double newPrice);
    [[nodiscard]] double getPrice() const;
    void setQuantity(int newQuantity);
    [[nodiscard]] int getQuantity() const;
    void display() const;
    [[nodiscard]] double calculateTotal() const;
private:
    std::string item;
    double price;
    int quantity;
};

#endif //INVOICE_CLASS_INVOICE_H
