#include <iostream>
using namespace std;

int main() {
    int age, moves;

cout << "Enter your current age: ";
cin >> age;

cout << "Enter the number of times you have moved house: ";
cin >> moves;

int housesLivedIn = moves + 1;
int averageYears = age / housesLivedIn;

cout << "You lived average of " << averageYears << " years in each house." << endl;
return 0;
}