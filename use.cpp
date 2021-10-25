 #include "my.h"
 
 int foo;
 
 int main(){
 	foo = 7;
 	print_foo();
 	print(99);
 	
 	
 	int x = 7;
	int y =9;
	swap_v(x,y); 		//compiled
	swap_v(7,9); 		//compiled
	swap_r(x,y);
	//swap_r(7,9);		//non-const value to type int&
	const int cx = 7;
	const int cy = 9;
	swap_v(cx,cy);		//compiled
	swap_v(7.7,9.9);	//compiled
	//swap_r(cx,cy);	//binding reference of type 'int&' to 'const int'
	//swap_r(7.7,9.9);	//non-const value to type int&
	double dx = 7.7;	
	double dy = 9.9;
	swap_v(dx,dy);		//compiled
	swap_v(7.7,9.9);	//compiled
	//swap_r(dx,dy);	//non-const value to type int&
	//swap_r(7.7,9.9);	//non-const value to type int&
 }
 
