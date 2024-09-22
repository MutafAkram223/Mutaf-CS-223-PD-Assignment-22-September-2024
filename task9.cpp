#include <iostream>
using namespace std;

int main() {
int number;
cout << "Enter a 4-digit number: ";
cin >> number;
int sum = 0;
int digit1 = number % 10;
sum += digit1;
number /= 10;
int digit2 = number % 10;
sum += digit2;
number /= 10;
int digit3 = number % 10;
sum += digit3;
number /= 10;
int digit4 = number % 10;
sum += digit4;
cout << "The sum of the digits is: " << sum << endl;
return 0;
}