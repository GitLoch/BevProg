 #include "my.h"
 
 int foo;
 
 int main(){
 	foo = 7;
 	print_foo();
 	print(99);

 	
 	int x = 7;
	int y =9;
	
	swap_v(x,y); 		//compiled
	print(x);
	print(y);
	
	swap_v(7,9); 		//compiled
	print(x);
	print(y);
	
	swap_r(x,y);		//compiled
	print(x);
	print(y);
	
	//swap_r(7,9);		//non-const value to type int&
	
	const int cx = 7;
	const int cy = 9;
	
	swap_v(cx,cy);		//compiled
	print(cx);
	print(cy);
	
	swap_v(7.7,9.9);	//compiled
	print(cx);
	print(cy);
	
	//swap_r(cx,cy);	//binding reference of type 'int&' to 'const int'
	//swap_r(7.7,9.9);	//non-const value to type int&
	double dx = 7.7;	
	double dy = 9.9;
	
	swap_v(dx,dy);		//compiled
	print(dx);
	print(dy);
	
	swap_v(7.7,9.9);	//compiled
	print(dx);
	print(dy);
	
	//swap_r(dx,dy);	//non-const value to type int&
	
	//swap_r(7.7,9.9);	//non-const value to type int&
	
 }
 
