#include <iostream>
#include "question.h"
using namespace std;

string question::getSentence() {
	return sentence;
}

string question::getAnswer() {
	return answer;
}

void question::setSentence() {
	string newSentence;
	cin >> newSentence;
	sentence = newSentence;
}
void question::setAnswer() {
	string newAnswer;
	cin >> newAnswer;
	answer = newAnswer;
}
void question::printResult() {
	cout<<"Question: "<<sentence<<endl;
	cout<<"Answer: "<<answer<<endl;
}
