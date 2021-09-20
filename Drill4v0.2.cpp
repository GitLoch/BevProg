#include "../std_lib_facilities.h"

int main () {
	double a;
	double smallest = std::numeric_limits<double>::max();
	double largest = std::numeric_limits<double>::min();
	string unit = "";
	double valueInMeters;
	double sumOfValues;
	int count;
	
	while (cin >> a >> unit && a != '|'){
		/*if (a == '|' || b == '|'){
			break;
		}*/
		
		if (unit != "cm" && unit != "m" && unit != "in" && unit != "ft"){
			//reject
		}
		else{
			switch (unit){
				case 'cm':
				{
					valueInMeters = a/100;
					break;
				}
				case 'm':
				{
					valueInMeters = a;
					break;
				}
				case 'in':
				{
					valueInMeters = a*2.54/100;
					break;
				}
				case 'ft':
				{
					valueInMeters = a*12*2.54/100;
					break;
				}	
			}
			
			if (valueInMeters <= smallest){
				smallest = a;
			}
			if (valueInMeters >= largest){
				largest = a;
			}
		
			cout << a << " " << unit;
			if (a == smallest){
				cout << " the smallest so far";
			}
			if (a == largest){
				cout << " the largest so far";
			}
			cout << endl;
		}
	}
	cout << "Values entered: " << count << " Sum of Values: " << sumOfValues << endl;
	cout << "Smallest value: " << smallest << " Largest value: " << largest << endl;
	return 0;
}
