#ifndef WORDED_H
#define WORDED_H

#include <string>
#include "worded.h"

class worded: public question {
	std::string wordAnswer;
	
public:
	std::string getAnswer();

	void setAnswer();

};

#endif
