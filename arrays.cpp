/// simple program to demonstrate use of arrays in C++
//	also includes:	struct example
//

#include <iostream>
#include <sstream>
#include <string>

using namespace std;

int main(){

	// all it takes to initialize an array is this:
	int numbers[2];
	// that's it!  We now have an integer array with two elements.
	// after creating the array we can populate it with int values
	numbers[0] = 20;
	numbers[1] = 225;
	// and so on
	// you don't need to immediately fill the elements with values
	// after creating the array, we're doing so for illustration
	//
	// once you have values in an array you can loop through and use them
	for (int count = 0; count < 2; ++count){
		cout << "Element " << count << " contains " << numbers[count] << "\n";
	}

	// you can also use loops to assign values
	int moarNums[10];
	for (int count = 0; count < 10; ++count){
		moarNums[count] = count;
		cout << "Assigning " << count << " to element " << count << " of moarNums\n";
	}
	// there are more complex ways of doing these two actions, 
	// but for our purposes these will work for now
	//
	// arrays are not limited to primitives like integers, but can also contain
	// entire structures (or 'structs', which are a way of creating our own datatype)
	// Let's say we have a structure called 'Employee' with four elements:
	struct Employee{
		int id;
		string fname;
		string lname;
		int birthyear;
	}; // don't forget the ; after the struct definition!

	// if we want to store several employee records in an array, 
	// we can define the struct and create an array wit the 
	// data type Employee
	//
	// first, create an array of data type Employee:
	struct Employee employees[2];
	// create Employee emp1 and assign values to elements in structure
	struct Employee emp1;
	emp1.id = 1;
	emp1.fname = "John";
	emp1.lname = "Smith";
	emp1.birthyear = 1979;
	// assign emp1 to element 0 of employees array
	employees[0] = emp1;
	// we can then reference our array of structures as follows
	cout << "First name: " << employees[0].fname << "\n";
	cout << "Last name: " << employees[0].lname << "\n";
	cout << "Birth year: " << employees[0].birthyear << "\n";


	

return 0;
}


