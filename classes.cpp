/// a very basic introduction to classes and OOP in C++
//

// 

#include <iostream>
#include <ctime>
#include <string>
#include <sstream>

using namespace std;
// create a basic class called Employee to replace the Employee struct we created before...

class Employee {

	private:
		int m_id;
	// our public members of the class. Our constructor(s) will be a part of this section as
	// they must be made public in order to use
	// Constructors do just that, they construct the object of the class we want to use
	public:
		Employee(){}  /// a basic constructor taking no vars
		Employee(int id){
			m_id = id;
		} // consturctors can also be overloaded to account for multipl types of accepted vars
		int id;
		string fname;
		string lname;
		int birthyear;

		/// after we've set up our constructor(s) and pub/priv vars we can add member functions 
		//  to our class. In this case we'll create a function to create a basic timestamp
		//  (see timestuff.cpp for working with time)
		static char timestamp(){
			string mytime;
			time_t rawtime;
			struct tm * timeinfo;
			char buffer[80];
			time(&rawtime);
			timeinfo = localtime(&rawtime);
			strftime(buffer,80,"%F",timeinfo);
			return puts(buffer);
		}

		// this is a destructor, it does the opposite of a constructor. it's called when the class
		// objec reaches the end of its scope to free up memory previously allocated to class members
		// destructors are always defined as a tilde (~)and the class name, much like constructors, 
		// only they are defined at the end of our class.
		~Employee(){
			m_id=0;
		}
};  // dont' forget a ; is required at the end of class definitions




int main(){

	Employee emp;

	cout << "The timeclock says ";
	emp.timestamp();



return 0;
}
