#include <stdio.h>

enum class Operation {
    Add,
    Subtract,
    Multiply,
    Divide
};

struct Calculator {
    Operation op;

    Calculator(Operation operation) {
        op = operation;
    }

    int calculate(int a, int b) {
        switch (op) {
            case Operation::Add: {
                return a + b;
            }
            case Operation::Subtract: {
                return a - b;
            }
            case Operation::Multiply: {
                return a * b;
            }
            case Operation::Divide: {
                return a / b;
            }
        }
    }
};

int main() {
    Calculator addCalc { Operation::Add };
    printf("add: %d\n", addCalc.calculate(1, 9));

    Calculator subCalc { Operation::Subtract };
    printf("subtract: %d\n", subCalc.calculate(1, 9));

    Calculator mulCalc { Operation::Multiply };
    printf("multiply: %d\n", mulCalc.calculate(1, 9));

    Calculator divCalc { Operation::Multiply };
    printf("divide: %d\n", divCalc.calculate(9, 3));

    Calculator calculator { Operation::Multiply };

    Calculator *calculator_pointer = &calculator;
    printf("pointers: %d", calculator_pointer->calculate(1, 9));
}
