#include "../std_lib_facilities.h"

void print_array10(ostream& os, int* a){
	for (int i = 0; i < 10; ++i)
		os << a[i] << ' ';
	os << '\n';
}

void print_array(ostream& os, int* a, int n){
	for (int i = 0; i < n; ++i)
		os << a[i] << ' ';
	os << '\n';
}

void print_vector(ostream& os, vector<int> a){
	for (int i = 0; i < a.size(); ++i)
		os << a[i] << ' ';
	os << '\n';
}

int main(){
	int* arr = new int[10];

	for (int i = 0; i < 10; ++i)
		cout << arr[i] << ' ';
	cout << '\n';

	delete[] arr;

	int* a = new int[10] {100, 101, 102, 103, 104, 105, 106, 107, 108, 109};
	print_array10(cout, a);
	int* b = new int[11] {100, 101, 102, 103, 104, 105, 106, 107, 108, 109, 110};
	print_array(cout, b, 11);
	int* c = new int[20] {100, 101, 102, 103, 104, 105, 106, 107, 108, 109, 110, 111, 112, 113, 114, 115, 116, 117, 118, 119};
	print_array(cout, c, 20);

	delete[] a;
	delete[] b;
	delete[] c;

	vector<int> av = {100, 101, 102, 103, 104, 105, 106, 107, 108, 109};
	print_vector(cout, av);
	vector<int> bv = {100, 101, 102, 103, 104, 105, 106, 107, 108, 109, 110};
	print_vector(cout, bv);
	vector<int> cv = {100, 101, 102, 103, 104, 105, 106, 107, 108, 109, 110, 111, 112, 113, 114, 115, 116, 117, 118, 119};
	print_vector(cout, cv);
	return 0;
}