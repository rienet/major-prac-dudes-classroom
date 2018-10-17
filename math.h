#ifndef MATH_H
#define MATH_H

#include <string>
#include "question.h"

class math: public question {
	std::string mathAnswer;

public:
	std::string getAnswer();

	void setAnswer();
};

#endif