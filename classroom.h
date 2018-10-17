#ifndef CLASSROOM_H
#define CLASSROOM_H
#include "teacher.h"
#include "student.h"
#include <vector>
#include <string>

class classroom
{
	teacher classteach;
	std::vector<student> students;
public:
	classroom();
	


};

#endif