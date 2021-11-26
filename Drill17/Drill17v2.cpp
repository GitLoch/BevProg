#include "../std_lib_facilities.h"

void print_array(ostream& os, int* a, int n){
	for(int i = 0; i < n; ++i)
		os << a[i] << ' ';
	os << '\n';
}

void Elso(){
	int* p1 = new int(7);

	cout << p1 << ' ' << *p1 << '\n';

	int* p2 = new int[7] {1, 2, 4, 8, 16, 32, 64};

	cout << p2 << ' ' << *p2 << '\n';

	int* p3 = p2;
	p2 = p1;
	p2 = p3;

	cout << p1 << ' ' << *p1 << ' ' << p2 << ' ' << *p2 << '\n';
	
	delete p1;
	delete[] p2;

}

void Masodik(){
	int* p1 = new int[10] {1, 2, 4, 8, 16, 32, 64, 128, 256, 512};
	int* p2 = new int[10];

	/*for (int i = 0; i < 10; ++i)
		p2[i] = p1[i];*/


	delete[] p1;
	delete[] p2;
}

void Harmadik(){
	vector<int> p1 = {1, 2, 4, 8, 16, 32, 64, 128, 256, 512};
	vector<int> p2(10);

	for (int i = 0; i < 10; ++i)
		p2[i] = p1[i];
}

int main(){
	Elso();
	Masodik();
	Harmadik();
	return 0;
}