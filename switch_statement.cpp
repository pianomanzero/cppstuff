// demonstration of switch statements
//	currently broken... switch statement needs work, transform statement needs work
//
//	also includes: 	demonstration of passing command line arguments
//			simple string manipulation/inputs, specifically to upper case
//

#include <iostream>
#include <string>
#include <sstream>
#include <vector>
#include <algorithm>

using namespace std;

int main(int argc, char *argv[]){

	string myAnswer;


	// check to see if we've passed an arg at the CLI...
	if(argc > 1){
		// argv is a char vector, one of two standard prototyped 
		// inputs to 'main' (ing argc, char argv)
		// above header files are required for char to string 
		// manipulation etc.
		//
		myAnswer = argv[1];
	}else{
		cout << "Please enter your favorite color: ";
		getline(cin, myAnswer);
	
	} //close if


	// transform case to all upper for comparison
	//
	transform(myAnswer.begin(), myAnswer.end(), myAnswer.begin(), myAnswer.begin(), toupper);


	switch(myAnswer){
		case BLUE:
			cout << "You answered blue.  Blue is okay, I guess... If it has to be...\n";
			break;
		case BLACK:
			cout << "You answered black.  BLACK is pretty cool. METALLLLL!!!!!\n";
			break;
		case RED:
			cout << "Red is pretty great, but it makes me look like the Cool-Aid Man...\n";
			break;
		case GREEN:
			cout << "Green is great. Lots of living things are green. Go out and enjoy some green things today...\nEnjoy them, I said!!!\n ...Enjoy them!!!!!!\n";
			break;
		case YELLOW:
			cout << "Some people think yellow is a happy color.  You're not one of *those* people, are you?\n";
			break;
		case TAN:
			cout << "Tan? Are you kidding me right now? Tan isn't a real color!\n";
		default:
			cout << "I have no idea what you're talking about... It's a simple question really, \"What's your favorite color?\"\n\n";
			break;
	
	} // end switch


	
	return 0;


}
