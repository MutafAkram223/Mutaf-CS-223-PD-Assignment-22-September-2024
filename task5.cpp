#include <iostream>
using namespace std;

int main() {
  string name;
  float weight_loss_target;
  cout << "Enter your name: ";
  cin >> name;
  cout << "Enter the weight you want to lose in kg: ";
  cin >> weight_loss_target;
  int days_required = weight_loss_target * 15;
  cout << name << ", it will take" << days_required 
       << " days to lose " << weight_loss_target << " kg." << endl;
    return 0;
}
