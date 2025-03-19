#include <iostream>

enum class Operation {
    Add,
    Subtract,
    Multiply,
    Divide
};

struct Calculator {
    Operation operation;
    
    public:
        Calculator(Operation op) : operation(op) { // Properly initialize operation
        }

        int calculate(int a, int b){ 
            switch(operation) {
                case Operation::Add:
                    return a + b;
                case Operation::Subtract:
                    return a - b;
                case Operation::Multiply:
                    return a * b;
                case Operation::Divide:
                    return a / b;
            }
            return 0;
        }
};


int main() {
    Calculator calculate(Operation::Divide);
    std::cout << "Result: " << calculate.calculate(5, 3) << std::endl;
}