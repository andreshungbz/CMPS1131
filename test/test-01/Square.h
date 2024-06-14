// Square Class Header (Square.h)

#ifndef TEST_1_SQUARE_H
#define TEST_1_SQUARE_H

class Square {
public:
    explicit Square(int s);
    void setSide(int s);
    [[nodiscard]] int getSide() const;
    [[nodiscard]] int getArea() const;
private:
    int side;
};

#endif // TEST_1_SQUARE_H
