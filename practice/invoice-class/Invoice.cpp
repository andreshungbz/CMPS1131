#include "Invoice.h"

#include <utility>

Invoice::Invoice(std::string newItem, double newPrice, int newQuantity)
    : item{std::move(newItem)} {
    setPrice(newPrice);
    setQuantity(newQuantity);
}

void Invoice::setItem(const std::string& newItem) {
    item = newItem;
}

const std::string& Invoice::getItem() const {
    return item;
}

void Invoice::setPrice(double newPrice) {
    if (newPrice > 0) {
        price = newPrice;
    } else {
        price = 0;
    }
}

double Invoice::getPrice() const {
    return price;
}

void Invoice::setQuantity(int newQuantity) {
    if (newQuantity > 0) {
        quantity = newQuantity;
    } else {
        quantity = 0;
    }
}

int Invoice::getQuantity() const {
    return quantity;
}

void Invoice::display() const {
    std::cout << "Item: " << getItem() << ", Price: $" << getPrice() << ", Quantity: " << getQuantity() << '\n';
}

double Invoice::calculateTotal() const {
    return getPrice() * getQuantity();
}
