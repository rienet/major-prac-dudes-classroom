#ifndef QUESTION_H
#define QUESTION_H

#include <string>

class question {
	std::string sentence;
	bool isCorrect;
	std::string answer;

public:

	std::string getSentence();
	virtual std::string getAnswer();

	void setSentence();
	virtual void setAnswer();
	
	virtual void printResult();

};

#endif
