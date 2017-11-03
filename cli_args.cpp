// working with command line arguments
//

#include <iostream>
#include <sstream>
#include <string>
#include <typeinfo>

using namespace std;

int main(int argc, char *argv[]){
	string s;
	int number = 1;
	string word = "Derp";
	double bignum = 10.5;

	if(argc >1){

		for (int i = 0; i < argc ; ++i){
			// use string() to type as a string datatype
			s = typeid(string(argv[i])).name();
			cout << "Element " << i <<": " << argv[i] << " is a " << s << "\n";
		}
		
		cout << "number is type " << typeid(number).name() << "\n";
		cout << "word is type " << typeid(word).name() << "\n";
		cout << "bignum is type " << typeid(bignum).name() << "\n";

			
	}else{
		cout << "You didn't pass any arguments... How can you test CLI args if you don't pass any?\n\n";
	}
		
		
return 0;	
} // end main
