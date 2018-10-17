#ifndef MULTICHOICE_H
#define MULTICHOICE_H

#include <string>
#include "question.h"

class multichoice: public question {
	std::string charAnswer;
	
public:
	std::string getAnswer();

	void setAnswer();

};

#endif
