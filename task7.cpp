#include <iostream>
using namespace std;

int main() {
string movieName;
float adultTicketPrice, childTicketPrice;
int adultTicketsSold, childTicketsSold;
float donationPercentage;

  cout << "Enter the name of movie: ";
  cin >> movieName;

  cout << "Enter price of adult ticket: ";
  cin >> adultTicketPrice;

  cout << "Enter price of child ticket: ";
  cin >> childTicketPrice;

  cout << "Enter number of adult tickets sold: ";
  cin >> adultTicketsSold;

  cout << "Enter number of child tickets sold: ";
  cin >> childTicketsSold;

  cout << "Enter percentage of amount donated to charity: ";
  cin >> donationPercentage;

  float totalAdultSales = adultTicketPrice * adultTicketsSold;
  float totalChildSales = childTicketPrice * childTicketsSold;
  float totalAmount = totalAdultSales + totalChildSales;

  float donationAmount = (donationPercentage / 100) * totalAmount;
  float remainingAmount = totalAmount - donationAmount;

  cout << "\nTotal amount generated from ticket sales: Pkr" << totalAmount << endl;
  cout << "Amount donated to charity: Pkr" << donationAmount << endl;
  cout << "Remaining amount after donation: Pkr" << remainingAmount << endl;

  return 0;
}