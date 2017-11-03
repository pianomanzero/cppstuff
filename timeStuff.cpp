/// working with time
//
#include <iostream>
#include <ctime>



using namespace std;

int main (int argc, char *argv[]){

	string mytime;
	// get the local time...
	time_t rawtime;
	struct tm * timeinfo;
	char buffer[80];

	// assign raw epoch timestamp to rawtime
	time(&rawtime);

	timeinfo = localtime(&rawtime);
	mytime = asctime(timeinfo);
	cout << "The current date/time is " << mytime << endl;

	// we should also be able to use the ctime() func to do the same thing with fewer steps
	// this allows us to omit the localtime() and asctime() steps above.
	cout << "The time according to ctime() is " << ctime(&rawtime) << endl;

	// we can also build a formatted timestamp with strftime()...
	//
	time (&rawtime);
	timeinfo = localtime(&rawtime);
	
	strftime(buffer,80,"%F",timeinfo);
	cout << "Our strftime() timestamp is " << buffer << endl;
	puts(buffer);

	return 0;


}
