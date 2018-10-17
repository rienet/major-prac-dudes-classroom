#include <iostream>
#include "question.h"
#include "multichoice.h"

using namespace std;

string multichoice::getAnswer() {
	return charAnswer;
}

void multichoice::setAnswer() {
	string newAnswer;
	bool looper = true;

	while(looper == true) {
		cin >> newAnswer;

		if(newAnswer != "A"&& newAnswer != "B"&& newAnswer != "C"&& newAnswer != "D") {
			cout<<"Invalid input, please input an answer that is A, B, C, or D"<<endl;

		} else {
			charAnswer = newAnswer;
			cout << "You entered: " << newAnswer << endl;
			looper = false;
		}
	}
}