// short tutorial about using if statements in C++
//
//	this tutorial will also work with some basic math 
//

#include <iostream>

using namespace std;

int main(){

	// declare ints and assign values
	int num1 = 5;
	int num2 = 4;
	int result = num1 + num2;

	//send values to cout, which is just stdout on most systems
	cout << "num1 = " << num1 << "and num2 = " << num2 << " and result = " << result << "\n";

	if (num1 > num2){
		cout << "num1 is greater than num2.\n";
	}else if(num2 > num1){
		cout << "num2 is greater than num1.\n";
	} else {
		cout << "could not determine difference...\n";
	
	} //end if block


}
