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
	int numofclassroom;
	int number;
public:
	classroom();
	student *arrayOfStudents(int numofstudent,int z, int numofclassroom);
	teacher *arrayOfTeachers(int z);
	teacher *tea = new teacher[numofclassroom];
	student *numofstud= new student[numofclassroom];
	int checknum(int number);
	int setdata();

};

#endif
