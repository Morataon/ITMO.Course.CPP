#include <iostream>

class Stack {
private:
    static const int maxSize = 10;
    int mas[maxSize];
    int length;

public:
    Stack() : length(0) {}

    void reset() {
        length = 0;
        for (int i = 0; i < maxSize; ++i) {
            mas[i] = 0;
        }
    }

    bool push(int value) {
        if (length >= maxSize) {
            std::cout << "Stack overflow!" << std::endl;
            return false;
        }
        mas[length++] = value;
        return true;
    }

    void pop() {
        if (length == 0) {
            std::cout << "Stack is empty!" << std::endl;
            return;
        }
        --length;
    }

    void print() const {
        std::cout << "( ";
        for (int i = 0; i < length; ++i) {
            std::cout << mas[i] << " ";
        }
        std::cout << ")" << std::endl;
    }
};

int main() {
    Stack stack;
    stack.reset();
    stack.print();

    stack.push(3);
    stack.push(7);
    stack.push(5);
    stack.print();

    stack.pop();
    stack.print();

    stack.pop();
    stack.pop();
    stack.print();

    return 0;
}
