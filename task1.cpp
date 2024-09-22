#include <iostream>
using namespace std;
int main() {
int n;
cout << "Please enter the total number of sides: ";
cin >> n;
int sum_of_angles = (n - 2) * 180;
cout << "Total sum of internal angles: " << sum_of_angles << " Degrees" << endl;
return 0;
}
