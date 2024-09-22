#include <iostream>
using namespace std;

int main() {
float vegetablePricePerKg;
float fruitPricePerKg;
int totalKgVegetables;
int totalKgFruits;

  cout << "Enter price of vegetables per kilogram (in coins): ";
  cin >> vegetablePricePerKg;

  cout << "Enter price of fruits per kilogram (in coins): ";
  cin >> fruitPricePerKg;

  cout << "Enter the total kilograms of vegetables: ";
  cin >> totalKgVegetables;

  cout << "Enter the total kilograms of fruits: ";
  cin >> totalKgFruits;

  float totalEarningsInCoins = (vegetablePricePerKg * totalKgVegetables) + (fruitPricePerKg * totalKgFruits);
  float conversionRate = 1.94;
  float total_Earnings_rps = totalEarningsInCoins / conversionRate;

  cout << "Total earnings in Rupees: " << total_Earnings_rps << endl;

  return 0;
}