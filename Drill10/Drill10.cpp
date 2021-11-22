#include "../std_lib_facilities.h"

class Invalid_point {};
class Cant_reach_file {};

struct Point{
	int x;
	int y;
	Point(int xcoor, int ycoor);
	Point() {};
};

Point::Point(int xcoor, int ycoor){
	x = xcoor;
	y = ycoor;
}


istream& operator>>(istream& is, Point& p){
	char ch1, ch2, ch3;
	int a, b;

	is >> ch1 >> a >> ch2 >> b >> ch3;

	if (ch1!='(' || ch2!=',' || ch3!=')'){
		throw Invalid_point{};
	}

	p = Point(a, b);
	return is;
}

ostream& operator<<(ostream& os, Point& p){
	os << '(' << p.x << ',' << p.y << ')';
	return os;
}

bool operator!=(Point& a, Point& b){
	if (a.x != b.x || a.y != b.y)
		return true;
	else{
		return false;
	}
}

void ReadFromStdin(vector<Point>& original_points){
	cout << "Hey, could you be a dear and input, say, SEVEN (x,y) pairs?" << endl;
	Point p;
	for (int i = 0; i < 7; i++){
		cin >> p;
		original_points.push_back(p);
	}
}

void PrintPoints(vector<Point> p){
	for (int i = 0; i < p.size(); i++){
		cout << p[i] << endl;
	}
}

void PrintToFile(vector<Point> original_points){
	ofstream ofile {"mydata.txt"};
	if (!ofile)
		throw Cant_reach_file{};
	for (int i = 0; i < original_points.size(); i++){
		ofile << original_points[i] << endl;
	}
	ofile.close();
}

void ReadFromFile(vector<Point> original_points, vector<Point>& processed_points){
	ifstream ifile {"mydata.txt"};
	if (!ifile)
		throw Cant_reach_file{};
	Point p;
	for (int i = 0; i < original_points.size(); i++){
		ifile >> p;
		processed_points.push_back(p);
	}
	ifile.close();
}

void ComparePoints(vector<Point> p1, vector<Point> p2){
	for(int i = 0; i < min(p1.size(),p2.size()); i++){
		if (p1[i] != p2[i]){
			cout << endl << "Something's wrong!" << endl;
		}
	}
}

int main(){
	vector<Point> original_points;
	vector<Point> processed_points;
	try{
		ReadFromStdin(original_points);
		cout << endl << "original points:" << endl;
		PrintPoints(original_points);
		PrintToFile(original_points);
		ReadFromFile(original_points, processed_points);
		cout << endl << "original points:" << endl;
		PrintPoints(original_points);
		cout << endl << "processed points:" << endl;
		PrintPoints(processed_points);
		ComparePoints(original_points, processed_points);
	}
	catch(Invalid_point){
		cerr << "Invalid point format." << endl;
		return 1;
	}
	catch(Cant_reach_file){
		cerr << "Can't reach file." << endl;
		return 1;
	}
	return 0;
}
