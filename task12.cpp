#include <iostream>
using namespace std;

int main() {
int n, w, h;

cout << "Enter the amount of paint available (in square meters): ";
cin >> n;
    
cout << "Enter the width of a wall (in meters): ";
cin >> w;
    
cout << "Enter the height of a wall (in meters): ";
cin >> h;

int wallArea = w * h;
int completeWalls = n / wallArea;

cout << "Mutaf you can paint " << completeWalls << " walls before you have to buy new paint baskets." << endl;
return 0;
}