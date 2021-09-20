#include "../std_lib_facilities.h"

int main () {
	double a, b;
	double smaller, larger;
	
	while (cin >> a >> b && a != '|' && b != '|'){
		/*if (a == '|' || b == '|'){
			break;
		}*/
		
		if (a < b){
			smaller = a;
			larger = b;
		}
		else if (b < a){
			smaller = b;
			larger = a;
		}
		
		if (a == b){
			cout << "the numbers are equal" << endl;
		}
		else{
			cout << "the smaller value is: " << smaller << endl;
			cout << "the larger value is: " << larger << endl;
			
			if (abs(a-b) < 0.01){
				cout << "the numbers are almost equal" << endl;
			}
		}
	}
	return 0;
}
