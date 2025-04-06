#include <iostream>
#include <string>
using namespace std;

int main() {
    float num1;
    float num2;
    char oper;

    cout << "Enter the first number\n";
    cin >> num1;
    cout << "Enter an operator\n";
    cin >> oper;
    cout << "Enter the second number\n";
    cin >> num2;
    if (oper == '+') {
        cout << num1 + num2;
    } else if (oper == '-') {
        cout << num1 - num2;
    } else if (oper == '*') {
        cout << num1 * num2;
    } else if (oper == '/') {
        if (num2 == 0) {
            cout << "Don't devide by 0!";
        } else {
            cout << num1 / num2;
        }
    } else {
        cout << "Wrong operator!";
    }
    return 0;
}