#include <iostream>
using namespace std;

int main() {
float initialVelocity, acceleration, time, finalVelocity;
cout << "Enter the initial velocity: ";
cin >> initialVelocity;
cout << "Enter the acceleration: ";
cin >> acceleration;
cout << "Enter the time: ";
cin >> time;
finalVelocity = initialVelocity + (acceleration * time);
cout << "The final velocity of the car is: " << finalVelocity << " m/s" << endl;
return 0;
}