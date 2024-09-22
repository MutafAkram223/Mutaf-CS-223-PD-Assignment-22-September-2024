#include <iostream>
using namespace std;
int main(){
int i, p;
cout << "Enter the number of imposters: ";
cin >> i;
cout << "Enter the number of players: ";
cin >> p;
float chances = 100.0 * (static_cast<float>(i) / p);
cout << "Chances of being imposter: " << chances << "%" << endl;
return 0;
}
