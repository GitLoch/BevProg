#include "../std_lib_facilities.h"

int main () {
	double a;
	double smallest = std::numeric_limits<double>::max();
	double largest = std::numeric_limits<double>::min();
	string unit = "";
	double valueInMeters;
	double sumOfValues = 0;
	int count = 0;
	vector<double> values;
	
	while (cin >> a >> unit && a != '|'){
		/*if (a == '|' || b == '|'){
			break;
		}*/
		
		if (unit != "cm" && unit != "m" && unit != "in" && unit != "ft"){
			//reject
		}
		else{
			if (unit == "cm"){
				valueInMeters = a/100;
			}
			else if (unit == "m"){
				valueInMeters = a;
			}
			else if (unit == "in"){
				valueInMeters = a*2.54/100;
			}
			else if (unit == "ft"){
				valueInMeters = a*12*2.54/100;
			}	
			
			values.push_back(valueInMeters);
			sumOfValues += valueInMeters;
			count++;
			
			if (valueInMeters <= smallest){
				smallest = valueInMeters;
			}
			if (valueInMeters >= largest){
				largest = valueInMeters;
			}
		
			cout << a << " " << unit;
			if (valueInMeters == smallest){
				cout << " the smallest so far";
			}
			if (valueInMeters == largest){
				cout << " the largest so far";
			}
			cout << endl;
		}
	}
	cout << "Smallest value: " << smallest << " Largest value: " << largest << endl;
	cout << "Values entered: " << count << " Sum of Values: " << sumOfValues << endl << endl;
	sort(values);
	for(double echoDouble : values){
		cout << echoDouble << endl;
	}
	return 0;
}
