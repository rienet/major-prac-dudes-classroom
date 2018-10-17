#include <iostream>
#include <ctype.h>
#include "question.h"
#include "math.h"

using namespace std;

string math::getAnswer() {
	return mathAnswer;
}

void math::setAnswer() {
	string newAnswer;
	//counts how many decimal points there are in a string
	int countPoint = 0;
	//looper bool loops cin input until 
	bool looper = true;

	while(looper == true) {
		cin >> newAnswer;

		for (int i = 0; i<newAnswer.size(); i++) {

			if(!(isdigit(newAnswer[i]))) {

				if(newAnswer[i] == '.' && countPoint == 0){
					countPoint++;
				} else {
					cout<<"Invalid input, please input a numerical answer"<<endl;
					break;
				}

			} else if(i == newAnswer.size()-1) {
				mathAnswer = newAnswer;
				cout << "You entered: " << newAnswer << endl;
				looper = false;
			}
		}
	}
}