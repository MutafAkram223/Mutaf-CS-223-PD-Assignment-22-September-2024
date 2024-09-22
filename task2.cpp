#include <iostream>
using namespace std;
int main ()
{
int a, b;
cout << "Enter number of minutes:";
cin >> a;
cout << "Enter frames per second:";
cin >> b;
int no_frames = a * b * 60;
cout << "Total number of frames:" << no_frames << endl;
return 0;
}