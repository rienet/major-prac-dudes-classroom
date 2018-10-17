#include <iostream>
#include "question.h"
#include "worded.h"

using namespace std;

string worded::getAnswer() {
	return charAnswer;
}

void worded::setAnswer() {
	string newAnswer;
	//looper bool loops cin input until 
	bool looper = true;

	while(looper == true) {
		cin >> newAnswer;

		for (int i = 0; i<newAnswer.size(); i++) {

			if(!(isalpha(newName[i]))) {
				cout<<"Invalid input, please input a name with alphabetical characters"<<endl;
				break;

			} else if(i == newAnswer.size()-1) {
				mathAnswer = newAnswer;
				cout << "You entered: " << newAnswer << endl;
				looper = false;
			}
		}
	}
}