

#include <iostream>
#include <cmath>
using namespace std;

void calculateDistance(double x1, double y1, double x2, double y2) {
    double c = (x1 - y1) * (x1 - y1);
    double d = (x2 - y2) * (x2 - y2);
     double z = sqrt(c + d);
	cout << "The distance between point 1 and point 2  is : " <<  z << endl;

	
}

int main() {
   

 
 cout << "Welcome to calculate the distance using the formula!" << endl;

    double value1, value2, value3, value4;

    cout << "Enter the value of x1: ";
    cin >> value1;
    cout << "Enter the value of x2: ";
    cin >> value2;
    cout << "Enter the value of y1: ";
    cin >> value3;
    cout << "Enter the value of y2: ";
    cin >> value4;


   calculateDistance(value1, value2, value3, value4);
 

}

