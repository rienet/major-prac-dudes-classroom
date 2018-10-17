#ifndef PERSON_H
#define PERSON_H

#include <string>

class person
{
	std::string Name;
	int Age;
	int Classroom;

public:
	person();
	person(std::string studName,int studAge, int Classroom);

	std:: string getName();
	int getAge();
	void setName();
	void setAge();
	void printResult();
	void setClassroom(int z);
	int getClassroom();

	~person();
};

#endif
