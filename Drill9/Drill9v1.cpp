#include "../std_lib_facilities.h"

struct Date {
	int y;
	int m;
	int d;
};

void init_day(Date& dd, int y, int m, int d){
	if (m < 1 || m > 12 || d < 1 || d > 31)
		error("Invalid date.");
	else{
		dd.y = y;
		dd.m = m;
		dd.d = d;
	}
}

void add_day(Date& dd, int n){
	dd.d += n;
	if (dd.d > 31){
		dd.m+=dd.d/31;
		dd.d=dd.d%31;
	}
	if (dd.m > 12){
		dd.y+=dd.m/12;
		dd.m=dd.m%12;
	}
}

ostream& operator<<(ostream& os, Date& d){
	return os << '(' << d.y << ',' << d.m << ',' << d.d << ')';
}

int main(){
	Date today;
	init_day(today, 1978, 6, 25);
	Date tomorrow = today;
	add_day(tomorrow, 1);
	cout << today << endl << tomorrow << endl;
	return 0;
}
