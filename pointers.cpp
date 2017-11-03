// working with pointers
//
// a pointer points to a specific address space in memory
//

#include <iostream>

using namespace std;

int main (){

	// declare and initialize a variable
	int mynumber = 5;
	// the compiler allocates memory space to hold this variable
	// the following pointer points to the same address in memory
	int *ptr = &mynumber;

	// the * defines name of the pointer, which still has to be typed when declared
	// (for example, int, in the above case)
	// When defining a pointer you don't assign the value you normally would 
	// with other variables, instead you place an & in front of the variable
	// to tell the compiler you want to retrieve the memory address and 
	// assign it to the pointer variable
	//
	
	cout << mynumber << "\n"; // print 5
	cout << *ptr << "\n"; // also prints 5
	cout << ptr << "\n"; // prints the memory address allocated to mynumber
	cout << &mynumber << "\n"; // same deal, address in memory
	cout << sizeof(ptr) << "\n";
	cout << sizeof(*ptr) << "\n";

	// pointers must be initialized to a valid variable!
	//
return 0;
}
