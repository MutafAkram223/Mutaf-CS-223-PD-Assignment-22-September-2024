#include<iostream>
using namespace std;
int main() {
    int d1, d2, d3, d4, d5, d6, d7, d8, d9, d10, d11, d12, d13, d14, d15;
    cout << "Enter first digit: ";
    cin >> d1;
    cout << "Enter second digit: ";
    cin >> d2;
    cout << "Enter third digit: ";
    cin >> d3;
    cout << "Enter fourth digit: ";
    cin >> d4;
    cout << "Enter fifth digit: ";
    cin >> d5;
    cout << "Enter sixth digit: ";
    cin >> d6;
    cout << "Enter seventh digit: ";
    cin >> d7;
    cout << "Enter eighth digit: ";
    cin >> d8;
    cout << "Enter ninth digit: ";
    cin >> d9;
    cout << "Enter tenth digit: ";
    cin >> d10;
    cout << "Enter eleventh digit: ";
    cin >> d11;
    cout << "Enter twelfth digit: ";
    cin >> d12;
    cout << "Enter thirteenth digit: ";
    cin >> d13;
    cout << "Enter fourteenth digit: ";
    cin >> d14;
    cout << "Enter fifteenth digit: ";
    cin >> d15;
    float final_output = (d1+d2+d3+d4+d5) + (d6*d7*d8*d9*d10) - (d11-d12-d13-d14-d15);
    cout << "The final value is" << final_output << endl;
    return 0;
}
