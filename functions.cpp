// basic tutorial on functions in C++
//
//

#include <iostream>

using namespace std;

/// this is our function prototype
int calculate(int a, int b);
double calculate(double a, double b);

/// lets define a function
//	our function takes two params, integers, a and b
//	it also returns an int, c, as indicated below

int calculate(int a, int b){
	int int1 = a;
	int int2 = b;
	int c = int1 * int2;
	return c;
}

// function overloading is creating different variations on the same
// funcion in order to cover more datatype possibilities, for example we could
// take our calculate function and pass doubles instead of ints:
double calculate(double a, double b){
	double fl1 = a;
	double fl2 = b;
	double fl3 = fl1 * fl2;
	return fl3;
}
// now we can call our function against doubles and integers

// just a friendly reminder, when dealing with floating point integers it's
// best to use the double datatype instead of the float datatype unless you're
// writing for memory managment, etc, in order to prevent the possibility of an
// accidental overrun and other such situations.

int main(){

	int result = calculate(5,5);
	cout << "The result of calculate(5,5) is " << result << "\n";
	double fresult = calculate(5.25,5.34);
	cout << "The result of calculate(5.25,5.34) is " << fresult << "\n";

return 0;
}
