#include <iostream>
using namespace std;

int main() {
 float bag_size, bag_cost, area_covered;
 cout << "Enter the size of fertilizer bag (in Pound): ";
 cin >> bag_size;
 cout << "Enter the cost of fertilizer bag (in Pkr): ";
 cin >> bag_cost;
 cout << "Enter the area covered by bag (in sq/feet): ";
 cin >> area_covered;
 float cost_per_pound = bag_cost / bag_size;
 float cost_per_square_foot = bag_cost / area_covered;
 cout << "The cost of the fertilizer per pound is: " << cost_per_pound << "Pkr" << endl;
 cout << "The cost of fertilizing per square foot is: " << cost_per_square_foot << "Pkr" << endl;
 return 0;
}
