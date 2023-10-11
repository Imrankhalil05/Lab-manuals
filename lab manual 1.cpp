#include <iostream>
#include <cmath>
using namespace std;

int main () {

// task 1

	float x1, x2, y1, y2;
	
	cout<<"Enter the coordinates of Point 1 (x, y):";
	cin >> x1 >> y1;
	cout<<"Enter the coordinates of Point 2 (x, y):";
	cin >> x2 >> y2;
	
	// define variable for difference of x and y variables' difference
	float x_diff = x2 - x1;
	float y_diff = y2 - y1;
	
	// define formula for distance
	float d = sqrt(x_diff*x_diff + y_diff*y_diff);
	
	// Display result
	cout <<"The distance between the two points is: "<< d << endl;


// task 2

	float len_cm;
	// input length in cm
	cout << "Enter length in cm: ";
	cin>> len_cm;
	// Converstions
	float cm_in_m = 100.0;
	float cm_in_km = 100000.0;
	

    // Convert to meters and kilometers
    float len_m = len_cm / cm_in_m;
    float len_km = len_cm / cm_in_km;

    // Display result
    cout << "Length in meters: " << len_m << " m" << endl;
    cout << "Length in kilometers: " << len_km << " km" << endl;
    
// task 3

    float a, b;
    // Input 'a' and 'b' variable
    cout << "Enter value of a: ";
    cin >> a;
    
    cout<< "Enter the value of b: ";
    cin >> b;
    
    // Calculation
    float res = a*a + 2*a*b +b*b;
    // Display result
    cout<<"Result of this polynomial is: "<< res<<endl;
    
// task 4
	float fahr, cel
	
	//User input of fahrenheit temperature
	cout<< "Enter the Fahrenheit temperature: ";
	cin>> fahr;
	
	//Conversion
	cel = (fahr - 32)*5.0/9.0;
	
	//Display result
	cout<< "Temperature in Celsius: " << cel << " °C"<<endl;
	
    
    
	return 0;
}