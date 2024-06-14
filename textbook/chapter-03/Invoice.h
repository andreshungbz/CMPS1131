#ifndef CHAPTER_3_INVOICE_H
#define CHAPTER_3_INVOICE_H

#include <string>

class Invoice {
public:
    // constructor
    Invoice(std::string invoiceNum, std::string invoiceDesc, int itemQuantity, int itemPrice)
    : number{invoiceNum}, description{invoiceDesc} {
        if (itemQuantity > 0) {
            quantity = {itemQuantity};
        }
        if (itemPrice > 0) {
            price = {itemPrice};
        }
    }

    // function members
    // invoice number setter
    void setNumber(std::string invoiceNum) {
        number = {invoiceNum};
    }

    // invoice number getter
    std::string getNumber() const {
        return number;
    }

    // invoice description setter
    void setDescription(std::string invoiceDesc) {
        description = {invoiceDesc};
    }

    // invoice description getter
    std::string getDescription() const {
        return description;
    }

    // item quantity setter
    void setQuantity(int itemQuantity) {
        if (itemQuantity > 0) {
            quantity = {itemQuantity};
        } else {
            std::cout << "\nInvalid item quantity number";
        }
    }

    // item quantity getter
    int getQuantity() const {
        return quantity;
    }

    // item price setter
    void setPrice(int itemPrice) {
        if (itemPrice > 0) {
            price = {itemPrice};
        } else {
            std::cout << "\nInvalid item price number";
        }
    }

    // item price getter
    int getPrice() const {
        return price;
    }

    // invoice amount getter
    int getInvoiceAmount() const {
        if (quantity < 0) {
            return 0;
        }
        if (price < 0) {
            return 0;
        }
        return price * quantity;
    }

private:
    // data members
    std::string number{};
    std::string description{};
    int quantity{0};
    int price{0};
};

#endif //CHAPTER_3_INVOICE_H
