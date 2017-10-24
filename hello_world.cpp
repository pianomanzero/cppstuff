// hello world!
// first C++ tutorial
//
// 	a very basic program to illustrate the most basic building blocks of a C++ program
//


// include basic i/o and string functionality from header files
#include <iostream>
#include <string>

using namespace std;

// this is the main function.
// it's where all the action takes place
int main(){

	// notice the "std::" ?  This is called namespacing, we'll cover that later
	// in this example we don't technically have to use it since we've
	// established we're using the std namespace above the main function
	//
	// send the string "Hello world!" to the function cout
	std::cout << "Hello world!";
	



	// once we've executed all our code we'll return 0
	// 0 is returned because the main func states it returns an int
	// 0 is also returned to signal that everything completed correctly
	// if we wanted to signal completion with an error we would
	// return 1 or -1, etc
	return 0;

}
