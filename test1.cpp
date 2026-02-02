#include <iostream>
using namespace std;

class Calculator {
public:
    int add(int a, int b) {
        return a + b;
    }

    int subtract(int a, int b) {
        return a - b;
    }

    int multiply(int a, int b) {
        return a * b;
    }

    int divide(int a, int b) {
        return a / b;
    }
};

int main() {
    Calculator calc;
    cout << "hi" << endl;
    cout << calc.add(5, 5) << endl;
    return 0;
}
