// simple calculator program
#include <bits/stdc++.h>
using namespace std;

int main(){
    // ask user for two numbers
    cout << "Enter two numbers: " << endl;
    double num1 = 0, num2 = 0;
    cin >> num1 >> num2;

    // ask user for operation
    cout << "Enter the operation (+, -, *, /): " << endl;
    char op = ' ';
    cin >> op;

    // calculate result
    double result = 0;

    switch(op){
        case '+':
            result = num1 + num2;
            break;
        case '-':
            result = num1 - num2;
            break;
        case '*':
            result = num1 * num2;
            break;
        case '/': 
            result = num1 / num2;
            break;
        default:
            cout << "Invalid operation" << endl;
            return 1;
    }

    // print result
    cout << "Result: " << result << endl;

    return 0;
}

