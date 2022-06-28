// Hoppock, Zachary
// whileRectangle.cpp
// Oct. 10, 2020
// Make a rectangle using 1 loop
// Version # 1
#include <iostream>

using namespace std;
int main()
{
int height;
int width;
cout << "Give a height and width: ";
cin >> height >> width;
int i = 1;
int j = 1;
while (i <= height)
  {
    cout << "*";
    j++;
    if (j > width)
    {
      cout << "\n";
      i++;
      j = 1;
    }
  }
return 0;
}